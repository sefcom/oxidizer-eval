long long uu_tee::uumain::h8bc977a1779e04a9(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x3c9]
    void* v1;  // [sp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v2;  // [sp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x3b8]
    unsigned long v4;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x3a0]
    char v6;  // [bp-0x398]
    unsigned long v7;  // [sp-0x390], Other Possible Types: unsigned long long
    struct_1 *v8;  // [sp-0x388], Other Possible Types: unsigned long long
    int v9;  // [sp-0x380]
    int v10;  // [sp-0x370]
    unsigned long long v11;  // [sp-0x360]
    int v12;  // [bp-0x358], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v13;  // [sp-0x350], Other Possible Types: unsigned long long
    char v14;  // [bp-0x348], Other Possible Types: unsigned long long
    char v15;  // [bp-0x338]
    char v16;  // [bp-0x328]
    char v17;  // [bp-0x310]
    char v18;  // [bp-0x300]
    void* v19;  // [bp-0x2f8], Other Possible Types: int, char, unsigned long long
    void* v20;  // [sp-0x2f0], Other Possible Types: struct_1 *, unsigned long long
    int v21;  // [sp-0x2e8], Other Possible Types: struct_1 *, unsigned long long
    struct_1 *v22;  // [bp-0x2e0], Other Possible Types: char, unsigned long, unsigned long long
    char v23;  // [sp-0x2df]
    char v24;  // [sp-0x2de]
    int v25;  // [sp-0x2d8], Other Possible Types: void*, unsigned long long
    unsigned long long v26;  // [sp-0x2d0]
    int v27;  // [bp-0x2c8], Other Possible Types: void*
    unsigned long long v28;  // [sp-0x2b8]
    void* v30;  // r15
    unsigned long long v32[9];  // r15
    struct_1 *v33;  // r12
    struct_1 *v34;  // rdx
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm2
    unsigned long long v38;  // r13
    struct_3 *v39;  // rax
    struct_2 *v40;  // rax
    unsigned long long v41;  // rbx
    unsigned long long v42;  // rsi
    struct_4 *v43;  // rax
    unsigned long long v44;  // r15
    unsigned long long v45;  // rax
    struct_1 *v47;  // r12
    unsigned int v48;  // eax
    unsigned long long v49;  // r14
    struct_1 *v50;  // r15
    struct struct_0 **v51;  // rax

    uu_tee::uu_app::hb4620ebea7a5a141(&v19);
    clap_builder::builder::command::Command::try_get_matches_from::hda897f0870163fdf(&v12, &v19, a0, a1);
    if (v7 == 0x8000000000000000)
    {
        v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v8);
        if (!v30)
        {
            vvar_872{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v48;
        }
LABEL_43a53c:
        v1 = v30;
        v2 = v47;
        v12 = &v1;
        v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcc9bae2ab3f836d0;
        v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v20 = 1;
        v25 = 0;
        v21 = &v12;
        v22 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v19);
        *((int128_t *)&v12) = *((int128_t *)&v17);
        v14 = *((long long *)&v18);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h68961c2fc7cb3946(v13, *((long long *)&v18), 1, 0))
        {
            v7 = uucore::util_name::h359eff083fe53467();
            v8 = v34;
            v4 = &v7;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd3c7b48658f727df;
            v19 = &g_4e5190;
            v20 = 2;
            v25 = 0;
            v21 = &v4;
            v22 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v42, v34);
            v7 = &v12;
            v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v19 = &g_4e51b0;
            v20 = 2;
            v25 = 0;
            v21 = &v7;
            v22 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v42, v34);
        }
        if ((char)v2->field_68(v1))
        {
            v7 = uucore::execution_phrase::hded5ccd87df1fcab();
            v8 = v34;
            v4 = &v7;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd3c7b48658f727df;
            v19 = &g_4e51d0;
            v20 = 2;
            v25 = 0;
            v21 = &v4;
            v22 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v42, v34);
        }
        v48 = v2->field_60(v1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf0ad28aff0c57f31();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b15a3d180b90446(&v12);
        v49 = v1;
        v50 = v2;
        if (v50->field_0)
            v51(v49);
        if (v50->field_8)
        {
            __rust_dealloc(v49);
            return v48;
        }
        return v48;
    }
    v11 = *((long long *)&v16);
    *((int128_t *)&v10) = *((int128_t *)&v15);
    *((int128_t *)&v9) = *((int128_t *)&v14);
    v7 = v12;
    v8 = v13;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, "appendignore-interrupts", 6);
    v32 = clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::get::hb5430c970116f500(&v7, "filei128", 4);
    if (!v32)
    {
        *((int128_t *)&v19) = 0;
    }
    else
    {
        v33 = 15398537441398644645;
        v4 = 9479156756246622757;
        v5 = 15398537441398644645;
        v19 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v32, 9479156756246622757);
        v20 = v34;
        if (!(char)_$LT$clap_builder..util..any_value..AnyValueId$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfe0cc99dda6b9026(&v4, &v19))
        {
            v20 = 0;
            v21 = v19;
            v22 = v34;
            v25 = 9479156756246622757;
            v26 = 15398537441398644645;
            v19 = 1;
        }
        else
        {
            v20 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref$u7b$$u7b$reify.shim$u7d$$u7d$::h75a5fa770e20b8b6;
            v21 = v32[7];
            v22 = v21 + v32[8] * 24;
            v25 = 0;
            v27 = 0;
            v28 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals::hb3f091e72b19d47b(v32);
            v19 = 0;
        }
    }
    clap_builder::parser::error::MatchesError::unwrap::h0ecf6b4d8e2ce0b1(&v12, "filei128", 4, &v19);
    if (!v12)
    {
        v1 = 0;
        v2 = 8;
        v3 = 0;
    }
    else
    {
        v35 = *((int128_t *)&v12);
        v36 = *((int128_t *)&v14);
        v37 = *((int128_t *)&v15);
        *((int128_t *)&v27) = *((int128_t *)&v16);
        v25 = v37;
        v21 = v36;
        v19 = v35;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3f626367c9eecb10(&v4, &v19);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v3 = *((long long *)&v6);
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, "ignore-pipe-errorsoutput-errorwarn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 18))
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v7, "output-errorwarn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 12))
        {
LABEL_43abd9:
            v22 = v0;
            v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, "ignore-interrupts", 17);
            *((int128_t *)&v19) = *((int128_t *)&v1);
            v21 = v3;
            v24 = 4;
            v45 = uu_tee::tee::h6686c620d47966ee(&v19);
            if (!v45)
                v30 = 0;
            else
                v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b8d4600d89552f4(&v19);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3a166f89ed19c36c(&v19);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7196d89e8dcea796(&v7);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h1b9c841be0106bfb(v45);
            if (!v30)
            {
                v48 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v48;
            }
            goto LABEL_43a53c;
        }
        v38 = clap_builder::util::flat_map::FlatMap$LT$K$C$V$GT$::get::hb5430c970116f500(&v7, "output-errorwarn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 12);
        if (!v38)
        {
LABEL_43aaef:
            v20 = 0;
            goto LABEL_43aafb;
        }
        else
        {
            v33 = 9479156756246622757;
            v12 = 9479156756246622757;
            v13 = 15398537441398644645;
            v19 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v38, 9479156756246622757);
            v20 = v34;
            if (!(char)_$LT$clap_builder..util..any_value..AnyValueId$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfe0cc99dda6b9026(&v12, &v19))
            {
                v19 = 0;
                v20 = v19;
                v21 = v34;
                v22 = 9479156756246622757;
                v25 = 15398537441398644645;
                goto LABEL_43ab35;
            }
            v39 = clap_builder::parser::matches::matched_arg::MatchedArg::first::h520c5777dc67ebb4(v38);
            if (!v39)
                goto LABEL_43aaef;
            v40 = v39->field_8;
            v41 = v39->field_0 + (v40->field_10 - 1 & -0x10) + 16;
            if (!(v40->field_18(v41, v42, v40->field_10 - 1 & -0x10, v39->field_0) == 9479156756246622757) || !(v34 == 15398537441398644645))
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v20 = v41;
LABEL_43aafb:
            v19 = 2;
LABEL_43ab35:
            v43 = clap_builder::parser::error::MatchesError::unwrap::hffb25e43596c3974("output-errorwarn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 12, &v19);
            if (v43)
            {
                v44 = v43->field_8;
                v33 = v43->field_10;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h68961c2fc7cb3946(v44, v33, &g_410e14, 4))
                {
                    goto LABEL_43abd9;
                }
                else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h68961c2fc7cb3946(v44, v33, "warn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h68961c2fc7cb3946(v44, v33, "exitignore-pipe-errorsoutput-errorwarn-nopipeexit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h68961c2fc7cb3946(v44, v33, "exit-nopipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rsError flushing stdout: \n", 11))
                {
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
                }
            }
        }
    }
    goto LABEL_43abd9;
}
