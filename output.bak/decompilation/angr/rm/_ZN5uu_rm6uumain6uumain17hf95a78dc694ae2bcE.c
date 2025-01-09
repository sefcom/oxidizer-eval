long long uu_rm::uumain::uumain::hf95a78dc694ae2bc(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x6b8]
    char v1;  // [sp-0x6b7]
    char v2;  // [sp-0x6b6]
    char v3;  // [sp-0x6b5]
    char v4;  // [sp-0x6b4]
    char v5;  // [sp-0x6b3]
    char v6;  // [sp-0x6b2]
    char v7;  // [sp-0x6b1]
    void* v8;  // [sp-0x6b0], Other Possible Types: unsigned long, unsigned long long
    char *v9;  // [sp-0x6a8], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x6a0]
    unsigned long v11;  // [sp-0x698], Other Possible Types: unsigned long long
    struct struct_1 **v12;  // [sp-0x690]
    char *v13;  // [sp-0x688], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0x680], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x678]
    char *v16;  // [sp-0x670]
    char *v17;  // [sp-0x660]
    unsigned long long v18;  // [sp-0x650]
    char *v19;  // [bp-0x648], Other Possible Types: unsigned long
    unsigned long v20;  // [sp-0x640], Other Possible Types: unsigned long long
    char v21;  // [bp-0x638], Other Possible Types: unsigned long long
    char v22;  // [bp-0x628]
    char v23;  // [bp-0x618]
    unsigned long v24;  // [sp-0x608], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x600]
    char v26;  // [bp-0x5f8]
    char v27;  // [bp-0x5e8]
    char v28;  // [bp-0x5e0]
    char v29;  // [bp-0x5d0]
    char *v30;  // [bp-0x5c8]
    unsigned long long v31;  // [sp-0x5c0]
    int v32;  // [bp-0x5b8], Other Possible Types: char *, struct struct_0 **, struct struct_2 **, struct struct_1 **, unsigned long long
    char *v33;  // [bp-0x5b0], Other Possible Types: unsigned long long, unsigned int
    int v34;  // [bp-0x5a8], Other Possible Types: char *, struct struct_2 **, void*
    char *v35;  // [sp-0x5a0]
    char *v36;  // [sp-0x598]
    struct struct_0 **v37;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v38;  // [sp-0x2f0], Other Possible Types: char *, unsigned long long
    struct struct_0 **v39;  // [bp-0x2e8], Other Possible Types: char, unsigned long
    unsigned long long v40;  // [sp-0x2e0]
    void* v41;  // [bp-0x2d8], Other Possible Types: char
    char v42;  // [bp-0x2c8]
    struct struct_0 **v44;  // rbx
    void* v45;  // rax
    char *v49;  // rax
    char *v50;  // rdx
    unsigned long long v51;  // rbp
    struct_3 *v52;  // rax
    char *v53;  // r12
    unsigned long long v54;  // r13
    char v55;  // r15b
    unsigned long long v56;  // rcx
    unsigned long long v59;  // rax

    v44 = &v30;
    uu_rm::uu_app::h97a746416a9c921d(&v30);
    clap_builder::builder::command::Command::after_help::heec11f6db452ec9f(&v37, &v30, "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a '-', for example '-foo',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred.", 493);
    clap_builder::builder::command::Command::try_get_matches_from::h239bec038243f8ce(&v19, &v37, a0, a1);
    if (v14 == 0x8000000000000000)
    {
        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v15);
        return v45;
    }
    v18 = *((long long *)&v23);
    *((int128_t *)&v17) = *((int128_t *)&v22);
    *((int128_t *)&v16) = *((int128_t *)&v21);
    v14 = v19;
    v15 = v20;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6d89796f344d6206(&v30, &v14, _ZN5uu_rm9ARG_FILES17h35e3057406df6949E, g_527968);
    clap_builder::parser::error::MatchesError::unwrap::hfbcb534b23b8c82f(&v37, _ZN5uu_rm9ARG_FILES17h35e3057406df6949E, g_527968, &v30);
    if (!v37 || (*((int128_t *)&v36) = *((int128_t *)&v42), *((int128_t *)&v34) = *((int128_t *)&v41), *((int128_t *)&v32) = *((int128_t *)&v39), *((int128_t *)&v30) = *((int128_t *)&v37), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1005162becd2ac1a(&v19, &v30), *((int128_t *)&v30) = *((int128_t *)&v20), v8 == 0x8000000000000000))
    {
        v8 = 0;
        v9 = 8;
        v10 = 0;
    }
    else
    {
        *((int128_t *)&v9) = *((int128_t *)&v30);
        v8 = v19;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm9OPT_FORCE17h07424e5b5980cadeE, g_5278f8);
    if (!v0)
    {
        if (!v10)
        {
            ::0x46a850::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb1cbe84a292ced29(&v37);
            v32 = v39;
            *((int128_t *)&v30) = *((int128_t *)&v37);
            v33 = 1;
            alloc::boxed::Box$LT$T$GT$::new::hd2f8f845018abeb1(&v30);
            ::0x46a6b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&v8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&v14);
            return v45;
        }
        goto LABEL_46ae1e;
    }
    else
    {
        v19 = v49;
        *((int128_t *)&v30) = *((int128_t *)&_ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE);
        *((int128_t *)&v32) = *((int128_t *)&_ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E);
        *((int128_t *)&v34) = *((int128_t *)&_ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE);
        v37 = &v30;
        v38 = &v36;
        v44 = 0;
        v51 = 0;
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h92699e7722e0cdb1(&v37, &v14, &v19))
        {
LABEL_46ae1e:
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE, g_527928))
            {
LABEL_46ae3b:
                v44 = 0;
                v51 = v51 | -0x100 | 2;
            }
            else
            {
                v44 = v44 | -0x100 | 1;
                v51 = v51 | -0x100 | 1;
                if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E, g_527938)))
                    goto LABEL_46b04d;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v14, _ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE, g_5278e8))
                {
                    v51 = v51 | -0x100 | 3;
                    v44 = 0;
                    goto LABEL_46b04d;
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha126cde0a0efcd6f(&v30, &v14, _ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE, g_5278e8);
                v52 = clap_builder::parser::error::MatchesError::unwrap::hcd0b6e29cbee9ee2(_ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE, g_5278e8, &v30);
                if (!v52)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_525030); /* do not return */
                v53 = v52->field_8;
                v54 = v52->field_10;
                v44 = 0;
                v51 = 0;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(v53, v54, &g_4153cf, 5) && (v44 = -255, v51 = -255, !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(v53, v54, "once", 4)))
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc6df80652f5a42a6(v53, v54, "alwaysInvalid argument to interactive ()remove  ", 6))
                    {
                        v19 = v53;
                        v20 = v54;
                        v37 = &v19;
                        v38 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                        v30 = &g_524f40;
                        v31 = 2;
                        v34 = 0;
                        v32 = &v37;
                        v33 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::hd9d607212dba1a42();
                        v33 = 1;
                        *((int128_t *)&v30) = *((int128_t *)&v26);
                        v32 = *((long long *)&v27);
                        v45 = alloc::boxed::Box$LT$T$GT$::new::hd2f8f845018abeb1(&v30);
                        ::0x46a6b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&v8);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&v14);
                        return v45;
                    }
                    goto LABEL_46ae3b;
                }
            }
        }
