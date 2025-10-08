char fish::common::can_be_encoded(unsigned short a0)
{
    uint128_t v0;  // [bp-0xa8]
    uint128_t v1;  // [bp-0x98]
    uint128_t v2;  // [bp-0x88]
    uint128_t v3;  // [bp-0x78]
    uint128_t v4;  // [bp-0x68]
    uint128_t v5;  // [bp-0x58]
    uint128_t v6;  // [bp-0x48]
    uint128_t v7;  // [bp-0x38]
    uint128_t v8;  // [bp-0x28]
    uint128_t v9;  // [bp-0x18]

    v1 = 0;
    v0 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    return wcrtomb(&v0, a0, &v2) != -1;
}
