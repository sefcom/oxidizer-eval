long long uu_dircolors::uumain::uumain::hf24b4f2ae94a4d78(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x499]
    int v1;  // [bp-0x498], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v2;  // [sp-0x490], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v3;  // [bp-0x488], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v4;  // [sp-0x480]
    char v5;  // [bp-0x478]
    char v6;  // [bp-0x468]
    unsigned long v7;  // [sp-0x458], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x450]
    unsigned long long v9;  // [sp-0x448]
    unsigned long long v10;  // [sp-0x440]
    char v11;  // [bp-0x438]
    char v12;  // [bp-0x430]
    char v13;  // [bp-0x428]
    unsigned long long v14;  // [sp-0x420]
    int v15;  // [sp-0x418]
    int v16;  // [sp-0x408]
    unsigned long v17;  // [sp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x3e8]
    int v19;  // [sp-0x3e0]
    int v20;  // [sp-0x3d0]
    unsigned long long v21;  // [sp-0x3c0]
    char v22;  // [bp-0x3b8]
    char v23;  // [bp-0x3b4]
    char v24;  // [bp-0x3b0]
    char v25;  // [bp-0x3a8]
    char v26;  // [bp-0x398]
    char v27;  // [bp-0x390]
    char v28;  // [bp-0x380]
    char v29;  // [bp-0x378]
    char v30;  // [bp-0x368]
    char v31;  // [bp-0x360]
    char v32;  // [bp-0x350]
    void* v33;  // [bp-0x348], Other Possible Types: int, char, unsigned long long
    unsigned long long v34;  // [sp-0x340]
    void* v35;  // [sp-0x338], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v36;  // [bp-0x330], Other Possible Types: unsigned int
    void* v37;  // [sp-0x328]
    char v38;  // [bp-0x80]
    char v39;  // [bp-0x50]
    unsigned long long v41;  // rdx
    void* v42;  // rax
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rcx
    char v47;  // al
    unsigned long long v48;  // rax
    unsigned long long v49[3];  // rax
    unsigned long long v50[3];  // rax
    unsigned long long v51;  // r15
    unsigned long long v52;  // r14
    unsigned int v53[5];  // rax
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rdx

    uu_dircolors::uu_app::h5bd020c09d27db22(&v33, a1, v41);
    clap_builder::builder::command::Command::try_get_matches_from::h34877f97e6bbcd17(&v1, &v33, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v18);
        return v42;
    }
    v21 = *((long long *)&v6);
    *((int128_t *)&v20) = *((int128_t *)&v5);
    *((int128_t *)&v19) = *((int128_t *)&v3);
    v17 = v1;
    v18 = v2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5e9fdba087c1cdaf(&v33, &v17, "FILEchar.alz.mpg", 4);
    clap_builder::parser::error::MatchesError::unwrap::ha8b85c7cae95c119(&v1, "FILEchar.alz.mpg", 4, &v33);
    v33 = 0;
    v34 = 8;
    v35 = 0;
    core::option::Option$LT$T$GT$::map_or::hfdda5b67592f1c82(&v11, &v1, &v33);
    if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "c-shell", 7) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "bourne-shell", 12)) && (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-database", 14)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-ls-colors", 15))))
    {
        ::0x46e3f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcb52ebe1b835226d(&v1, "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 91);
        v35 = v3;
        *((int128_t *)&v33) = *((int128_t *)&v1);
        v36 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
        ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
        return v42;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-database", 14) && (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-ls-colors", 15))
    {
        ::0x46e3f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcb52ebe1b835226d(&v1, "options --print-database and --print-ls-colors are mutually exclusive", 69);
        v35 = v3;
        *((int128_t *)&v33) = *((int128_t *)&v1);
        v36 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
        ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
        return v42;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-database", 14))
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "c-shell", 7))
        {
            v0 = 1;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "bourne-shell", 12))
            {
                v0 = 0;
            }
            else
            {
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "print-ls-colors", 15))
                {
                    v0 = 2;
                }
                else
                {
                    v0 = 3;
                    v47 = uu_dircolors::guess_syntax::h662e8957da3fffc5(v44, v45, v41, v46);
                    if (v47 == 3)
                    {
                        ::0x46e3f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcb52ebe1b835226d(&v1, "no SHELL environment variable, and no shell type option given", 61);
                        v35 = v3;
                        *((int128_t *)&v33) = *((int128_t *)&v1);
                        v36 = 1;
                        alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
                        ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
                        return v42;
                    }
                    v0 = v47;
                }
            }
        }
        v48 = *((long long *)&v13);
        if (v48 == 1)
        {
            v49 = *((long long *)*((long long *)&v12));
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(v49[1], v49[2], "-expected file, got directory extra operand \nfile operands cannot be combined with --print-database (-p)", 1))
            {
                if (!*((long long *)&v13))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v50 = *((long long *)*((long long *)&v12));
                v51 = v50[1];
                v52 = v50[2];
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v51, v52))
                {
                    v1 = 1;
                    v2 = v51;
                    v3 = v52;
                    v4 = 1;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v33 = &g_524c58;
                    v34 = 1;
                    v37 = 0;
                    v35 = &v7;
                    v36 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v29, &v33);
                    v36 = 2;
                    *((int128_t *)&v33) = *((int128_t *)&v29);
                    v35 = *((long long *)&v30);
                    v42 = alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
                    ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
                    return v42;
                }
                std::fs::File::open::h335daef9bb8af7ff(&v22, v51, v52);
                if (*((int *)&v22))
                {
                    v14 = *((long long *)&v24);
                    v1 = 1;
                    v2 = v51;
                    v3 = v52;
                    v4 = 0;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v9 = &v14;
                    v10 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v33 = &g_524b50;
                    v34 = 2;
                    v37 = 0;
                    v35 = &v7;
                    v36 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v31, &v33);
                    v36 = 1;
                    *((int128_t *)&v33) = *((int128_t *)&v31);
                    v35 = *((long long *)&v32);
                    alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
                    ::0x46de50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hae17b655c5399ba2(v14);
                    ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
                    return v42;
                }
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hbe40f3482db5c9cd(&v39, 0x2000, *((int *)&v23));
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v1, v51, v52);
                uu_dircolors::parse::heb96ae4294c46085(&v33, &v39, &v0, v2, v3);
                *((int128_t *)&v16) = *((int128_t *)&v35);
                *((int128_t *)&v15) = *((int128_t *)&v33);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h54966f2755d4a7c4(&v1);
            }
            else
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hab616c80854d2729(&v38, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                if (!*((long long *)&v13))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v53 = *((long long *)*((long long *)&v12));
                uu_dircolors::parse::hed3d88e08f50633c(&v33, &v38, &v0, *((long long *)&v53[2]), *((long long *)&v53[4]));
                *((int128_t *)&v16) = *((int128_t *)&v35);
                *((int128_t *)&v15) = *((int128_t *)&v33);
            }
            if (!(long long)v15)
            {
                v3 = (long long)(&v16)[8];
                *((int128_t *)&v1) = (int128_t)(&v15)[8];
                v7 = &v1;
                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v33 = &g_524b70;
                v34 = 2;
                v37 = 0;
                v35 = &v7;
                v36 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v33, v54, v55);
                ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v1);
                v42 = 0;
            }
            else
            {
                v35 = (long long)(&v16)[8];
                *((int128_t *)&v33) = (int128_t)(&v15)[8];
                v36 = 1;
                v42 = alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
            }
            ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
            return v42;
        }
        if (v48)
        {
            v1 = 0;
            *((int128_t *)&v2) = *((int128_t *)(*((long long *)(*((long long *)&v12) + 8)) + 8));
            v4 = 1;
            v7 = &v1;
            v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v33 = &g_524c80;
            v34 = 1;
            v37 = 0;
            v35 = &v7;
            v36 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v27, &v33);
            v36 = 1;
            *((int128_t *)&v33) = *((int128_t *)&v27);
            v35 = *((long long *)&v28);
            v42 = alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
            ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
            return v42;
        }
        uu_dircolors::generate_ls_colors::h338f7a6bfd2eb77e(&v1, &v0, ":: invalid line;  missing second token", 1);
        v7 = &v1;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &g_524b70;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v33, v45, v41);
        ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v1);
    }
    else if (!*((long long *)&v13))
    {
        uu_dircolors::generate_dircolors_config::ha7de3584e21272b4(&v1);
        v7 = &v1;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &g_524b70;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v33, v43, v41);
        ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v1);
    }
    else
    {
        v1 = 0;
        *((int128_t *)&v2) = *((int128_t *)(*((long long *)*((long long *)&v12)) + 8));
        v4 = 1;
        v7 = &v1;
        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v33 = &g_524d38;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v25, &v33);
        v36 = 1;
        *((int128_t *)&v33) = *((int128_t *)&v25);
        v35 = *((long long *)&v26);
        alloc::boxed::Box$LT$T$GT$::new::h83dd1c7c85803c97(&v33);
        ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
        return v42;
    }
    ::0x46df90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc7155d68d0e9808d(&v11);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10a9562e9bf22e18(&v17);
    return v42;
}
