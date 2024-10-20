long long uu_comm::uumain::h258d2fbda300fed7(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x478], Other Possible Types: struct struct_2 **, uint128_t [2], char, unsigned long long, unsigned long
    struct_1 *v1;  // [sp-0x470], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0x468], Other Possible Types: unsigned long long
    char v3;  // [bp-0x458]
    char v4;  // [bp-0x448]
    char v5;  // [bp-0x430]
    char v6;  // [bp-0x428]
    char v7;  // [bp-0x420]
    uint128_t v8[2];  // [sp-0x418]
    struct_1 *v9;  // [sp-0x410]
    int v10;  // [sp-0x408]
    int v11;  // [sp-0x3f8]
    char v12;  // [sp-0x3e8]
    unsigned int v13;  // [bp-0x3e7]
    unsigned int v14;  // [sp-0x3e4]
    unsigned long long v15;  // [sp-0x3e0]
    uint128_t v16[2];  // [sp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v17;  // [sp-0x3d0], Other Possible Types: unsigned long long
    int v18;  // [sp-0x3c8]
    int v19;  // [sp-0x3b8]
    char v20;  // [sp-0x3a8]
    unsigned int v21;  // [bp-0x3a7]
    unsigned int v22;  // [sp-0x3a4]
    struct_1 *v23;  // [sp-0x3a0]
    uint128_t v24[2];  // [sp-0x398]
    unsigned long v25;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x388]
    int v27;  // [sp-0x380]
    int v28;  // [sp-0x370]
    unsigned long long v29;  // [sp-0x360]
    int v30;  // [bp-0x358], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v31;  // [sp-0x350]
    int v32;  // [sp-0x348]
    int v33;  // [sp-0x338]
    int v34;  // [sp-0x328]
    char v35;  // [bp-0x310]
    char v36;  // [bp-0x300]
    int v37;  // [bp-0x2f8], Other Possible Types: uint128_t [3], char, unsigned long, unsigned long long
    void* v38;  // [sp-0x2f0], Other Possible Types: uint128_t [3], unsigned long long
    struct struct_3 **v39;  // [sp-0x2e8], Other Possible Types: uint128_t [3], unsigned long long
    unsigned int v40;  // [bp-0x2e0], Other Possible Types: unsigned long, unsigned long long
    void* v41;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v42;  // [sp-0x2d0]
    void* v43;  // [sp-0x2c8]
    unsigned long long v44;  // [sp-0x2b8]
    uint128_t v46[2];  // rbp
    unsigned long long v48[3];  // r14
    unsigned long long v49[3];  // r15
    unsigned int v50;  // ebp
    char v51;  // al
    char v52;  // al
    uint128_t v53[2];  // rbp
    struct_1 *v54;  // r15
    struct_4 *v55;  // r15
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rax
    unsigned long long v58[3];  // r12
    void* v59;  // r15
    char v60;  // al
    unsigned long long v61[3];  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rcx
    unsigned long long v64;  // rbx
    unsigned long long v65;  // r14
    char v66;  // al
    uint128_t v67[3];  // rax
    int v68;  // xmm0
    unsigned long long v69;  // r9
    unsigned int v70;  // eax
    unsigned long long v71;  // rsi
    uint128_t v72[2];  // r14
    struct_1 *v73;  // r15
    struct struct_0 **v74;  // rax

    uu_comm::uu_app::hb783311b96f333d2(&v37);
    clap_builder::builder::command::Command::try_get_matches_from::h4b153dfeafe6c294(&v0, &v37, a0, a1);
    if (v25 == 0x8000000000000000)
    {
        v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v26);
        if (!v46)
        {
            vvar_1078{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v70;
        }
        goto LABEL_434489;
    }
    v29 = *((long long *)&v4);
    *((int128_t *)&v28) = *((int128_t *)&v3);
    *((int128_t *)&v27) = *((int128_t *)&v2);
    v25 = v0;
    v26 = v1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2b80e4839e2c22d1(&v37, &v25, "FILE1/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs");
    v48 = clap_builder::parser::error::MatchesError::unwrap::h684842b111bf4596("FILE1/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs", 5, &v37);
    if (!v48)
        goto LABEL_434b93;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2b80e4839e2c22d1(&v37, &v25, "FILE2");
    v49 = clap_builder::parser::error::MatchesError::unwrap::h684842b111bf4596("FILE2", 5, &v37);
    if (!v49)
    {
LABEL_434b93:
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    v50 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v25, "zero-terminatedFILE1/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs", 15) ? 10 : 0);
    uu_comm::open_file::hf1a97c9c21fc0fa7(&v37, v48[1], v48[2], v50);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h18f30211accac670(&v0, &v37, v48);
    v51 = v4;
    if (v12 == 11)
    {
        *((uint128_t *[2])&v46[0]) = v8;
        v9 = v9;
        goto LABEL_434473;
    }
    *((int128_t *)&v11) = *((int128_t *)&v3);
    *((int128_t *)&v10) = *((int128_t *)&v2);
    v13 = *((int *)&(&v4)[1]);
    v14 = *((int *)&(&v4)[4]);
    *((uint128_t *[2])&v8[0]) = v0;
    v9 = v1;
    v12 = v51;
    uu_comm::open_file::hf1a97c9c21fc0fa7(&v37, v49[1], v49[2], v50);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd5ad9cc91fc2d6e5(&v0, &v37, v49);
    v52 = v4;
    v53 = v0;
    v54 = v1;
    if (v20 == 11)
    {
LABEL_43444b:
        if (v8)
        {
            if (v9)
                __rust_dealloc(v8);
            close((int)(&v11)[8]);
        }
LABEL_434473:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8ad23f5b2b6b9348(&v25);
        if (v46)
        {
LABEL_434489:
            *((uint128_t *[2])&v8[0]) = v46;
            v9 = v9;
            v0 = &v8[0];
            v1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc3fba149c2cd4fc4;
            v37 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v38 = 1;
            v41 = 0;
            v39 = &v0;
            v40 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v35, &v37);
            *((int128_t *)&v0) = *((int128_t *)&v35);
            v2 = *((long long *)&v36);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h42672210a4ed155c(v1, *((long long *)&v36), 1, 0))
            {
                v30 = uucore::util_name::h359eff083fe53467();
                v31 = v56;
                v16 = &v30;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd617b20d745ed83;
                v37 = &g_4da9c8;
                v38 = 2;
                v41 = 0;
                v39 = &v16;
                v40 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v71, v56);
                v30 = &v0;
                v31 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v37 = &g_4da9e8;
                v38 = 2;
                v41 = 0;
                v39 = &v30;
                v40 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v71, v56);
            }
            if ((char)v9->field_68(v8))
            {
                v30 = uucore::execution_phrase::hded5ccd87df1fcab();
                v31 = v56;
                v16 = &v30;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd617b20d745ed83;
                v37 = &g_4daa08;
                v38 = 2;
                v41 = 0;
                v39 = &v16;
                v40 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v71, v56);
            }
            v70 = v9->field_60(v8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h573b93d083112c84();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b37ba4cd1c4c6a(&v0);
            v72 = v8;
            v73 = v9;
            if (v73->field_0)
                v74(v72);
            if (v73->field_8)
            {
                __rust_dealloc(v72);
                return v70;
            }
            return v70;
        }
        goto LABEL_434a61;
    }
    *((int128_t *)&v19) = *((int128_t *)&v3);
    *((int128_t *)&v18) = *((int128_t *)&v2);
    v21 = *((int *)&(&v4)[1]);
    v22 = *((int *)&(&v4)[4]);
    *((uint128_t *[2])&v24[0]) = v53;
    *((uint128_t *[2])&v16[0]) = v53;
    v23 = v54;
    v17 = v54;
    v20 = v52;
    v55 = clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::get::ha297081f0585c0b4(&v25, "output-delimiterPermissionDeniedStripPrefixErrorClapErrorWrapper", 16);
    if (!v55)
    {
        *((int128_t *)&v37) = 0;
    }
    else
    {
        v0 = 9479156756246622757;
        v1 = 15398537441398644645;
        *((long long *)&v37[0]) = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v55, 9479156756246622757);
        v38 = v56;
        if (!(char)_$LT$clap_builder..util..any_value..AnyValueId$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfe0cc99dda6b9026(&v0, &v37))
        {
            v38 = 0;
            *((uint128_t *[3])&v39[0]) = v37;
            v40 = v56;
            v41 = 9479156756246622757;
            v42 = 15398537441398644645;
            v37 = 1;
        }
        else
        {
            v38 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref$u7b$$u7b$reify.shim$u7d$$u7d$::hfcddfad690375439;
            *((struct struct_5 **)&v39[0]) = v55->field_38;
            v40 = (char *)v39 + 24 * v55->field_40;
            v41 = 0;
            v43 = 0;
            v44 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals::hb3f091e72b19d47b(v55);
            v37 = 0;
        }
    }
    clap_builder::parser::error::MatchesError::unwrap::h8cdd211b5e4da2b2(&v0, "output-delimiterPermissionDeniedStripPrefixErrorClapErrorWrapper", 16, &v37);
    if (!v0)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    *((int128_t *)&v34) = *((int128_t *)&v4);
    *((int128_t *)&v33) = *((int128_t *)&v3);
    *((int128_t *)&v32) = *((int128_t *)&v2);
    *((int128_t *)&v30) = *((int128_t *)&v0);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6ddec1ea81a9b60f(&v5, &v30);
    v57 = *((long long *)&v7);
    if (!v57)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v58 = *((long long *)&v6);
    if (v57 != 1)
    {
        v59 = 0;
        v15 = &g_4daa88;
        v60 = 0;
        do
        {
            if ((v60 & 1))
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v61 = *((long long *)&v6);
            v62 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h42672210a4ed155c(*((long long *)(v58 + v59 + 32)), *((long long *)(v58 + v59 + 40)), v61[1], v61[2]);
            if (!(char)v62)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he85835e9bc138b6a(&v37, 48, 0);
                if (v37)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v67 = v39;
                v67[2] = 133449359328100653481948179202969987437;
                v67[1] = 140131764074368458584591519812825278836;
                v67[0] = 132140961368540609112051957672186770797;
                v40 = 1;
                v37 = v38;
                *((uint128_t *[3])&v38[0]) = v67;
                v39 = 48;
                v53 = __rust_alloc(32, 8);
                if (!v53)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v68 = *((int128_t *)&v37);
                v53[1] = *((int128_t *)&v39);
                *((void*)&v53[0]) = v68;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5de60260a7b0085f(&v5);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0fb92f2fabd0ac4(&v5);
                v54 = &g_4daad8.field_0;
                if (v24)
                {
                    if (v23)
                        __rust_dealloc(v24);
                    close((int)(&v19)[8]);
                    goto LABEL_43444b;
                }
                goto LABEL_43444b;
            }
        } while ((v63 = *((long long *)&v7), v60 = (char)(v62 | -0x100 | (unsigned long long)(char)(!v63)), v59 += 24, (v57 + (v57 << 1) << 3) - 24 != v59));
        if (!v63)
        {
            v15 = &g_4daa70;
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v58 = *((long long *)&v6);
    }
    v64 = v58[1];
    v65 = v58[2];
    v66 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h42672210a4ed155c(v64, v65, 1, 0);
    if (v66)
        v64 = &g_4103a7;
    if (v66)
        v65 = 1;
    uu_comm::comm::hc4fde09fe820245a(v8, &v16, v64, v65, &v25, v69);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5de60260a7b0085f(&v5);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he0fb92f2fabd0ac4(&v5);
    if (v16)
    {
        if (v17)
            __rust_dealloc(v16);
        close((int)(&v19)[8]);
    }
    if (v8)
    {
        if (v9)
            __rust_dealloc(v8);
        close((int)(&v11)[8]);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8ad23f5b2b6b9348(&v25);
LABEL_434a61:
    v70 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v70;
}
