long long uu_cp::uumain::h0f9e874a9b5778a5(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x4d8], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x4d0]
    int v2;  // [bp-0x4c8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x4c0]
    void* v4;  // [bp-0x4b8], Other Possible Types: int
    int v5;  // [sp-0x4a8]
    char v6;  // [bp-0x498]
    char v7;  // [bp-0x488]
    char v8;  // [bp-0x478]
    char v9;  // [bp-0x468], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x460]
    unsigned long long v11;  // [sp-0x458]
    unsigned long long v12;  // [sp-0x450]
    void* v13;  // [sp-0x448]
    int v14;  // [sp-0x438]
    unsigned long long v15;  // [sp-0x428]
    int v16;  // [sp-0x418]
    unsigned long long v17;  // [sp-0x408]
    unsigned long v18;  // [sp-0x3f8], Other Possible Types: unsigned long long
    int v19;  // [bp-0x3f0], Other Possible Types: unsigned long
    int v20;  // [sp-0x3e0]
    int v21;  // [sp-0x3d0]
    int v22;  // [sp-0x3c0]
    unsigned long long v23;  // [sp-0x3b0]
    int v24;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x3a0]
    int v26;  // [sp-0x398]
    int v27;  // [sp-0x388]
    unsigned long long v28;  // [sp-0x378]
    unsigned long v29;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x368]
    struct_3 *v31;  // [bp-0x360], Other Possible Types: char, unsigned long
    struct_1 *v32;  // [sp-0x358], Other Possible Types: struct_2 *
    char v33;  // [bp-0x350]
    char v34;  // [bp-0x340]
    char v35;  // [bp-0x330]
    unsigned long v36;  // [sp-0x328], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x320]
    int v38;  // [bp-0x318], Other Possible Types: char, unsigned long, unsigned long long
    int v39;  // [bp-0x310], Other Possible Types: struct_4 *, char, unsigned long, unsigned long long
    struct_4 *v40;  // [bp-0x308], Other Possible Types: int, unsigned long long
    int v41;  // [bp-0x300], Other Possible Types: char, unsigned int, unsigned long long
    int v42;  // [bp-0x2f8], Other Possible Types: void*
    int v43;  // [bp-0x2f0], Other Possible Types: char
    int v44;  // [bp-0x2e8]
    char v45;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v46;  // [sp-0x2d8]
    char v47;  // [bp-0x2d0]
    int v48;  // [sp-0x2c8]
    int v49;  // [sp-0x2b8]
    char v50;  // [bp-0x48]
    char v51;  // [bp-0x38]
    struct_2 *v53;  // r14
    unsigned int v54;  // eax
    unsigned long long v55;  // rsi
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // r8
    unsigned long long v59;  // r9
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    struct_3 *v64;  // rax
    unsigned long long v65;  // rcx
    int v66;  // xmm1
    int v67;  // xmm2
    unsigned long long v68;  // rsi
    unsigned long long v69;  // rdx
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    struct_1 *v73;  // r12
    struct_4 *v74;  // rax
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    unsigned long long v78;  // rax
    int v79;  // xmm0
    int v80;  // xmm0
    int v81;  // xmm1
    unsigned long long v82;  // rbx
    int v83;  // xmm1
    int v84;  // xmm2
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    unsigned long long v88;  // rdx
    unsigned long long v89;  // rsi
    unsigned long long v90;  // rcx
    unsigned long long v91;  // r8
    unsigned long long v92;  // r9
    unsigned int v93;  // eax
    struct_3 *v94;  // r14
    struct_1 *v95;  // r15
    struct struct_0 **v96;  // rax

    uu_cp::uu_app::ha2fcce6bb46e3a43(&v38);
    clap_builder::builder::command::Command::try_get_matches_from::h034d2c231b3e97ee(&v31, &v38, a0, a1);
    if (v31 != 0x8000000000000000)
    {
        v28 = *((long long *)&v35);
        *((int128_t *)&v27) = *((int128_t *)&v34);
        *((int128_t *)&v26) = *((int128_t *)&v33);
        *((int128_t *)&v24) = *((int128_t *)&v31);
        uu_cp::Options::from_matches::h87d3e680ae966bb0(&v38, &v24);
        *((int128_t *)&v0) = *((int128_t *)&v39);
        *((int128_t *)&v2) = *((int128_t *)&v41);
        *((int128_t *)&v4) = *((int128_t *)&v43);
        *((int128_t *)&v5) = *((int128_t *)&v45);
        if (v18 == 0x8000000000000000)
        {
            v61 = (int128_t)v0;
            v62 = (int128_t)v2;
            v63 = (int128_t)v4;
            v44 = v5;
            v42 = v63;
            v40 = v62;
            v38 = v61;
            v64 = __rust_alloc(64, 8);
            if (!v64)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v70 = (int128_t)v38;
            v71 = (int128_t)v40;
            v72 = (int128_t)v42;
            v64->field_30 = (int128_t)v44;
            *((void*)&v64->field_20) = v72;
            *((void*)&v64->field_10) = v71;
            *((void*)&v64->field_0) = v70;
            v73 = &g_551be0.field_0;
LABEL_45801c:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h623a2564fb50464c(&v24);
            goto LABEL_458029;
        }
        v65 = *((long long *)&v47);
        v66 = (int128_t)v2;
        v67 = (int128_t)v4;
        v22 = v5;
        *((int128_t *)&v19) = (int128_t)v0;
        v20 = v66;
        v21 = v67;
        v18 = v38;
        v23 = v65;
        if ((char)(&v22)[4] == 2 && (v23 & 0xff00000000))
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h279438daaca0225d(&v38, 56, 0);
            if (v38)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v74 = v40;
            v74->field_20 = 134420643835495412570437396337004716146;
            v74->field_10 = 134762869170424392496790009804221210912;
            v74->field_0 = 149483212351913566260595494771370520687;
            v74->field_30 = 7311146989694772088;
            v41 = 1;
            v38 = v39;
            v39 = v74;
            v40 = 56;
            v64 = __rust_alloc(32, 8);
            if (!v64)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v79 = *((int128_t *)&v38);
            v64->field_10 = *((int128_t *)&v40);
            *((void*)&v64->field_0) = v79;
            v73 = &g_551c88.field_0;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::haf38cd248e832fbb(&v38, &v24, "paths", 5);
            clap_builder::parser::error::MatchesError::unwrap::hf797cb729b3943fc(&v0, "paths", 5, &v38);
            if (!v0)
            {
                v78 = 0x8000000000000000;
            }
            else
            {
                *((int128_t *)&v49) = *((int128_t *)&v8);
                *((int128_t *)&v48) = *((int128_t *)&v7);
                *((int128_t *)&v46) = *((int128_t *)&v6);
                v75 = (int128_t)v0;
                v76 = (int128_t)v2;
                v77 = (int128_t)v4;
                v44 = v5;
                v42 = v77;
                v40 = v76;
                v38 = v75;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h84cf076fd249dc12(&v9, &v38);
            }
            if (v78 == 0x8000000000000000)
                v78 = 0;
            v9 = v78;
            v10 = 8;
            v11 = 0;
            uu_cp::parse_path_args::h73abca936abe63e5(&v38, &v9, &v18);
            *((int128_t *)&v0) = (int128_t)(&v38)[8];
            *((int128_t *)&v2) = (int128_t)(&v40)[8];
            *((int128_t *)&v4) = (int128_t)(&v41)[16];
            if (v38 != 13)
            {
                v80 = (int128_t)v0;
                v81 = (int128_t)v2;
                *((int128_t *)&v43) = (int128_t)v4;
                v41 = v81;
                v39 = v80;
                v38 = v38;
                v45 = v45;
                v64 = __rust_alloc(64, 8);
                if (!v64)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v85 = *((int128_t *)&v38);
                v86 = (int128_t)(&v39)[8];
                v87 = (int128_t)(&v41)[8];
                v64->field_30 = (int128_t)(&v43)[8];
                *((void*)&v64->field_20) = v87;
                *((void*)&v64->field_10) = v86;
                *((void*)&v64->field_0) = v85;
                v73 = &g_551be0.field_0;
            }
            else
            {
                v15 = v2;
                *((int128_t *)&v14) = (int128_t)v0;
                v17 = (long long)(&v4)[8];
                *((int128_t *)&v16) = (int128_t)(&v2)[8];
                uu_cp::copy::hcab10a33a092c158(&v0, (long long)(&v14)[8], v2, (long long)(&v16)[8], (long long)(&v4)[8], &v18);
                v82 = v0;
                if (v82 != 13)
                {
                    v83 = (int128_t)v2;
                    v84 = (int128_t)v4;
                    *((int128_t *)&v38) = (int128_t)v0;
                    v44 = v5;
                    v42 = v84;
                    v40 = v83;
                    if ((int)v38 != 5)
                    {
                        v29 = uucore::util_name::h359eff083fe53467();
                        v30 = v88;
                        v36 = &v29;
                        v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h337e190d0c52a5aa;
                        v9 = &g_551aa0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v36;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v89, v88);
                        v29 = &v38;
                        v30 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hfce27ac00d84d4dc;
                        v9 = &g_551ac0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v29;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v89, v88);
                    }
                    uucore::mods::error::set_exit_code::h0565497d88d725e1();
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::ha2e93834cfe6eb65(&v38, v89, v88, v90, v91, v92, (long long)v0, (long long)(&v0)[8], (long long)v2);
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95eebe39f8d6cc5f();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd305f6f95ef99c34(&v16);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56ba0f6deed4a06c(&v14);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::heab18fb7b3fa6a6c(&v14);
                core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h81218d5c319f1167(&v18);
                if ((unsigned int)v82 == 13 && (unsigned int)v0 != 13)
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::ha2e93834cfe6eb65(&v0, v89, v88, v90, v91, v92, (long long)v0, (long long)(&v0)[8], (long long)v2);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h623a2564fb50464c(&v24);
                goto LABEL_457f68;
            }
        }
        core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h81218d5c319f1167(&v18);
        goto LABEL_45801c;
    }
    else
    {
        v53 = v32;
        uu_cp::uu_app::ha2fcce6bb46e3a43(&v38);
        switch (v54)
        {
        case 12:
            v60 = clap_builder::builder::command::Command::print_help::ha8dc6bd4f9c1968b(&v38, v55, v56, v57, v58, v59);
            if (!v60)
                break;
            v64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v60);
            ::0x456c70::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hc02700bb3564cc69(&v38);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h4ec7abc9e107fe03(v53);
            if (!v64)
            {
LABEL_457f68:
                v93 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v93;
            }
        case 14:
            clap_builder::builder::command::Command::render_version::hbf03bb35331440ca(&v18, &v38);
            v24 = &v18;
            v25 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v4 = 0;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v68, v69);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95eebe39f8d6cc5f();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd305f6f95ef99c34(&v18);
            ::0x456c70::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hc02700bb3564cc69(&v38);
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h4ec7abc9e107fe03(v53);
            uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v93;
        default:
            v64 = __rust_alloc(16, 8);
            if (!v64)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v64->field_0 = v53;
            *((int *)&v64->padding_8[0]) = 1;
            ::0x456c70::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hc02700bb3564cc69(&v38);
            v73 = &g_551b38.field_0;
            goto LABEL_458029;
        }
