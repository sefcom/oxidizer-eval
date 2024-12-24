long long uu_env::string_parser::StringParser::peek_char_at_pointer::h0f529762b1b3adfe(struct_0 *a0, unsigned long long a1[5], unsigned long long a2)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    int v3;  // [sp-0x48]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
    unsigned long long v9;  // rax
    char v10;  // al

    if (a1[1] < a2)
    {
        v0 = &g_5496c0;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h1b747a50f8aaca69(&v4, a1[0], a1[1], a2);
    if (!*((long long *)&v6))
    {
        *((unsigned long long *)&a0->field_0) = a1[4];
        v10 = 0;
    }
    else
    {
        v9 = uu_env::native_int_str::get_char_from_native_int::hc06acdcf4747b3dd(*((char *)*((long long *)&v5)));
        if ((unsigned int)v9 == 0x110000)
            a0->field_0 = 65533;
        else
            a0->field_0 = v9;
        v10 = v9 | -0x100 | 2;
    }
    a0->field_8 = v10;
    return a0;
}
