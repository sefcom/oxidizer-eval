long long uu_readlink::uumain::h6ed21f4b9b0b7fbb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x40d]
    unsigned int v1;  // [sp-0x40c]
    int v2;  // [bp-0x408], Other Possible Types: uint128_t [2], unsigned long
    struct_1 *v3;  // [sp-0x400], Other Possible Types: unsigned long
    char v4;  // [bp-0x3f8]
    void* v5;  // [bp-0x3f0], Other Possible Types: char, unsigned long, unsigned long long
    char v6;  // [bp-0x3e8], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x3e0]
    void* v8;  // [sp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [sp-0x3d0], Other Possible Types: unsigned long long [3], unsigned long long
    void* v10;  // [sp-0x3c8], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x3c0]
    unsigned long v12;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned int v13;  // [sp-0x3ac]
    struct struct_2 **v14;  // [bp-0x3a8], Other Possible Types: int, char, unsigned long
    unsigned long v15;  // [sp-0x3a0], Other Possible Types: unsigned long long
    char v16;  // [bp-0x398], Other Possible Types: unsigned long, unsigned long long
    unsigned int v17;  // [sp-0x390]
    char v18;  // [bp-0x388]
    char v19;  // [bp-0x378]
    unsigned long v20;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x358]
    int v22;  // [sp-0x350]
    int v23;  // [sp-0x340]
    unsigned long long v24;  // [sp-0x330]
    int v25;  // [sp-0x328]
    unsigned long long v26;  // [sp-0x318]
    char v27;  // [bp-0x310]
    char v28;  // [bp-0x300]
    void* v29;  // [bp-0x2f8], Other Possible Types: int, char, unsigned long, unsigned long long
    unsigned long long *v30;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v31;  // [bp-0x2e8], Other Possible Types: void*, struct struct_3 **, unsigned long long *, unsigned long long
    unsigned int v32;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v33;  // [bp-0x2d8], Other Possible Types: void*, unsigned long long
    unsigned long long v34;  // [sp-0x2d0]
    int v35;  // [bp-0x2c8], Other Possible Types: unsigned long long
    char v36;  // [sp-0x2c0]
    int v38;  // xmm0
    uint128_t v39[2];  // r14
    char v41;  // r15b
    unsigned long long v42;  // rax
    char v43;  // bpl
    int v44;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // ymm0
    int v50;  // ymm0
    unsigned long long v51;  // rcx
    unsigned long long *v52;  // rax
    unsigned long long v53[3];  // r15
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rsi
    int v56;  // xmm0
    struct_1 *v57;  // r12
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    unsigned long long v63[3];  // r15
    unsigned long long v64;  // r13
    int v65;  // xmm0
    unsigned int v66;  // eax
    uint128_t v67[2];  // r14
    struct_1 *v68;  // r15
    struct struct_0 **v69;  // rax

    uu_readlink::uu_app::hc70053e0ca357504(&v29);
    clap_builder::builder::command::Command::try_get_matches_from::h14a7276db8fa5d86(&v14, &v29, a0, a1);
    if (v20 == 0x8000000000000000)
    {
        v39 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v21);
        if (!v39)
        {
            vvar_1309{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v66;
        }
        goto LABEL_43ccb4;
    }
    v24 = *((long long *)&v19);
    v38 = *((int128_t *)&v16);
    *((int128_t *)&v23) = *((int128_t *)&v18);
    v22 = v38;
    v20 = v14;
    v21 = v15;
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "zero", 4);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "silentquietverbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 6))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "quietverbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "verbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 7);
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "canonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 12);
    if ((char)v42)
    {
LABEL_43cab2:
        v1 = v42 | -0x100 | 2;
        v43 = 0;
    }
    else
    {
        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "canonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 21);
        if (!(!(char)v42) || !((v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "canonicalize-missingfilesignoring --no-newline with multiple arguments\n", 20), !(char)v42)))
            goto LABEL_43cab2;
        v43 = vvar_285{reg 56} | -0x100 | 1;
        v1 = 0;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "canonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "canonicalize-missingfilesignoring --no-newline with multiple arguments\n", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc1433381f4ea2621(&v29, &v20, "filesignoring --no-newline with multiple arguments\n", 5);
    clap_builder::parser::error::MatchesError::unwrap::hd25dfd85f16aac3d(&v14, "filesignoring --no-newline with multiple arguments\n", 5, &v29);
    if (!v14 || (v44 = *((int128_t *)&v14), *((int128_t *)&v35) = *((int128_t *)&v19), *((int128_t *)&v33) = *((int128_t *)&v18), *((int128_t *)&v31) = *((int128_t *)&v16), v29 = v44, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf1dca8617885487d(&v5, &v29), v47 = *((int128_t *)&v6), v2 = v47, v8 == 0x8000000000000000))
    {
        v8 = 0;
        v9 = 8;
        v10 = 0;
        goto LABEL_43cbd1;
    }
    v48 = (int128_t)v2;
    v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
    v9 = v48;
    v8 = v5;
    v51 = v10;
    if (!v51)
    {
LABEL_43cbd1:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h13efe070682c3906(&v29, 15, 0);
        if (v29)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v52 = v31;
        *((long long *)((char *)v52 + 7)) = 7236828795186999072;
        *(v52) = 2334956331002456429;
        v32 = 1;
        v29 = v30;
        v30 = v52;
        v31 = 15;
        v39 = __rust_alloc(32, 8);
        if (!v39)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v56 = *((int128_t *)&v29);
        v39[1] = (int128_t)v31;
        *((void*)&v39[0]) = v56;
        v57 = &g_4e4510.field_0;
        goto LABEL_43cc8a;
        goto LABEL_43cc8a;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v20, "no-newline", 10))
    {
        v53 = v9;
        v11 = &v53[v51];
        if (!v43)
            goto LABEL_43cf7f;
LABEL_43d180:
    }
    else
    {
        v53 = v9;
        v11 = &v53[v51];
        if (!(!v43))
            goto LABEL_43d180;
LABEL_43cf7f:
        v13 = 1;
        v1 = 11;
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v29, v53[1], v53[2]);
            v59 = (int128_t)v29;
            v25 = v59;
            v26 = v31;
            uucore::features::fs::canonicalize::h0a81e90adf569bf9(&v2, &v25, v13, (char)v1);
            if (v2 == 0x8000000000000000)
                goto LABEL_43d29e;
            v60 = (int128_t)v2;
            v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
            v29 = v60;
            v31 = *((long long *)&v4);
            v39 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2ba6eb184f7f87c9(uu_readlink::show::hb4035ece6a784904(v30, *((long long *)&v4), v1));
            if (!(!v39))
                goto LABEL_43d3aa;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v29);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v25);
            v53 += 1;
        } while (v53 != v11);
        goto LABEL_43d261;
    }
    while (true)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v29, v53[1], v53[2]);
        v61 = (int128_t)v29;
        v25 = v61;
        v26 = v31;
        std::fs::read_link::h0ce83bdcc6ab5c42(&v2, &v25);
        if (v2 == 0x8000000000000000)
        {
LABEL_43d29e:
            v64 = v3;
            if (!v0)
            {
                v39 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
                ::0x43d740::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd612f80bce0d0fdb(v64);
            }
            else
            {
                *((double *)&v12) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0398ed5c33d71696(v64, v63);
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v35 = 32;
                v36 = 3;
                v29 = 0;
                v31 = 0;
                v33 = &v5;
                v34 = &g_4e4638;
                if ((char)_$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h89f914e0d6ce427e(&v12, &v29))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v16 = v7;
                *((int128_t *)&v14) = *((int128_t *)&v5);
                v17 = 1;
                v39 = __rust_alloc(32, 8);
                if (!v39)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v65 = (int128_t)v14;
                v39[1] = *((int128_t *)&v16);
                *((void*)&v39[0]) = v65;
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h24c0181582629975(v12);
                v57 = &g_4e45c8.field_0;
                goto LABEL_43d3e2;
            }
            goto LABEL_43d3e2;
        }
        v62 = (int128_t)v2;
        v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v29 = v62;
        v31 = *((long long *)&v4);
        v39 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2ba6eb184f7f87c9(uu_readlink::show::hb4035ece6a784904(v30, *((long long *)&v4), 11));
        if (v39)
        {
LABEL_43d3aa:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v29);
LABEL_43d3e2:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v25);
LABEL_43cc8a:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h557bd7f2d9c20660(&v8);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h589134c47e6dc943(&v8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h54814fe26e575e65(&v20);
            if (v39)
            {
LABEL_43ccb4:
                *((uint128_t *[2])&v2[0]) = v39;
                v3 = v57;
                v14 = &v2;
                v15 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4cdac0664da22;
                v29 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v30 = 1;
                v33 = 0;
                v31 = &v14;
                v32 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v29);
                *((int128_t *)&v14) = *((int128_t *)&v27);
                v16 = *((long long *)&v28);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6e615ac90931375d(v15, *((long long *)&v28), 1, 0))
                {
                    v20 = uucore::util_name::h359eff083fe53467();
                    v21 = v54;
                    v5 = &v20;
                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1e88534e72f90690;
                    v29 = &g_4e4490;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v5;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v55, v54);
                    v20 = &v14;
                    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v29 = &g_4e44b0;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v20;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v55, v54);
                }
                if ((char)v3->field_68(v2))
                {
                    v20 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v21 = v54;
                    v5 = &v20;
                    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1e88534e72f90690;
                    v29 = &g_4e44d0;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v5;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v55, v54);
                }
                v66 = v3->field_60(v2);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v14);
                v67 = v2;
                v68 = v3;
                if (v68->field_0)
                    v69(v67);
                if (v68->field_8)
                {
                    __rust_dealloc(v67);
                    return v66;
                }
                return v66;
            }
            goto LABEL_43d282;
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v29);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7a9ce4cb93fa5e4();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h23e20a47efc3ed4c(&v25);
            v53 += 1;
            if (v53 == v11)
            {
LABEL_43d261:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h557bd7f2d9c20660(&v8);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h589134c47e6dc943(&v8);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h54814fe26e575e65(&v20);
LABEL_43d282:
                v66 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v66;
            }
        }
    }
}