LABEL_458029:
        v31 = v64;
        v32 = v73;
        v1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdaab7cf2f5572584;
        v38 = &g_418dc0;
        v39 = 1;
        v42 = 0;
        v40 = &v0;
        v41 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v50, &v38);
        *((int128_t *)&v0) = *((int128_t *)&v50);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::haed405dcd097f3b4(v1, *((long long *)&v51), 1, 0))
        {
            v18 = uucore::util_name::h359eff083fe53467();
            v19 = v56;
            v24 = &v18;
            v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h337e190d0c52a5aa;
            v38 = &g_551aa0;
            v39 = 2;
            v42 = 0;
            v40 = &v24;
            v41 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v38, v55, v56);
            v18 = &v0;
            v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v38 = &g_551ac0;
            v39 = 2;
            v42 = 0;
            v40 = &v18;
            v41 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v38, v55, v56);
        }
        if ((char)v32->field_68(v31))
        {
            v18 = uucore::execution_phrase::hded5ccd87df1fcab();
            v19 = v56;
            v24 = &v18;
            v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h337e190d0c52a5aa;
            v38 = &g_551ae0;
            v39 = 2;
            v42 = 0;
            v40 = &v24;
            v41 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v38, v55, v56);
        }
        v93 = v32->field_60(v31);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95eebe39f8d6cc5f();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd305f6f95ef99c34(&v0);
        v94 = v31;
        v95 = v32;
        if (v95->field_0)
            v96(v94);
        if (!v95->field_8)
            return v93;
        __rust_dealloc(v94);
    }
}
