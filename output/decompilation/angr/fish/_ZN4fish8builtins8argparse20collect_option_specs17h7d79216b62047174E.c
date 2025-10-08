long long fish::builtins::argparse::collect_option_specs(void* a0, unsigned long long *a1, unsigned long a2, unsigned long long a3[2], unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0xc4]
    void* v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned long v10;  // [bp-0x60]
    unsigned long v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    unsigned long long v14;  // r13
    unsigned long v15;  // rbx
    unsigned long v16;  // r14
    unsigned long long v18;  // rdx
    unsigned long long v22;  // rdx

    v10 = a3[0];
    v11 = a3[1];
    v0 = 0xe000;
    v14 = *(a1);
    if (v14 != a2)
    {
        v15 = &a3[v14 + 1];
        do
        {
            if (v14 >= a4)
                core::panicking::panic_bounds_check(v14, a4, &g_14c6b58); /* do not return */
            v16 = *((long long *)(v15 - 8));
            if (v16.eq_by(v16 + *((long long *)v15) * 4))
            {
                *(a1) = v14 + 1;
                if (v0 < 0xf900)
                    return 0;
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v8 = "%";
                v9 = 32;
                v7 = 0x8000000000000000;
                v4 = 1;
                v5 = v10;
                v6 = v11;
                fish_printf::printf_impl::sprintf_locale(&v12, &v1, v7.localize(), v18, ".", &v4, 1);
                v12.unwrap(&g_14c6b70);
                goto LABEL_13396aa;
            }
            if (!(char)fish::builtins::argparse::parse_option_spec(a0, v16, *((long long *)v15), (unsigned int)&v0, a5))
                return 4294967297;
            v14 += 1;
            *(a1) = v14;
            v15 += 16;
        } while (a2 != v14);
        goto LABEL_13396aa;
    }
    v1 = 0;
    v2 = 4;
    v3 = 0;
    v8 = "%";
    v9 = 26;
    v7 = 0x8000000000000000;
    v4 = 1;
    v5 = v10;
    v6 = v11;
    fish_printf::printf_impl::sprintf_locale(&v12, &v1, v7.localize(), v22, ".", &v4, 1);
    v12.unwrap(&g_14c6b88);
LABEL_13396aa:
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
    memcpy(&v4, &v1, 16);
    v6 = 0;
    a5.append(&v4);
    return 8589934593;
}
