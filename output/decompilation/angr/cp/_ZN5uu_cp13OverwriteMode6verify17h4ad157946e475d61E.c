long long uu_cp::OverwriteMode::verify(struct_1 *a0, char a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char *v0;  // [bp-0x1b8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x1b0]
    char *v2;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x1a0], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x198], Other Possible Types: void*, unsigned long long
    unsigned long long v5;  // [bp-0x190]
    int v6;  // [bp-0x188], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [bp-0x180]
    char *v8;  // [bp-0x178], Other Possible Types: unsigned long long
    char v9;  // [bp-0x170], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x160]
    int v12;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x150]
    unsigned long long v14;  // [bp-0x148]
    char *v15;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x130]
    unsigned long long v17;  // [bp-0x128]
    char v18;  // [bp-0x120]
    unsigned long long v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    int v21;  // [bp-0x108], Other Possible Types: char
    unsigned long long v22;  // [bp-0xf8]
    int v23;  // [bp-0xf0]
    unsigned long long v24;  // [bp-0xe0]
    int v25;  // [bp-0xd8]
    unsigned long long v26;  // [bp-0xc8]
    int v27;  // [bp-0xb8]
    unsigned long long v28;  // [bp-0xa8]
    int v29;  // [bp-0x98]
    unsigned long long v30;  // [bp-0x88]
    char v31;  // [bp-0x80]
    unsigned long long v32;  // [bp-0x70]
    int v33;  // [bp-0x68]
    unsigned long long v34;  // [bp-0x58]
    char v35;  // [bp-0x50]
    unsigned long long v36;  // [bp-0x40]
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    char v42;  // al
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    char v48;  // al

    if (!a1)
    {
        a0->field_0 = 9223372036854775820;
        return 9223372036854775820;
    }
    else if (a1 == 1)
    {
        uu_cp::file_mode_for_interactive_overwrite(&v21, a2, a3);
        if (*((long long *)&v21) == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<(alloc::string::String,alloc::string::String)>>(&v21);
            v21.to_vec("pathzeroAnsi -- ", 4);
            v6 = 1;
            v7 = a2;
            v8 = a3;
            v9 = 1;
            v0.spec_to_string(&v6);
            v34 = v22;
            v33 = v21;
            memcpy(&v35, &v0, 16);
            v36 = v2;
            v0.from_iter(&v33);
            uucore::mods::locale::get_message_with_args(&v21, "cp-prompt-overwriteinvalid file namecp-error-cannot-create-symlinkcp-error-backing-up-destroy-sourcecp-error-same-filecannot stat ", 19, &v0);
            v6 = uucore::util_name();
            v7 = v38;
            v15 = &v6;
            v16 = <&T as core::fmt::Display>::fmt;
            v0 = &g_5fb720;
            v1 = 2;
            v4 = 0;
            v2 = &v15;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v6 = &v21;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_4390f0;
            v1 = 1;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_5fb7d0;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v39 = v0.flush();
            if (v39)
            {
                v40 = uu_cp::OverwriteMode::verify::{{closure}}(v39);
                if (v40)
                {
                    v12 = v40;
                    v13 = &g_5fb990;
                    uucore::mods::error::set_exit_code((unsigned int)v40.code());
                    v15 = uucore::util_name();
                    v16 = v38;
                    v6 = &v15;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v12;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_5fb7e0;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    ::0x4d3530::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_5fb990);
                }
            }
            v42 = uucore::read_yes();
            v43 = (unsigned long long)::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v21);
            if (!v42)
            {
                a0->field_0 = 9223372036854775815;
                a0->field_8 = 1;
                return v43;
            }
        }
        else
        {
            v26 = v22;
            v25 = v21;
            v28 = v24;
            v27 = v23;
            (char)v0.to_vec("pathzeroAnsi -- ", 4);
            v14 = v2;
            *((int128_t *)&v12) = *((int128_t *)&v0);
            v15 = 1;
            v16 = a2;
            v17 = a3;
            v18 = 1;
            (char)v6.spec_to_string(&v15);
            v2 = v14;
            memcpy(&(char)v3, &(char)v6, 16);
            v5 = v8;
            *((int128_t *)&v6) = (int128_t)v12;
            v8 = v2;
            v9 = v3;
            v10 = v4;
            v11 = v5;
            (char)v0.from_iter(&(char)v6);
            uucore::mods::locale::get_message_with_args(&(char)v12, "cp-prompt-overwrite-with-modecp-prompt-overwriteinvalid file namecp-error-cannot-create-symlinkcp-error-backing-up-destroy-sourcecp-error-same-filecannot stat ", 29, &(char)v0);
            v6 = uucore::util_name();
            v7 = v44;
            v15 = &v6;
            v16 = <&T as core::fmt::Display>::fmt;
            v0 = &g_5fb720;
            v1 = 2;
            v4 = 0;
            v2 = &v15;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &(char)v12;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &v25;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &v27;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &g_5fb790;
            v7 = 4;
            v10 = 0;
            v8 = &v0;
            v9 = 3;
            std::io::stdio::_eprint(&v6);
            v0 = &g_5fb7d0;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v45 = v0.flush();
            if (v45)
            {
                v46 = uu_cp::OverwriteMode::verify::{{closure}}(v45);
                if (v46)
                {
                    v19 = v46;
                    v20 = &g_5fb990;
                    uucore::mods::error::set_exit_code((unsigned int)v46.code());
                    v15 = uucore::util_name();
                    v16 = v44;
                    v6 = &v15;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &v19;
                    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_5fb7e0;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    ::0x4d3530::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v19, &g_5fb990);
                }
            }
            v48 = uucore::read_yes();
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v12);
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v27);
            v43 = (unsigned long long)::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v25);
            if (!v48)
            {
                a0->field_0 = 9223372036854775815;
                a0->field_8 = 1;
                return v43;
            }
        }
        a0->field_0 = 9223372036854775820;
        return v43;
    }
    else
    {
        if (a4)
        {
            (char)v21.to_vec("pathzeroAnsi -- ", 4);
            v6 = 1;
            v7 = a2;
            v8 = a3;
            v9 = 1;
            (char)v0.spec_to_string(&v6);
            v30 = v22;
            v29 = v21;
            memcpy(&v31, &(char)v0, 16);
            v32 = v2;
            (char)v0.from_iter(&v29);
            uucore::mods::locale::get_message_with_args(&(char)v21, "cp-debug-skippedArgumentConflictCapacityOverflowrange end index ", 16, &(char)v0);
            v15 = &(char)v21;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_5fb580;
            v1 = 2;
            v4 = 0;
            v2 = &v15;
            v3 = 1;
            std::io::stdio::_print(&v0);
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
        }
        a0->field_0 = 9223372036854775815;
        a0->field_8 = 0;
        return 9223372036854775815;
    }
}
