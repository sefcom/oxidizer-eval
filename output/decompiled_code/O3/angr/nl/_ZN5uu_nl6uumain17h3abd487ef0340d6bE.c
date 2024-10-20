int uu_nl::uumain::h3abd487ef0340d6b()
{
    struct struct_2 **v0;  // [bp-0x538], Other Possible Types: int, char, unsigned long, unsigned long long
    uint128_t v1[2];  // [sp-0x530], Other Possible Types: unsigned long, unsigned long long
    char *v2;  // [bp-0x528], Other Possible Types: struct_1 *, char, unsigned long, unsigned long long
    unsigned int v3;  // [bp-0x520], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x518], Other Possible Types: char
    char v5;  // [bp-0x508]
    unsigned long long v6;  // [sp-0x4f0]
    uint128_t v7[2];  // [sp-0x4e8]
    struct_1 *v8;  // [sp-0x4e0]
    unsigned long long v9;  // [sp-0x4d8]
    unsigned long long v10;  // [sp-0x4d0]
    int v11;  // [bp-0x4c8], Other Possible Types: uint128_t [2], unsigned long, unsigned long long
    struct_1 *v12;  // [sp-0x4c0], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x4b8], Other Possible Types: unsigned long long
    char v14;  // [bp-0x4a8]
    char v15;  // [bp-0x498]
    unsigned long v16;  // [sp-0x488], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x480]
    struct_1 *v18;  // [sp-0x470]
    unsigned long long v19;  // [sp-0x468]
    unsigned long long v20;  // [sp-0x460]
    unsigned long long v21;  // [sp-0x458]
    unsigned long long v22;  // [sp-0x450]
    unsigned long long v23;  // [bp-0x448]
    char v24;  // [bp-0x440], Other Possible Types: unsigned long long
    char v25;  // [bp-0x438], Other Possible Types: unsigned long long
    struct struct_2 **v26;  // [bp-0x430], Other Possible Types: char
    unsigned long long v27;  // [sp-0x428]
    char v28;  // [bp-0x420]
    char v29;  // [bp-0x408]
    char v30;  // [bp-0x400]
    char v31;  // [bp-0x3f0]
    char v32;  // [bp-0x3e8]
    char v33;  // [bp-0x3e0]
    char v34;  // [bp-0x3d8]
    char v35;  // [bp-0x3d0]
    char v36;  // [bp-0x3c8]
    char v37;  // [bp-0x3c0]
    unsigned long long v38;  // [sp-0x3b8]
    uint128_t v39[2];  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v40;  // [sp-0x3a8], Other Possible Types: unsigned long long
    int v41;  // [sp-0x3a0]
    int v42;  // [sp-0x390]
    unsigned long long v43;  // [sp-0x380]
    int v44;  // [sp-0x378]
    unsigned long long v45;  // [sp-0x368]
    unsigned long long v46;  // [sp-0x360]
    int v47;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v48;  // [sp-0x350]
    int v49;  // [sp-0x348]
    int v50;  // [sp-0x338]
    int v51;  // [sp-0x328]
    char v52;  // [bp-0x310]
    char v53;  // [bp-0x300]
    char v54;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v55;  // [sp-0x2f0]
    struct struct_3 **v56;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v57;  // [sp-0x2e0]
    void* v58;  // [sp-0x2d8]
    char v59;  // [bp-0x2c0]
    char v60;  // [bp-0x2b8]
    char v61;  // [bp-0x298]
    char v62;  // [bp-0x290]
    char v63;  // [bp-0x288]
    char v64;  // [bp-0x280]
    char v65;  // [bp-0x278]
    unsigned long long v67;  // rdi
    unsigned long long v68;  // rsi
    uint128_t v69[2];  // rax
    int v70;  // xmm0
    int v71;  // ymm0
    int v72;  // ymm0
    int v74;  // xmm0
    unsigned long long v75[3];  // rax
    unsigned long long v76[3];  // r14
    int v77;  // xmm0
    char *v79;  // rax
    unsigned long long v80;  // rax
    struct_4 *v81;  // r13
    struct_1 *v82;  // rbp
    uint128_t v83[2];  // r15
    struct_1 *v84;  // r14
    unsigned long long v85;  // rdx
    unsigned long long v86;  // r15
    unsigned long long v87;  // rbp
    int v88;  // xmm0
    struct_1 *v89;  // r14
    unsigned long long v90;  // rbp
    int v91;  // xmm0
    struct_1 *v92;  // r14
    uint128_t v93[2];  // r14
    struct_1 *v94;  // r15
    struct struct_0 **v95;  // rax

    uu_nl::uu_app::h80f9e09936b6f20e(&v54);
    clap_builder::builder::command::Command::try_get_matches_from::h12b64ad7c7a91239(&v0, &v54, v67, v68);
    v38 = 0x8000000000000000;
    if (v39 == 0x8000000000000000)
    {
        v69 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v40);
        if (!v69)
            goto LABEL_4e3e27;
    }
    else
    {
        v43 = *((long long *)&v5);
        v70 = *((int128_t *)&v2);
        v72 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
        *((int128_t *)&v42) = *((int128_t *)&v4);
        v41 = v70;
        v39 = v0;
        v40 = v1;
        _$LT$uu_nl..Settings$u20$as$u20$core..default..Default$GT$::default::hf8689e8cb709e34c(&v54);
        uu_nl::helper::parse_options::h12e206dc35d45830(&v35, &v54, &v39);
        if (*((long long *)&v37))
        {
            alloc::str::join_generic_copy::hfa8a94f778c8d09c(&v0, *((long long *)&v36), *((long long *)&v37), "\n/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/nl/src/nl.rs", 1);
            v13 = v2;
            *((int128_t *)&v11) = *((int128_t *)&v0);
            v16 = &v11;
            v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v0 = &g_66bb18;
            v1 = 1;
            v4 = 0;
            v2 = &v16;
            v3 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v26, &v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hee5791410506fb2d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5908696bb370aea9(&v11);
            v2 = *((long long *)&v28);
            *((int128_t *)&v0) = *((int128_t *)&v26);
            v3 = 1;
            v69 = __rust_alloc(32, 8);
            if (!v69)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v77 = (int128_t)v0;
            v69[1] = *((int128_t *)&v2);
            *((void*)&v69[0]) = v77;
LABEL_4e2fc1:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57d2e5e59ce24977(&v35);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd44e2eb4c9aa9092(&v35);
            core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h992f1549c37f9053(&v54);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdaf2d3114e23439f(&v39);
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h421568bbe7b54a38(&v0, &v39, "filemode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::hb92357fc125c5f1c(&v11, "filemode{", 4, &v0);
            if (v11)
            {
                v74 = *((int128_t *)&v11);
                v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                *((int128_t *)&v51) = *((int128_t *)&v15);
                *((int128_t *)&v50) = *((int128_t *)&v14);
                *((int128_t *)&v49) = *((int128_t *)&v13);
                v47 = v74;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h412b33b83dcea382(&v32, &v47);
            }
            else
            {
                v75 = __rust_alloc(24, 8);
                if (!v75)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v76 = v75;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hd324a840d35e9f3d(&v0, 1, 0);
                if (v0)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v79 = v2;
                *(v79) = 45;
                v76[0] = v1;
                v76[1] = v79;
                v76[2] = 1;
                alloc::slice::hack::into_vec::h9d429743b7bebb70(&v32, v76, 1);
            }
            v80 = *((long long *)&v34);
            if (v80)
            {
                v81 = *((long long *)&v33);
                v46 = &v81[v80];
                v9 = *((long long *)&v61);
                v10 = 1;
                v82 = &v26;
                do
                {
                    v83 = v81->field_8;
                    v84 = v81->field_10;
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1f590ac9aa85684(v83, v84, "-: Is a directory\nInvalid arguments supplied.\n", 1))
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h64739956280f0841(v82, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                        v18 = v82;
                        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hee779471b9ef92b2(&v30, &v18, v85);
                        v81 = v81;
                        if (*((long long *)&v30) != 9223372036854775809)
                        {
                            v86 = *((long long *)&v59);
                            v87 = *((long long *)&v60);
                            v25 = v65;
                            v24 = *((long long *)&v61);
                            v19 = *((long long *)&v63);
                            v21 = *((long long *)&v64);
                            v22 = v21 + 1;
                            v20 = *((long long *)&v62);
                            v45 = *((long long *)&v31);
                            v88 = *((int128_t *)&v30);
                            v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                            v44 = v88;
                            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h30e77dcef6f23f50(&v0, &v44);
                            v69 = v1;
                            v89 = v2;
                            if (v6 != v38)
                            {
                                v6 = v0;
                                *((uint128_t *[2])&v7[0]) = v69;
                                v8 = v89;
                                goto *((int *)(4559584 + (unsigned int)uu_nl::SectionDelimiter::parse::h22e26084446ec79b(vvar_1144{stack -1256}, vvar_1145{stack -1248}, vvar_467{reg 136}, vvar_468{reg 56}) * 4)) + 4559584;
                            }
                            if (vvar_1144{stack -1256} && v27)
                            {
                                __rust_dealloc(v26);
                                goto LABEL_4e3fe3;
                            }
                        }
                        if (v27)
                            __rust_dealloc(v26);
                    }
                    else
                    {
                        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v83, v84))
                        {
                            v11 = uucore::util_name::h359eff083fe53467();
                            v12 = v85;
                            v26 = &v11;
                            v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha59ec518cd70441f;
                            v0 = &g_66ba98;
                            v1 = 2;
                            v4 = 0;
                            v2 = v82;
                            v3 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v68, v85);
                            *((uint128_t *[2])&v11[0]) = v83;
                            v12 = v84;
                            v26 = &v11;
                            v27 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v0 = &g_66baf8;
                            *((long long *)&v1[0]) = 2;
                            v4 = 0;
                            v2 = v82;
                            v3 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v68, v85);
                            uucore::mods::error::set_exit_code::h0565497d88d725e1();
                            continue;
                        }
                        std::fs::File::open::h5358d5ea0d0d9281(&v0, v83, v84);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd1960ca48a25deef(&v11, &v0, v81);
                        v69 = v11;
                        if (v69)
                        {
                            v12 = v12;
                            goto LABEL_4e3fe3;
                        }
                        else
                        {
                            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha1469dbfca801b7e(v82, 0x2000, (int)v12);
                            v18 = v82;
                            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd57ed03fd9baf8b9(&v30, &v18, v85);
                            if (*((long long *)&v30) != 9223372036854775809)
                            {
                                v25 = *((long long *)&v59);
                                v90 = *((long long *)&v60);
                                v24 = v65;
                                v23 = *((long long *)&v61);
                                v19 = *((long long *)&v63);
                                v21 = *((long long *)&v64);
                                v22 = v21 + 1;
                                v20 = *((long long *)&v62);
                                v45 = *((long long *)&v31);
                                v91 = *((int128_t *)&v30);
                                v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                                v44 = v91;
                                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1792286486d2429c(&v0, &v44);
                                v69 = v1;
                                v92 = v2;
                                if (v6 != v38)
                                {
                                    v6 = v0;
                                    *((uint128_t *[2])&v7[0]) = v69;
                                    v8 = v92;
                                    goto *((int *)(4559552 + (unsigned int)uu_nl::SectionDelimiter::parse::h22e26084446ec79b(vvar_1148{stack -1256}, vvar_1149{stack -1248}, (long long)(stack_base)[1080], vvar_527{reg 56}) * 4)) + 4559552;
                                }
                                if (vvar_1148{stack -1256})
                                {
                                    if (v27)
                                        __rust_dealloc(v26);
                                    close(*((int *)&v29));
LABEL_4e3fe3:
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57d2e5e59ce24977(&v32);
                                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd44e2eb4c9aa9092(&v32);
                                    goto LABEL_4e2fc1;
                                }
                            }
                            if (v27)
                                __rust_dealloc(v26);
                            close(*((int *)&v29));
                        }
                    }
                    v82 = &v26;
                } while ((v81 += 24, v81 != v46));
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57d2e5e59ce24977(&v32);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd44e2eb4c9aa9092(&v32);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h57d2e5e59ce24977(&v35);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd44e2eb4c9aa9092(&v35);
            core::ptr::drop_in_place$LT$uu_nl..Settings$GT$::h992f1549c37f9053(&v54);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdaf2d3114e23439f(&v39);
