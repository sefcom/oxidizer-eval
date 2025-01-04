long long uu_dircolors::uumain::uumain::h2321e20a0063effb(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x499]
    int v1;  // [bp-0x498], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v2;  // [sp-0x490], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v3;  // [bp-0x488], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v4;  // [sp-0x480]
    char v5;  // [bp-0x478]
    char v6;  // [bp-0x468]
    char *v7;  // [sp-0x458]
    unsigned long long v8;  // [sp-0x450]
    char *v9;  // [sp-0x448]
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
    void* v35;  // [sp-0x338], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v36;  // [bp-0x330], Other Possible Types: unsigned int
    void* v37;  // [sp-0x328]
    char v38;  // [bp-0x80]
    char v39;  // [bp-0x50]
    unsigned long long v41;  // r8
    unsigned long long v42;  // r9
    void* v43;  // rax
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rcx
    char v50;  // al
    unsigned long long v51;  // rax
    unsigned long long v52[3];  // rax
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // r15
    unsigned long long v55;  // r14
    unsigned int v56[5];  // rax
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rdx

    uu_dircolors::uu_app::hbe7b80473b118cf8(&v33, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h0d8cf975bb365716(&v1, &v33, a0, a1, v41, v42);
    if (v17 == 0x8000000000000000)
    {
        v43 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v18);
        return v43;
    }
    v21 = *((long long *)&v6);
    *((int128_t *)&v20) = *((int128_t *)&v5);
    *((int128_t *)&v19) = *((int128_t *)&v3);
    v17 = v1;
    v18 = v2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbb220c64f890b78e(&v33, &v17, "FILEchar.alz.mpg", 4);
    clap_builder::parser::error::MatchesError::unwrap::h0d4e2c418f8795f8(&v1, "FILEchar.alz.mpg", 4, &v33);
    v33 = 0;
    v34 = 8;
    v35 = 0;
    core::option::Option$LT$T$GT$::map_or::h41c5a4c15e8c912e(&v11, &v1, &v33);
    if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "c-shell", 7) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "bourne-shell", 12)) && (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-database", 14)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))))
    {
        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v1, "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive", 91);
        v35 = v3;
        *((int128_t *)&v33) = *((int128_t *)&v1);
        v36 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
        return v43;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-database", 14) && (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))
    {
        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v1, "options --print-database and --print-ls-colors are mutually exclusiveextra operand \nfile operands cannot be combined with --print-database (-p)", 69);
        v35 = v3;
        *((int128_t *)&v33) = *((int128_t *)&v1);
        v36 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
        return v43;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-database", 14))
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "c-shell", 7))
        {
            v0 = 1;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "bourne-shell", 12))
            {
                v0 = 0;
            }
            else
            {
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))
                {
                    v0 = 2;
                }
                else
                {
                    v0 = 3;
                    v50 = uu_dircolors::guess_syntax::h0035ab354e037d8b(v46, v47, v48, v49);
                    if (v50 == 3)
                    {
                        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v1, "no SHELL environment variable, and no shell type option given", 61);
                        v35 = v3;
                        *((int128_t *)&v33) = *((int128_t *)&v1);
                        v36 = 1;
                        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
                        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
                        return v43;
                    }
                    v0 = v50;
                }
            }
        }
        v51 = *((long long *)&v13);
        if (v51 == 1)
        {
            v52 = *((long long *)*((long long *)&v12));
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(v52[1], v52[2], "-expected file, got directory ", 1))
            {
                if (!*((long long *)&v13))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v53 = *((long long *)*((long long *)&v12));
                v54 = v53[1];
                v55 = v53[2];
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v54, v55))
                {
                    v1 = 1;
                    v2 = v54;
                    v3 = v55;
                    v4 = 1;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v33 = &g_524600;
                    v34 = 1;
                    v37 = 0;
                    v35 = &v7;
                    v36 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v29, &v33);
                    v36 = 2;
                    *((int128_t *)&v33) = *((int128_t *)&v29);
                    v35 = *((long long *)&v30);
                    v43 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
                    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
                    return v43;
                }
                std::fs::File::open::h4d15bcf36777fbfd(&v22, v54, v55);
                if (*((int *)&v22))
                {
                    v14 = *((long long *)&v24);
                    v1 = 1;
                    v2 = v54;
                    v3 = v55;
                    v4 = 0;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v9 = &v14;
                    v10 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v33 = &g_524558;
                    v34 = 2;
                    v37 = 0;
                    v35 = &v7;
                    v36 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v31, &v33);
                    v36 = 1;
                    *((int128_t *)&v33) = *((int128_t *)&v31);
                    v35 = *((long long *)&v32);
                    alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
                    ::0x46dc60::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc1ac7fa82c6c85d2(v14);
                    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
                    return v43;
                }
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb6293618d46545ae(&v39, 0x2000, *((int *)&v23));
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v1, v54, v55);
                uu_dircolors::parse::h71fa074bce44395f(&v33, &v39, &v0, v2, v3);
                *((int128_t *)&v16) = *((int128_t *)&v35);
                *((int128_t *)&v15) = *((int128_t *)&v33);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hae6b6ef474db0aaf(&v1);
            }
            else
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf5745e56a44e873f(&v38, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                if (!*((long long *)&v13))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v56 = *((long long *)*((long long *)&v12));
                uu_dircolors::parse::h624210590e7596d4(&v33, &v38, &v0, *((long long *)&v56[2]), *((long long *)&v56[4]));
                *((int128_t *)&v16) = *((int128_t *)&v35);
                *((int128_t *)&v15) = *((int128_t *)&v33);
            }
            if (!(long long)v15)
            {
                v3 = (long long)(&v16)[8];
                *((int128_t *)&v1) = (int128_t)(&v15)[8];
                v7 = &v1;
                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v33 = &g_524578;
                v34 = 2;
                v37 = 0;
                v35 = &v7;
                v36 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v33, v57, v58);
                ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v1);
                v43 = 0;
            }
            else
            {
                v35 = (long long)(&v16)[8];
                *((int128_t *)&v33) = (int128_t)(&v15)[8];
                v36 = 1;
                v43 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
            }
            ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
            return v43;
        }
        if (v51)
        {
            v1 = 0;
            *((int128_t *)&v2) = *((int128_t *)(*((long long *)(*((long long *)&v12) + 8)) + 8));
            v4 = 1;
            v7 = &v1;
            v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v33 = &g_5245f0;
            v34 = 1;
            v37 = 0;
            v35 = &v7;
            v36 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v27, &v33);
            v36 = 1;
            *((int128_t *)&v33) = *((int128_t *)&v27);
            v35 = *((long long *)&v28);
            v43 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
            ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
            return v43;
        }
        uu_dircolors::generate_ls_colors::h07b798e699c26892(&v1, &v0, ":: invalid line;  missing second token*=: unrecognized keyword ", 1);
        v7 = &v1;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &g_524578;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v33, v47, v48);
        ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v1);
    }
    else if (!*((long long *)&v13))
    {
        uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(&v1);
        v7 = &v1;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &g_524578;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v33, v44, v45);
        ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v1);
    }
    else
    {
        v1 = 0;
        *((int128_t *)&v2) = *((int128_t *)(*((long long *)*((long long *)&v12)) + 8));
        v4 = 1;
        v7 = &v1;
        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v33 = &g_5245d0;
        v34 = 2;
        v37 = 0;
        v35 = &v7;
        v36 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v25, &v33);
        v36 = 1;
        *((int128_t *)&v33) = *((int128_t *)&v25);
        v35 = *((long long *)&v26);
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v33);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
        return v43;
    }
    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v11);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v17);
    return v43;
}
