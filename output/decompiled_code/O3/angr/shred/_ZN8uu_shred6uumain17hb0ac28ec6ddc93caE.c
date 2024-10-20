long long uu_shred::uumain::hb0ac28ec6ddc93ca(unsigned long long a0, unsigned long long a1)
{
    char v1;  // [sp-0x43d]
    unsigned int v2;  // [sp-0x43c]
    uint128_t v3[2];  // [sp-0x438], Other Possible Types: char, unsigned long long
    struct_2 *v4;  // [sp-0x430], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x428]
    unsigned long long v6;  // [sp-0x420]
    unsigned long v7;  // [sp-0x418], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x410]
    char v9;  // [bp-0x408]
    char v10;  // [bp-0x400], Other Possible Types: unsigned long, unsigned long long
    struct_3 *v11;  // [sp-0x3f8], Other Possible Types: unsigned long long [3], unsigned long long
    char v12;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x3e8]
    char v14;  // [bp-0x3e0]
    struct struct_5 **v15;  // [bp-0x3d8], Other Possible Types: void*, int, char, unsigned long, unsigned long long
    unsigned long v16;  // [sp-0x3d0], Other Possible Types: unsigned long long
    struct_1 *v17;  // [bp-0x3c8], Other Possible Types: int, char, unsigned long long
    char v18;  // [bp-0x3c0], Other Possible Types: unsigned long long
    char v19;  // [bp-0x3b8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x3a8]
    char v21;  // [bp-0x3a0], Other Possible Types: unsigned long long
    char v22;  // [bp-0x398], Other Possible Types: unsigned long
    unsigned long v23;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x388]
    int v25;  // [sp-0x380]
    int v26;  // [sp-0x370]
    unsigned long long v27;  // [sp-0x360]
    unsigned long long v28;  // [sp-0x358]
    unsigned long long v29[9];  // [sp-0x350]
    unsigned long long v30;  // [sp-0x340]
    int v31;  // [sp-0x338]
    char v32;  // [bp-0x328]
    char v33;  // [bp-0x318]
    char v34;  // [bp-0x310]
    char v35;  // [bp-0x300]
    int v36;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    int v37;  // [sp-0x2f0], Other Possible Types: struct_1 *, struct_6 *, unsigned long, unsigned long long
    struct_6 *v38;  // [sp-0x2e8], Other Possible Types: unsigned long long
    void* v39;  // [bp-0x2e0], Other Possible Types: unsigned long, unsigned int, unsigned long long
    struct_1 *v40;  // [sp-0x2d8], Other Possible Types: void*
    void* v41;  // [sp-0x2d0]
    char v42;  // [bp-0x2c8]
    unsigned long long v43;  // [sp-0x2c0]
    unsigned long long v45;  // r15
    unsigned long long v46;  // r13
    uint128_t v48[2];  // rax
    unsigned long long v49[3];  // rax
    int v50;  // xmm0
    unsigned long long v51;  // r12
    unsigned long long v52;  // rax
    struct_6 *v53;  // rax
    unsigned long long v54;  // r13
    unsigned long long v55;  // rbp
    int v56;  // xmm0
    struct_2 *v57;  // r15
    unsigned long v58;  // rcx
    int v59;  // xmm0
    struct_3 *v60;  // rcx
    unsigned int *v61;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rsi
    struct_1 *v65;  // rdx
    unsigned int v67;  // eax
    unsigned long long v68;  // r14
    int v69;  // xmm0
    uint128_t v70[2];  // r14
    struct_2 *v71;  // r12
    struct struct_0 **v72;  // rax
    unsigned long long v75[9];  // rbp
    unsigned long long v77[9];  // rbp
    unsigned long long v78;  // rdi
    unsigned long long v79;  // rbx
    void* v80;  // rax
    unsigned long long v82;  // rdi
    unsigned long long v95;  // rdi
    unsigned long long v97;  // rdi
    void* v98;  // rcx
    unsigned long long v100;  // r15

    uu_shred::uu_app::h855376954f3b42fb(&v36);
    v46 = &v15;
    clap_builder::builder::command::Command::try_get_matches_from::h286dc97f5a7c645f(&v15, &v36, a0, a1);
    if (v23 != 0x8000000000000000)
    {
        v27 = *((long long *)&v20);
        *((int128_t *)&v26) = *((int128_t *)&v19);
        *((int128_t *)&v25) = *((int128_t *)&v17);
        v23 = v15;
        v24 = v16;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v23, "filesizei128", 4))
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf92da699408db960(&v36, 20, 0);
            if (v36)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v53 = v38;
            v53->field_0 = 134835818736588657362413574869681924461;
            v53->field_10 = 1684955506;
            v39 = 1;
            v36 = v37;
            v37 = v53;
            v38 = 20;
            v48 = __rust_alloc(32, 8);
            if (!v48)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v56 = *((int128_t *)&v36);
            v48[1] = *((int128_t *)&v38);
            *((void*)&v48[0]) = v56;
            v57 = &g_4eceb0.field_0;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc130635c42c5eb9e(&v10, &v23, "iterationsinternal error: entered unreachable code/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs", 10);
            v7 = "iterationsinternal error: entered unreachable code/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs";
            v8 = 10;
            if (*((int *)&v10) != 2)
            {
                v19 = *((long long *)&v14);
                v50 = *((int128_t *)&v10);
                *((int128_t *)&v17) = *((int128_t *)&v12);
                v15 = v50;
                v3 = &v7;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
                v5 = &v15;
                v6 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v36 = &g_4ecd88;
                *((unsigned long long *)(v100 + 8)) = v52;
                *((long long *)(v100 + 32)) = 0;
                *((unsigned long long *)(v100 + 16)) = v51;
                *((long long *)(v100 + 24)) = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(v100); /* do not return */
            }
            v49 = v11;
            if (!v49)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            v54 = v49[1];
            v55 = v49[2];
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v54, v55);
            if (!v3)
            {
                v30 = v4;
                v2 = v58 | -0x100 | 3;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v23, "uremoveinternal error: entered unreachable code: should be caught by clap", 1))
                {
                    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v23, "removeinternal error: entered unreachable code: should be caught by clap", 6))
                    {
                        v2 = 0;
                    }
                    else
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc130635c42c5eb9e(&v10, &v23, "removeinternal error: entered unreachable code: should be caught by clap", 6);
                        v7 = "removeinternal error: entered unreachable code: should be caught by clap";
                        v8 = 6;
                        if (*((int *)&v10) != 2)
                        {
                            v19 = *((long long *)&v14);
                            v69 = *((int128_t *)&v10);
                            *((int128_t *)&v17) = *((int128_t *)&v12);
                            v15 = v69;
                            v3 = &v7;
                            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
                            v5 = &v15;
                            v6 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                            v36 = &g_4ecd88;
                            *((unsigned long long *)(v100 + 8)) = v52;
                            *((long long *)(v100 + 32)) = 0;
                            *((unsigned long long *)(v100 + 16)) = v51;
                            *((long long *)(v100 + 24)) = 2;
                            core::panicking::panic_fmt::he12d0d7468628bb4(v100); /* do not return */
                        }
                        v60 = v11;
                        if (!v60)
                        {
                            vvar_1290{stack -760} = &g_4ecf38;
                            *((long long *)&(&v36)[8]) = 1;
                            *((long long *)&(&v36)[32]) = 0;
                            *((char **)&(&v36)[16]) = &v9;
                            *((long long *)&(&v36)[24]) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v36); /* do not return */
                        }
                        v61 = v60->field_8;
                        v62 = v60->field_10;
                        switch (v62)
                        {
                        case 4:
                            v2 = v62 | -0x100 | 2;
                            if (*(v61) == 1701865847)
                                goto LABEL_43c489;
                            else
                                goto LABEL_43c90f;
                        case 6:
                            v2 = v65 | -0x100 | 1;
                            if (!((unsigned short)v61[1] ^ 27502) && !(1768713845 ^ *(v61)))
                                goto LABEL_43c489;
                            else
                                goto LABEL_43c90f;
                        case 8:
                            if (*((long long *)&v61) == 7164797593723103607)
                                goto LABEL_43c489;
                            else
                                goto LABEL_43c90f;
                        default:
LABEL_43c90f:
                            v36 = &g_4ecf38;
                            *((long long *)&(&v36)[8]) = 1;
                            *((long long *)&(&v36)[32]) = 0;
                            *((char **)&(&v36)[16]) = &v9;
                            *((long long *)&(&v36)[24]) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v36); /* do not return */
                        }
                    }
                }
