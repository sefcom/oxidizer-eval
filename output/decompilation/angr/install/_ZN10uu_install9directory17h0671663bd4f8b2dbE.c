long long uu_install::directory(unsigned long a0, unsigned long a1, struct_0 *a2)
{
    char v0;  // [bp-0x151]
    char *v1;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x148]
    unsigned int v3;  // [bp-0x13c]
    char *v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x130]
    char *v6;  // [bp-0x128], Other Possible Types: unsigned long long
    char v7;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    unsigned long long v15;  // [bp-0xd8]
    char *v16;  // [bp-0xd0]
    unsigned long long v17;  // [bp-0xc8]
    void* v18;  // [bp-0xc0]
    void* v20;  // r12
    unsigned long v21;  // r15
    unsigned long v22;  // rbx
    unsigned long long v23;  // r13
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long v29;  // rdx, Other Possible Types: unsigned long long

    if (!a1)
    {
        v14 = 1;
        return v14.new();
    }
    v3 = 493;
    if ((a2->field_48 & 1))
        v3 = a2->field_4c;
    v0 = a2->field_61;
    v13 = a1 * 24;
    v20 = 0;
    do
    {
        v21 = *((long long *)(8 + a0 + (char *)v20));
        v22 = *((long long *)(16 + a0 + (char *)v20));
        std::fs::metadata(&v14, v21, v22);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v14);
        if ((int)v14 == 2)
        {
            uucore::features::fs::dir_strip_dot_for_creation(&v10, v21, v22);
            v23 = v11;
            v24 = v12;
            v25 = std::fs::create_dir_all(v23, v24).map_err_context(v23, v24);
            if (v25)
            {
                v8 = v25;
                v9 = &g_501e30;
                uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
                v1 = uucore::util_name();
                v2 = v29;
                v4 = &v1;
                v5 = <&T as core::fmt::Display>::fmt;
                v6 = &v8;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v14 = &g_5022c0;
                v15 = 3;
                v18 = 0;
                v16 = &v4;
                v17 = 2;
                std::io::stdio::_eprint(&v14);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v8, &g_501e30);
                core::ptr::drop_in_place<std::path::PathBuf>(&v10);
                continue;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, &g_501e30);
                if ((v0 & 1))
                {
                    v4 = 1;
                    v5 = v23;
                    v6 = v24;
                    v7 = 1;
                    v1 = &v4;
                    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v14 = &g_5022f0;
                    v15 = 2;
                    v18 = 0;
                    v16 = &v1;
                    v17 = 1;
                    std::io::stdio::_print(&v14);
                }
                core::ptr::drop_in_place<std::path::PathBuf>(&v10);
            }
        }
        if (uu_install::mode::chmod(v21, v22, v3))
        {
            uucore::mods::error::set_exit_code(1);
        }
        else
        {
            v27 = uu_install::chown_optional_user_group(v21, v22, a2);
            if (v27)
            {
                v1 = v27;
                v2 = &g_502208;
                uucore::mods::error::set_exit_code((unsigned int)v27.code());
                v10 = uucore::util_name();
                v11 = v29;
                v4 = &v10;
                v5 = <&T as core::fmt::Display>::fmt;
                v6 = &v1;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v14 = &g_5022c0;
                v15 = 3;
                v18 = 0;
                v16 = &v4;
                v17 = 2;
                std::io::stdio::_eprint(&v14);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, &g_502208);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, &g_502208);
            }
        }
        v20 += 24;
    } while (v13 != v20);
    return 0;
}
