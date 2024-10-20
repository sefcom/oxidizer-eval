long long uu_rm::uumain::hba8298267b9a309e(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x6d0]
    char v1;  // [sp-0x6cf]
    char v2;  // [sp-0x6ce]
    char v3;  // [sp-0x6cd]
    char v4;  // [sp-0x6cc]
    char v5;  // [sp-0x6cb]
    char v6;  // [sp-0x6ca]
    char v7;  // [sp-0x6c9]
    void* v8;  // [sp-0x6c8], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [sp-0x6c0], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x6b8]
    unsigned long v11;  // [sp-0x6b0], Other Possible Types: unsigned long long
    uint128_t v12[2];  // [bp-0x6a8], Other Possible Types: char
    struct_1 *v13;  // [sp-0x6a0]
    char v14;  // [bp-0x698]
    unsigned long v15;  // [sp-0x690], Other Possible Types: unsigned long long
    struct_1 *v16;  // [sp-0x688], Other Possible Types: unsigned long long
    int v17;  // [sp-0x680]
    int v18;  // [sp-0x670]
    unsigned long long v19;  // [sp-0x660]
    int v20;  // [bp-0x658], Other Possible Types: struct struct_3 **, unsigned long, unsigned long long
    struct_1 *v21;  // [sp-0x650], Other Possible Types: unsigned long, unsigned long long
    char v22;  // [bp-0x648], Other Possible Types: unsigned long long
    char v23;  // [bp-0x638]
    char v24;  // [bp-0x628]
    unsigned long v25;  // [sp-0x620], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x618]
    unsigned long v27;  // [sp-0x610], Other Possible Types: unsigned long long
    struct_1 *v28;  // [sp-0x608], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x600]
    int v30;  // [bp-0x5f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long *v31;  // [sp-0x5f0], Other Possible Types: unsigned long long
    int v32;  // [bp-0x5e8], Other Possible Types: struct struct_3 **, struct struct_4 **, unsigned long long *, unsigned long long
    int v33;  // [bp-0x5e0], Other Possible Types: struct_1 *, unsigned int, unsigned long long
    int v34;  // [bp-0x5d8], Other Possible Types: void*, unsigned long long
    struct_1 *v35;  // [sp-0x5d0]
    int v36;  // [sp-0x5c8]
    char v37;  // [bp-0x328]
    char v38;  // [bp-0x318]
    char v39;  // [bp-0x310]
    char v40;  // [bp-0x300]
    int v41;  // [bp-0x2f8], Other Possible Types: struct struct_2 **, char, unsigned long, unsigned long long
    struct_1 *v42;  // [sp-0x2f0], Other Possible Types: unsigned long long
    char v43;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v44;  // [sp-0x2e0]
    void* v45;  // [bp-0x2d8], Other Possible Types: char
    char v46;  // [bp-0x2c8]
    unsigned long long v48;  // rbp
    struct_1 *v49;  // r13
    unsigned long long v50;  // rbx
    unsigned long long v51;  // r14
    uint128_t v52[2];  // r15
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r14
    struct_1 *v58;  // rax
    struct_1 *v59;  // rdx
    unsigned long long v60;  // r15
    unsigned long long v61;  // rbx
    unsigned long long v62;  // r14
    unsigned long long v63;  // r12
    unsigned long long *v64;  // rax
    int v65;  // xmm0
    struct_1 *v66;  // r12
    char v67;  // bpl
    struct_1 *v68;  // r13
    unsigned long long v69;  // rbx
    unsigned long long v70;  // r14
    unsigned long long v71[3];  // rax
    unsigned long long v72;  // r15
    unsigned long long v73;  // r12
    int v74;  // xmm0
    char v75;  // r14b
    unsigned long long v76;  // rcx
    unsigned long long v77;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rcx
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rax
    unsigned long long v84;  // rdi
    unsigned long long v85;  // r8
    unsigned long long v86;  // r9
    unsigned int v87;  // eax
    uint128_t v88[2];  // r14
    struct_1 *v89;  // r15
    struct struct_0 **v90;  // rax

    uu_rm::uu_app::h7a27fcca8628fc45(&v30);
    v48 = &v41;
    clap_builder::builder::command::Command::after_help::h273c1fcd81a86719(&v41, &v30, "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a '-', for example '-foo',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred./home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/rm/src/rm.rs", 493);
    v49 = &v20;
    clap_builder::builder::command::Command::try_get_matches_from::h3e5876b283da1a8c(&v20, &v41, a0, a1);
    if (v15 == 0x8000000000000000)
    {
        v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v16);
        if (!v52)
        {
            vvar_1344{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v87;
        }
        goto LABEL_43b85f;
    }
    v19 = *((long long *)&v24);
    *((int128_t *)&v18) = *((int128_t *)&v23);
    *((int128_t *)&v17) = *((int128_t *)&v22);
    v15 = v20;
    v16 = v21;
    v50 = _ZN5uu_rm9ARG_FILES17hc17bba42d7ad60edE;
    v51 = g_4ee5f0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h030451cafe1cede1(&v30, &v15, v50, v51);
    clap_builder::parser::error::MatchesError::unwrap::hb1f10634e83f7e86(&v41, v50, v51, &v30);
    if (!v41 || (*((int128_t *)&v36) = *((int128_t *)&v46), *((int128_t *)&v34) = *((int128_t *)&v45), *((int128_t *)&v32) = *((int128_t *)&v43), *((int128_t *)&v30) = *((int128_t *)&v41), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h95b66fe294a07c06(&v20, &v30), *((int128_t *)&v30) = *((int128_t *)&v21), v8 == 0x8000000000000000))
    {
        v8 = 0;
        v9 = 8;
        v10 = 0;
    }
    else
    {
        *((int128_t *)&v9) = (int128_t)v30;
        v8 = v20;
    }
    v55 = _ZN5uu_rm9OPT_FORCE17hb22b75eb78e97584E;
    v56 = g_4ee580;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, v55, v56);
    if (!v0)
    {
        if (!(!v10))
            goto LABEL_43b186;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hcf57d2e8d37677fb(&v30, 15, 0);
        if (v30)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v64 = v32;
        *((long long *)((char *)v64 + 7)) = 7236828795186999072;
        *(v64) = 2334956331002456429;
        v33 = 1;
        v30 = v31;
        v31 = v64;
        v32 = 15;
        v52 = __rust_alloc(32, 8);
        if (!v52)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v65 = *((int128_t *)&v30);
        v52[1] = (int128_t)v32;
        *((void*)&v52[0]) = v65;
        v66 = &g_4ebc50.field_0;
LABEL_43b830:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff7dabc91096e6e3();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he265f1528b96016c(&v8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc582aeeafb6f6b61(&v15);
        if (!v52)
        {
            v87 = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v87;
        }
LABEL_43b85f:
        *((uint128_t *[2])&v12[0]) = v52;
        v13 = v66;
        v41 = &v12[0];
        v42 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h36b17e47c357ffec;
        v30 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v31 = 1;
        v34 = 0;
        v32 = &v41;
        v33 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v37, &v30);
        *((int128_t *)&v41) = *((int128_t *)&v37);
        v43 = *((long long *)&v38);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha123431c6d71664f(v42, *((long long *)&v38), 1, 0))
        {
            v20 = uucore::util_name::h359eff083fe53467();
            v21 = v59;
            v15 = &v20;
            v16 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
            v30 = &g_4ebbd0;
            v31 = 2;
            v34 = 0;
            v32 = &v15;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
            v20 = v32;
            v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v30 = &g_4ebbf0;
            v31 = 2;
            v34 = 0;
            v32 = &v20;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
        }
        if ((char)v13->field_68(v12))
        {
            v20 = uucore::execution_phrase::hded5ccd87df1fcab();
            v21 = v59;
            v15 = &v20;
            v16 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
            v30 = &g_4ebc10;
            v31 = 2;
            v34 = 0;
            v32 = &v15;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
        }
        v87 = v13->field_60(v12);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff7dabc91096e6e3();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h862d888899e77c83(&v41);
        v88 = v12;
        v89 = v13;
        if (v89->field_0)
            v90(v88);
        if (v89->field_8)
        {
            __rust_dealloc(v88);
            return v87;
        }
        return v87;
    }
    v48 = _ZN5uu_rm10OPT_PROMPT17h0856faee7606cbb2E;
    v60 = g_4ee5b0;
    v61 = _ZN5uu_rm15OPT_PROMPT_MORE17h454e96fa7e537826E;
    v62 = g_4ee5c0;
    v29 = _ZN5uu_rm15OPT_INTERACTIVE17hb573342b616e3a66E;
    v63 = g_4ee570;
    if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::hc336ac122dc6cca3(&v15, v48, v60) != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h8d325a3a1894c206(&v15, v48, v60) || v59 <= v58) && ((char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::hc336ac122dc6cca3(&v15, v61, v62) != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h8d325a3a1894c206(&v15, v61, v62) || v59 <= v58) && ((char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::hc336ac122dc6cca3(&v15, v29, v63) != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h8d325a3a1894c206(&v15, v29, v63) || v59 <= v58))
    {
        v67 = 0;
        v68 = 0;
        goto LABEL_43b44b;
    }
LABEL_43b186:
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm10OPT_PROMPT17h0856faee7606cbb2E, g_4ee5b0))
    {
LABEL_43b1a3:
        v67 = 0;
        v68 = v49 | -0x100 | 2;
        goto LABEL_43b44b;
    }
    v67 = v48 | -0x100 | 1;
    v49 = v49 | -0x100 | 1;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm15OPT_PROMPT_MORE17h454e96fa7e537826E, g_4ee5c0))
    {
        v69 = _ZN5uu_rm15OPT_INTERACTIVE17hb573342b616e3a66E;
        v70 = g_4ee570;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v15, v69, v70))
        {
            v68 = v68 | -0x100 | 3;
            v67 = 0;
            goto LABEL_43b44b;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hfeb1d16472d661d5(&v30, &v15, v69, v70);
        v71 = clap_builder::parser::error::MatchesError::unwrap::h7ea67e5a5a6f45f5(v69, v70, &v30);
        if (!v71)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v72 = v71[1];
        v73 = v71[2];
        v67 = 0;
        v68 = 0;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha123431c6d71664f(v72, v73, &g_4117a7, 5) && (v67 = 1, v49 = -255, !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha123431c6d71664f(v72, v73, "once", 4)))
        {
            if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha123431c6d71664f(v72, v73, "alwaysInvalid argument to interactive ()NotFoundTimedOut", 6) & 255 & 255 & 255)))
                goto LABEL_43b1a3;
            v20 = v72;
            v21 = v73;
            v41 = &v20;
            v42 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
            v30 = &g_4ebcd8;
            v31 = 2;
            v34 = 0;
            v32 = &v41;
            v33 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v39, &v30);
            v33 = 1;
            *((int128_t *)&v30) = *((int128_t *)&v39);
            v32 = *((long long *)&v40);
            v52 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
            v74 = (int128_t)v30;
            v52[1] = *((int128_t *)&v32);
            *((void*)&v52[0]) = v74;
            v66 = &g_4ebd30.field_0;
