/* Copyright (c) 2015, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

 /* This file was generated by err_data_generate.go. */

#include <CCryptoBoringSSL_base.h>
#include <CCryptoBoringSSL_err.h>
#include <CCryptoBoringSSL_type_check.h>


OPENSSL_STATIC_ASSERT(ERR_LIB_NONE == 1, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_SYS == 2, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_BN == 3, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_RSA == 4, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_DH == 5, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_EVP == 6, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_BUF == 7, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_OBJ == 8, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_PEM == 9, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_DSA == 10, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_X509 == 11, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_ASN1 == 12, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_CONF == 13, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_CRYPTO == 14, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_EC == 15, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_SSL == 16, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_BIO == 17, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS7 == 18, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_PKCS8 == 19, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_X509V3 == 20, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_RAND == 21, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_ENGINE == 22, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_OCSP == 23, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_UI == 24, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_COMP == 25, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDSA == 26, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_ECDH == 27, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_HMAC == 28, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_DIGEST == 29, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_CIPHER == 30, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_HKDF == 31, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_TRUST_TOKEN == 32, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_LIB_USER == 33, "library value changed");
OPENSSL_STATIC_ASSERT(ERR_NUM_LIBS == 34, "number of libraries changed");

const uint32_t kOpenSSLReasonValues[] = {
    0xc32083a,
    0xc328854,
    0xc330863,
    0xc338873,
    0xc340882,
    0xc34889b,
    0xc3508a7,
    0xc3588c4,
    0xc3608e4,
    0xc3688f2,
    0xc370902,
    0xc37890f,
    0xc38091f,
    0xc38892a,
    0xc390940,
    0xc39894f,
    0xc3a0963,
    0xc3a8847,
    0xc3b00ea,
    0xc3b88d6,
    0x10320847,
    0x1032959f,
    0x103315ab,
    0x103395c4,
    0x103415d7,
    0x10348f27,
    0x10350c60,
    0x103595ea,
    0x10361614,
    0x10369627,
    0x10371646,
    0x1037965f,
    0x10381674,
    0x10389692,
    0x103916a1,
    0x103996bd,
    0x103a16d8,
    0x103a96e7,
    0x103b1703,
    0x103b971e,
    0x103c1744,
    0x103c80ea,
    0x103d1755,
    0x103d9769,
    0x103e1788,
    0x103e9797,
    0x103f17ae,
    0x103f97c1,
    0x10400c24,
    0x104097d4,
    0x104117f2,
    0x10419805,
    0x1042181f,
    0x1042982f,
    0x10431843,
    0x10439859,
    0x10441871,
    0x10449886,
    0x1045189a,
    0x104598ac,
    0x104605fd,
    0x1046894f,
    0x104718c1,
    0x104798d8,
    0x104818ed,
    0x104898fb,
    0x10490e73,
    0x10499735,
    0x104a15ff,
    0x14320c07,
    0x14328c15,
    0x14330c24,
    0x14338c36,
    0x143400ac,
    0x143480ea,
    0x18320083,
    0x18328f7d,
    0x183300ac,
    0x18338f93,
    0x18340fa7,
    0x183480ea,
    0x18350fbc,
    0x18358fd4,
    0x18360fe9,
    0x18368ffd,
    0x18371021,
    0x18379037,
    0x1838104b,
    0x1838905b,
    0x18390a75,
    0x1839906b,
    0x183a1091,
    0x183a90b7,
    0x183b0c7f,
    0x183b9106,
    0x183c1118,
    0x183c9123,
    0x183d1133,
    0x183d9144,
    0x183e1155,
    0x183e9167,
    0x183f1190,
    0x183f91a9,
    0x184011c1,
    0x184086d5,
    0x184110da,
    0x184190a5,
    0x184210c4,
    0x18428c6c,
    0x18431080,
    0x184390ec,
    0x203211fb,
    0x203291e8,
    0x24321207,
    0x24328995,
    0x24331219,
    0x24339226,
    0x24341233,
    0x24349245,
    0x24351254,
    0x24359271,
    0x2436127e,
    0x2436928c,
    0x2437129a,
    0x243792a8,
    0x243812b1,
    0x243892be,
    0x243912d1,
    0x28320c54,
    0x28328c7f,
    0x28330c24,
    0x28338c92,
    0x28340c60,
    0x283480ac,
    0x283500ea,
    0x28358c6c,
    0x2c323012,
    0x2c3292e8,
    0x2c333020,
    0x2c33b032,
    0x2c343046,
    0x2c34b058,
    0x2c353073,
    0x2c35b085,
    0x2c3630b5,
    0x2c36832d,
    0x2c3730c2,
    0x2c37b0ee,
    0x2c383113,
    0x2c38b12a,
    0x2c393148,
    0x2c39b158,
    0x2c3a316a,
    0x2c3ab17e,
    0x2c3b318f,
    0x2c3bb1ae,
    0x2c3c12fa,
    0x2c3c9310,
    0x2c3d31c2,
    0x2c3d9329,
    0x2c3e31df,
    0x2c3eb1ed,
    0x2c3f3205,
    0x2c3fb21d,
    0x2c403247,
    0x2c4091fb,
    0x2c413258,
    0x2c41b26b,
    0x2c4211c1,
    0x2c42b27c,
    0x2c430722,
    0x2c43b1a0,
    0x2c443101,
    0x2c44b22a,
    0x2c453098,
    0x2c45b0d4,
    0x2c463138,
    0x30320000,
    0x30328015,
    0x3033001f,
    0x30338038,
    0x3034004a,
    0x30348064,
    0x3035006b,
    0x30358083,
    0x30360094,
    0x303680ac,
    0x303700b9,
    0x303780c8,
    0x303800ea,
    0x303880f7,
    0x3039010a,
    0x30398125,
    0x303a013a,
    0x303a814e,
    0x303b0162,
    0x303b8173,
    0x303c018c,
    0x303c81a9,
    0x303d01b7,
    0x303d81cb,
    0x303e01db,
    0x303e81f4,
    0x303f0204,
    0x303f8217,
    0x30400226,
    0x30408232,
    0x30410247,
    0x30418257,
    0x3042026e,
    0x3042827b,
    0x3043028e,
    0x3043829d,
    0x304402b2,
    0x304482d3,
    0x304502e6,
    0x304582f9,
    0x30460312,
    0x3046832d,
    0x3047034a,
    0x3047835c,
    0x3048036a,
    0x3048837b,
    0x3049038a,
    0x304983a2,
    0x304a03b4,
    0x304a83c8,
    0x304b03e0,
    0x304b83f3,
    0x304c03fe,
    0x304c840f,
    0x304d041b,
    0x304d8431,
    0x304e043f,
    0x304e8455,
    0x304f0467,
    0x304f8479,
    0x3050049c,
    0x305084af,
    0x305104c0,
    0x305184d0,
    0x305204e8,
    0x305284fd,
    0x30530515,
    0x30538529,
    0x30540541,
    0x3054855a,
    0x30550573,
    0x30558590,
    0x3056059b,
    0x305685b3,
    0x305705c3,
    0x305785d4,
    0x305805e7,
    0x305885fd,
    0x30590606,
    0x3059861b,
    0x305a062e,
    0x305a863d,
    0x305b065d,
    0x305b866c,
    0x305c068d,
    0x305c86a9,
    0x305d06b5,
    0x305d86d5,
    0x305e06f1,
    0x305e8702,
    0x305f0718,
    0x305f8722,
    0x3060048c,
    0x34320b65,
    0x34328b79,
    0x34330b96,
    0x34338ba9,
    0x34340bb8,
    0x34348bf1,
    0x34350bd5,
    0x3c320083,
    0x3c328cbc,
    0x3c330cd5,
    0x3c338cf0,
    0x3c340d0d,
    0x3c348d37,
    0x3c350d52,
    0x3c358d78,
    0x3c360d91,
    0x3c368da9,
    0x3c370dba,
    0x3c378dc8,
    0x3c380dd5,
    0x3c388de9,
    0x3c390c7f,
    0x3c398e0c,
    0x3c3a0e20,
    0x3c3a890f,
    0x3c3b0e30,
    0x3c3b8e4b,
    0x3c3c0e5d,
    0x3c3c8e90,
    0x3c3d0e9a,
    0x3c3d8eae,
    0x3c3e0ebc,
    0x3c3e8ee1,
    0x3c3f0ca8,
    0x3c3f8eca,
    0x3c4000ac,
    0x3c4080ea,
    0x3c410d28,
    0x3c418d67,
    0x3c420e73,
    0x3c428dfd,
    0x40321971,
    0x40329987,
    0x403319b5,
    0x403399bf,
    0x403419d6,
    0x403499f4,
    0x40351a04,
    0x40359a16,
    0x40361a23,
    0x40369a2f,
    0x40371a44,
    0x40379a56,
    0x40381a61,
    0x40389a73,
    0x40390f27,
    0x40399a83,
    0x403a1a96,
    0x403a9ab7,
    0x403b1ac8,
    0x403b9ad8,
    0x403c0064,
    0x403c8083,
    0x403d1b39,
    0x403d9b4f,
    0x403e1b5e,
    0x403e9b96,
    0x403f1bb0,
    0x403f9bd8,
    0x40401bed,
    0x40409c01,
    0x40411c3c,
    0x40419c57,
    0x40421c70,
    0x40429c83,
    0x40431c97,
    0x40439caf,
    0x40441cc6,
    0x404480ac,
    0x40451cdb,
    0x40459ced,
    0x40461d11,
    0x40469d31,
    0x40471d3f,
    0x40479d66,
    0x40481dd7,
    0x40489e0a,
    0x40491e21,
    0x40499e3b,
    0x404a1e52,
    0x404a9e70,
    0x404b1e88,
    0x404b9eb5,
    0x404c1ecb,
    0x404c9edd,
    0x404d1efe,
    0x404d9f37,
    0x404e1f4b,
    0x404e9f58,
    0x404f1f9f,
    0x404f9fe5,
    0x4050203c,
    0x4050a050,
    0x40512083,
    0x40522093,
    0x4052a0b7,
    0x405320cf,
    0x4053a0e2,
    0x405420f7,
    0x4054a11a,
    0x40552128,
    0x4055a165,
    0x40562172,
    0x4056a18b,
    0x405721a3,
    0x4057a1b6,
    0x405821cb,
    0x4058a1f2,
    0x40592221,
    0x4059a24e,
    0x405a2262,
    0x405aa272,
    0x405b228a,
    0x405ba29b,
    0x405c22ae,
    0x405ca2ed,
    0x405d22fa,
    0x405da31f,
    0x405e235d,
    0x405e8ab3,
    0x405f237e,
    0x405fa38b,
    0x40602399,
    0x4060a3bb,
    0x4061241c,
    0x4061a454,
    0x4062246b,
    0x4062a47c,
    0x406324c9,
    0x4063a4de,
    0x406424f5,
    0x4064a521,
    0x4065253c,
    0x4065a553,
    0x4066256b,
    0x4066a595,
    0x406725c0,
    0x4067a605,
    0x4068264d,
    0x4068a66e,
    0x406926a0,
    0x4069a6ce,
    0x406a26ef,
    0x406aa70f,
    0x406b2897,
    0x406ba8ba,
    0x406c28d0,
    0x406cab73,
    0x406d2ba2,
    0x406dabca,
    0x406e2bf8,
    0x406eac45,
    0x406f2c80,
    0x406facb8,
    0x40702ccb,
    0x4070ace8,
    0x40710802,
    0x4071acfa,
    0x40722d0d,
    0x4072ad43,
    0x40732d5b,
    0x407394fa,
    0x40742d6f,
    0x4074ad89,
    0x40752d9a,
    0x4075adae,
    0x40762dbc,
    0x407692be,
    0x40772de1,
    0x4077ae03,
    0x40782e1e,
    0x4078ae57,
    0x40792e6e,
    0x4079ae84,
    0x407a2eb0,
    0x407aaec3,
    0x407b2ed8,
    0x407baeea,
    0x407c2f1b,
    0x407caf24,
    0x407d2689,
    0x407d9ff5,
    0x407e2e33,
    0x407ea202,
    0x407f1d53,
    0x407f9e9f,
    0x40801faf,
    0x40809d7b,
    0x408120a5,
    0x40819f89,
    0x40822be3,
    0x40829ae4,
    0x408321dd,
    0x4083a506,
    0x40841d8f,
    0x4084a23a,
    0x408522bf,
    0x4085a3e3,
    0x4086233f,
    0x4086a00f,
    0x40872c29,
    0x4087a431,
    0x40881b22,
    0x4088a618,
    0x40891b71,
    0x40899afe,
    0x408a2908,
    0x408a9912,
    0x408b2eff,
    0x408bac95,
    0x408c22cf,
    0x408c992e,
    0x408d1df0,
    0x408d9dc1,
    0x408e1f20,
    0x408ea145,
    0x408f262c,
    0x408fa3ff,
    0x409025e1,
    0x4090a311,
    0x409128f0,
    0x40919954,
    0x40921bbe,
    0x4092ac64,
    0x40932d26,
    0x4093a020,
    0x40941da3,
    0x4094a921,
    0x4095248d,
    0x4095ae90,
    0x40962c10,
    0x40969fc8,
    0x4097206b,
    0x40979f6f,
    0x40981c1e,
    0x4098a4a1,
    0x41f427c2,
    0x41f92854,
    0x41fe2747,
    0x41fea964,
    0x41ff2a55,
    0x420327db,
    0x420827fd,
    0x4208a839,
    0x4209272b,
    0x4209a873,
    0x420a2782,
    0x420aa762,
    0x420b27a2,
    0x420ba81b,
    0x420c2a71,
    0x420ca931,
    0x420d294b,
    0x420da982,
    0x4212299c,
    0x42172a38,
    0x4217a9de,
    0x421c2a00,
    0x421f29bb,
    0x42212a88,
    0x42262a1b,
    0x422b2b57,
    0x422bab05,
    0x422c2b3f,
    0x422caac4,
    0x422d2aa3,
    0x422dab24,
    0x422e2aea,
    0x4432072d,
    0x4432873c,
    0x44330748,
    0x44338756,
    0x44340769,
    0x4434877a,
    0x44350781,
    0x4435878b,
    0x4436079e,
    0x443687b4,
    0x443707c6,
    0x443787d3,
    0x443807e2,
    0x443887ea,
    0x44390802,
    0x44398810,
    0x443a0823,
    0x483212e8,
    0x483292fa,
    0x48331310,
    0x48339329,
    0x4c32134e,
    0x4c32935e,
    0x4c331371,
    0x4c339391,
    0x4c3400ac,
    0x4c3480ea,
    0x4c35139d,
    0x4c3593ab,
    0x4c3613c7,
    0x4c3693ed,
    0x4c3713fc,
    0x4c37940a,
    0x4c38141f,
    0x4c38942b,
    0x4c39144b,
    0x4c399475,
    0x4c3a148e,
    0x4c3a94a7,
    0x4c3b05fd,
    0x4c3b94c0,
    0x4c3c14d2,
    0x4c3c94e1,
    0x4c3d14fa,
    0x4c3d8c47,
    0x4c3e1567,
    0x4c3e9509,
    0x4c3f1589,
    0x4c3f92be,
    0x4c40151f,
    0x4c40933a,
    0x4c411557,
    0x4c4193da,
    0x4c421543,
    0x5032328e,
    0x5032b29d,
    0x503332a8,
    0x5033b2b8,
    0x503432d1,
    0x5034b2eb,
    0x503532f9,
    0x5035b30f,
    0x50363321,
    0x5036b337,
    0x50373350,
    0x5037b363,
    0x5038337b,
    0x5038b38c,
    0x503933a1,
    0x5039b3b5,
    0x503a33d5,
    0x503ab3eb,
    0x503b3403,
    0x503bb415,
    0x503c3431,
    0x503cb448,
    0x503d3461,
    0x503db477,
    0x503e3484,
    0x503eb49a,
    0x503f34ac,
    0x503f837b,
    0x504034bf,
    0x5040b4cf,
    0x504134e9,
    0x5041b4f8,
    0x50423512,
    0x5042b52f,
    0x5043353f,
    0x5043b54f,
    0x5044355e,
    0x50448431,
    0x50453572,
    0x5045b590,
    0x504635a3,
    0x5046b5b9,
    0x504735cb,
    0x5047b5e0,
    0x50483606,
    0x5048b614,
    0x50493627,
    0x5049b63c,
    0x504a3652,
    0x504ab662,
    0x504b3682,
    0x504bb695,
    0x504c36b8,
    0x504cb6e6,
    0x504d36f8,
    0x504db715,
    0x504e3730,
    0x504eb74c,
    0x504f375e,
    0x504fb775,
    0x50503784,
    0x505086f1,
    0x50513797,
    0x58320f65,
    0x68320f27,
    0x68328c7f,
    0x68330c92,
    0x68338f35,
    0x68340f45,
    0x683480ea,
    0x6c320eed,
    0x6c328c36,
    0x6c330ef8,
    0x6c338f11,
    0x74320a1b,
    0x743280ac,
    0x74330c47,
    0x78320980,
    0x78328995,
    0x783309a1,
    0x78338083,
    0x783409b0,
    0x783489c5,
    0x783509e4,
    0x78358a06,
    0x78360a1b,
    0x78368a31,
    0x78370a41,
    0x78378a62,
    0x78380a75,
    0x78388a87,
    0x78390a94,
    0x78398ab3,
    0x783a0ac8,
    0x783a8ad6,
    0x783b0ae0,
    0x783b8af4,
    0x783c0b0b,
    0x783c8b20,
    0x783d0b37,
    0x783d8b4c,
    0x783e0aa2,
    0x783e8a54,
    0x7c3211d7,
    0x803213ed,
    0x80328083,
    0x80332fe1,
    0x803380ac,
    0x80342ff0,
    0x8034af58,
    0x80352f76,
    0x8035b004,
    0x80362fb8,
    0x8036af67,
    0x80372faa,
    0x8037af45,
    0x80382fcb,
    0x8038af87,
    0x80392f9c,
};

