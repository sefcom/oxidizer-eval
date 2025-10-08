long long uu_stty::print_control_chars(char *a0, char a1)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xac]
    unsigned int v3;  // [bp-0xa4]
    char *v4;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x98]
    char *v6;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    char *v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    void* v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x48]
    unsigned int v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x3c]
    char v17;  // [bp-0x34]
    struct_0 *v19;  // r12

    if (!(a1 & 1))
        return 134;
    v19 = 0;
    while (true)
    {
        v8 = &g_4e2e00 + v19;
        uu_stty::control_char_to_string(&v14, a0[*((long long *)(v19 + &g_4e2e10))]);
        if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
            return v1;
        v3 = *((int *)&v17);
        v2 = v16;
        v0 = v14;
        v1 = v15;
        v4 = &v8;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &g_4e2da0;
        v10 = 3;
        v13 = 0;
        v11 = &v4;
        v12 = 2;
        std::io::stdio::_print(&v9);
        v19 = &v19->padding_0[24];
        core::ptr::drop_in_place<alloc::string::String>(v0, *((long long *)&v1));
        if (v19 == 360)
        {
            v4 = a0 + 6;
            v5 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            v6 = a0 + 5;
            v7 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            v9 = &g_4e2dd0;
            v10 = 3;
            v13 = 0;
            v11 = &v4;
            v12 = 2;
            std::io::stdio::_print(&v9);
            return 134;
        }
    }
}
