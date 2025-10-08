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
    char *v16;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v17;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v18;  // [bp-0xc0]
    char v19;  // [bp-0xa8]
    char v20;  // [bp-0x90]
    unsigned long v22;  // rbx
    unsigned long long v23;  // r13
    unsigned int v24;  // ebp
    unsigned long long v26;  // rdi
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax

    v22 = a3;
    v23 = v22 & 4294967295;
    v24 = vvar_94{reg 56} & 0xffffff00 | 1;
    if ((char)v23 == 2)
    {
        std::fs::symlink_metadata(&v14, a0, a1);
        v11 = v14;
        v26 = 2;
        if (v14 != 2)
        {
            if ((0xf000 & *((int *)&v19)) == 0xa000)
            {
                v7 = uucore::util_name();
                v8 = v27;
                v0 = &v7;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &g_4ea4a0;
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
                v2 = &g_4ea610;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                v2 = &g_4ea630;
                v3 = 1;
                v4 = 8;
                *((uint128_t *)&v5) = 0;
                std::io::stdio::_eprint(&v2);
                v2 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v28 = v2.flush();
                if (v28)
                {
                    v29 = uu_rm::prompt_file::{{closure}}(v28);
                    if (v29)
                    {
                        v12 = v29;
                        v13 = &g_4ea7a8;
                        uucore::mods::error::set_exit_code((unsigned int)v29.code());
                        v0 = uucore::util_name();
                        v1 = v27;
                        v7 = &v0;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v9 = &v12;
                        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v2 = &g_4ea640;
                        v3 = 3;
                        v6 = 0;
                        v4 = &v7;
                        v5 = 2;
                        std::io::stdio::_eprint(&v2);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_4ea7a8);
                    }
                }
                v24 = uucore::read_yes();
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v11, v15);
                return v24;
            }
            v26 = v11;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v26, v15);
    }
    else if (!(unsigned int)v23)
    {
        return vvar_94{reg 56} & 0xffffff00 | 1;
    }
    std::fs::metadata(&v14, a0, a1);
    if (v14 == 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v15);
        return v24;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v14, v15);
    if ((char)v22 != 2 || !(char)uu_rm::is_writable(a0, a1))
        return uu_rm::prompt_file_permission_readonly(a0, a1, a2, v23 & 4294967295);
    if (*((long long *)&v20))
    {
        v2 = uucore::util_name();
        v3 = v33;
        v7 = &v2;
        v8 = <&T as core::fmt::Display>::fmt;
        v14 = &g_4ea4a0;
        v15 = 2;
        v18 = 0;
        v16 = &v7;
        v17 = 1;
        std::io::stdio::_eprint(&v14);
        v2 = 1;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v7 = &v2;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_4ea690;
        v15 = 2;
        v18 = 0;
        v16 = &v7;
        v17 = 1;
        std::io::stdio::_eprint(&v14);
        v14 = &g_4ea630;
        v15 = 1;
        v16 = 8;
        *((uint128_t *)&v17) = 0;
        std::io::stdio::_eprint(&v14);
        v14 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v34 = v14.flush();
        if (!v34)
            return (unsigned int)uucore::read_yes();
        v35 = uu_rm::prompt_file::{{closure}}(v34);
        if (!v35)
            return (unsigned int)uucore::read_yes();
        v0 = v35;
        v1 = &g_4ea7a8;
        uucore::mods::error::set_exit_code((unsigned int)v35.code());
        v7 = uucore::util_name();
        v8 = v33;
        v2 = &v7;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v0;
        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v14 = &g_4ea640;
        v15 = 3;
        v18 = 0;
        v16 = &v2;
        v17 = 2;
        std::io::stdio::_eprint(&v14);
        goto LABEL_45e09b;
    }
    else
    {
        v2 = uucore::util_name();
        v3 = v37;
        v7 = &v2;
        v8 = <&T as core::fmt::Display>::fmt;
        v14 = &g_4ea4a0;
        v15 = 2;
        v18 = 0;
        v16 = &v7;
        v17 = 1;
        std::io::stdio::_eprint(&v14);
        v2 = 1;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v7 = &v2;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &g_4ea670;
        v15 = 2;
        v18 = 0;
        v16 = &v7;
        v17 = 1;
        std::io::stdio::_eprint(&v14);
        v14 = &g_4ea630;
        v15 = 1;
        v16 = 8;
        *((uint128_t *)&v17) = 0;
        std::io::stdio::_eprint(&v14);
        v14 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v38 = v14.flush();
        if (!v38)
            return (unsigned int)uucore::read_yes();
        v39 = uu_rm::prompt_file::{{closure}}(v38);
        if (v39)
        {
            v0 = v39;
            v1 = &g_4ea7a8;
            uucore::mods::error::set_exit_code((unsigned int)v39.code());
            v7 = uucore::util_name();
            v8 = v37;
            v2 = &v7;
            v3 = <&T as core::fmt::Display>::fmt;
            v4 = &v0;
            v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v14 = &g_4ea640;
            v15 = 3;
            v18 = 0;
            v16 = &v2;
            v17 = 2;
            std::io::stdio::_eprint(&v14);
LABEL_45e09b:
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_4ea7a8);
        }
        return (unsigned int)uucore::read_yes();
    }
    return uu_rm::prompt_file_permission_readonly(a0, a1, a2, v23 & 4294967295);
}