const size_t kOpenSSLReasonValuesLen = sizeof(kOpenSSLReasonValues) / sizeof(kOpenSSLReasonValues[0]);

const char kOpenSSLReasonStringData[] =
    "ASN1_LENGTH_MISMATCH\0"
    "AUX_ERROR\0"
    "BAD_GET_ASN1_OBJECT_CALL\0"
    "BAD_OBJECT_HEADER\0"
    "BMPSTRING_IS_WRONG_LENGTH\0"
    "BN_LIB\0"
    "BOOLEAN_IS_WRONG_LENGTH\0"
    "BUFFER_TOO_SMALL\0"
    "CONTEXT_NOT_INITIALISED\0"
    "DECODE_ERROR\0"
    "DEPTH_EXCEEDED\0"
    "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED\0"
    "ENCODE_ERROR\0"
    "ERROR_GETTING_TIME\0"
    "EXPECTING_AN_ASN1_SEQUENCE\0"
    "EXPECTING_AN_INTEGER\0"
    "EXPECTING_AN_OBJECT\0"
    "EXPECTING_A_BOOLEAN\0"
    "EXPECTING_A_TIME\0"
    "EXPLICIT_LENGTH_MISMATCH\0"
    "EXPLICIT_TAG_NOT_CONSTRUCTED\0"
    "FIELD_MISSING\0"
    "FIRST_NUM_TOO_LARGE\0"
    "HEADER_TOO_LONG\0"
    "ILLEGAL_BITSTRING_FORMAT\0"
    "ILLEGAL_BOOLEAN\0"
    "ILLEGAL_CHARACTERS\0"
    "ILLEGAL_FORMAT\0"
    "ILLEGAL_HEX\0"
    "ILLEGAL_IMPLICIT_TAG\0"
    "ILLEGAL_INTEGER\0"
    "ILLEGAL_NESTED_TAGGING\0"
    "ILLEGAL_NULL\0"
    "ILLEGAL_NULL_VALUE\0"
    "ILLEGAL_OBJECT\0"
    "ILLEGAL_OPTIONAL_ANY\0"
    "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE\0"
    "ILLEGAL_TAGGED_ANY\0"
    "ILLEGAL_TIME_VALUE\0"
    "INTEGER_NOT_ASCII_FORMAT\0"
    "INTEGER_TOO_LARGE_FOR_LONG\0"
    "INVALID_BIT_STRING_BITS_LEFT\0"
    "INVALID_BMPSTRING\0"
    "INVALID_DIGIT\0"
    "INVALID_MODIFIER\0"
    "INVALID_NUMBER\0"
    "INVALID_OBJECT_ENCODING\0"
    "INVALID_SEPARATOR\0"
    "INVALID_TIME_FORMAT\0"
    "INVALID_UNIVERSALSTRING\0"
    "INVALID_UTF8STRING\0"
    "LIST_ERROR\0"
    "MISSING_ASN1_EOS\0"
    "MISSING_EOC\0"
    "MISSING_SECOND_NUMBER\0"
    "MISSING_VALUE\0"
    "MSTRING_NOT_UNIVERSAL\0"
    "MSTRING_WRONG_TAG\0"
    "NESTED_ASN1_ERROR\0"
    "NESTED_ASN1_STRING\0"
    "NESTED_TOO_DEEP\0"
    "NON_HEX_CHARACTERS\0"
    "NOT_ASCII_FORMAT\0"
    "NOT_ENOUGH_DATA\0"
    "NO_MATCHING_CHOICE_TYPE\0"
    "NULL_IS_WRONG_LENGTH\0"
    "OBJECT_NOT_ASCII_FORMAT\0"
    "ODD_NUMBER_OF_CHARS\0"
    "SECOND_NUMBER_TOO_LARGE\0"
    "SEQUENCE_LENGTH_MISMATCH\0"
    "SEQUENCE_NOT_CONSTRUCTED\0"
    "SEQUENCE_OR_SET_NEEDS_CONFIG\0"
    "SHORT_LINE\0"
    "STREAMING_NOT_SUPPORTED\0"
    "STRING_TOO_LONG\0"
    "STRING_TOO_SHORT\0"
    "TAG_VALUE_TOO_HIGH\0"
    "TIME_NOT_ASCII_FORMAT\0"
    "TOO_LONG\0"
    "TYPE_NOT_CONSTRUCTED\0"
    "TYPE_NOT_PRIMITIVE\0"
    "UNEXPECTED_EOC\0"
    "UNIVERSALSTRING_IS_WRONG_LENGTH\0"
    "UNKNOWN_FORMAT\0"
    "UNKNOWN_MESSAGE_DIGEST_ALGORITHM\0"
    "UNKNOWN_SIGNATURE_ALGORITHM\0"
    "UNKNOWN_TAG\0"
    "UNSUPPORTED_ANY_DEFINED_BY_TYPE\0"
    "UNSUPPORTED_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_TYPE\0"
    "WRONG_PUBLIC_KEY_TYPE\0"
    "WRONG_TAG\0"
    "WRONG_TYPE\0"
    "BAD_FOPEN_MODE\0"
    "BROKEN_PIPE\0"
    "CONNECT_ERROR\0"
    "ERROR_SETTING_NBIO\0"
    "INVALID_ARGUMENT\0"
    "IN_USE\0"
    "KEEPALIVE\0"
    "NBIO_CONNECT_ERROR\0"
    "NO_HOSTNAME_SPECIFIED\0"
    "NO_PORT_SPECIFIED\0"
    "NO_SUCH_FILE\0"
    "NULL_PARAMETER\0"
    "SYS_LIB\0"
    "UNABLE_TO_CREATE_SOCKET\0"
    "UNINITIALIZED\0"
    "UNSUPPORTED_METHOD\0"
    "WRITE_TO_READ_ONLY_BIO\0"
    "ARG2_LT_ARG3\0"
    "BAD_ENCODING\0"
    "BAD_RECIPROCAL\0"
    "BIGNUM_TOO_LONG\0"
    "BITS_TOO_SMALL\0"
    "CALLED_WITH_EVEN_MODULUS\0"
    "DIV_BY_ZERO\0"
    "EXPAND_ON_STATIC_BIGNUM_DATA\0"
    "INPUT_NOT_REDUCED\0"
    "INVALID_INPUT\0"
    "INVALID_RANGE\0"
    "NEGATIVE_NUMBER\0"
    "NOT_A_SQUARE\0"
    "NOT_INITIALIZED\0"
    "NO_INVERSE\0"
    "PRIVATE_KEY_TOO_LARGE\0"
    "P_IS_NOT_PRIME\0"
    "TOO_MANY_ITERATIONS\0"
    "TOO_MANY_TEMPORARY_VARIABLES\0"
    "AES_KEY_SETUP_FAILED\0"
    "BAD_DECRYPT\0"
    "BAD_KEY_LENGTH\0"
    "CTRL_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_IMPLEMENTED\0"
    "DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH\0"
    "INITIALIZATION_ERROR\0"
    "INPUT_NOT_INITIALIZED\0"
    "INVALID_AD_SIZE\0"
    "INVALID_KEY_LENGTH\0"
    "INVALID_NONCE\0"
    "INVALID_NONCE_SIZE\0"
    "INVALID_OPERATION\0"
    "IV_TOO_LARGE\0"
    "NO_CIPHER_SET\0"
    "NO_DIRECTION_SET\0"
    "OUTPUT_ALIASES_INPUT\0"
    "TAG_TOO_LARGE\0"
    "TOO_LARGE\0"
    "UNSUPPORTED_AD_SIZE\0"
    "UNSUPPORTED_INPUT_SIZE\0"
    "UNSUPPORTED_KEY_SIZE\0"
    "UNSUPPORTED_NONCE_SIZE\0"
    "UNSUPPORTED_TAG_SIZE\0"
    "WRONG_FINAL_BLOCK_LENGTH\0"
    "LIST_CANNOT_BE_NULL\0"
    "MISSING_CLOSE_SQUARE_BRACKET\0"
    "MISSING_EQUAL_SIGN\0"
    "NO_CLOSE_BRACE\0"
    "UNABLE_TO_CREATE_NEW_SECTION\0"
    "VARIABLE_EXPANSION_TOO_LONG\0"
    "VARIABLE_HAS_NO_VALUE\0"
    "BAD_GENERATOR\0"
    "INVALID_PUBKEY\0"
    "MODULUS_TOO_LARGE\0"
    "NO_PRIVATE_VALUE\0"
    "UNKNOWN_HASH\0"
    "BAD_Q_VALUE\0"
    "BAD_VERSION\0"
    "INVALID_PARAMETERS\0"
    "MISSING_PARAMETERS\0"
    "NEED_NEW_SETUP_VALUES\0"
    "BIGNUM_OUT_OF_RANGE\0"
    "COORDINATES_OUT_OF_RANGE\0"
    "D2I_ECPKPARAMETERS_FAILURE\0"
    "EC_GROUP_NEW_BY_NAME_FAILURE\0"
    "GROUP2PKPARAMETERS_FAILURE\0"
    "GROUP_MISMATCH\0"
    "I2D_ECPKPARAMETERS_FAILURE\0"
    "INCOMPATIBLE_OBJECTS\0"
    "INVALID_COFACTOR\0"
    "INVALID_COMPRESSED_POINT\0"
    "INVALID_COMPRESSION_BIT\0"
    "INVALID_ENCODING\0"
    "INVALID_FIELD\0"
    "INVALID_FORM\0"
    "INVALID_GROUP_ORDER\0"
    "INVALID_PRIVATE_KEY\0"
    "INVALID_SCALAR\0"
    "MISSING_PRIVATE_KEY\0"
    "NON_NAMED_CURVE\0"
    "PKPARAMETERS2GROUP_FAILURE\0"
    "POINT_AT_INFINITY\0"
    "POINT_IS_NOT_ON_CURVE\0"
    "PUBLIC_KEY_VALIDATION_FAILED\0"
    "SLOT_FULL\0"
    "UNDEFINED_GENERATOR\0"
    "UNKNOWN_GROUP\0"
    "UNKNOWN_ORDER\0"
    "WRONG_CURVE_PARAMETERS\0"
    "WRONG_ORDER\0"
    "KDF_FAILED\0"
    "POINT_ARITHMETIC_FAILURE\0"
    "UNKNOWN_DIGEST_LENGTH\0"
    "BAD_SIGNATURE\0"
    "NOT_IMPLEMENTED\0"
    "RANDOM_NUMBER_GENERATION_FAILED\0"
    "OPERATION_NOT_SUPPORTED\0"
    "COMMAND_NOT_SUPPORTED\0"
    "DIFFERENT_KEY_TYPES\0"
    "DIFFERENT_PARAMETERS\0"
    "EXPECTING_AN_EC_KEY_KEY\0"
    "EXPECTING_AN_RSA_KEY\0"
    "EXPECTING_A_DSA_KEY\0"
    "ILLEGAL_OR_UNSUPPORTED_PADDING_MODE\0"
    "INVALID_DIGEST_LENGTH\0"
    "INVALID_DIGEST_TYPE\0"
    "INVALID_KEYBITS\0"
    "INVALID_MGF1_MD\0"
    "INVALID_PADDING_MODE\0"
    "INVALID_PEER_KEY\0"
    "INVALID_PSS_SALTLEN\0"
    "INVALID_SIGNATURE\0"
    "KEYS_NOT_SET\0"
    "MEMORY_LIMIT_EXCEEDED\0"
    "NOT_A_PRIVATE_KEY\0"
    "NOT_XOF_OR_INVALID_LENGTH\0"
    "NO_DEFAULT_DIGEST\0"
    "NO_KEY_SET\0"
    "NO_MDC2_SUPPORT\0"
    "NO_NID_FOR_CURVE\0"
    "NO_OPERATION_SET\0"
    "NO_PARAMETERS_SET\0"
    "OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE\0"
    "OPERATON_NOT_INITIALIZED\0"
    "UNKNOWN_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_ALGORITHM\0"
    "OUTPUT_TOO_LARGE\0"
    "INVALID_OID_STRING\0"
    "UNKNOWN_NID\0"
    "BAD_BASE64_DECODE\0"
    "BAD_END_LINE\0"
    "BAD_IV_CHARS\0"
    "BAD_PASSWORD_READ\0"
    "CIPHER_IS_NULL\0"
    "ERROR_CONVERTING_PRIVATE_KEY\0"
    "NOT_DEK_INFO\0"
    "NOT_ENCRYPTED\0"
    "NOT_PROC_TYPE\0"
    "NO_START_LINE\0"
    "READ_KEY\0"
    "SHORT_HEADER\0"
    "UNSUPPORTED_CIPHER\0"
    "UNSUPPORTED_ENCRYPTION\0"
    "BAD_PKCS7_VERSION\0"
    "NOT_PKCS7_SIGNED_DATA\0"
    "NO_CERTIFICATES_INCLUDED\0"
    "NO_CRLS_INCLUDED\0"
    "BAD_ITERATION_COUNT\0"
    "BAD_PKCS12_DATA\0"
    "BAD_PKCS12_VERSION\0"
    "CIPHER_HAS_NO_OBJECT_IDENTIFIER\0"
    "CRYPT_ERROR\0"
    "ENCRYPT_ERROR\0"
    "ERROR_SETTING_CIPHER_PARAMS\0"
    "INCORRECT_PASSWORD\0"
    "INVALID_CHARACTERS\0"
    "KEYGEN_FAILURE\0"
    "KEY_GEN_ERROR\0"
    "METHOD_NOT_SUPPORTED\0"
    "MISSING_MAC\0"
    "MULTIPLE_PRIVATE_KEYS_IN_PKCS12\0"
    "PKCS12_PUBLIC_KEY_INTEGRITY_NOT_SUPPORTED\0"
    "PKCS12_TOO_DEEPLY_NESTED\0"
    "PRIVATE_KEY_DECODE_ERROR\0"
    "PRIVATE_KEY_ENCODE_ERROR\0"
    "UNKNOWN_ALGORITHM\0"
    "UNKNOWN_CIPHER\0"
    "UNKNOWN_CIPHER_ALGORITHM\0"
    "UNKNOWN_DIGEST\0"
    "UNSUPPORTED_KEYLENGTH\0"
    "UNSUPPORTED_KEY_DERIVATION_FUNCTION\0"
    "UNSUPPORTED_OPTIONS\0"
    "UNSUPPORTED_PRF\0"
    "UNSUPPORTED_PRIVATE_KEY_ALGORITHM\0"
    "UNSUPPORTED_SALT_TYPE\0"
    "BAD_E_VALUE\0"
    "BAD_FIXED_HEADER_DECRYPT\0"
    "BAD_PAD_BYTE_COUNT\0"
    "BAD_RSA_PARAMETERS\0"
    "BLOCK_TYPE_IS_NOT_01\0"
    "BLOCK_TYPE_IS_NOT_02\0"
    "BN_NOT_INITIALIZED\0"
    "CANNOT_RECOVER_MULTI_PRIME_KEY\0"
    "CRT_PARAMS_ALREADY_GIVEN\0"
    "CRT_VALUES_INCORRECT\0"
    "DATA_LEN_NOT_EQUAL_TO_MOD_LEN\0"
    "DATA_TOO_LARGE\0"
    "DATA_TOO_LARGE_FOR_KEY_SIZE\0"
    "DATA_TOO_LARGE_FOR_MODULUS\0"
    "DATA_TOO_SMALL\0"
    "DATA_TOO_SMALL_FOR_KEY_SIZE\0"
    "DIGEST_TOO_BIG_FOR_RSA_KEY\0"
    "D_E_NOT_CONGRUENT_TO_1\0"
    "D_OUT_OF_RANGE\0"
    "EMPTY_PUBLIC_KEY\0"
    "FIRST_OCTET_INVALID\0"
    "INCONSISTENT_SET_OF_CRT_VALUES\0"
    "INTERNAL_ERROR\0"
    "INVALID_MESSAGE_LENGTH\0"
    "KEY_SIZE_TOO_SMALL\0"
    "LAST_OCTET_INVALID\0"
    "MUST_HAVE_AT_LEAST_TWO_PRIMES\0"
    "NO_PUBLIC_EXPONENT\0"
    "NULL_BEFORE_BLOCK_MISSING\0"
    "N_NOT_EQUAL_P_Q\0"
    "OAEP_DECODING_ERROR\0"
    "ONLY_ONE_OF_P_Q_GIVEN\0"
    "OUTPUT_BUFFER_TOO_SMALL\0"
    "PADDING_CHECK_FAILED\0"
    "PKCS_DECODING_ERROR\0"
    "SLEN_CHECK_FAILED\0"
    "SLEN_RECOVERY_FAILED\0"
    "UNKNOWN_ALGORITHM_TYPE\0"
    "UNKNOWN_PADDING_TYPE\0"
    "VALUE_MISSING\0"
    "WRONG_SIGNATURE_LENGTH\0"
    "ALPN_MISMATCH_ON_EARLY_DATA\0"
    "APPLICATION_DATA_INSTEAD_OF_HANDSHAKE\0"
    "APPLICATION_DATA_ON_SHUTDOWN\0"
    "APP_DATA_IN_HANDSHAKE\0"
    "ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT\0"
    "BAD_ALERT\0"
    "BAD_CHANGE_CIPHER_SPEC\0"
    "BAD_DATA_RETURNED_BY_CALLBACK\0"
    "BAD_DH_P_LENGTH\0"
    "BAD_DIGEST_LENGTH\0"
    "BAD_ECC_CERT\0"
    "BAD_ECPOINT\0"
    "BAD_HANDSHAKE_RECORD\0"
    "BAD_HELLO_REQUEST\0"
    "BAD_LENGTH\0"
    "BAD_PACKET_LENGTH\0"
    "BAD_RSA_ENCRYPT\0"
    "BAD_SRTP_MKI_VALUE\0"
    "BAD_SRTP_PROTECTION_PROFILE_LIST\0"
    "BAD_SSL_FILETYPE\0"
    "BAD_WRITE_RETRY\0"
    "BIO_NOT_SET\0"
    "BLOCK_CIPHER_PAD_IS_WRONG\0"
    "CANNOT_HAVE_BOTH_PRIVKEY_AND_METHOD\0"
    "CANNOT_PARSE_LEAF_CERT\0"
    "CA_DN_LENGTH_MISMATCH\0"
    "CA_DN_TOO_LONG\0"
    "CCS_RECEIVED_EARLY\0"
    "CERTIFICATE_AND_PRIVATE_KEY_MISMATCH\0"
    "CERTIFICATE_VERIFY_FAILED\0"
    "CERT_CB_ERROR\0"
    "CERT_DECOMPRESSION_FAILED\0"
    "CERT_LENGTH_MISMATCH\0"
    "CHANNEL_ID_NOT_P256\0"
    "CHANNEL_ID_SIGNATURE_INVALID\0"
    "CIPHER_MISMATCH_ON_EARLY_DATA\0"
    "CIPHER_OR_HASH_UNAVAILABLE\0"
    "CLIENTHELLO_PARSE_FAILED\0"
    "CLIENTHELLO_TLSEXT\0"
    "CONNECTION_REJECTED\0"
    "CONNECTION_TYPE_NOT_SET\0"
    "CUSTOM_EXTENSION_ERROR\0"
    "DATA_LENGTH_TOO_LONG\0"
    "DECRYPTION_FAILED\0"
    "DECRYPTION_FAILED_OR_BAD_RECORD_MAC\0"
    "DH_PUBLIC_VALUE_LENGTH_IS_WRONG\0"
    "DH_P_TOO_LONG\0"
    "DIGEST_CHECK_FAILED\0"
    "DOWNGRADE_DETECTED\0"
    "DTLS_MESSAGE_TOO_BIG\0"
    "DUPLICATE_EXTENSION\0"
    "DUPLICATE_KEY_SHARE\0"
    "DUPLICATE_SIGNATURE_ALGORITHM\0"
    "EARLY_DATA_NOT_IN_USE\0"
    "ECC_CERT_NOT_FOR_SIGNING\0"
    "EMPTY_HELLO_RETRY_REQUEST\0"
    "EMS_STATE_INCONSISTENT\0"
    "ENCRYPTED_LENGTH_TOO_LONG\0"
    "ERROR_ADDING_EXTENSION\0"
    "ERROR_IN_RECEIVED_CIPHER_LIST\0"
    "ERROR_PARSING_EXTENSION\0"
    "EXCESSIVE_MESSAGE_SIZE\0"
    "EXCESS_HANDSHAKE_DATA\0"
    "EXTRA_DATA_IN_MESSAGE\0"
    "FRAGMENT_MISMATCH\0"
    "GOT_NEXT_PROTO_WITHOUT_EXTENSION\0"
    "HANDSHAKE_FAILURE_ON_CLIENT_HELLO\0"
    "HANDSHAKE_NOT_COMPLETE\0"
    "HTTPS_PROXY_REQUEST\0"
    "HTTP_REQUEST\0"
    "INAPPROPRIATE_FALLBACK\0"
    "INCONSISTENT_CLIENT_HELLO\0"
    "INVALID_ALPN_PROTOCOL\0"
    "INVALID_COMMAND\0"
    "INVALID_COMPRESSION_LIST\0"
    "INVALID_DELEGATED_CREDENTIAL\0"
    "INVALID_MESSAGE\0"
    "INVALID_OUTER_RECORD_TYPE\0"
    "INVALID_SCT_LIST\0"
    "INVALID_SIGNATURE_ALGORITHM\0"
    "INVALID_SSL_SESSION\0"
    "INVALID_TICKET_KEYS_LENGTH\0"
    "KEY_USAGE_BIT_INCORRECT\0"
    "LENGTH_MISMATCH\0"
    "MISSING_EXTENSION\0"
    "MISSING_KEY_SHARE\0"
    "MISSING_RSA_CERTIFICATE\0"
    "MISSING_TMP_DH_KEY\0"
    "MISSING_TMP_ECDH_KEY\0"
    "MIXED_SPECIAL_OPERATOR_WITH_GROUPS\0"
    "MTU_TOO_SMALL\0"
    "NEGOTIATED_BOTH_NPN_AND_ALPN\0"
    "NEGOTIATED_TB_WITHOUT_EMS_OR_RI\0"
    "NESTED_GROUP\0"
    "NO_CERTIFICATES_RETURNED\0"
    "NO_CERTIFICATE_ASSIGNED\0"
    "NO_CERTIFICATE_SET\0"
    "NO_CIPHERS_AVAILABLE\0"
    "NO_CIPHERS_PASSED\0"
    "NO_CIPHERS_SPECIFIED\0"
    "NO_CIPHER_MATCH\0"
    "NO_COMMON_SIGNATURE_ALGORITHMS\0"
    "NO_COMPRESSION_SPECIFIED\0"
    "NO_GROUPS_SPECIFIED\0"
    "NO_METHOD_SPECIFIED\0"
    "NO_P256_SUPPORT\0"
    "NO_PRIVATE_KEY_ASSIGNED\0"
    "NO_RENEGOTIATION\0"
    "NO_REQUIRED_DIGEST\0"
    "NO_SHARED_CIPHER\0"
    "NO_SHARED_GROUP\0"
    "NO_SUPPORTED_VERSIONS_ENABLED\0"
    "NULL_SSL_CTX\0"
    "NULL_SSL_METHOD_PASSED\0"
    "OCSP_CB_ERROR\0"
    "OLD_SESSION_CIPHER_NOT_RETURNED\0"
    "OLD_SESSION_PRF_HASH_MISMATCH\0"
    "OLD_SESSION_VERSION_NOT_RETURNED\0"
    "PARSE_TLSEXT\0"
    "PATH_TOO_LONG\0"
    "PEER_DID_NOT_RETURN_A_CERTIFICATE\0"
    "PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE\0"
    "PRE_SHARED_KEY_MUST_BE_LAST\0"
    "PRIVATE_KEY_OPERATION_FAILED\0"
    "PROTOCOL_IS_SHUTDOWN\0"
    "PSK_IDENTITY_BINDER_COUNT_MISMATCH\0"
    "PSK_IDENTITY_NOT_FOUND\0"
    "PSK_NO_CLIENT_CB\0"
    "PSK_NO_SERVER_CB\0"
    "QUIC_INTERNAL_ERROR\0"
    "QUIC_TRANSPORT_PARAMETERS_MISCONFIGURED\0"
    "READ_TIMEOUT_EXPIRED\0"
    "RECORD_LENGTH_MISMATCH\0"
    "RECORD_TOO_LARGE\0"
    "RENEGOTIATION_EMS_MISMATCH\0"
    "RENEGOTIATION_ENCODING_ERR\0"
    "RENEGOTIATION_MISMATCH\0"
    "REQUIRED_CIPHER_MISSING\0"
    "RESUMED_EMS_SESSION_WITHOUT_EMS_EXTENSION\0"
    "RESUMED_NON_EMS_SESSION_WITH_EMS_EXTENSION\0"
    "SCSV_RECEIVED_WHEN_RENEGOTIATING\0"
    "SECOND_SERVERHELLO_VERSION_MISMATCH\0"
    "SERVERHELLO_TLSEXT\0"
    "SERVER_CERT_CHANGED\0"
    "SERVER_ECHOED_INVALID_SESSION_ID\0"
    "SESSION_ID_CONTEXT_UNINITIALIZED\0"
    "SESSION_MAY_NOT_BE_CREATED\0"
    "SHUTDOWN_WHILE_IN_INIT\0"
    "SIGNATURE_ALGORITHMS_EXTENSION_SENT_BY_SERVER\0"
    "SRTP_COULD_NOT_ALLOCATE_PROFILES\0"
    "SRTP_UNKNOWN_PROTECTION_PROFILE\0"
    "SSL3_EXT_INVALID_SERVERNAME\0"
    "SSLV3_ALERT_BAD_CERTIFICATE\0"
    "SSLV3_ALERT_BAD_RECORD_MAC\0"
    "SSLV3_ALERT_CERTIFICATE_EXPIRED\0"
    "SSLV3_ALERT_CERTIFICATE_REVOKED\0"
    "SSLV3_ALERT_CERTIFICATE_UNKNOWN\0"
    "SSLV3_ALERT_CLOSE_NOTIFY\0"
    "SSLV3_ALERT_DECOMPRESSION_FAILURE\0"
    "SSLV3_ALERT_HANDSHAKE_FAILURE\0"
    "SSLV3_ALERT_ILLEGAL_PARAMETER\0"
    "SSLV3_ALERT_NO_CERTIFICATE\0"
    "SSLV3_ALERT_UNEXPECTED_MESSAGE\0"
    "SSLV3_ALERT_UNSUPPORTED_CERTIFICATE\0"
    "SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION\0"
    "SSL_HANDSHAKE_FAILURE\0"
    "SSL_SESSION_ID_CONTEXT_TOO_LONG\0"
    "SSL_SESSION_ID_TOO_LONG\0"
    "TICKET_ENCRYPTION_FAILED\0"
    "TLS13_DOWNGRADE\0"
    "TLSV1_ALERT_ACCESS_DENIED\0"
    "TLSV1_ALERT_DECODE_ERROR\0"
    "TLSV1_ALERT_DECRYPTION_FAILED\0"
    "TLSV1_ALERT_DECRYPT_ERROR\0"
    "TLSV1_ALERT_EXPORT_RESTRICTION\0"
    "TLSV1_ALERT_INAPPROPRIATE_FALLBACK\0"
    "TLSV1_ALERT_INSUFFICIENT_SECURITY\0"
    "TLSV1_ALERT_INTERNAL_ERROR\0"
    "TLSV1_ALERT_NO_RENEGOTIATION\0"
    "TLSV1_ALERT_PROTOCOL_VERSION\0"
    "TLSV1_ALERT_RECORD_OVERFLOW\0"
    "TLSV1_ALERT_UNKNOWN_CA\0"
    "TLSV1_ALERT_USER_CANCELLED\0"
    "TLSV1_BAD_CERTIFICATE_HASH_VALUE\0"
    "TLSV1_BAD_CERTIFICATE_STATUS_RESPONSE\0"
    "TLSV1_CERTIFICATE_REQUIRED\0"
    "TLSV1_CERTIFICATE_UNOBTAINABLE\0"
    "TLSV1_UNKNOWN_PSK_IDENTITY\0"
    "TLSV1_UNRECOGNIZED_NAME\0"
    "TLSV1_UNSUPPORTED_EXTENSION\0"
    "TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST\0"
    "TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG\0"
    "TOO_MANY_EMPTY_FRAGMENTS\0"
    "TOO_MANY_KEY_UPDATES\0"
    "TOO_MANY_WARNING_ALERTS\0"
    "TOO_MUCH_READ_EARLY_DATA\0"
    "TOO_MUCH_SKIPPED_EARLY_DATA\0"
    "UNABLE_TO_FIND_ECDH_PARAMETERS\0"
    "UNCOMPRESSED_CERT_TOO_LARGE\0"
    "UNEXPECTED_EXTENSION\0"
    "UNEXPECTED_EXTENSION_ON_EARLY_DATA\0"
    "UNEXPECTED_MESSAGE\0"
    "UNEXPECTED_OPERATOR_IN_GROUP\0"
    "UNEXPECTED_RECORD\0"
    "UNKNOWN_ALERT_TYPE\0"
    "UNKNOWN_CERTIFICATE_TYPE\0"
    "UNKNOWN_CERT_COMPRESSION_ALG\0"
    "UNKNOWN_CIPHER_RETURNED\0"
    "UNKNOWN_CIPHER_TYPE\0"
    "UNKNOWN_KEY_EXCHANGE_TYPE\0"
    "UNKNOWN_PROTOCOL\0"
    "UNKNOWN_SSL_VERSION\0"
    "UNKNOWN_STATE\0"
    "UNSAFE_LEGACY_RENEGOTIATION_DISABLED\0"
    "UNSUPPORTED_COMPRESSION_ALGORITHM\0"
    "UNSUPPORTED_ELLIPTIC_CURVE\0"
    "UNSUPPORTED_PROTOCOL\0"
    "UNSUPPORTED_PROTOCOL_FOR_CUSTOM_KEY\0"
    "WRONG_CERTIFICATE_TYPE\0"
    "WRONG_CIPHER_RETURNED\0"
    "WRONG_CURVE\0"
    "WRONG_ENCRYPTION_LEVEL_RECEIVED\0"
    "WRONG_MESSAGE_TYPE\0"
    "WRONG_SIGNATURE_TYPE\0"
    "WRONG_SSL_VERSION\0"
    "WRONG_VERSION_NUMBER\0"
    "WRONG_VERSION_ON_EARLY_DATA\0"
    "X509_LIB\0"
    "X509_VERIFICATION_SETUP_PROBLEMS\0"
    "BAD_VALIDITY_CHECK\0"
    "DECODE_FAILURE\0"
    "INVALID_KEY_ID\0"
    "INVALID_METADATA\0"
    "INVALID_METADATA_KEY\0"
    "INVALID_PROOF\0"
    "INVALID_TOKEN\0"
    "NO_KEYS_CONFIGURED\0"
    "NO_SRR_KEY_CONFIGURED\0"
    "OVER_BATCHSIZE\0"
    "SRR_SIGNATURE_ERROR\0"
    "TOO_MANY_KEYS\0"
    "AKID_MISMATCH\0"
    "BAD_X509_FILETYPE\0"
    "BASE64_DECODE_ERROR\0"
    "CANT_CHECK_DH_KEY\0"
    "CERT_ALREADY_IN_HASH_TABLE\0"
    "CRL_ALREADY_DELTA\0"
    "CRL_VERIFY_FAILURE\0"
    "DELTA_CRL_WITHOUT_CRL_NUMBER\0"
    "IDP_MISMATCH\0"
    "INVALID_DIRECTORY\0"
    "INVALID_FIELD_FOR_VERSION\0"
    "INVALID_FIELD_NAME\0"
    "INVALID_PARAMETER\0"
    "INVALID_PSS_PARAMETERS\0"
    "INVALID_TRUST\0"
    "INVALID_VERSION\0"
    "ISSUER_MISMATCH\0"
    "KEY_TYPE_MISMATCH\0"
    "KEY_VALUES_MISMATCH\0"
    "LOADING_CERT_DIR\0"
    "LOADING_DEFAULTS\0"
    "NAME_TOO_LONG\0"
    "NEWER_CRL_NOT_NEWER\0"
    "NO_CERT_SET_FOR_US_TO_VERIFY\0"
    "NO_CRL_NUMBER\0"
    "PUBLIC_KEY_DECODE_ERROR\0"
    "PUBLIC_KEY_ENCODE_ERROR\0"
    "SHOULD_RETRY\0"
    "SIGNATURE_ALGORITHM_MISMATCH\0"
    "UNKNOWN_KEY_TYPE\0"
    "UNKNOWN_PURPOSE_ID\0"
    "UNKNOWN_TRUST_ID\0"
    "WRONG_LOOKUP_TYPE\0"
    "BAD_IP_ADDRESS\0"
    "BAD_OBJECT\0"
    "BN_DEC2BN_ERROR\0"
    "BN_TO_ASN1_INTEGER_ERROR\0"
    "CANNOT_FIND_FREE_FUNCTION\0"
    "DIRNAME_ERROR\0"
    "DISTPOINT_ALREADY_SET\0"
    "DUPLICATE_ZONE_ID\0"
    "ERROR_CONVERTING_ZONE\0"
    "ERROR_CREATING_EXTENSION\0"
    "ERROR_IN_EXTENSION\0"
    "EXPECTED_A_SECTION_NAME\0"
    "EXTENSION_EXISTS\0"
    "EXTENSION_NAME_ERROR\0"
    "EXTENSION_NOT_FOUND\0"
    "EXTENSION_SETTING_NOT_SUPPORTED\0"
    "EXTENSION_VALUE_ERROR\0"
    "ILLEGAL_EMPTY_EXTENSION\0"
    "ILLEGAL_HEX_DIGIT\0"
    "INCORRECT_POLICY_SYNTAX_TAG\0"
    "INVALID_BOOLEAN_STRING\0"
    "INVALID_EXTENSION_STRING\0"
    "INVALID_MULTIPLE_RDNS\0"
    "INVALID_NAME\0"
    "INVALID_NULL_ARGUMENT\0"
    "INVALID_NULL_NAME\0"
    "INVALID_NULL_VALUE\0"
    "INVALID_NUMBERS\0"
    "INVALID_OBJECT_IDENTIFIER\0"
    "INVALID_OPTION\0"
    "INVALID_POLICY_IDENTIFIER\0"
    "INVALID_PROXY_POLICY_SETTING\0"
    "INVALID_PURPOSE\0"
    "INVALID_SECTION\0"
    "INVALID_SYNTAX\0"
    "ISSUER_DECODE_ERROR\0"
    "NEED_ORGANIZATION_AND_NUMBERS\0"
    "NO_CONFIG_DATABASE\0"
    "NO_ISSUER_CERTIFICATE\0"
    "NO_ISSUER_DETAILS\0"
    "NO_POLICY_IDENTIFIER\0"
    "NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED\0"
    "NO_PUBLIC_KEY\0"
    "NO_SUBJECT_DETAILS\0"
    "ODD_NUMBER_OF_DIGITS\0"
    "OPERATION_NOT_DEFINED\0"
    "OTHERNAME_ERROR\0"
    "POLICY_LANGUAGE_ALREADY_DEFINED\0"
    "POLICY_PATH_LENGTH\0"
    "POLICY_PATH_LENGTH_ALREADY_DEFINED\0"
    "POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY\0"
    "SECTION_NOT_FOUND\0"
    "UNABLE_TO_GET_ISSUER_DETAILS\0"
    "UNABLE_TO_GET_ISSUER_KEYID\0"
    "UNKNOWN_BIT_STRING_ARGUMENT\0"
    "UNKNOWN_EXTENSION\0"
    "UNKNOWN_EXTENSION_NAME\0"
    "UNKNOWN_OPTION\0"
    "UNSUPPORTED_OPTION\0"
    "USER_TOO_LONG\0"
    "";

