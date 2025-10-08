long long fish::builtins::ulimit::set_limit(unsigned int a0, char a1, char a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    unsigned long long v11;  // 4096
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rsi
    unsigned long long v17;  // 4096
    unsigned int v18;  // eax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    fish::builtins::ulimit::getrlimit(&v0, a0);
    if (*((int *)&v0) != 1)
        return 4294967297;
    v11 = a3;
    if (!a1)
        v11 = v2;
    v12 = v11;
    if (a2)
    {
        if (a3 > v12)
            v13 = v12;
        else
            v13 = a3;
        v14 = v13;
        if (a3 == -1)
            v15 = v12;
        else
            v15 = v14;
        v16 = v15;
        if (v12 == -1)
            v17 = a3;
        else
            v17 = v16;
        v18 = fish::builtins::ulimit::setrlimit(a0, v17, v12);
        if (v18 == 1)
            goto LABEL_13874a9;
    }
    else
    {
        v18 = fish::builtins::ulimit::setrlimit(a0, v1, v12);
        if (v18 == 1)
        {
LABEL_13874a9:
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v7 = "u";
            v8 = 63;
            v6 = 0x8000000000000000;
            v19 = v6.localize();
            v0 = 1;
            v1 = fish::builtins::ulimit::get_desc(a0);
            v2 = v20;
            fish_printf::printf_impl::sprintf_locale(&v9, &v3, v19, v20, ".", &v0, 1);
            v9.unwrap(&g_14d50b0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
            memcpy(&v0, &v3, 16);
            v2 = 0;
            a4->field_10.append(&v0);
            return 4294967297;
        }
    }
    if (v18 != 134)
    {
        fish::builtins::shared::builtin_wperror("u", 6, a4);
        return 4294967297;
    }
    return 0x100000000;
}
