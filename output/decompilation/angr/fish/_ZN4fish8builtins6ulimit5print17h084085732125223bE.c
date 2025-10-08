void fish::builtins::ulimit::print(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    void* v5;  // [bp-0x58]
    unsigned long long v6[3];  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx

    if (((char)fish::builtins::ulimit::get(a0, a1) & 1))
    {
        if (v11 != -1)
        {
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v7 = "%";
            v8 = 4;
            *(v6) = 0x8000000000000000;
            v12 = v6.localize();
            v13 = fish::builtins::ulimit::get_multiplier(a0);
            if (!v13)
                core::panicking::panic_const::panic_const_div_by_zero(&g_14d5020); /* do not return */
            v0 = 4;
            *((int *)&v1) = (!v11 >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v11) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v11) / (v13 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v11) % v13) CONCAT (unsigned long long)((0 CONCAT v11) / v13));
            fish_printf::printf_impl::sprintf_locale(&v9, &v3, v12, v11, ".", &v0, 1);
            v9.unwrap(&g_14d5038);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
            memcpy(&v0, &v3, 16);
            v2 = 0;
            a2.append(&v0);
            return;
        }
        v1 = "u";
        v2 = 10;
        v0 = 0x8000000000000000;
        a2.append(v0.localize(), a2);
    }
    else
    {
        v1 = "e";
        v2 = 6;
        v0 = 0x8000000000000000;
        a2.append(v0.localize(), a2);
    }
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    return;
}
