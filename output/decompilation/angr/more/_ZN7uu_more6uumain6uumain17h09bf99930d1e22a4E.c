long long uu_more::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x4d8]
    char v1;  // [bp-0x4d8]
    unsigned long long v2;  // [bp-0x4d0]
    char *v3;  // [bp-0x4c8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x4c0], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x4b8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x4b0], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x4a0]
    char *v9;  // [bp-0x498]
    unsigned long long v10;  // [bp-0x490]
    unsigned long long v11;  // [bp-0x488]
    unsigned long long v12;  // [bp-0x480]
    void* v13;  // [bp-0x478], Other Possible Types: char, unsigned long
    unsigned long long v14;  // [bp-0x470]
    void* v15;  // [bp-0x468], Other Possible Types: char
    int v16;  // [bp-0x458]
    unsigned long long v17;  // [bp-0x448]
    unsigned long long v18;  // [bp-0x440]
    unsigned long long v19;  // [bp-0x438]
    unsigned int v20;  // [bp-0x430]
    unsigned int v21;  // [bp-0x42c]
    unsigned long long v22;  // [bp-0x428]
    void* v23;  // [bp-0x420], Other Possible Types: char, unsigned long long
    void* v24;  // [bp-0x418]
    void* v25;  // [bp-0x418]
    char v26;  // [bp-0x410], Other Possible Types: unsigned long long
    int v27;  // [bp-0x408]
    char v28;  // [bp-0x400]
    int v29;  // [bp-0x3f8]
    unsigned long long v30;  // [bp-0x3f0]
    int v31;  // [bp-0x3e8]
    unsigned long long v32;  // [bp-0x3d8]
    unsigned long long v33;  // [bp-0x3d0]
    char v34;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v35;  // [bp-0x3c0]
    unsigned long long v36;  // [bp-0x3a0]
    void* v37;  // [bp-0x398]
    char v38;  // [bp-0x390]
    char v39;  // [bp-0x380]
    unsigned long long v40;  // [bp-0x370]
    char v41;  // [bp-0x368]
    void* v42;  // [bp-0x358]
    void* v43;  // [bp-0x350]
    int v44;  // [bp-0x340]
    unsigned long long v45;  // [bp-0x330]
    int v46;  // [bp-0x328]
    unsigned long long v47;  // [bp-0x318]
    int v48;  // [bp-0x310]
    unsigned long long v49;  // [bp-0x300]
    unsigned long long v50;  // [bp-0x2f8]
    int v51;  // [bp-0x2f8]
    int v52;  // [bp-0x2f8]
    void* v53;  // [bp-0x2f8]
    unsigned long long v54;  // [bp-0x2f0]
    char *v55;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v56;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v57;  // [bp-0x2d8]
    void* v60;  // r14
    unsigned long long v61;  // rbx
    int v62;  // xmm0
    char v63;  // al
    unsigned long long v64[3];  // rax
    void* v67;  // r13
    unsigned long long v68[2];  // rax
    unsigned long long v69[2];  // rbx
    unsigned long long v70;  // rax
    unsigned long v72;  // rdx
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v79;  // rax
    void* v80;  // r9
    unsigned long long v81;  // rcx
    void* v82;  // rax
    unsigned long long v84;  // rdx

    std::panicking::set_hook(alloc::boxed::Box<T>::new(), &g_5243c8);
    uu_more::uu_app(&(char)v53);
    v23.try_get_matches_from(&(char)v53, a0, a1);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
    {
        v60 = v37.from();
        core::ptr::drop_in_place<uu_more::TerminalGuard>();
        return v60;
    }
    v40 = v30;
    memcpy(&v39, &v28, 16);
    memcpy(&v38, &v26, 16);
    v36 = v23;
    v37 = v24;
    v34.from(&v36);
    uu_more::setup_term(&(char)v53);
    v60 = v53;
    if (!v53)
    {
        v12 = v54;
        (char)v53.try_get_many(&v36);
        v13.unwrap(&(char)v53);
        if (v13)
        {
            v61 = v18;
            v19 = v61.len();
            v32 = v17;
            v62 = *((int128_t *)&v13);
            v31 = v16;
            *((int128_t *)&v29) = *((int128_t *)&v15);
            v27 = v62;
            v33 = v61;
            v63 = 0;
            while (true)
            {
                v23 = 0;
                v25 = v24;
                if (!(v63 & 1))
                {
                    v64 = (char)v27.next();
                    if (v64)
                    {
                        v26 = v64[2];
                        v25 = v64[1];
                    }
                    else
                    {
                        v25 = 0;
                    }
                }
                v67 = v25;
                v68 = v23.get_or_insert_with(&(char)v27);
                if (!v67)
                    break;
                v69 = v68;
                if ((char)v67.is_dir(v26))
                {
                    v70 = crossterm::terminal::disable_raw_mode();
                    if (!v70)
                    {
                        v3 = 1;
                        v4 = v67;
                        v5 = v26;
                        v6 = 1;
                        v7 = &v3;
                        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v52) = &g_524338;
                        v54 = 2;
                        v57 = 0;
                        v55 = &v7;
                        v56 = 1;
                        v44.map_or_else(&(unsigned long long)v52);
                        v56 = 0;
                        v52 = v44;
                        v55 = v45;
                        *((double *)&v0) = (unsigned long long)v52.new();
                        v2 = &g_5244a0;
                        uucore::mods::error::set_exit_code((unsigned int)v0.code());
                        v7 = uucore::util_name();
                        v8 = v72;
                        v3 = &v7;
                        v4 = <&T as core::fmt::Display>::fmt;
                        v5 = &v0;
                        v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v53 = &g_524358;
                        v54 = 3;
                        v57 = 0;
                        v55 = &v3;
                        v56 = 2;
                        std::io::stdio::_eprint(&v53);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_5244a0);
                        v73 = crossterm::terminal::enable_raw_mode();
                        if (!v73)
                            goto LABEL_472b00;
                        v82 = v73.from();
                        goto LABEL_4732dc;
                    }
                    else
                    {
                        v82 = v70.from();
                        goto LABEL_4732dc;
                    }
                }
                else
                {
                    std::fs::metadata(&(char)v53, v67, v26);
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v53);
                    if ((unsigned int)v53 == 2)
                    {
                        v74 = crossterm::terminal::disable_raw_mode();
                        if (!v74)
                        {
                            v3 = 1;
                            v4 = v67;
                            v5 = v26;
                            v6 = 1;
                            v7 = &v3;
                            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                            *((unsigned long long **)&v52) = &g_524388;
                            v54 = 2;
                            v57 = 0;
                            v55 = &v7;
                            v56 = 1;
                            v46.map_or_else(&(unsigned long long)v52);
                            v56 = 0;
                            v52 = v46;
                            v55 = v47;
                            *((double *)&v0) = (unsigned long long)v52.new();
                            v2 = &g_524418;
                            uucore::mods::error::set_exit_code((unsigned int)v0.code());
                            v7 = uucore::util_name();
                            v8 = v72;
                            v3 = &v7;
                            v4 = <&T as core::fmt::Display>::fmt;
                            v5 = &v0;
                            v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v53 = &g_524358;
                            v54 = 3;
                            v57 = 0;
                            v55 = &v3;
                            v56 = 2;
                            std::io::stdio::_eprint(&v53);
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_524418);
                            v76 = crossterm::terminal::enable_raw_mode();
                            if (!v76)
                                goto LABEL_472b00;
                            v82 = v76.from();
                        }
                        else
                        {
                            v82 = v74.from();
                        }
LABEL_4732dc:
                        v60 = v82;
                        goto LABEL_4732df;
                    }
                    else
                    {
                        v20.open(v67, v26);
                        if (v20 == 1)
                        {
                            v11 = v22;
                            v77 = crossterm::terminal::disable_raw_mode();
                            if (!v77)
                            {
                                v3 = 1;
                                v4 = v67;
                                v5 = v26;
                                v6 = 1;
                                v1 = (char)v11.kind();
                                v7 = &v3;
                                v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v9 = &v1;
                                v10 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
                                *((unsigned long long **)&v52) = &g_5243a8;
                                v54 = 2;
                                v57 = 0;
                                v55 = &v7;
                                v56 = 2;
                                v48.map_or_else(&(unsigned long long)v52);
                                v56 = 0;
                                v52 = v48;
                                v55 = v49;
                                *((double *)&v0) = (unsigned long long)v52.new();
                                v2 = &g_524418;
                                uucore::mods::error::set_exit_code((unsigned int)v0.code());
                                v7 = uucore::util_name();
                                v8 = v72;
                                v3 = &v7;
                                v4 = <&T as core::fmt::Display>::fmt;
                                v5 = &v0;
                                v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                v53 = &g_524358;
                                v54 = 3;
                                v57 = 0;
                                v55 = &v3;
                                v56 = 2;
                                std::io::stdio::_eprint(&v53);
                                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_524418);
                                v77 = crossterm::terminal::enable_raw_mode();
                                if (v77)
                                    goto LABEL_4732b8;
                                core::ptr::drop_in_place<std::io::error::Error>(&v11);
                            }
                            else
                            {
LABEL_4732b8:
                                v60 = v77.from();
                                core::ptr::drop_in_place<std::io::error::Error>(&v11);
                                goto LABEL_4732e2;
                            }
                        }
                        else
                        {
                            v79 = core::str::converts::from_utf8(&(char)v53, v67, v26);
                            v80 = 0;
                            v81 = 0;
                            if (!(char)v53)
                                v81 = v54;
                            if (v68[0])
                            {
                                v80 = v69[0];
                                v79 = v69[1];
                            }
                            if (uu_more::more(v21, &v12, 2 <= v19, v81, v55, v80, v79, &v34))
                                goto LABEL_4732df;
                        }
