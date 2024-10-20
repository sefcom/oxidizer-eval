long long uu_hashsum::uumain::hb62dc2c2e41a01eb(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x758]
    char v1;  // [bp-0x750]
    char v2;  // [sp-0x725]
    char v3;  // [sp-0x724]
    char v4;  // [sp-0x723]
    char v5;  // [sp-0x722]
    char v6;  // [sp-0x721]
    struct_2 *v7;  // [sp-0x720], Other Possible Types: unsigned long long
    struct_1 *v8;  // [sp-0x718], Other Possible Types: struct_2 *
    struct_1 *v9;  // [sp-0x710]
    int v10;  // [sp-0x708]
    unsigned long v11;  // [sp-0x6f8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x6f0]
    int v13;  // [sp-0x6e8]
    int v14;  // [sp-0x6d8]
    unsigned long long v15;  // [sp-0x6c8]
    char v16;  // [bp-0x6c0]
    char v17;  // [bp-0x6b8]
    char v18;  // [bp-0x6b0]
    int v19;  // [sp-0x6a8]
    unsigned long long v20;  // [sp-0x698]
    unsigned long long v21;  // [sp-0x690]
    int v22;  // [bp-0x688], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v23;  // [sp-0x680], Other Possible Types: unsigned long long
    int v24;  // [sp-0x678]
    unsigned long long v25;  // [sp-0x668]
    char v26;  // [bp-0x658]
    char v27;  // [bp-0x640]
    char v28;  // [bp-0x638]
    char v29;  // [bp-0x630]
    unsigned long v30;  // [sp-0x628], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x620]
    int v32;  // [sp-0x618]
    unsigned long v33;  // [sp-0x608], Other Possible Types: unsigned long long
    int v34;  // [sp-0x600]
    int v35;  // [bp-0x5e8], Other Possible Types: char, unsigned long, unsigned long long
    struct_2 *v36;  // [sp-0x5e0], Other Possible Types: unsigned long, unsigned long long
    int v37;  // [sp-0x5d8], Other Possible Types: struct struct_3 **, struct_1 *, char, unsigned long, unsigned long long
    struct_1 *v38;  // [sp-0x5d0], Other Possible Types: unsigned long long
    int v39;  // [bp-0x5c8], Other Possible Types: void*, char, unsigned long long
    char v40;  // [sp-0x5c0]
    char v41;  // [sp-0x5bf]
    char v42;  // [sp-0x5be]
    char v43;  // [sp-0x5bd]
    int v44;  // [bp-0x5b8], Other Possible Types: char
    char v45;  // [bp-0x320]
    char v46;  // [bp-0x310]
    char v47;  // [bp-0x300]
    int v48;  // [bp-0x2f8], Other Possible Types: struct struct_2 **, char, unsigned long
    unsigned long long v49;  // [sp-0x2f0]
    unsigned long v50;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rax
    char v57;  // bl
    struct_2 *v58;  // rax
    unsigned long long *v59;  // rax
    struct_1 *v60;  // rdx
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rcx
    struct_2 *v63;  // r15
    struct_1 *v64;  // r12
    unsigned long long v65;  // r8
    char v66;  // bpl
    struct_2 *v68;  // rax
    char *v69;  // rax
    int v70;  // xmm0
    char v71;  // bl
    unsigned long long v72;  // r12
    unsigned long long v73;  // r13
    char v74;  // bpl
    struct_4 *v75;  // r13
    struct struct_0 **v76;  // rax
    unsigned long long v77;  // r9
    struct_2 *v78;  // rax
    unsigned long long v79;  // rsi
    unsigned long long v80;  // r9
    struct_1 *v81;  // r12
    unsigned int v82;  // eax
    struct_2 *v83;  // r14
    struct_1 *v84;  // r15
    struct struct_0 **v85;  // rax

    v30 = a0;
    v31 = a1;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5b1ba520aed72e6(&v48, &v30);
    if (v48 != 0x8000000000000000)
    {
        v20 = v50;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v35, "hashsumb2sumlengthbinary", 7);
        v20 = v37;
    }
    *((int128_t *)&v19) = *((int128_t *)&v48);
    v55 = std::path::Path::file_stem::h441d431a81936839((long long)(&v19)[8], v20, v53, v54);
    if (!v55)
        v55 = "hashsumb2sumlengthbinary";
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v16, v55, 7);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbda1f95195b90294(&v35, &v19);
    v33 = v37;
    *((int128_t *)&v32) = *((int128_t *)&v35);
    *((int128_t *)&v34) = *((int128_t *)&v30);
    uu_hashsum::uu_app::h11428ac970a07879(&v35, *((long long *)&v17), *((long long *)&v18));
    memcpy(&v48, &v35, 712);
    v57 = v45;
    v25 = (long long)(&v34)[8];
    *((int128_t *)&v24) = *((int128_t *)&v33);
    v22 = v32;
    clap_builder::builder::command::Command::try_get_matches_from::h5aa687fb6726baee(&v35, &v48, &v22, v54);
    if (v11 == 0x8000000000000000)
    {
        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v12);
        goto LABEL_4f933b;
    }
    v15 = *((long long *)&v44);
    *((int128_t *)&v14) = *((int128_t *)&v39);
    *((int128_t *)&v13) = *((int128_t *)&v37);
    v11 = v35;
    v12 = v36;
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he5ac47aec8dc7189(*((long long *)&v17), *((long long *)&v18), "b2sumlengthbinary", 5))
    {
LABEL_4f8f24:
        v63 = 0;
        if (!v57)
            goto LABEL_4f8f2b;
LABEL_4f8f0f:
        uu_hashsum::create_algorithm_from_flags::h966c1fe6a3e68b94(&v35, &v11, v61, v62, v65);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4b1c71a811bed88d(&v35, &v11, "lengthbinary", 6);
        v59 = clap_builder::parser::error::MatchesError::unwrap::h7c3300fe2448ed16("lengthbinary", 6, &v35);
        if (!v59)
            goto LABEL_4f8f24;
        uucore::features::checksum::calculate_blake2b_length::h70763ca3a5c6b53a(&v35, *(v59), v60);
        v63 = v36;
        v64 = v37;
        if (!(!v35))
            goto LABEL_4f9331;
        if (!(!v57))
            goto LABEL_4f8f0f;
LABEL_4f8f2b:
        uucore::features::checksum::detect_algo::h0ddc2b0db45fbba2(&v35, *((long long *)&v17), *((long long *)&v18), v63, v64);
    }
    v63 = v36;
    v64 = v37;
    if (!v21)
        goto LABEL_4f9331;
    *((int128_t *)&v10) = *((int128_t *)&(&v37)[8]);
    v21 = v35;
    v7 = v21;
    v8 = v63;
    v9 = v64;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "binary", 6);
    if (!v3)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "textSomee", 4);
    v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "checkstatusquietstrictignore-missing", 5);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "statusquietstrictignore-missing", 6);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "strictignore-missing", 6);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "warnZeroV", 4);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "ignore-missing", 14);
    if (!v5)
    {
        if (!(!v66))
            goto LABEL_4f90ba;
        if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "quietstrictignore-missing", 5) | v2))
        {
            v35 = 9223372036854775811;
            v68 = __rust_alloc(24, 8);
            if (!v68)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            goto LABEL_4f924b;
        }
        if (v4)
        {
            v35 = 9223372036854775810;
            v68 = ::0x4fb6a0::alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260(24, 8);
            goto LABEL_4f924b;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he0ef5df6d306f451(&v35, &v11, "no-namescapacitys", 8);
        if (*((int *)&v35) != 2)
            v69 = 0;
        if (!v69)
            v69 = &g_461278;
        v2 = *(v69);
        v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "zeroAnsib", 4);
        v72 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h4a23f297e8f54dbf(&v9);
        v73 = (long long)(&v10)[8];
        v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "tag- *blake2b (BLAKE2b (", 3);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd4b8e57aa1f2badd(&v35, &v11, "filemode{", 4);
        clap_builder::parser::error::MatchesError::unwrap::h9635d91b94dcea18(&v22, "filemode{", 4, &v35);
        if (!v22)
        {
            v35 = v21;
            v36 = v63;
            v37 = v72;
            v38 = v60;
            v39 = v73;
            v40 = v3;
            v41 = v74;
            v42 = v2;
            v43 = v71;
            v78 = uu_hashsum::hashsum::h77460a0f481ff27e(&v35, v79, v60, v54, v65, v80);
        }
        else
        {
            v35 = v21;
            v36 = v63;
            v37 = v72;
            v38 = v60;
            v39 = v73;
            v40 = v3;
            v41 = v74;
            v42 = v2;
            v43 = v71;
            v78 = uu_hashsum::hashsum::h5bce48454bf2b029(&v35, &v22, v60, v54, v65, v77);
        }
        v58 = v78;
        core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::hdf970c849f8e7966(v9, (long long)v10);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd89eebbcbc1a49d1(&v11);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hd792e6d75189c6eb(&v16);
        ::0x4fb3a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h192ed5c9004683d5(&v19);
        if (v58)
        {
LABEL_4f9379:
            v7 = v58;
            v8 = v81;
            v48 = &v7;
            v49 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h16f23ca602f656ac;
            v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v36 = 1;
            v39 = 0;
            v37 = &v48;
            v38 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v46, &v35);
            *((int128_t *)&v48) = *((int128_t *)&v46);
            v50 = *((long long *)&v47);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he5ac47aec8dc7189(v49, *((long long *)&v47), 1, 0))
            {
                v22 = uucore::util_name::h359eff083fe53467();
                v23 = v60;
                v11 = &v22;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                v35 = &g_6beaa8;
                v36 = 2;
                v39 = 0;
                v37 = &v11;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v79, v60);
                v22 = &v48;
                v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v35 = &g_6beac8;
                v36 = 2;
                v39 = 0;
                v37 = &v22;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v79, v60);
            }
            if ((char)v8->field_68(v7))
            {
                v22 = uucore::execution_phrase::hded5ccd87df1fcab();
                v23 = v60;
                v11 = &v22;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                v35 = &g_6beae8;
                v36 = 2;
                v39 = 0;
                v37 = &v11;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v79, v60);
            }
            v82 = v8->field_60(v7);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v48);
            v83 = v7;
            v84 = v8;
            if (v84->field_0)
                v85(v83);
            if (v84->field_8)
            {
                __rust_dealloc(v83);
                return v82;
            }
            return v82;
        }
    }
    else
    {
        if (v66)
        {
LABEL_4f90ba:
            if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "textSomee", 4) | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v11, "binary", 6)) != 1)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd4b8e57aa1f2badd(&v35, &v11, "filemode{", 4);
                clap_builder::parser::error::MatchesError::unwrap::h9635d91b94dcea18(&v22, "filemode{", 4, &v35);
                if (!v22)
                {
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h83938c75de88198c(&v27, "- *blake2b (BLAKE2b (", 1);
                }
                else
                {
                    v70 = (int128_t)v22;
                    *((int128_t *)&v44) = *((int128_t *)&v26);
                    *((int128_t *)&v39) = *((int128_t *)&v25);
                    v37 = v24;
                    v35 = v70;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::heae3d848068342e0(&v27, &v35, v60);
                }
                v63 = uucore::features::checksum::perform_checksum_validation::hbe34139472cb40a5(*((long long *)&v28), *((long long *)&v29) * 16 + *((long long *)&v28), v4, v2, v6 & (v2 ^ 1), 0, v0, v1, v21, v63, 1, (long long)(&v10)[8]);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdd5a7f50cf64ccd8(&v27);
LABEL_4f9305:
                v75 = (long long)v10;
                if (v75->field_0)
                    v76(v9);
                if (v75->field_8)
                    __rust_dealloc(v9);
            }
            else
            {
                v35 = 9223372036854775819;
                v68 = __rust_alloc(24, 8);
                if (!v68)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                goto LABEL_4f924b;
            }
        }
        else
        {
            v35 = 9223372036854775809;
            v68 = __rust_alloc(24, 8);
            if (!v68)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_4f924b:
            v63 = v68;
            v63->field_10 = v37;
            v63->field_0 = *((int128_t *)&v35);
            v64 = &g_6beb40.field_0;
            goto LABEL_4f9305;
        }
LABEL_4f9331:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd89eebbcbc1a49d1(&v11);
LABEL_4f933b:
        if (*((long long *)&v16) != 0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v16);
        }
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v19);
        if (!(!v58))
            goto LABEL_4f9379;
    }
    v82 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v82;
}
