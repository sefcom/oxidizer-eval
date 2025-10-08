void uu_cut::cut_files(struct_3 *a0, unsigned long long a1[10])
{
    int v0;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    struct_5 *v1;  // [bp-0xf0]
    char *v2;  // [bp-0xe8], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    char *v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    struct_5 *v5;  // [bp-0xc8], Other Possible Types: struct_7 *, unsigned long long
    char *v6;  // [bp-0xc0], Other Possible Types: unsigned long long
    struct_5 *v7;  // [sp-0xb8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xa8]
    char *v10;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x98]
    void* v12;  // [sp-0x90]
    unsigned long long v13;  // [bp-0x80]
    struct_9 *v14;  // [bp-0x78]
    char *v15;  // [bp-0x70], Other Possible Types: unsigned long long
    struct_7 *v16;  // [bp-0x68], Other Possible Types: struct_5 *, unsigned long long
    unsigned long long v17;  // [bp-0x60]
    unsigned long v18;  // [bp-0x58]
    unsigned long v19;  // [bp-0x50]
    unsigned long v20;  // [bp-0x48]
    unsigned long v21;  // [bp-0x38]
    unsigned long long v23;  // rax
    struct_9 *v24;  // rcx
    struct_2 *v26;  // r12
    unsigned long long v27;  // rbx
    struct_2 *v28;  // rax
    char v29;  // r15b
    struct_1 *v30;  // r13
    unsigned long v31;  // r14
    struct_5 *v32;  // rdx
    unsigned long long v33;  // rax
    struct_7 *v34;  // rdx
    char *v36;  // rax
    struct_5 *v37;  // rdx
    struct_5 *v38;  // rdx

    if (!a0->field_10)
    {
        v8.to_vec("-: \n: Is a directory\ninvalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''", 1);
        v2 = v10;
        *((int128_t *)&v0) = *((int128_t *)&v8);
        a0.push(&(char)v0);
    }
    std::io::stdio::stdout();
    if (std::sys::io::is_terminal::isatty::is_terminal())
    {
        v23 = std::io::stdio::stdout().new();
        v24 = &g_4f9418.padding_0[0];
    }
    else
    {
        v8.with_capacity(std::io::stdio::stdout());
        v23 = v8.new();
        v24 = &g_4f93c8.padding_0[0];
    }
    v13 = v23;
    v14 = v24;
    if (a0->field_10)
    {
        v26 = a0->field_8;
        v27 = &v26[a0->field_10];
        v28 = v26 + 1;
        v21 = a1[0];
        v20 = a1[8];
        v19 = &a1[1];
        v18 = a1[9];
        while (true)
        {
LABEL_469b26:
            do
            {
                v26 = v28;
                v30 = v26->field_8;
                v31 = v26->field_10;
                if ((char)v30.equal(v31, "-: \n: Is a directory\ninvalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''", 1))
                {
                    if (!(v29 & 1))
                    {
                        if (v21 <= 1)
                        {
                            v33 = uu_cut::cut_bytes(std::io::stdio::stdin(), &v13, v20, v18, v19);
                            v34 = &g_4f9218.padding_0[0];
                        }
                        else
                        {
                            v33 = uu_cut::cut_fields(std::io::stdio::stdin(), &v13, v20, v18, v19);
                        }
                        v15 = v33;
                        v16 = v34;
                        if (v33)
                        {
                            v4 = v33;
                            v5 = v34;
                            uucore::mods::error::set_exit_code(v34->field_58(v33));
                            v6 = uucore::util_name();
                            v7 = v32;
                            v0 = &v6;
                            v1 = &<&T as core::fmt::Display>::fmt;
                            v2 = &v4;
                            v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v8 = &g_4f9340;
                            v9 = 3;
                            v12 = 0;
                            v10 = &v0;
                            v11 = 2;
                            std::io::stdio::_eprint(&v8);
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v4);
                        }
                        else
                        {
                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v15);
                        }
                        v29 = 1;
                        goto LABEL_469ec4;
                    }
                }
                else
                {
                    if ((char)v30.is_dir(v31))
                    {
                        v0 = uucore::util_name();
                        v1 = v32;
                        v6 = &v0;
                        v7 = &<&T as core::fmt::Display>::fmt;
                        v8 = &g_4f9370;
                        v9 = 2;
                        v12 = 0;
                        v10 = &v6;
                        v11 = 1;
                        std::io::stdio::_eprint(&v8);
                        v0 = 0;
                        v1 = v26->field_8;
                        v2 = v26->field_10;
                        v3 = 0;
                        v6 = &v0;
                        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v8 = &g_4f9390;
                        v9 = 2;
                        v12 = 0;
                        v10 = &v6;
                        v11 = 1;
                        std::io::stdio::_eprint(&v8);
                        uucore::mods::error::set_exit_code(1);
                    }
                    else
                    {
                        v8.open(v30, v31);
                        v0.map_err_context(&v8, v26->field_8, v26->field_10);
                        v36 = v0;
                        if (v36)
                        {
                            v37 = v1;
                            v15 = v36;
                            v16 = v37;
                            v38 = v37;
                            goto LABEL_469e2d;
                        }
                        else
                        {
                            v36 = uu_cut::cut_files::{{closure}}(a1, &v13, (int)v1);
                            v15 = v36;
                            v16 = v32;
                            v38 = v32;
                            if (v15)
                            {
LABEL_469e2d:
                                v4 = v36;
                                v5 = v38;
                                uucore::mods::error::set_exit_code(v38->field_58(v36));
                                v6 = uucore::util_name();
                                v7 = v32;
                                v0 = &v6;
                                v1 = &<&T as core::fmt::Display>::fmt;
                                v2 = &v4;
                                v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                v8 = &g_4f9340;
                                v9 = 3;
                                v12 = 0;
                                v10 = &v0;
                                v11 = 2;
                                std::io::stdio::_eprint(&v8);
                                core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v4);
                                goto LABEL_469ec4;
                            }
                            else
                            {
                                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v15);
LABEL_469ec4:
                                v28 = v26 + 1;
                                if (v26 == v27)
                                {
                                    v28 = v26;
                                    if (v26 == v27)
                                        break;
                                    goto LABEL_469b26;
                                }
                                else
                                {
                                    if (v26 == v27)
                                        break;
                                    goto LABEL_469b26;
                                }
                            }
                        }
                    }
                }
                v28 = v26 + 1;
            } while (v26 != v27);
        }
    }
    v15 = v14->field_30(v13).map_err_context();
    v16 = &g_4f8e20;
    if (v15)
    {
        v4 = v15;
        v5 = &g_4f8e20;
        uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
        v6 = uucore::util_name();
        v7 = v32;
        v0 = &v6;
        v1 = &<&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v8 = &g_4f9340;
        v9 = 3;
        v12 = 0;
        v10 = &v0;
        v11 = 2;
        std::io::stdio::_eprint(&v8);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v4);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v15);
    }
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v13, v14);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v17);
    return;
}