LABEL_43b828:
            goto LABEL_43b830;
        }
    }
LABEL_43b44b:
    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm13OPT_RECURSIVE17hdbca4a64ce3e84c2E, g_4ee5d0);
    v76 = v0;
    v1 = v76;
    v7 = (char)v68;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h28c6712d3c2c2b9eE, g_4ee5a0);
    v3 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm20OPT_NO_PRESERVE_ROOT17hd35cc6b22fd6b6f7E, g_4ee590) ^ 1;
    v4 = v75;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm7OPT_DIR17hee9a257e9c5cf49eE, g_4ee560);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v15, _ZN5uu_rm11OPT_VERBOSE17hbda0445ea026a317E, g_4ee5e0);
    if (!v67)
    {
LABEL_43b7bc:
        if (!(char)uu_rm::remove::hd922d5246fd43d52(v9, v10, &v1, v76, v85, v86))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff7dabc91096e6e3();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he265f1528b96016c(&v8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc582aeeafb6f6b61(&v15);
            vvar_1339{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v87;
        }
        v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
        goto LABEL_43b828;
    }
    else
    {
        if (v75)
        {
            v77 = v10;
            v11 = v77;
            *((int *)&v25) = (2 <= v77 ? "arguments? recursively?remove  " : "argumentNoEqualsNO_COLORarguments? recursively?remove  ");
            v26 = 9 - (v77 < 2);
            v79 = 13;
            v80 = " recursively?remove  ";
        }
        else
        {
            if (v11 <= 3)
                goto LABEL_43b7bc;
            v11 = v10;
            v25 = "arguments? recursively?remove  ";
            v26 = 9;
            v79 = 1;
            v80 = "? recursively?remove  ";
        }
        v27 = v80;
        v28 = v79;
        v30 = &v11;
        v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v32 = &v25;
        v33 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
        v34 = &v27;
        v35 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
        v41 = &g_4ebda0;
        v42 = 3;
        v45 = 0;
        v43 = &v30;
        v44 = 3;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(v12, &v41);
        *((int128_t *)&v20) = *((int128_t *)&v12);
        v22 = *((long long *)&v14);
        v41 = uucore::util_name::h359eff083fe53467();
        v42 = v59;
        v27 = &v41;
        v28 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
        v30 = &g_4ebbd0;
        v31 = 2;
        v34 = 0;
        v32 = &v27;
        v33 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
        v41 = &v20;
        v42 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v30 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v31 = 1;
        v34 = 0;
        v32 = &v41;
        v33 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
        v30 = &g_4ebdd0;
        v31 = 1;
        v32 = 8;
        *((int128_t *)&v33) = 0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
        v11 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v83 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v11, v82, v59);
        if (v83)
        {
            v25 = v83;
            v41 = uucore::util_name::h359eff083fe53467();
            v42 = v59;
            v27 = &v41;
            v28 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h94f742e57ba0d4bd;
            v30 = &g_4ebbd0;
            v31 = 2;
            v34 = 0;
            v32 = &v27;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
            v41 = &v25;
            v42 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v30 = &g_4ebbf0;
            v31 = 2;
            v34 = 0;
            v32 = &v41;
            v33 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v82, v59);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
        if (!(char)uucore::read_yes::hf72ff1df5ee554ec(v84, v82, v59))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff7dabc91096e6e3();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h862d888899e77c83(&v20);
            v52 = 0;
            goto LABEL_43b828;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff7dabc91096e6e3();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h862d888899e77c83(&v20);
            goto LABEL_43b7bc;
        }
    }
}