LABEL_46b04d:
        v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm13OPT_RECURSIVE17h2fa6c9dde2790f6fE, g_527948);
        v1 = v0;
        v7 = v51;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm19OPT_ONE_FILE_SYSTEM17hd3b3b11c7c2e9882E, g_527918);
        v3 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h03dcac76c1bbbf9bE, g_527908) ^ 1;
        v4 = v55;
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm7OPT_DIR17h5f6deba47bfce7beE, g_5278d8);
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN5uu_rm11OPT_VERBOSE17h5f223445ddf1a557E, g_527958);
        if ((char)v44 && (4 <= v11 | v55) == 1)
        {
            v11 = v10;
            if (2 <= v11)
                v56 = "arguments";
            else
                v56 = "argumentNoEquals";
            v24 = v56;
            v25 = 9 - (v11 < 2);
            *((int *)&v12) = (v55 ? " recursively?" : "?");
            *((int *)&v13) = (v55 ? 13 : 1);
            v30 = &v11;
            v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v32 = &v24;
            v33 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
            v34 = &v12;
            v35 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
            v37 = &g_524f60;
            v38 = 3;
            v41 = 0;
            v39 = &v30;
            v40 = 3;
            core::option::Option$LT$T$GT$::map_or_else::hd9d607212dba1a42();
            *((int128_t *)&v19) = *((int128_t *)&v28);
            v21 = *((long long *)&v29);
            v37 = uucore::util_name::h60d842bf27b05e82();
            v38 = v50;
            v12 = &v37;
            v13 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
            v30 = &g_524ec8;
            v31 = 2;
            v34 = 0;
            v32 = &v12;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
            v37 = &v19;
            v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v30 = &g_415190;
            v31 = 1;
            v34 = 0;
            v32 = &v37;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
            v30 = &g_524f90;
            v31 = 1;
            v32 = 8;
            *((int128_t *)&v33) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
            v11 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v59 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v11);
            if (v59)
            {
                v24 = v59;
                v37 = uucore::util_name::h60d842bf27b05e82();
                v38 = v50;
                v12 = &v37;
                v13 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a410b5575987dd7;
                v30 = &g_524ec8;
                v31 = 2;
                v34 = 0;
                v32 = &v12;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
                v37 = &v24;
                v38 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v30 = &g_524ee8;
                v31 = 2;
                v34 = 0;
                v32 = &v37;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
            if (!(char)uucore::read_yes::hc350e858ab85cf03())
            {
                ::0x46a590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2b32e5da88b5b934(&v19);
                ::0x46a6b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&v8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&v14);
                return v45;
            }
            ::0x46a590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2b32e5da88b5b934(&v19);
        }
        if ((char)uu_rm::remove::ha4133918b1aa389d(v9, v10, &v1))
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77();
            ::0x46a6b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&v8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&v14);
            return v45;
        }
        ::0x46a6b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6a86a76edea5cebd(&v8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h71510051a836075c(&v14);
        return 0;
    }
}