LABEL_4e3e27:
            uucore::mods::error::get_exit_code::hf050de69600a682c();
LABEL_4e3e2f:
            return;
        }
    }
    *((uint128_t *[2])&v39[0]) = v69;
    v40 = &g_66ba28.field_0;
    v0 = &v39;
    v1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf4fbd28e9889ddb4;
    v54 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v55 = 1;
    v58 = 0;
    v56 = &v0;
    v57 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v52, &v54);
    *((int128_t *)&v0) = *((int128_t *)&v52);
    v2 = *((long long *)&v53);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1f590ac9aa85684(v1, *((long long *)&v53), 1, 0))
    {
        v47 = uucore::util_name::h359eff083fe53467();
        v48 = v85;
        v11 = &v47;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha59ec518cd70441f;
        v54 = &g_66ba98;
        v55 = 2;
        v58 = 0;
        v56 = &v11;
        v57 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v54, v68, v85);
        v47 = &v0;
        v48 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v54 = &g_66bab8;
        v55 = 2;
        v58 = 0;
        v56 = &v47;
        v57 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v54, v68, v85);
    }
    if ((char)v40->field_68(v39))
    {
        v47 = uucore::execution_phrase::hded5ccd87df1fcab();
        v48 = v85;
        v11 = &v47;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha59ec518cd70441f;
        v54 = &g_66bad8;
        v55 = 2;
        v58 = 0;
        v56 = &v11;
        v57 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v54, v68, v85);
    }
    v40->field_60(v39);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hee5791410506fb2d();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5908696bb370aea9(&v0);
    v93 = v39;
    v94 = v40;
    if (v94->field_0)
        v95(v93);
    if (v94->field_8)
    {
        __rust_dealloc(v93);
        return;
    }
    goto LABEL_4e3e2f;
}
