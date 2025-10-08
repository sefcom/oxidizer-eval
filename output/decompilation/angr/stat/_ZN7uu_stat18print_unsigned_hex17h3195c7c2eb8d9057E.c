void uu_stat::print_unsigned_hex(unsigned long long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4, unsigned long a5, char a6)
{
    unsigned long long v0;  // [bp-0xa0]
    char *v1;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88], Other Possible Types: unsigned long long
    int v4;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x78]
    unsigned short v6;  // [bp-0x70]
    char *v7;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x60]
    char *v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long v13;  // [bp-0x38]
    unsigned long v14;  // [bp-0x30]
    char v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x20]
    char v17;  // [bp-0x18]
    char *v18;  // rdi
    char *v19;  // rsi

    v0 = a0;
    *((int *)&v13) = (((char)a1 & 1) ? "0x: warning: backslash at end of format\nunrecognized escape '\\x'\nincomplete hex escape '\\x'\nunrecognized escape '\\'\n" : 1);
    v14 = ((unsigned int)a1 & 1) * 2;
    if (!a4 || a4 == 1)
    {
        v7 = &v13;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v0;
        v10 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
        v1 = &g_41cfd0;
        v2 = 2;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        v18 = &v15;
        v19 = &v1;
    }
    else if (a5 <= 65535)
    {
        v1 = &v13;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v0;
        v4 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
        v5 = 0;
        v6 = a5;
        v7 = &g_41cfd0;
        v8 = 2;
        v11 = &g_41d528;
        v12 = 2;
        v9 = &v1;
        v10 = 3;
        v18 = &v15;
        v19 = &v7;
    }
    else
    {
        v1 = &g_519960;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        core::panicking::panic_fmt(&v1, &g_519d18); /* do not return */
    }
    v18.map_or_else(v19);
    uu_stat::pad_and_print(v16, *((long long *)&v17), a2, a3, a6);
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    return;
}
