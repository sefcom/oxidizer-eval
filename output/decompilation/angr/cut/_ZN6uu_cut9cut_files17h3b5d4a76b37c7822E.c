void uu_cut::cut_files(struct_4 *a0, unsigned long long a1[10])
{
    int v0;  // [bp-0x108], Other Possible Types: char *, unsigned long long
    char *v1;  // [bp-0x108]
    int v2;  // [bp-0x100], Other Possible Types: struct_1 *
    char *v3;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xe8], Other Possible Types: unsigned long long
    struct_1 *v6;  // [bp-0xe0]
    char v7;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xc8]
    char *v9;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xb8]
    void* v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa0]
    struct_3 *v13;  // [bp-0x98]
    char *v14;  // [bp-0x90], Other Possible Types: unsigned long long
    struct_1 *v15;  // [bp-0x88], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long v18;  // [bp-0x70]
    unsigned long v19;  // [bp-0x68]
    unsigned long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    struct_1 *v23;  // [bp-0x40]
    unsigned long v24;  // [bp-0x38]
    unsigned long long v26;  // rax
    struct_3 *v27;  // rcx
    struct_1 *v29;  // rdx
    struct_2 *v30;  // rax
    struct_2 *v31;  // r14
    char v32;  // r12b
    char *v33;  // rax
    struct_1 *v34;  // rdx
    struct_1 *v37;  // rdx
    unsigned long long v39;  // rax

    if (!a0->field_10)
    {
        v7.to_vec();
        v3 = v9;
        *((int128_t *)&v0) = *((int128_t *)&v7);
        a0.push(&(char)v0);
    }
    v7 = std::io::stdio::stdout();
    if (std::sys::pal::unix::io::is_terminal())
    {
        v26 = std::io::stdio::stdout().new();
        v27 = &g_58be48.padding_0[0];
    }
    else
    {
        v7.with_capacity(0x2000, std::io::stdio::stdout());
        v26 = v7.new();
        v27 = &g_58bdf8.padding_0[0];
    }
    v12 = v26;
    v13 = v27;
    v22 = a0.into_iter();
    v23 = v29;
    v30 = v22.next();
    if (v30)
    {
        v31 = v30;
        v24 = a1[0];
        v20 = a1[8];
        v19 = &a1[1];
        v18 = a1[9];
        do
        {
            if ((char)*((long long *)&v31->field_8).equal(*((long long *)&v31[1].padding_0[7]), "-: \ncut-error-is-directorywhitespace-delimiteddelimiter''cut-error-delimiter-must-be-single-character", 1) && !(v32 & 1))
            {
                if (v24 <= 1)
                {
                    v33 = uu_cut::cut_bytes(std::io::stdio::stdin(), &v12, v20, v18, v19);
                    v34 = &g_58bcf8.padding_0[0];
                }
                else
                {
                    v33 = uu_cut::cut_fields(std::io::stdio::stdin(), &v12, v20, v18, v19);
                }
                if (v33)
                {
                    v5 = v33;
                    v6 = v34;
                    uucore::mods::error::set_exit_code(v34->field_58(v33));
                    v14 = uucore::util_name();
                    v15 = v29;
                    v1 = &v14;
                    v37 = &<&T as core::fmt::Display>::fmt;
                    v3 = &v5;
                    v4 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v7 = &g_58bd90;
                    v8 = 3;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 2;
                    std::io::stdio::_eprint(&v7);
                    ::0x4ab570::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, v6);
                    v32 = 1;
                    goto LABEL_4adf0a;
                }
                else
                {
                    v32 = 1;
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v34);
                    goto LABEL_4adf0a;
                }
            }
            if ((char)*((long long *)&v31->field_8).is_dir(*((long long *)&v31[1].padding_0[7])))
            {
                v0 = uucore::util_name();
                v37 = v29;
                v14 = &v0;
                v15 = &<&T as core::fmt::Display>::fmt;
                v7 = &g_58bdc0;
                v8 = 2;
                v11 = 0;
                v9 = &v14;
                v10 = 1;
                std::io::stdio::_eprint(&v7);
                v1 = 0;
                *((int128_t *)&v2) = *((int128_t *)&v31->field_8);
                v4 = 0;
                uucore::mods::locale::get_message(&v5, "cut-error-is-directorywhitespace-delimiteddelimiter''cut-error-delimiter-must-be-single-character", 22);
                v14 = &v1;
                v15 = <os_display::Quoted as core::fmt::Display>::fmt;
                v16 = &v5;
                v17 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_58bd90;
                v8 = 3;
                v11 = 0;
                v9 = &v14;
                v10 = 2;
                std::io::stdio::_eprint(&v7);
                ::0x4ab750::core::ptr::drop_in_place<alloc::string::String>(&v5);
                uucore::mods::error::set_exit_code(1);
                continue;
            }
            v7.open(*((long long *)&v31->field_8), *((long long *)&v31[1].padding_0[7]));
            v1.map_err_context(&v7, v31);
            if (v1)
            {
                v0 = v1;
                goto LABEL_4ae1df;
            }
            else
            {
                v0 = uu_cut::cut_files::{{closure}}(a1, &v12, (int)v37);
                if (v0)
                {
LABEL_4ae1df:
                    v5 = v0;
                    v6 = v37;
                    uucore::mods::error::set_exit_code(v37->field_58(v0));
                    v14 = uucore::util_name();
                    v15 = v29;
                    v1 = &v14;
                    v37 = &<&T as core::fmt::Display>::fmt;
                    v3 = &v5;
                    v4 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v7 = &g_58bd90;
                    v8 = 3;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 2;
                    std::io::stdio::_eprint(&v7);
                    ::0x4ab570::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, v6);
                    continue;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v29);
                }
            }
LABEL_4adf0a:
            v31 = v22.next();
        } while (v31);
    }
    v39 = v13->field_30(v12).map_err_context();
    if (v39)
    {
        v5 = v39;
        v6 = v29;
        uucore::mods::error::set_exit_code(v29->field_58(v39));
        v14 = uucore::util_name();
        v15 = v29;
        v0 = &v14;
        v2 = &<&T as core::fmt::Display>::fmt;
        v3 = &v5;
        v4 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v7 = &g_58bd90;
        v8 = 3;
        v11 = 0;
        v9 = &v0;
        v10 = 2;
        std::io::stdio::_eprint(&v7);
        ::0x4ab570::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, v6);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v29);
    }
    ::0x4ab570::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, v13);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v21);
    return;
}
