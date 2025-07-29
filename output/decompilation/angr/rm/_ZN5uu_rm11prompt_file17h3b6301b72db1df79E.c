long long uu_rm::prompt_file(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    char *v0;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x150]
    char *v2;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x140]
    char *v4;  // [bp-0x138], Other Possible Types: unsigned long long
    int v5;  // [bp-0x130], Other Possible Types: char, unsigned long long
    void* v6;  // [bp-0x128]
    char *v7;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x110]
    char *v9;  // [bp-0x108], Other Possible Types: unsigned long long
    char v10;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xf8]
    unsigned long long v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    char v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd8]
    char *v17;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v18;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v19;  // [bp-0xc0]
    char v20;  // [bp-0xa8]
    char v21;  // [bp-0x90]
    unsigned long v23;  // rbx
    unsigned int v24;  // ebp
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax

    v23 = a3;
    v24 = vvar_97{reg 56} & 0xffffff00 | 1;
    if (!(char)v23)
        return vvar_97{reg 56} & 0xffffff00 | 1;
    if ((unsigned int)v23 == 2)
    {
        std::fs::symlink_metadata(&v14, a0, a1);
        v11 = v14;
        if (v14 == 2)
        {
            v11 = 2;
            v16 = v15;
        }
        else
        {
            if ((0xf000 & *((int *)&v20)) == 0xa000)
            {
                v7 = uucore::util_name();
                v8 = v25;
                v0 = &v7;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &g_57d6d0;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                v7 = 1;
                v8 = a0;
                v9 = a1;
                v10 = 1;
                v0 = &v7;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v2 = &g_57d760;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                v2 = &g_57d780;
                v3 = 1;
                v4 = 8;
                *((uint128_t *)&v5) = 0;
                std::io::stdio::_eprint(&v2);
                v2 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
                v26 = v2.flush();
                if (v26)
                {
                    v27 = uu_rm::prompt_file::{{closure}}(v26);
                    if (v27)
                    {
                        v12 = v27;
                        v13 = &g_57d910;
                        uucore::mods::error::set_exit_code((unsigned int)v27.code());
                        v0 = uucore::util_name();
                        v1 = v25;
                        v7 = &v0;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v9 = &v12;
                        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v2 = &g_57d790;
                        v3 = 3;
                        v6 = 0;
                        v4 = &v7;
                        v5 = 2;
                        std::io::stdio::_eprint(&v2);
                        ::0x49f290::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_57d910);
                    }
                }
                v24 = uucore::read_yes();
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v11, v16);
                return v24;
            }
            v16 = v15;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v11, v15);
    }
    std::fs::metadata(&v14, a0, a1);
    if (v14 == 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v16);
        return v24;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v14, v16);
    if (!((char)v23 == 2 && (char)uu_rm::is_writable(a0, a1)))
        return uu_rm::prompt_file_permission_readonly(a0, a1, a2, v23 & 4294967295);
    if (*((long long *)&v21))
    {
        v2 = uucore::util_name();
        v3 = v29;
        v7 = &v2;
        v8 = <&T as core::fmt::Display>::fmt;
        v14 = &g_57d6d0;
        v15 = 2;
        v19 = 0;
        v17 = &v7;
        v18 = 1;
        std::io::stdio::_eprint(&v14);
        v2 = 1;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v7 = &v2;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_57d7e0;
        v15 = 2;
        v19 = 0;
        v17 = &v7;
        v18 = 1;
        std::io::stdio::_eprint(&v14);
        v14 = &g_57d780;
        v15 = 1;
        v17 = 8;
        *((uint128_t *)&v18) = 0;
        std::io::stdio::_eprint(&v14);
        v14 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
        v30 = v14.flush();
        if (!v30)
            return (unsigned int)uucore::read_yes();
        v31 = uu_rm::prompt_file::{{closure}}(v30);
        if (!v31)
            return (unsigned int)uucore::read_yes();
        v0 = v31;
        v1 = &g_57d910;
        uucore::mods::error::set_exit_code((unsigned int)v31.code());
        v7 = uucore::util_name();
        v8 = v29;
        v2 = &v7;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v0;
        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v14 = &g_57d790;
        v15 = 3;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        std::io::stdio::_eprint(&v14);
        goto LABEL_4a3242;
    }
    else
    {
        v2 = uucore::util_name();
        v3 = v33;
        v7 = &v2;
        v8 = <&T as core::fmt::Display>::fmt;
        v14 = &g_57d6d0;
        v15 = 2;
        v19 = 0;
        v17 = &v7;
        v18 = 1;
        std::io::stdio::_eprint(&v14);
        v2 = 1;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v7 = &v2;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_57d7c0;
        v15 = 2;
        v19 = 0;
        v17 = &v7;
        v18 = 1;
        std::io::stdio::_eprint(&v14);
        v14 = &g_57d780;
        v15 = 1;
        v17 = 8;
        *((uint128_t *)&v18) = 0;
        std::io::stdio::_eprint(&v14);
        v14 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
        v34 = v14.flush();
        if (!v34)
            return (unsigned int)uucore::read_yes();
        v35 = uu_rm::prompt_file::{{closure}}(v34);
        if (v35)
        {
            v0 = v35;
            v1 = &g_57d910;
            uucore::mods::error::set_exit_code((unsigned int)v35.code());
            v7 = uucore::util_name();
            v8 = v33;
            v2 = &v7;
            v3 = <&T as core::fmt::Display>::fmt;
            v4 = &v0;
            v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v14 = &g_57d790;
            v15 = 3;
            v19 = 0;
            v17 = &v2;
            v18 = 2;
            std::io::stdio::_eprint(&v14);
LABEL_4a3242:
            ::0x49f290::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_57d910);
        }
        return (unsigned int)uucore::read_yes();
    }
    return uu_rm::prompt_file_permission_readonly(a0, a1, a2, v23 & 4294967295);
}
