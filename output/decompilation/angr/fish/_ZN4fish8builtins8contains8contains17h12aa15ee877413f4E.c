long long fish::builtins::contains::contains(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [bp-0x99]
    unsigned long long v1[2];  // [bp-0x98], Other Possible Types: char
    char v2;  // [bp-0x97]
    unsigned int v3;  // [bp-0x94]
    unsigned long long v4;  // [bp-0x90], Other Possible Types: unsigned long
    void* v5;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x80]
    void* v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    unsigned long long v10[3];  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rbx
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rax
    unsigned long long v19[2];  // rdx
    unsigned long long v20[2];  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c8c40); /* do not return */
    fish::builtins::contains::parse_options(&v1, a2, a3, a0, a1);
    if (v1 == 2)
    {
        v15 = v3 * 0x100000000;
        goto LABEL_13489c1;
    }
    else if ((v1 & 1))
    {
        fish::builtins::shared::builtin_print_help(a0, a1, a2[0], a2[1]);
        v15 = 0;
        v22 = 0;
    }
    else
    {
        if (v4 < a3)
        {
            v0 = v2;
            v15 = 0x100000000;
            v1[0] = &a2[v4];
            v4 = &a2[a3];
            v5 = 0;
            v6 = 1;
            v17 = 1;
            v6 = 0;
            v18 = v1.nth(v17);
            v20 = v19;
        }
        else
        {
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v11 = "%";
            v12 = 23;
            *(v10) = 0x8000000000000000;
            v23 = v10.localize();
            v1 = 1;
            v4 = a2[0];
            v5 = a2[1];
            fish_printf::printf_impl::sprintf_locale(&v13, &v7, v23, v24, ".", &v1, 1);
            v13.unwrap(&g_14c8c58);
            v15 = 0x100000000;
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v10);
            memcpy(&v1, &v7, 16);
            v5 = 0;
            a1[2].append(&v1);
        }
LABEL_13489c1:
        v22 = 1;
    }
    return v15 | v22;
}