LABEL_43c489:
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v23, "forceexactverboseinvalid number of passes: Error flushing stdout: \n", 5);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc130635c42c5eb9e(&v10, &v23, "sizei128", 4);
                v7 = "sizei128";
                v8 = 4;
                if (*((int *)&v10) != 2)
                {
                    vvar_1320{stack -952} = *((long long *)&v14);
                    vvar_1321{reg 224} = *((int128_t *)&v10);
                    *((int128_t *)&v17) = *((int128_t *)&v12);
                    v15 = v69;
                    vvar_1322{stack -1080} = &v7;
                    vvar_1323{stack -1072} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
                    vvar_1324{stack -1064} = &v15;
                    vvar_1325{stack -1056} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    vvar_1326{stack -760} = &g_4ecd88;
                    *((unsigned long long *)(v100 + 8)) = v52;
                    *((long long *)(v100 + 32)) = 0;
                    *((unsigned long long *)(v100 + 16)) = v51;
                    *((long long *)(v100 + 24)) = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(v100); /* do not return */
                }
                if (v11)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v36, v11);
                    *((int128_t *)&v31) = *((int128_t *)&v37);
                    v68 = v36;
                }
                v36 = v68;
                v37 = v31;
                v28 = uu_shred::get_size::hf38d5d9b9ee0ec02(&v36);
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v23, "zero", 4);
                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v23, "verboseinvalid number of passes: Error flushing stdout: \n", 7);
                v75 = clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::get::h2bfdc2cfa6324f1e(&v23, "filesizei128", 4);
                if (!v75)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v15 = 9479156756246622757;
                v16 = 15398537441398644645;
                v36 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v75, 9479156756246622757);
                v37 = v65;
                v45 = &v36;
                v29[0] = v75;
                v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v23, "exactverboseinvalid number of passes: Error flushing stdout: \n", 5);
                v77 = v29;
                if (!(char)_$LT$clap_builder..util..any_value..AnyValueId$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfe0cc99dda6b9026(&v15, &v36))
                {
                    v3 = "filesizei128";
                    v4 = 4;
                    v15 = 0;
                    v16 = v36;
                    v17 = v65;
                    v18 = 9479156756246622757;
                    v19 = 15398537441398644645;
                    v10 = &v3;
                    v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
                    v12 = &v15;
                    v13 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    v36 = &g_4ecd88;
                    v52 = 2;
                    v51 = &v10;
                    *((unsigned long long *)(v100 + 8)) = v52;
                    *((long long *)(v100 + 32)) = 0;
                    *((unsigned long long *)(v100 + 16)) = v51;
                    *((long long *)(v100 + 24)) = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(v100); /* do not return */
                }
                v78 = v77[7];
                v79 = v78 + v77[8] * 24;
                v36 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref$u7b$$u7b$reify.shim$u7d$$u7d$::h6fc23ef05c3066b0;
                v37 = v78;
                v38 = v79;
                v39 = 0;
                v40 = 15398537441398644645;
                v41 = 0;
                v43 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals::hb3f091e72b19d47b(v77);
                v22 = v22;
                v21 = v21;
                while (true)
                {
                    v95 = v82;
                    if (!(v95) || !(v95 != v79))
                        break;
                    v37 = v97;
                    v80 = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22a40fa1b6e12d5c(v95);
                    v39 = v80;
                    v40 = v65;
                    v97 = v37;
                }
                v80 = v41;
                if (v80)
                {
                    v98 = v80 + 32;
                    if (v80 == *((long long *)&v42))
                        v98 = 0;
                    v41 = v98;
                }
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0e720ded52720c9f(&v23);
                v67 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v67;
            }
            v15 = 0;
            v16 = v54;
            v17 = v55;
            v18 = 1;
            v10 = &v15;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v36 = &g_4ecfa8;
            v37 = 1;
            v40 = 0;
            v38 = &v10;
            v39 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v34, &v36);
            v39 = 1;
            *((int128_t *)&v36) = *((int128_t *)&v34);
            v38 = *((long long *)&v35);
            v48 = __rust_alloc(32, 8);
            if (!v48)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v59 = (int128_t)v36;
            v48[1] = *((int128_t *)&v38);
            *((void*)&v48[0]) = v59;
            v57 = &g_4ecff0.field_0;
        }
        v46 = &v15;
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0e720ded52720c9f(&v23);
    }
    else
    {
        v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v24);
        if (!v48)
        {
            uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v67;
        }
    }
    *((uint128_t *[2])&v3[0]) = v48;
    v4 = v57;
    v15 = &v3;
    v16 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8e595902c3dfbd6f;
    v36 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v37 = 1;
    v40 = 0;
    v38 = v46;
    v39 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v32, &v36);
    *((int128_t *)&v15) = *((int128_t *)&v32);
    v17 = *((long long *)&v33);
    if (v17)
    {
        v23 = uucore::util_name::h359eff083fe53467();
        v24 = v63;
        v10 = &v23;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
        v36 = &g_4ece30;
        v37 = 2;
        v40 = 0;
        v38 = &v10;
        v39 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v64, v63);
        v23 = v38;
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v36 = &g_4ece50;
        v37 = 2;
        v40 = 0;
        v38 = &v23;
        v39 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v64, v63);
    }
    if ((char)v4->field_68(v3))
    {
        v23 = uucore::execution_phrase::hded5ccd87df1fcab();
        v24 = v63;
        v10 = &v23;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8e97b0f231d19e1;
        v36 = &g_4ece70;
        v37 = 2;
        v40 = 0;
        v38 = &v10;
        v39 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v64, v63);
    }
    v67 = v4->field_60(v3);
    _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1247c1a3f932451f();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7d7e5d6160a4fadd(&v15);
    v70 = v3;
    v71 = v4;
    if (v71->field_0)
        v72(v70);
    if (v71->field_8)
    {
        __rust_dealloc(v70);
        return v67;
    }
    return v67;
}
