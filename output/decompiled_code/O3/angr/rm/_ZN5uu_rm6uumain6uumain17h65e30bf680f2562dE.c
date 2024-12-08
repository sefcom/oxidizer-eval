long long uu_rm::uumain::uumain::h65e30bf680f2562d(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x6b8]
    char v1;  // [sp-0x6b7]
    char v2;  // [sp-0x6b6]
    char v3;  // [sp-0x6b5]
    char v4;  // [sp-0x6b4]
    char v5;  // [sp-0x6b3]
    char v6;  // [sp-0x6b2]
    char v7;  // [sp-0x6b1]
    unsigned long v8;  // [sp-0x6b0], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x6a8], Other Possible Types: unsigned long, unsigned long long
    int v10;  // [sp-0x6a0], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x698]
    unsigned long v12;  // [sp-0x690], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x688]
    unsigned long v14;  // [sp-0x680], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x678]
    unsigned long v16;  // [sp-0x670], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x668]
    int v18;  // [sp-0x660]
    int v19;  // [sp-0x650]
    unsigned long long v20;  // [sp-0x640]
    int v21;  // [bp-0x638], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v22;  // [sp-0x630], Other Possible Types: unsigned long long
    char v23;  // [bp-0x628], Other Possible Types: unsigned long long
    char v24;  // [bp-0x618]
    char v25;  // [bp-0x608]
    char v26;  // [bp-0x5f8]
    char v27;  // [bp-0x5e8]
    char v28;  // [bp-0x5e0]
    char v29;  // [bp-0x5d0]
    int v30;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v31;  // [sp-0x5c0]
    int v32;  // [bp-0x5b8], Other Possible Types: unsigned long long
    int v33;  // [bp-0x5b0], Other Possible Types: unsigned long, unsigned int, unsigned long long
    int v34;  // [bp-0x5a8], Other Possible Types: void*, unsigned long long
    unsigned long long v35;  // [sp-0x5a0]
    int v36;  // [sp-0x598]
    char v37;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v38;  // [sp-0x2f0]
    char v39;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v40;  // [sp-0x2e0]
    void* v41;  // [bp-0x2d8], Other Possible Types: char
    char v42;  // [bp-0x2c8]
    unsigned long long v44;  // rbx
    unsigned long long v45;  // rdx
    void* v46;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rbp
    unsigned long long v52[3];  // rax
    unsigned long long v53;  // r12
    unsigned long long v54;  // r13
    char v55;  // r13b
    unsigned long long v56;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdi

    v44 = &v30;
    uu_rm::uu_app::h035066bf1263c8f0(&v30, a1, v45);
    clap_builder::builder::command::Command::after_help::h487e4cf9ca92250d(&v37, &v30, "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a '-', for example '-foo',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred.", 493);
    clap_builder::builder::command::Command::try_get_matches_from::h7aa6f36cccef3a15(&v21, &v37, a0, a1);
    if (v16 == 0x8000000000000000)
    {
        v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v17);
        return v46;
    }
    v20 = *((long long *)&v25);
    *((int128_t *)&v19) = *((int128_t *)&v24);
    *((int128_t *)&v18) = *((int128_t *)&v23);
    v16 = v21;
    v17 = v22;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h01a08b6736de9254(&v30, &v16, _ZN5uu_rm9ARG_FILES17h2be3214e19d76188E, g_527d80);
    clap_builder::parser::error::MatchesError::unwrap::hc5ac0926e44a703f(&v37, _ZN5uu_rm9ARG_FILES17h2be3214e19d76188E, g_527d80, &v30);
    if (!v37 || (*((int128_t *)&v36) = *((int128_t *)&v42), *((int128_t *)&v34) = *((int128_t *)&v41), *((int128_t *)&v32) = *((int128_t *)&v39), *((int128_t *)&v30) = *((int128_t *)&v37), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7f3e0b29ca1b57ea(&v21, &v30, v45), *((int128_t *)&v30) = *((int128_t *)&v22), v9 == 0x8000000000000000))
    {
        v9 = 0;
        v10 = 8;
        v11 = 0;
    }
    else
    {
        *((int128_t *)&v10) = (int128_t)v30;
        v9 = v21;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm9OPT_FORCE17h6ec0b9532c2ae333E, g_527d10);
    if (!v0)
    {
        if (!v11)
        {
            ::0x46a8e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf8c94c49453fa824(&v37);
            v32 = v39;
            *((int128_t *)&v30) = *((int128_t *)&v37);
            v33 = 1;
            alloc::boxed::Box$LT$T$GT$::new::h008648c039b64d5f(&v30);
            ::0x46a740::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbc6d881dc8cc15ed(&v9);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9a1c81a42fe1d89(&v16);
            return v46;
        }
        goto LABEL_46aec6;
    }
    else
    {
        v21 = v50;
        *((int128_t *)&v30) = *((int128_t *)&_ZN5uu_rm10OPT_PROMPT17h6e79c193a9267fd0E);
        *((int128_t *)&v32) = *((int128_t *)&_ZN5uu_rm15OPT_PROMPT_MORE17heccfa5161239791eE);
        *((int128_t *)&v34) = *((int128_t *)&_ZN5uu_rm15OPT_INTERACTIVE17hdfe11d6824ab2a68E);
        v37 = &v30;
        v38 = &v36;
        v44 = 0;
        v51 = 0;
        if ((char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0b0d76b7a3491b63(&v37, &v16, &v21))
        {
LABEL_46aec6:
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm10OPT_PROMPT17h6e79c193a9267fd0E, g_527d40))
            {
LABEL_46aee3:
                v44 = 0;
                v51 = v51 | -0x100 | 2;
            }
            else
            {
                v44 = v44 | -0x100 | 1;
                v51 = v51 | -0x100 | 1;
                if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm15OPT_PROMPT_MORE17heccfa5161239791eE, g_527d50)))
                    goto LABEL_46b0fe;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v16, _ZN5uu_rm15OPT_INTERACTIVE17hdfe11d6824ab2a68E, g_527d00))
                {
                    v51 = v51 | -0x100 | 3;
                    v44 = 0;
                    goto LABEL_46b0fe;
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he85dcb07dad9cc7b(&v30, &v16, _ZN5uu_rm15OPT_INTERACTIVE17hdfe11d6824ab2a68E, g_527d00);
                v52 = clap_builder::parser::error::MatchesError::unwrap::h9b73d859cd706bfc(_ZN5uu_rm15OPT_INTERACTIVE17hdfe11d6824ab2a68E, g_527d00, &v30);
                if (!v52)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v53 = v52[1];
                v54 = v52[2];
                v44 = 0;
                v51 = 0;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0b80bc50efbfff1d(v53, v54, "never", 5) && (v44 = -255, v51 = -255, !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0b80bc50efbfff1d(v53, v54, "once", 4)))
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0b80bc50efbfff1d(v53, v54, "alwaysInvalid argument to interactive ()", 6))
                    {
                        v21 = v53;
                        v22 = v54;
                        v37 = &v21;
                        v38 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hebff83d01073ebd3;
                        v30 = &g_5253e0;
                        v31 = 2;
                        v34 = 0;
                        v32 = &v37;
                        v33 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h08bdba6548b42f30(&v26, &v30);
                        v33 = 1;
                        *((int128_t *)&v30) = *((int128_t *)&v26);
                        v32 = *((long long *)&v27);
                        v46 = alloc::boxed::Box$LT$T$GT$::new::h008648c039b64d5f(&v30);
                        ::0x46a740::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbc6d881dc8cc15ed(&v9);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9a1c81a42fe1d89(&v16);
                        return v46;
                    }
                    goto LABEL_46aee3;
                }
            }
        }
