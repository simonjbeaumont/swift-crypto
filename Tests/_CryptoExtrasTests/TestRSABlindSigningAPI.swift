//===----------------------------------------------------------------------===//
//
// This source file is part of the SwiftCrypto open source project
//
// Copyright (c) 2024 Apple Inc. and the SwiftCrypto project authors
// Licensed under Apache License v2.0
//
// See LICENSE.txt for license information
// See CONTRIBUTORS.md for the list of SwiftCrypto project authors
//
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//
import XCTest
import Crypto
import _CryptoExtras  // NOTE: No @testable import, because we want to test the public API.

final class TestRSABlindSigningAPI: XCTestCase {
    func testEndToEnd(parameters: _RSA.BlindSigning.Parameters<SHA384>, keySize: _RSA.Signing.KeySize) throws {
        // [Issuer] Create key-pair (other initializers are available).
        let privateKey = try _RSA.BlindSigning.PrivateKey(keySize: .bits2048, parameters: parameters)

        // [Client] Create public key (other initializers are available).
        let publicKey = privateKey.publicKey

        // [Client] Have a message they wish to use.
        let message = Data("This is some input data".utf8)

        // [Client] Prepare the message.
        let preparedMessage = _RSA.BlindSigning.prepare(message, parameters: parameters)

        // [Client] Blind the prepared message.
        let (blindedMessage, blindInverse) = try publicKey.blind(preparedMessage)

        // [Client] Access the blinded message bytes for sending to the server.
        let blindedMessageBytes = blindedMessage.rawRepresentation

        // [Issuer] Blind sign, construting the blinded message from the bytes received from the client.
        let blindSignature = try privateKey.blindSignature(for: _RSA.BlindSigning.BlindedMessage(rawRepresentation: blindedMessageBytes))

        // [Client] Finalize using the blind inverse to unblind the signature.
        let unblindedSignature = try publicKey.finalize(blindSignature, for: preparedMessage, blindInverse: blindInverse)

        // [Verifier] Verify the unblinded signature.
        XCTAssert(publicKey.isValidSignature(unblindedSignature, for: preparedMessage))
    }

    func testEndToEnd() throws {
        let allNamedRFC9474Variants: [_RSA.BlindSigning.Parameters] = [
            .RSABSSA_SHA384_PSSZERO_Deterministic,
            .RSABSSA_SHA384_PSSZERO_Randomized,
            .RSABSSA_SHA384_PSS_Deterministic,
            .RSABSSA_SHA384_PSS_Randomized,
        ]
        let keySizes: [_RSA.Signing.KeySize] = [
            .bits2048,
            .bits3072,
            .bits4096,
        ]
        for parameters in allNamedRFC9474Variants {
            for keySize in keySizes {
                try testEndToEnd(parameters: parameters, keySize: keySize)
            }
        }
    }
}