LABEL_472b00:
                        v63 = (char)v23;
                    }
                }
            }
LABEL_4731fb:
            core::ptr::drop_in_place<uu_more::Options>(v34, *((long long *)&v35));
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
            core::ptr::drop_in_place<uu_more::TerminalGuard>();
            return 0;
        }
        v13 = 0;
        v14 = 1;
        v15 = 0;
        v50 = std::io::stdio::stdin();
        if (((char)v50.read_to_string(&v13) & 1))
        {
            v60 = v84.from();
            goto LABEL_47329c;
        }
        else if (v15)
        {
            v42 = v15;
            memcpy(&v41, &v13, 16);
            v43 = 0;
            v60 = uu_more::more(&v41, &v12, &v34);
            if (!v60)
                goto LABEL_4731fb;
LABEL_4732df:
        }
        else
        {
            v23.to_vec("bad usagefiles\r/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/buffered/bufreader.rs", 9);
            v55 = v26;
            *((int128_t *)&v51) = *((int128_t *)&v23);
            v56 = 1;
            v60 = v50.new();
LABEL_47329c:
            core::ptr::drop_in_place<alloc::string::String>(v13, 1);
        }
    }
LABEL_4732e2:
    core::ptr::drop_in_place<uu_more::Options>(v34, *((long long *)&v35));
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
    core::ptr::drop_in_place<uu_more::TerminalGuard>();
    return v60;
}
