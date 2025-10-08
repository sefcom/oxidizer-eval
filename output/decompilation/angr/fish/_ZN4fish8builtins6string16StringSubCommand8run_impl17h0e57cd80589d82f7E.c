long long fish::builtins::string::StringSubCommand::run_impl(unsigned long long a0, unsigned long long a1, struct_0 *a2, void* a3, unsigned long a4)
{
    char v0;  // [bp-0x88]
    int v1;  // [bp-0x80], Other Possible Types: char
    void* v2;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x60], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r15
    unsigned long v11;  // r12
    unsigned long long v12;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    if (a4 >= 3)
    {
        v9 = (long long)a3[32];
        v10 = (long long)a3[40] * 4 + v9;
        if (v9.eq_by(v10, "-h--help", "--help") || v9.eq_by(v10, "--help", &g_a05752))
        {
            v0.to_vec(*((long long *)a3), (long long)a3[8]);
            v3.add(&v0, "-", 1);
            v0.add(&v3, (long long)a3[16], (long long)a3[24]);
            fish::builtins::shared::builtin_print_help(a1, a2, *((long long *)&v1), v2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            return 0;
        }
    }
    v11 = a4 - 1;
    v0.parse_opts(a0, a3 + 16, v11, a1, a2);
    if ((v0 & 1))
        return 1;
    v6 = *((long long *)&v1);
    if (!((v11 <= *((long long *)&v1) ^ 1) & a2->field_24))
        return a0.handle(a1, a2, &v6, a3 + 16, v11);
    v12 = a2->field_10;
    v12.append("s", 7);
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v13 = g_14c6510[0].localize();
    v0 = 1;
    *((int128_t *)&v1) = (int128_t)a3[16];
    fish_printf::printf_impl::sprintf_locale(&v7, &v3, v13, v14, ".", &v0, 1);
    v7.unwrap(&g_14d42e0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
    memcpy(&v0, &v3, 16);
    v2 = 0;
    v12.append(&v0);
    return 1;
}
