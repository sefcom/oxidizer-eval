long long uu_stty::print_in_save_format(struct_0 *a0)
{
    char v0;  // [bp-0xbc]
    unsigned int v1;  // [bp-0xbc]
    unsigned int v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb4]
    char *v4;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa8]
    char *v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v7;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x90], Other Possible Types: char *
    unsigned long long v9;  // [bp-0x88]
    char *v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    void* v12;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x68]
    int v14;  // [bp-0x60], Other Possible Types: char *
    unsigned long long v15;  // [bp-0x58]
    int v16;  // [bp-0x50], Other Possible Types: void*
    char *v17;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v18;  // [bp-0x38]
    char v20;  // dl

    v2 = a0->field_68;
    v3 = a0->field_6c;
    v1 = a0->field_70;
    v17 = a0->field_74;
    v4 = &v2;
    v5 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
    v6 = &v3;
    v7 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
    v8 = &v1;
    v9 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
    v10 = &v17;
    v11 = core::fmt::num::<impl core::fmt::LowerHex for u32>::fmt;
    v12 = &g_4e2f68;
    v13 = 4;
    v16 = 0;
    v14 = &v4;
    v15 = 4;
    std::io::stdio::_print(&v12);
    *((uint128_t *)&v16) = a0->field_10;
    *((uint128_t *)&v14) = a0->field_0;
    v12 = 0;
    v13 = 32;
    if ((v12.next() & 1))
    {
        do
        {
            v0 = v20;
            v17 = &v0;
            v18 = core::fmt::num::<impl core::fmt::LowerHex for i8>::fmt;
            v4 = &g_4e2fa8;
            v5 = 1;
            v8 = 0;
            v6 = &v17;
            v7 = 1;
            std::io::stdio::_print(&v4);
        } while ((v12.next() & 1));
    }
    v4 = &g_4e2ac0;
    v5 = 1;
    v6 = 8;
    *((uint128_t *)&v7) = 0;
    return std::io::stdio::_print(&v4);
}
