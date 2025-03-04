long long uu_dircolors::uumain::uumain::h2321e20a0063effb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x499]
    char v1;  // [sp-0x499]
    int v2;  // [sp-0x498], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v3;  // [sp-0x490], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v4;  // [sp-0x488], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v5;  // [sp-0x480]
    char v6;  // [bp-0x478]
    char v7;  // [bp-0x468]
    char *v8;  // [sp-0x458]
    unsigned long long v9;  // [sp-0x450]
    char *v10;  // [sp-0x448]
    unsigned long long v11;  // [sp-0x440]
    char v12;  // [bp-0x438]
    char v13;  // [bp-0x430]
    char v14;  // [bp-0x428]
    unsigned long long v15;  // [sp-0x420]
    int v16;  // [sp-0x418]
    int v17;  // [sp-0x408]
    unsigned long v18;  // [sp-0x3f0]
    unsigned long long v19;  // [sp-0x3e8]
    int v20;  // [sp-0x3e0]
    int v21;  // [sp-0x3d0]
    unsigned long long v22;  // [sp-0x3c0]
    char v23;  // [bp-0x3b8]
    char v24;  // [bp-0x3b4]
    char v25;  // [bp-0x3b0]
    char v26;  // [bp-0x3a8]
    char v27;  // [bp-0x398]
    char v28;  // [bp-0x390]
    char v29;  // [bp-0x380]
    char v30;  // [bp-0x378]
    char v31;  // [bp-0x368]
    char v32;  // [bp-0x360]
    char v33;  // [bp-0x350]
    void* v34;  // [bp-0x348], Other Possible Types: int, char, unsigned long
    unsigned long long v35;  // [sp-0x340]
    void* v36;  // [sp-0x338], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v37;  // [bp-0x330], Other Possible Types: unsigned int
    void* v38;  // [sp-0x328]
    char v39;  // [bp-0x80]
    char v40;  // [bp-0x50]
    void* v42;  // rbx
    unsigned long long v43;  // rax
    char v44;  // al
    unsigned long long v46;  // rax
    unsigned long long v47[3];  // rax
    unsigned long long v48[3];  // rax
    unsigned long long v49;  // r15
    unsigned long long v50;  // r14
    unsigned int v51[5];  // rax

    uu_dircolors::uu_app::hbe7b80473b118cf8(&v34);
    clap_builder::builder::command::Command::try_get_matches_from::h0d8cf975bb365716(&v2, &v34, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v19);
        return v42;
    }
    v22 = *((long long *)&v7);
    *((int128_t *)&v21) = *((int128_t *)&v6);
    *((int128_t *)&v20) = *((int128_t *)&v4);
    v18 = v2;
    v19 = v3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbb220c64f890b78e(&v34, &v18, "FILEchar.alz.mpg", 4);
    clap_builder::parser::error::MatchesError::unwrap::h0d4e2c418f8795f8(&v2, "FILEchar.alz.mpg", 4, &v34);
    v34 = 0;
    v35 = 8;
    v36 = 0;
    core::option::Option$LT$T$GT$::map_or::h41c5a4c15e8c912e(&v12, &v2, &v34);
    if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "c-shell", 7) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "bourne-shell", 12)) && (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-database", 14)) || !(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))))
    {
        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v2, "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive", 91);
        v36 = v4;
        *((int128_t *)&v34) = *((int128_t *)&v2);
        v37 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
        return v42;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-database", 14) && (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))
    {
        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v2, "options --print-database and --print-ls-colors are mutually exclusiveextra operand \nfile operands cannot be combined with --print-database (-p)", 69);
        v36 = v4;
        *((int128_t *)&v34) = *((int128_t *)&v2);
        v37 = 1;
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
        return v42;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-database", 14))
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "c-shell", 7))
        {
            v0 = 1;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "bourne-shell", 12))
            {
                v0 = 0;
            }
            else
            {
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, "print-ls-colors/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/char/methods.rs", 15))
                {
                    v0 = 2;
                }
                else
                {
                    v1 = 3;
                    v44 = uu_dircolors::guess_syntax::h0035ab354e037d8b();
                    if (v44 == 3)
                    {
                        ::0x46e200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(&v2, "no SHELL environment variable, and no shell type option given", 61);
                        v36 = v4;
                        *((int128_t *)&v34) = *((int128_t *)&v2);
                        v37 = 1;
                        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
                        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
                        return v42;
                    }
                    v0 = v44;
                }
            }
        }
        v46 = *((long long *)&v14);
        if (v46 == 1)
        {
            v47 = *((long long *)*((long long *)&v13));
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(v47[1], v47[2], "-expected file, got directory ", 1))
            {
                if (!*((long long *)&v14))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_5246a0); /* do not return */
                v48 = *((long long *)*((long long *)&v13));
                v49 = v48[1];
                v50 = v48[2];
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v49, v50))
                {
                    v2 = 1;
                    v3 = v49;
                    v4 = v50;
                    v5 = 1;
                    v8 = &v2;
                    v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v34 = &g_524600;
                    v35 = 1;
                    v38 = 0;
                    v36 = &v8;
                    v37 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v30, &v34);
                    v37 = 2;
                    *((int128_t *)&v34) = *((int128_t *)&v30);
                    v36 = *((long long *)&v31);
                    v42 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
                    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
                    return v42;
                }
                std::fs::File::open::h4d15bcf36777fbfd(&v23, v49, v50);
                if (*((int *)&v23))
                {
                    v15 = *((long long *)&v25);
                    v2 = 1;
                    v3 = v49;
                    v4 = v50;
                    v5 = 0;
                    v8 = &v2;
                    v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v10 = &v15;
                    v11 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v34 = &g_524558;
                    v35 = 2;
                    v38 = 0;
                    v36 = &v8;
                    v37 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v32, &v34);
                    v37 = 1;
                    *((int128_t *)&v34) = *((int128_t *)&v32);
                    v36 = *((long long *)&v33);
                    alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
                    ::0x46dc60::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc1ac7fa82c6c85d2(v15);
                    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
                    return v42;
                }
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb6293618d46545ae(&v40, 0x2000, *((int *)&v24));
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v2, v49, v50);
                uu_dircolors::parse::h71fa074bce44395f(&v34, &v40, &v0, v3, v4);
                *((int128_t *)&v17) = *((int128_t *)&v36);
                *((int128_t *)&v16) = *((int128_t *)&v34);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hae6b6ef474db0aaf(&v2);
            }
            else
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf5745e56a44e873f(&v39, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                if (!*((long long *)&v14))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_5246b8); /* do not return */
                v51 = *((long long *)*((long long *)&v13));
                uu_dircolors::parse::h624210590e7596d4(&v34, &v39, &v0, *((long long *)&v51[2]), *((long long *)&v51[4]));
                *((int128_t *)&v17) = *((int128_t *)&v36);
                *((int128_t *)&v16) = *((int128_t *)&v34);
            }
            if (!(long long)v16)
            {
                v4 = (long long)(&v17)[8];
                *((int128_t *)&v2) = (int128_t)(&v16)[8];
                v8 = &v2;
                v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v34 = &g_524578;
                v35 = 2;
                v38 = 0;
                v36 = &v8;
                v37 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v34);
                ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v2);
                v42 = 0;
            }
            else
            {
                v36 = (long long)(&v17)[8];
                *((int128_t *)&v34) = (int128_t)(&v16)[8];
                v37 = 1;
                v42 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
            }
            ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
            return v42;
        }
        if (v46)
        {
            v2 = 0;
            *((int128_t *)&v3) = *((int128_t *)(*((long long *)(*((long long *)&v13) + 8)) + 8));
            v5 = 1;
            v8 = &v2;
            v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v34 = &g_5245f0;
            v35 = 1;
            v38 = 0;
            v36 = &v8;
            v37 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v28, &v34);
            v37 = 1;
            *((int128_t *)&v34) = *((int128_t *)&v28);
            v36 = *((long long *)&v29);
            v43 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
            ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
            return v42;
        }
        uu_dircolors::generate_ls_colors::h07b798e699c26892(&v2, &v0, ":: invalid line;  missing second token*=: unrecognized keyword ", 1);
        v8 = &v2;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v34 = &g_524578;
        v35 = 2;
        v38 = 0;
        v36 = &v8;
        v37 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v34);
        ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v2);
    }
    else if (!*((long long *)&v14))
    {
        uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(&v2);
        v8 = &v2;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v34 = &g_524578;
        v35 = 2;
        v38 = 0;
        v36 = &v8;
        v37 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v34);
        ::0x46dc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&v2);
    }
    else
    {
        v2 = 0;
        *((int128_t *)&v3) = *((int128_t *)(*((long long *)*((long long *)&v13)) + 8));
        v5 = 1;
        v8 = &v2;
        v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v34 = &g_5245d0;
        v35 = 2;
        v38 = 0;
        v36 = &v8;
        v37 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&v26, &v34);
        v37 = 1;
        *((int128_t *)&v34) = *((int128_t *)&v26);
        v36 = *((long long *)&v27);
        alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&v34);
        ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
        return v42;
    }
    ::0x46dda0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&v12);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&v18);
    return v42;
}
