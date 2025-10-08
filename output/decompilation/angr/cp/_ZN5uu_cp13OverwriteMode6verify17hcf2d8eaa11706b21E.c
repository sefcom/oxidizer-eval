long long uu_cp::OverwriteMode::verify(struct_0 *a0, char a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char *v0;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x120]
    char *v2;  // [bp-0x118], Other Possible Types: unsigned long long
    int v3;  // [bp-0x110], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x108], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x100]
    char *v6;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xf0]
    char *v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v9;  // [sp-0xe0], Other Possible Types: unsigned long long
    void* v10;  // [bp-0xd8]
    char *v11;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xc0]
    unsigned long long v13;  // [bp-0xb8]
    char v14;  // [bp-0xb0]
    unsigned long long v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    char *v17;  // [bp-0x98], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    int v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    int v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    char v36;  // al

    if (!a1)
    {
        a0->field_0 = 9223372036854775820;
        return 9223372036854775820;
    }
    else if (a1 == 1)
    {
        uu_cp::file_mode_for_interactive_overwrite(&v17, a2, a3);
        if (v17 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<(alloc::string::String,alloc::string::String)>>(&v17);
            v6 = uucore::util_name();
            v7 = v27;
            v17 = &v6;
            v18 = <&T as core::fmt::Display>::fmt;
            v0 = &g_55e700;
            v1 = 2;
            v4 = 0;
            v2 = &v17;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v6 = 1;
            v7 = a2;
            v8 = a3;
            v9 = 1;
            v17 = &v6;
            v18 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_55eb78;
            v1 = 2;
            v4 = 0;
            v2 = &v17;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_55eb68;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v28 = v0.flush();
            if (v28)
            {
                v29 = uu_cp::OverwriteMode::verify::{{closure}}(v28);
                if (v29)
                {
                    v11 = v29;
                    v12 = &g_55eec0;
                    uucore::mods::error::set_exit_code((unsigned int)v29.code());
                    v17 = uucore::util_name();
                    v18 = v27;
                    v6 = &v17;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v11;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_55e660;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v11, &g_55eec0);
                }
            }
            v31 = uucore::read_yes();
            if (!(char)v31)
            {
                a0->field_0 = 9223372036854775815;
                a0->field_8 = 1;
                return v31;
            }
        }
        else
        {
            v23 = v19;
            memcpy(&v22, &v17, 16);
            v25 = v21;
            v24 = v20;
            v6 = uucore::util_name();
            v7 = v32;
            v11 = &v6;
            v12 = <&T as core::fmt::Display>::fmt;
            v0 = &g_55e700;
            v1 = 2;
            v4 = 0;
            v2 = &v11;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v11 = 1;
            v12 = a2;
            v13 = a3;
            v14 = 1;
            v0 = &v11;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = &v22;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &v24;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &g_55eb28;
            v7 = 4;
            v10 = 0;
            v8 = &v0;
            v9 = 3;
            std::io::stdio::_eprint(&v6);
            v0 = &g_55eb68;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v33 = v0.flush();
            if (v33)
            {
                v34 = uu_cp::OverwriteMode::verify::{{closure}}(v33);
                if (v34)
                {
                    v15 = v34;
                    v16 = &g_55eec0;
                    uucore::mods::error::set_exit_code((unsigned int)v34.code());
                    v11 = uucore::util_name();
                    v12 = v32;
                    v6 = &v11;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v15;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_55e660;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v15, &g_55eec0);
                }
            }
            v36 = uucore::read_yes();
            core::ptr::drop_in_place<alloc::string::String>(&v24);
            v31 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v22);
            if (!v36)
            {
                a0->field_0 = 9223372036854775815;
                a0->field_8 = 1;
                return v31;
            }
        }
        a0->field_0 = 9223372036854775820;
        return v31;
    }
    else
    {
        if (a4)
        {
            v6 = 1;
            v7 = a2;
            v8 = a3;
            v9 = 1;
            v17 = &v6;
            v18 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_55eb08;
            v1 = 2;
            v4 = 0;
            v2 = &v17;
            v3 = 1;
            std::io::stdio::_print(&v0);
        }
        a0->field_0 = 9223372036854775815;
        a0->field_8 = 0;
        return 9223372036854775815;
    }
}
