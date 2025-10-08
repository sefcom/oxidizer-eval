long long uu_mv::move_files_into_dir(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[55])
{
    char v0;  // [bp-0x261]
    unsigned long long v1;  // [bp-0x260]
    int v2;  // [bp-0x260]
    struct_1 *v3;  // [sp-0x258], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x250], Other Possible Types: unsigned long
    char v5;  // [sp-0x250]
    unsigned long v6;  // [bp-0x250], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x250]
    struct_1 *v8;  // [bp-0x248], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x240]
    char *v10;  // [bp-0x240]
    unsigned long long v11;  // [bp-0x238]
    void* v12;  // [bp-0x230]
    unsigned long long v13;  // [bp-0x228]
    struct_1 *v14;  // [bp-0x220]
    unsigned long long v15;  // [bp-0x218]
    void* v16;  // [bp-0x210]
    unsigned int v17;  // [bp-0x1f0]
    unsigned int v18;  // [bp-0x1ec]
    int v19;  // [bp-0x1e8], Other Possible Types: char
    void* v20;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x1d8]
    void* v22;  // [bp-0x1c8], Other Possible Types: char *, unsigned long long
    int v23;  // [bp-0x1c8], Other Possible Types: char
    char *v24;  // [bp-0x1c8]
    unsigned long v25;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    char v27;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x1a8]
    void* v29;  // [bp-0x138], Other Possible Types: unsigned long long
    int v32;  // [bp-0x138]
    int v33;  // [sp-0x130], Other Possible Types: unsigned long long
    char *v34;  // [sp-0x128], Other Possible Types: unsigned long long
    char *v35;  // [sp-0x120], Other Possible Types: unsigned int, unsigned long long
    void* v36;  // [sp-0x118]
    unsigned long long v37;  // [bp-0x88]
    int v38;  // [bp-0x78]
    unsigned long long v39;  // [bp-0x68]
    char v40;  // [bp-0x60]
    struct_1 *v43;  // rdx
    void* v44;  // rbp
    char *v45;  // r15
    unsigned long v46;  // r12
    unsigned long v47;  // rbx
    unsigned long v48;  // r14
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v52;  // rax
    void* v54;  // rbx
    unsigned long long v55;  // [bp-0x130]
    char *v56;  // [bp-0x128]

    v40.with_capacity_and_hasher(a1, std::thread::local::LocalKey<T>::with(), v43);
    if ((char)a2.is_dir(a3))
    {
        if (a4[51])
        {
            v12 = indicatif::multi::MultiProgress::new();
            if (a1 <= 1)
                goto LABEL_48c00d;
            v5.new(a1);
            (char)v29.with_template("moving {msg} {wide_bar} {pos}/{len}not replacing ?", 35);
            v23.unwrap(&(char)v29, &g_541988);
            (char)v29.with_style(&v5, &v23);
            v23.add(&v12, &(char)v29, a3);
            memcpy(&v19, &v23, 16);
            v21 = v26;
        }
        else
        {
            v12 = 0;
LABEL_48c00d:
            v20 = 0;
            if (!a1)
                goto LABEL_48c7a1;
        }
        v37 = a1 * 24;
        v44 = 0;
        v45 = &v23;
        v0 = a4[54];
        v18 = v0;
        v17 = a4[48];
        while (true)
        {
            v46 = v45;
            v47 = *((long long *)(8 + a0 + (char *)v44));
            v48 = *((long long *)(16 + a0 + (char *)v44));
            std::fs::metadata(&(char)v29, v47, v48);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v29);
            if ((unsigned int)v29 == 2)
            {
                v22 = 1;
                v25 = v47;
                v26 = v48;
                v27 = 1;
                v5.spec_to_string(v46);
                v35 = v10;
                *((int128_t *)&v33) = *((int128_t *)&v4);
                v29 = 0;
                uucore::mods::error::set_exit_code(1);
                v45 = v46;
                v13 = uucore::util_name();
                v14 = v43;
                v4 = &v13;
                v8 = <&T as core::fmt::Display>::fmt;
                v10 = &v29;
                v11 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                v22 = &g_5416a0;
                v25 = 3;
                v28 = 0;
                v26 = &v4;
                v27 = 2;
                std::io::stdio::_eprint(v45);
            }
            else
            {
                if (v20)
                {
                    (char)v29.from_utf8_lossy(v47, v48);
                    v46.clone(v55, v56);
                    v20.set_message(v46);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v29);
                }
                v49 = v47.file_name(v48);
                if (v49)
                {
                    v13.join(a2, a3, v49, v43);
                    v45 = v46;
                    if (!v40.get_inner(&v13) || v0 == 2)
                    {
                        v50 = uu_mv::assert_not_same_file(v47, v48, a2, a3, 1, v17, v18);
                        if (v50)
                        {
                            v1 = v50;
                            v3 = v43;
                            uucore::mods::error::set_exit_code(v43->field_58(v50));
                            v6 = uucore::util_name();
                            v8 = v43;
                            v22 = &v6;
                            v25 = <&T as core::fmt::Display>::fmt;
                            v26 = &v1;
                            v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v29 = &g_5416a0;
                            v55 = 3;
                            v36 = 0;
                            v56 = v45;
                            v35 = 2;
                            std::io::stdio::_eprint(&v29);
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, v3);
                        }
                        else
                        {
                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v43);
                            v16 = uu_mv::rename(v47, v48, v14, v15, a4, (v12 ? &v12 : 0));
                            if (v16)
                            {
                                (char)v29.spec_to_string(&v16);
                                core::ptr::drop_in_place<alloc::string::String>(&(char)v29);
                                if (v56)
                                {
                                    v52 = v16.map_err_context(v47, v48, v14, v15);
                                    v45 = v46;
                                    if (v12)
                                    {
                                        v12.suspend(v52);
                                    }
                                    else
                                    {
                                        v1 = v52;
                                        uucore::mods::error::set_exit_code(1);
                                        v6 = uucore::util_name();
                                        v8 = v43;
                                        v24 = &v6;
                                        v25 = <&T as core::fmt::Display>::fmt;
                                        v26 = &v1;
                                        v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                        v29 = &g_5416a0;
                                        v55 = 3;
                                        v36 = 0;
                                        v56 = v45;
                                        v35 = 2;
                                        std::io::stdio::_eprint(&v29);
                                        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v1);
                                    }
                                }
                                else
                                {
                                    v29 = v16;
                                    uucore::mods::error::set_exit_code(1);
                                    v45 = v46;
                                    core::ptr::drop_in_place<std::io::error::Error>(&v29);
                                }
                            }
                            if (v20)
                                v19.inc(1);
                            (char)v29.clone(v14, v15);
                            v26 = v56;
                            *((int128_t *)&v23) = *((int128_t *)&v29);
                            v40.insert(v45);
                        }
                    }
                    else
                    {
                        *((int128_t *)&v2) = *((int128_t *)&v14);
                        v6 = v47;
                        v8 = v48;
                        v22 = &v1;
                        v25 = <std::path::Display as core::fmt::Display>::fmt;
                        v26 = &v6;
                        v27 = <std::path::Display as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v32) = &g_541958;
                        v33 = 3;
                        v36 = 0;
                        v34 = v45;
                        v35 = 2;
                        v38.map_or_else(&(unsigned long long)v32);
                        v35 = 1;
                        v32 = v38;
                        v34 = v39;
                        *((double *)&v1) = (unsigned long long)v32.new();
                        v3 = &g_541810;
                        uucore::mods::error::set_exit_code((unsigned int)v1.code());
                        v7 = uucore::util_name();
                        v8 = v43;
                        v22 = &v7;
                        v25 = <&T as core::fmt::Display>::fmt;
                        v26 = &v1;
                        v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v29 = &g_5416a0;
                        v55 = 3;
                        v36 = 0;
                        v56 = v45;
                        v35 = 2;
                        std::io::stdio::_eprint(&v29);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v1, &g_541810);
                    }
                    core::ptr::drop_in_place<std::path::PathBuf>(v13, v14);
                    v44 += 24;
                    if (v37 == v44)
                        break;
                    continue;
                }
                else
                {
                    v22 = 1;
                    v25 = v47;
                    v26 = v48;
                    v27 = 1;
                    v5.spec_to_string(v46);
                    v35 = v10;
                    *((int128_t *)&v33) = *((int128_t *)&v4);
                    v29 = 0;
                    uucore::mods::error::set_exit_code(1);
                    v45 = v46;
                    v1 = uucore::util_name();
                    v3 = v43;
                    v4 = &v1;
                    v8 = <&T as core::fmt::Display>::fmt;
                    v10 = &v29;
                    v11 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                    v22 = &g_5416a0;
                    v25 = 3;
                    v28 = 0;
                    v26 = &v4;
                    v27 = 2;
                    std::io::stdio::_eprint(v45);
                }
            }
            core::ptr::drop_in_place<uu_mv::error::MvError>(&v29);
            v44 += 24;
            if (v37 == v44)
                break;
        }
LABEL_48c7a1:
        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v19);
        core::ptr::drop_in_place<core::option::Option<indicatif::multi::MultiProgress>>(&v12);
        v54 = 0;
    }
    else
    {
        v22 = 1;
        v25 = a2;
        v26 = a3;
        v27 = 1;
        (char)v4.spec_to_string(&v22);
        v35 = v9;
        *((int128_t *)&v33) = *((int128_t *)&v7);
        v29 = 6;
        v54 = v29.new();
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v40);
    return v54;
}