LABEL_46b0fe:
        v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm13OPT_RECURSIVE17h1ed158534c07cc61E, g_527d60);
        v1 = v0;
        v7 = v51;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm19OPT_ONE_FILE_SYSTEM17hd93ba1fa86fcaac7E, g_527d30);
        v3 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm20OPT_NO_PRESERVE_ROOT17he605fcab16e88f9bE, g_527d20) ^ 1;
        v4 = v55;
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm7OPT_DIR17h023e99ce56da3baaE, g_527cf0);
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v16, _ZN5uu_rm11OPT_VERBOSE17hd87e73d68823d7fcE, g_527d70);
        if ((char)v44)
        {
            if (v55)
            {
                v56 = v11;
                v8 = v56;
                *((int *)&v12) = (2 <= v56 ? "arguments" : "argumentNoEquals");
                v13 = 9 - (v56 < 2);
                v58 = 13;
                v59 = " recursively?remove  ";
            }
            else
            {
                if (v8 <= 3)
                    goto LABEL_46b44d;
                v8 = v11;
                v12 = "arguments";
                v13 = 9;
                v58 = 1;
                v59 = "?";
            }
            v14 = v59;
            v15 = v58;
            v30 = &v8;
            v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v32 = &v12;
            v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hebff83d01073ebd3;
            v34 = &v14;
            v35 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hebff83d01073ebd3;
            v37 = &g_5254a8;
            v38 = 3;
            v41 = 0;
            v39 = &v30;
            v40 = 3;
            core::option::Option$LT$T$GT$::map_or_else::h08bdba6548b42f30(&v28, &v37);
            *((int128_t *)&v21) = *((int128_t *)&v28);
            v23 = *((long long *)&v29);
            v37 = uucore::util_name::h412db5e565a079f3();
            v38 = v45;
            v14 = &v37;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hebff83d01073ebd3;
            v30 = &g_5252d8;
            v31 = 2;
            v34 = 0;
            v32 = &v14;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v60, v45);
            v37 = &v21;
            v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v30 = &g_4151f0;
            v31 = 1;
            v34 = 0;
            v32 = &v37;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v60, v45);
            v30 = &g_5254d8;
            v31 = 1;
            v32 = 8;
            *((int128_t *)&v33) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v60, v45);
            v8 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v61 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v8, v60, v45);
            if (v61)
            {
                v12 = v61;
                v37 = uucore::util_name::h412db5e565a079f3();
                v38 = v45;
                v14 = &v37;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hebff83d01073ebd3;
                v30 = &g_5252d8;
                v31 = 2;
                v34 = 0;
                v32 = &v14;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v60, v45);
                v37 = &v12;
                v38 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v30 = &g_5252f8;
                v31 = 2;
                v34 = 0;
                v32 = &v37;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v60, v45);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
            if (!(char)uucore::read_yes::h34a9f501e29598a6(v62, v60, v45))
            {
                ::0x46a620::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8aab223c5be8ab64(&v21);
                ::0x46a740::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbc6d881dc8cc15ed(&v9);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9a1c81a42fe1d89(&v16);
                return v46;
            }
            ::0x46a620::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8aab223c5be8ab64(&v21);
        }
LABEL_46b44d:
        if ((char)uu_rm::remove::hd4222109c4acc3c9(v10, v11, &v1))
        {
            uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
            ::0x46a740::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbc6d881dc8cc15ed(&v9);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9a1c81a42fe1d89(&v16);
            return v46;
        }
        ::0x46a740::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbc6d881dc8cc15ed(&v9);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9a1c81a42fe1d89(&v16);
        return 0;
    }
}
