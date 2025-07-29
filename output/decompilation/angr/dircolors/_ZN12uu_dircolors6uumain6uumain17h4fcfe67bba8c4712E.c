long long uu_dircolors::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x579]
    int v1;  // [bp-0x578], Other Possible Types: char *
    unsigned long long v2;  // [bp-0x570]
    char *v3;  // [sp-0x568], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x560]
    int v5;  // [bp-0x558], Other Possible Types: void*, unsigned long long
    int v6;  // [sp-0x550], Other Possible Types: unsigned long long, unsigned long
    char v7;  // [bp-0x548], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [sp-0x540]
    char v9;  // [bp-0x538]
    char v10;  // [bp-0x528]
    char v11;  // [bp-0x518]
    struct_0 **v12;  // [bp-0x510], Other Possible Types: struct_1 *, struct_2 **
    unsigned long v13;  // [bp-0x508], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x500]
    int v15;  // [bp-0x4f8]
    unsigned long long v16;  // [bp-0x4f0]
    int v17;  // [bp-0x4e8]
    int v18;  // [bp-0x4e0]
    unsigned long long v19;  // [bp-0x4d0]
    unsigned long long v20;  // [bp-0x4c8]
    char v21;  // [bp-0x4c0]
    char v22;  // [bp-0x4b0]
    unsigned long long v23;  // [bp-0x4a0]
    char v24;  // [bp-0x498]
    unsigned int v25;  // [bp-0x494]
    unsigned long long v26;  // [bp-0x490]
    int v27;  // [bp-0x488], Other Possible Types: char, unsigned long long
    void* v28;  // [bp-0x488]
    int v29;  // [bp-0x488]
    int v30;  // [bp-0x488]
    int v31;  // [bp-0x488]
    int v32;  // [bp-0x488]
    int v33;  // [bp-0x488]
    unsigned long long v34;  // [bp-0x480]
    void* v35;  // [bp-0x478], Other Possible Types: char *, unsigned long long
    unsigned long long v36;  // [bp-0x470], Other Possible Types: unsigned int
    void* v37;  // [bp-0x468]
    int v38;  // [bp-0x1c0], Other Possible Types: char
    unsigned long long v39;  // [bp-0x1b0]
    int v40;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v41;  // [bp-0x198]
    int v42;  // [bp-0x190], Other Possible Types: char
    unsigned long long v43;  // [bp-0x180]
    int v44;  // [bp-0x178], Other Possible Types: char
    unsigned long long v45;  // [bp-0x168]
    int v46;  // [bp-0x160], Other Possible Types: char
    unsigned long long v47;  // [bp-0x150]
    int v48;  // [bp-0x148], Other Possible Types: char
    unsigned long long v49;  // [bp-0x138]
    int v50;  // [bp-0x130], Other Possible Types: char
    unsigned long long v51;  // [bp-0x120]
    char v52;  // [bp-0x118]
    unsigned long long v53;  // [bp-0x108]
    char v54;  // [bp-0x100]
    unsigned long long v55;  // [bp-0xf0]
    char v56;  // [bp-0xe8]
    unsigned long long v57;  // [bp-0xd8]
    char v58;  // [bp-0xd0]
    unsigned long long v59;  // [bp-0xc0]
    char v60;  // [bp-0xb8]
    unsigned long long v61;  // [bp-0xa8]
    char v62;  // [bp-0xa0]
    unsigned long long v63;  // [bp-0x90]
    char v64;  // [bp-0x80]
    char v65;  // [bp-0x50]
    unsigned long long v67;  // rax
    char v68;  // al
    unsigned long long v69;  // rax
    int v71;  // xmm0
    unsigned long v72;  // r15
    unsigned long v73;  // r14
    void* v74;  // rbx
    int v75;  // xmm0
    void* v76;  // rbx

    uu_dircolors::uu_app(&v27);
    (char)v5.try_get_matches_from(&v27, a0, a1);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v20.from();
    v23 = *((long long *)&v10);
    memcpy(&v22, &v9, 16);
    memcpy(&v21, &v7, 16);
    v19 = v5;
    v20 = v6;
    v27.try_get_many(&v19, "FILE.alz.mpgchar", 4);
    (char)v5.unwrap("FILE.alz.mpgchar", 4, &v27);
    v28 = 0;
    v34 = 8;
    v35 = 0;
    v11.map_or(&(char)v5, &v28);
    if (((char)v19.get_flag("c-shellbourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusived", 7) || (char)v19.get_flag("bourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolor", 12)) && ((char)v19.get_flag("print-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shel", 14) || (char)v19.get_flag("print-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-e", 15)))
    {
        uucore::mods::locale::get_message(&v38, "dircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 42);
        v36 = 1;
        v29 = v38;
        v35 = v39;
        v67 = v28.new();
    }
    else if ((char)v19.get_flag("print-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shel", 14) && (char)v19.get_flag("print-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-e", 15))
    {
        uucore::mods::locale::get_message(&v40, "dircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 54);
        v36 = 1;
        v30 = v40;
        v35 = v41;
        v67 = v28.new();
    }
    else if (!(char)v19.get_flag("print-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shel", 14))
    {
        if ((char)v19.get_flag("c-shellbourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusived", 7))
        {
            v0 = 1;
        }
        else
        {
            if ((char)v19.get_flag("bourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolor", 12))
            {
                v0 = 0;
            }
            else
            {
                if ((char)v19.get_flag("print-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-e", 15))
                {
                    v0 = 2;
                }
                else
                {
                    v0 = 3;
                    v68 = uu_dircolors::guess_syntax();
                    if (v68 == 3)
                    {
                        uucore::mods::locale::get_message(&v44, "dircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.", 36);
                        v36 = 1;
                        v32 = v44;
                        v35 = v45;
                        v69 = v28.new();
                        ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
                        return v69;
                    }
                    v0 = v68;
                }
            }
        }
        if (!v13)
        {
            uu_dircolors::generate_ls_colors(&(char)v5, &v0, ":dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01", 1);
            v1 = &(char)v5;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            v27 = &g_589688;
            v34 = 2;
            v37 = 0;
            v35 = &v1;
            v36 = 1;
            std::io::stdio::_print(&v27);
            ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
            ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
            return 0;
        }
        if (v13 == 1)
        {
            if ((char)*(v12)->field_8.equal(*(v12)->field_10, "-c-shellbourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusive", 1))
            {
                v64.with_capacity(0x2000, std::io::stdio::stdin());
                if (!v13)
                    core::panicking::panic_bounds_check(0, 0, &g_589780); /* do not return */
                uu_dircolors::parse(&v28, &v64, &v0, *(v12)->field_8, *(v12)->field_10);
                v71 = *((int128_t *)&v28);
                *((int128_t *)&v17) = *((int128_t *)&v35);
                v15 = v71;
            }
            else
            {
                if (v13)
                {
                    v72 = *(v12)->field_8;
                    v73 = *(v12)->field_10;
                    if ((char)v72.is_dir(v73))
                    {
                        v28.to_vec("pathzero.tlz.pbm.xcf.mpcAnsi -- ", 4);
                        v3 = v35;
                        *((int128_t *)&v1) = *((int128_t *)&v28);
                        v5 = 1;
                        v6 = v72;
                        v7 = v73;
                        v8 = 1;
                        v28.spec_to_string(&v5);
                        v61 = v3;
                        memcpy(&v60, &v1, 16);
                        memcpy(&v62, &v28, 16);
                        v63 = v35;
                        v28.from_iter(&v60);
                        uucore::mods::locale::get_message_with_args(&v48, "dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01-", 43, &v28);
                        v36 = 2;
                        v33 = v48;
                        v35 = v49;
                        v69 = v28.new();
                        ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
                        return v69;
                    }
                    v24.open(v72, v73);
                    if ((v24 & 1))
                    {
                        v14 = v26;
                        v5 = 1;
                        v6 = v72;
                        v7 = v73;
                        v8 = 0;
                        v1 = &v5;
                        v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v3 = &v14;
                        v4 = <std::io::error::Error as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v27) = &g_589668;
                        v34 = 2;
                        v37 = 0;
                        v35 = &v1;
                        v36 = 2;
                        v50.map_or_else(&(unsigned long long)v27);
                        v36 = 1;
                        v27 = v50;
                        v35 = v51;
                        v74 = (unsigned long long)v27.new();
                        ::0x4a56c0::core::ptr::drop_in_place<std::io::error::Error>(v14);
                        ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
                        return v74;
                    }
                    v65.with_capacity(0x2000, v25);
                    (char)v5.to_string_lossy(v72, v73);
                    uu_dircolors::parse(&v28, &v65, &v0, v6, v7);
                    v75 = *((int128_t *)&v28);
                    *((int128_t *)&v17) = *((int128_t *)&v35);
                    v15 = v75;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v5);
                }
                else
                {
                    core::panicking::panic_bounds_check(0, 0, &g_589768); /* do not return */
                }
            }
            if (((char)v15 & 1))
            {
                v35 = (long long)v18;
                *((int128_t *)&v27) = *((int128_t *)&v16);
                v36 = 1;
                v76 = v28.new();
            }
            else
            {
                v7 = (long long)v18;
                *((int128_t *)&v5) = *((int128_t *)&v16);
                v1 = &(char)v5;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                v27 = &g_589688;
                v34 = 2;
                v37 = 0;
                v35 = &v1;
                v36 = 1;
                std::io::stdio::_print(&v27);
                ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
                v76 = 0;
            }
            ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
            return v76;
        }
        v28.to_vec("operand-c-shellbourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-ex", 7);
        v3 = v35;
        *((int128_t *)&v1) = *((int128_t *)&v28);
        if (v13 < 2)
            core::panicking::panic_bounds_check(1, v13, &g_589798); /* do not return */
        v5 = 0;
        *((int128_t *)&v6) = *((int128_t *)&(&v12->field_8->padding_0)[1]);
        v8 = 1;
        v28.spec_to_string(&v5);
        v57 = v3;
        memcpy(&v56, &v1, 16);
        memcpy(&v58, &v28, 16);
        v59 = v35;
        v28.from_iter(&v56);
        uucore::mods::locale::get_message_with_args(&v46, "dircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/ru", 29, &v28);
        v36 = 1;
        v27 = v46;
        v35 = v47;
        v67 = v28.new();
    }
    else if (v13)
    {
        v28.to_vec("operand-c-shellbourne-shellprint-databaseprint-ls-colorsdircolors-error-no-shell-environment:dircolors-error-expected-file-got-directorydircolors-error-extra-operanddircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-ex", 7);
        v3 = v35;
        *((int128_t *)&v1) = *((int128_t *)&v28);
        if (!v13)
            core::panicking::panic_bounds_check(0, 0, &g_589838); /* do not return */
        v5 = 0;
        *((int128_t *)&v6) = *((int128_t *)&(&*(v12)->padding_0)[1]);
        v8 = 1;
        v28.spec_to_string(&v5);
        v53 = v3;
        memcpy(&v52, &v1, 16);
        memcpy(&v54, &v28, 16);
        v55 = v35;
        v28.from_iter(&v52);
        uucore::mods::locale::get_message_with_args(&v42, "dircolors-error-extra-operand-print-databasedircolors-error-print-database-and-ls-colors-exclusivedircolors-error-shell-and-output-exclusive/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/trai", 44, &v28);
        v36 = 1;
        v31 = v42;
        v35 = v43;
        v67 = v28.new();
    }
    else
    {
        uu_dircolors::generate_dircolors_config(&(char)v5);
        v1 = &(char)v5;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v27 = &g_589688;
        v34 = 2;
        v37 = 0;
        v35 = &v1;
        v36 = 1;
        std::io::stdio::_print(&v27);
        ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
        ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
        return 0;
    }
    ::0x4a5800::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
    return v67;
}
