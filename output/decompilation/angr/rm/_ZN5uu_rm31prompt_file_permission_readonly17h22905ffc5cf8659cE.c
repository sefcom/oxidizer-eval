long long uu_rm::prompt_file_permission_readonly(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    char *v2;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x108]
    char *v4;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xf8]
    char *v6;  // [sp-0xf0], Other Possible Types: unsigned long long
    char v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [sp-0xd8]
    unsigned long long v11;  // [bp-0xd8]
    char *v12;  // [sp-0xd0], Other Possible Types: unsigned long long
    int v13;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v14;  // [bp-0xc0]
    char v15;  // [bp-0x90]
    unsigned long v17;  // rbp
    char v18;  // r13b
    unsigned int v19;  // ebp
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v17 = a3;
    if (a2 != 2)
    {
        v18 = 1;
        if ((a2 & 1))
            goto LABEL_45e154;
    }
    std::io::stdio::stdin();
    std::sys::io::is_terminal::isatty::is_terminal();
LABEL_45e154:
    std::fs::metadata(&v8, a0, a1);
    v19 = (unsigned int)v17 & 0xffffff00 | 1;
    if (((v18 ^ 1) & (char)v17 == 3))
    {
        v9.drop_in_place<(bool,core::result::Result<std::fs::Metadata,std::io::error::Error>,uu_rm::InteractiveMode)>(v10);
        return v19;
    }
    if (v9 != 2)
    {
        if ((char)uu_rm::is_writable(a0, a1))
        {
            v9.drop_in_place<(bool,core::result::Result<std::fs::Metadata,std::io::error::Error>,uu_rm::InteractiveMode)>(v10);
            return v19;
        }
        if (*((long long *)&v15))
            goto LABEL_45e1af;
        v4 = uucore::util_name();
        v5 = v20;
        v2 = &v4;
        v3 = <&T as core::fmt::Display>::fmt;
        v8 = &g_4ea4a0;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint(&v8);
        v4 = 1;
        v5 = a0;
        v6 = a1;
        v7 = 1;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &g_4ea6b0;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint(&v8);
        v8 = &g_4ea630;
        v11 = 1;
        v12 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_eprint(&v8);
        v8 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v21 = v8.flush();
        if (v21)
        {
            v22 = uu_rm::prompt_file::{{closure}}(v21);
            if (v22)
            {
                v0 = v22;
                v1 = &g_4ea7a8;
                uucore::mods::error::set_exit_code((unsigned int)v22.code());
                v2 = uucore::util_name();
                v3 = v20;
                v4 = &v2;
                v5 = <&T as core::fmt::Display>::fmt;
                v6 = &v0;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v8 = &g_4ea640;
                v11 = 3;
                v14 = 0;
                v12 = &v4;
                v13 = 2;
                std::io::stdio::_eprint(&v8);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_4ea7a8);
            }
        }
        v19 = uucore::read_yes();
    }
    else
    {
LABEL_45e1af:
        v4 = uucore::util_name();
        v5 = v24;
        v2 = &v4;
        v3 = <&T as core::fmt::Display>::fmt;
        v8 = &g_4ea4a0;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint(&v8);
        v4 = 1;
        v5 = a0;
        v6 = a1;
        v7 = 1;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &g_4ea6d0;
        v11 = 2;
        v14 = 0;
        v12 = &v2;
        v13 = 1;
        std::io::stdio::_eprint(&v8);
        v8 = &g_4ea630;
        v11 = 1;
        v12 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_eprint(&v8);
        v8 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v25 = v8.flush();
        if (v25)
        {
            v26 = uu_rm::prompt_file::{{closure}}(v25);
            if (v26)
            {
                v0 = v26;
                v1 = &g_4ea7a8;
                uucore::mods::error::set_exit_code((unsigned int)v26.code());
                v2 = uucore::util_name();
                v3 = v24;
                v4 = &v2;
                v5 = <&T as core::fmt::Display>::fmt;
                v6 = &v0;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v8 = &g_4ea640;
                v11 = 3;
                v14 = 0;
                v12 = &v4;
                v13 = 2;
                std::io::stdio::_eprint(&v8);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_4ea7a8);
            }
        }
        v19 = uucore::read_yes();
    }
    v9.drop_in_place<(bool,core::result::Result<std::fs::Metadata,std::io::error::Error>,uu_rm::InteractiveMode)>(v10);
    return v19;
}
