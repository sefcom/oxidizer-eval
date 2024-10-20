long long uu_dircolors::uumain::h0cf08ff169271f7c(struct_7 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x409]
    int v1;  // [sp-0x408], Other Possible Types: void*, unsigned long long
    struct_2 *v2;  // [sp-0x400], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x3f0]
    uint128_t v5[2];  // [sp-0x3e8], Other Possible Types: int, unsigned long long
    struct_7 *v6;  // [sp-0x3e0], Other Possible Types: unsigned long long
    int v7;  // [sp-0x3d8]
    int v8;  // [bp-0x3c8], Other Possible Types: BOT[3], struct struct_6 **, void*, unsigned long, unsigned long long
    int v9;  // [sp-0x3c0], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [bp-0x3b8], Other Possible Types: unsigned long long
    char v11;  // [sp-0x3b0]
    char v12;  // [bp-0x3a8]
    char v13;  // [bp-0x398]
    char v14;  // [bp-0x388], Other Possible Types: unsigned long long
    struct_2 *v15;  // [sp-0x380]
    unsigned long long v16;  // [sp-0x378]
    unsigned long long v17;  // [sp-0x370]
    unsigned long v18;  // [sp-0x368], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x360]
    char v20;  // [bp-0x358]
    unsigned long v21;  // [sp-0x350], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x348]
    int v23;  // [sp-0x340]
    int v24;  // [sp-0x330]
    unsigned long long v25;  // [sp-0x320]
    char v26;  // [bp-0x318]
    char v27;  // [bp-0x314]
    char v28;  // [bp-0x310]
    int v29;  // [bp-0x308], Other Possible Types: char, unsigned long, unsigned long long
    struct_4 *v30;  // [sp-0x300], Other Possible Types: unsigned long long
    int v31;  // [bp-0x2f8], Other Possible Types: struct struct_8 **, struct_4 *, unsigned long, unsigned long long
    unsigned int v32;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v33;  // [bp-0x2e8], Other Possible Types: void*
    int v34;  // [sp-0x2d8]
    char v35;  // [bp-0x40]
    char v36;  // [bp-0x30]
    uint128_t v38[2];  // r14
    int v39;  // xmm0
    int v40;  // xmm1
    struct_4 *v41;  // rax
    struct_4 *v42;  // rax
    int v43;  // xmm0
    unsigned long long v45;  // rdi
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    char v49;  // al
    unsigned long long v50;  // rax
    struct_4 *v51;  // rax
    struct_1 *v52;  // rax
    int v53;  // xmm0
    struct_1 *v55;  // rax
    unsigned long long v56;  // r12
    unsigned long long v57;  // r15
    struct_3 *v58;  // rax
    int v59;  // xmm0
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rdx
    int v62;  // xmm0
    unsigned int v63;  // eax
    uint128_t v64[2];  // r14
    struct_7 *v65;  // r15
    struct struct_5 **v66;  // rax

    uu_dircolors::uu_app::h3597c58c7b0020f3(&v29);
    clap_builder::builder::command::Command::try_get_matches_from::he82cc4984d04712a(v8, &v29, a0, a1);
    if (v21 == 0x8000000000000000)
    {
        v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v22);
        if (!v38)
        {
            vvar_1326{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v63;
        }
        goto LABEL_443881;
    }
    else
    {
        v25 = *((long long *)&v13);
        *((int128_t *)&v24) = *((int128_t *)&v12);
        *((int128_t *)&v23) = *((int128_t *)&v10);
        v21 = v8;
        v22 = v9;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h77c25e25ee24d9cc(&v29, &v21, "FILEchar.alz.mpg", 4);
        clap_builder::parser::error::MatchesError::unwrap::ha7a36caee7aeb694(v8, "FILEchar.alz.mpg", 4, &v29);
        v1 = 0;
        v2 = 8;
        v3 = 0;
        if (!v8)
        {
            v16 = v3;
            v14 = v1;
            v15 = v2;
        }
        else
        {
            v39 = *((int128_t *)&v8);
            v40 = *((int128_t *)&v10);
            *((int128_t *)&v34) = *((int128_t *)&v13);
            *((int128_t *)&v33) = *((int128_t *)&v12);
            v31 = v40;
            v29 = v39;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1e162792773850fd(&v14, &v29);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he82e3561b711fbad();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f14c77f68b630d1(&v1);
        }
        if (((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "c-shellbourne-shellprint-databaseprint-ls-colors", 7) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "bourne-shellprint-databaseprint-ls-colors", 12)) && ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-databaseprint-ls-colors", 14) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-ls-colors", 15)))
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h279cae7947fdcdf7(&v29, 91, 0);
            if (v29)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v41 = v31;
            *((int128_t *)((char *)&v41->field_30 + 11)) = 134866857404171465262038253009459311988;
            v41->field_30 = 144119368304961464834174472114661323886;
            v41->field_2d = 161434359256002170010953001441402645605;
            v41->field_20 = 153029633562696231004755895937544386931;
            v41->field_10 = 43098262460446298281481263092977398901;
            v41->field_0 = 147712721579574701665555033060530284660;
            v32 = 1;
            v29 = v30;
            v30 = v41;
            v31 = 91;
            v38 = __rust_alloc(32, 8);
            if (!v38)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_443d4f:
            v43 = *((int128_t *)&v29);
LABEL_443d62:
            v38[1] = *((int128_t *)&v31);
            *((void*)&v38[0]) = v43;
            a0 = &g_4f0800.field_0;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-databaseprint-ls-colors", 14) && (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-ls-colors", 15))
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h279cae7947fdcdf7(&v29, 69, 0);
                if (v29)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v42 = v31;
                v42->field_2d = 144073102835013026703292221718255396210;
                v42->field_20 = 129103610634208826814885525031331195250;
                v42->field_10 = 149108104161359951279585202197237096804;
                v42->field_0 = 60419805665341624117446659616042938479;
                *((long long *)((char *)&v42->field_2d + 13)) = 7311146989694772088;
                v32 = 1;
                v29 = v30;
                v30 = v42;
                v31 = 69;
                v38 = __rust_alloc(32, 8);
                if (!v38)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                goto LABEL_443d4f;
            }
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-databaseprint-ls-colors", 14))
            {
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "c-shellbourne-shellprint-databaseprint-ls-colors", 7))
                {
                    v0 = 1;
                    goto LABEL_4441b8;
                }
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "bourne-shellprint-databaseprint-ls-colors", 12))
                {
                    v0 = 0;
                    goto LABEL_4441b8;
                }
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, "print-ls-colors", 15))
                {
                    v0 = 2;
                    goto LABEL_4441b8;
                }
                v0 = 3;
                v49 = uu_dircolors::guess_syntax::h1fc37eb694537c0e(v45, v46, v47, v48);
                if (v49 == 3)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h279cae7947fdcdf7(&v29, 61, 0);
                    if (v29)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v51 = v31;
                    *((int128_t *)((char *)&v51->field_20 + 13)) = 146741903194259221658092570006700519545;
                    v51->field_20 = 134836028194495893553493505727327659118;
                    v51->field_10 = 129102169552220244575705477208039384429;
                    v51->field_0 = 146793745037942682728254191965803933550;
                    v32 = 1;
                    v29 = v30;
                    v30 = v51;
                    v31 = 61;
                    v38 = __rust_alloc(32, 8);
                    if (!v38)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v53 = *((int128_t *)&v29);
LABEL_444541:
                    v38[1] = (int128_t)v31;
                    *((void*)&v38[0]) = v53;
                    a0 = &g_4f0708.field_0;
                    goto LABEL_443d72;
                }
                v0 = v49;
LABEL_4441b8:
                v50 = v16;
                if (v50 == 1)
                {
                    v52 = v15->field_0;
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h21ad4a550a6d135a(v52->field_8, v52[1].padding_0, "-expected file, got directory extra operand \nfile operands cannot be combined with --print-database (-p)", 1))
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb52c5d4ec6c0e4b1(v8, 0x2000, std::io::stdio::stdin::h7215cc131abb55d8());
                        if (!v16)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v58 = v15->field_0;
                        uu_dircolors::parse::h8e49b5311c99372e(&v29, v8, &v0, *((long long *)&v58->field_8), *((long long *)&v58[1].padding_0[4]));
                        *((int128_t *)&v7) = (int128_t)v31;
                        *((int128_t *)&v5) = *((int128_t *)&v29);
                    }
                    else
                    {
                        if (!v16)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v55 = v15->field_0;
                        v56 = v55->field_8;
                        v57 = v55[1].padding_0;
                        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v56, v57))
                        {
                            v8 = 1;
                            v9 = v56;
                            v10 = v57;
                            v11 = 1;
                            *((int [3])&v18) = v8;
                            v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v29 = &g_4f0790;
                            v30 = 1;
                            v33 = 0;
                            v31 = &v18;
                            v32 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v29);
                            v32 = 2;
                            *((int128_t *)&v29) = *((int128_t *)&v1);
                            v31 = v3;
                            v38 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                            goto LABEL_444541;
                        }
                        std::fs::File::open::h61e92d1462a6bc28(&v26, v56, v57);
                        if (*((int *)&v26))
                        {
                            v17 = *((long long *)&v28);
                            v8 = 1;
                            v9 = v56;
                            v10 = v57;
                            v11 = 0;
                            *((int [3])&v1) = v8;
                            v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v3 = &v17;
                            v4 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            v29 = &g_4f0688;
                            v30 = 2;
                            v33 = 0;
                            v31 = &v1;
                            v32 = 2;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v29);
                            v32 = 1;
                            *((int128_t *)&v29) = *((int128_t *)&v18);
                            v31 = *((long long *)&v20);
                            v38 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                            v59 = (int128_t)v29;
                            v38[1] = *((int128_t *)&v31);
                            *((void*)&v38[0]) = v59;
                            ::0x444c80::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h976e217628156730(v17);
                            a0 = &g_4f0708.field_0;
                            goto LABEL_443d72;
                        }
                        else
                        {
                            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h316aad0aecdcffbc(v8, 0x2000, *((int *)&v27));
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v1, v56, v57);
                            uu_dircolors::parse::hb21c7f0d3c0d5b4c(&v29, v8, &v0, v2, v3);
                            *((int128_t *)&v7) = (int128_t)v31;
                            *((int128_t *)&v5) = *((int128_t *)&v29);
                            core::ptr::drop_in_place$LT$std..env..VarError$GT$::h972c36417baec171(&v1);
                        }
                    }
                    if (v5)
                    {
                        v31 = (long long)(&v7)[8];
                        *((int128_t *)&v29) = (int128_t)(&v5)[8];
                        v32 = 1;
                        v38 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                        v62 = (int128_t)v29;
                        v38[1] = (int128_t)v31;
                        *((void*)&v38[0]) = v62;
                    }
                    else
                    {
                        v3 = (long long)(&v7)[8];
                        *((int128_t *)&v1) = (int128_t)(&v5)[8];
                        v18 = &v1;
                        v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v29 = &g_4f06a8;
                        v30 = 2;
                        v33 = 0;
                        v31 = &v18;
                        v32 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v29, v60, v61);
                        ::0x444c40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a6ecb7ddd804d8e(&v1);
                        v38 = 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::hc182406bb4e5f264(&v14);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf76cdc6a45767a51(&v21);
                    a0 = &g_4f0708.field_0;
                    if (!v38)
                    {
                        v63 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                        return v63;
                    }
                }
                else
                {
                    if (v50)
                    {
                        v8 = 0;
                        *((int128_t *)&v9) = *((int128_t *)&(&v15->field_8->padding_0)[1]);
                        v11 = 1;
                        *((int [3])&v18) = v8;
                        v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v29 = &g_4f07b8;
                        v30 = 1;
                        v33 = 0;
                        v31 = &v18;
                        v32 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v29);
                        v32 = 1;
                        *((int128_t *)&v29) = *((int128_t *)&v1);
                        v31 = v3;
                        v38 = __rust_alloc(32, 8);
                        if (!v38)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
                    else
                    {
                        uu_dircolors::generate_ls_colors::hda74cb5f4a6b94a8(v8, &v0, ":: invalid line;  missing second tokencolortermoptionscolor", 1);
                        *((int [3])&v1) = v8;
                        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v29 = &g_4f06a8;
                        v30 = 2;
                        v33 = 0;
                        v31 = &v1;
                        v32 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v29, v46, v47);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he82e3561b711fbad();
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd663053263e8b2(v8);
                        goto LABEL_444265;
                    }
LABEL_444431:
                    goto LABEL_443d62;
                }
LABEL_443881:
                *((uint128_t *[2])&v5[0]) = v38;
                v6 = a0;
                v8 = &v5[0];
                v9 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h172f566c5405e790;
                v29 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v30 = 1;
                v33 = 0;
                *((int [3])&v31) = v8;
                v32 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v35, &v29);
                *((int128_t *)&v8) = *((int128_t *)&v35);
                v10 = *((long long *)&v36);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h21ad4a550a6d135a(v9, *((long long *)&v36), 1, 0))
                {
                    v21 = uucore::util_name::h359eff083fe53467();
                    v22 = v47;
                    v1 = &v21;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc303c254691ff7f5;
                    v29 = &g_4f0688;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v1;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v46, v47);
                    *((int [3])&v21) = v8;
                    v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v29 = &g_4f06a8;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v21;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v46, v47);
                }
                if ((char)v6->field_68(v5))
                {
                    v21 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v22 = v47;
                    v1 = &v21;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc303c254691ff7f5;
                    v29 = &g_4f06c8;
                    v30 = 2;
                    v33 = 0;
                    v31 = &v1;
                    v32 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v29, v46, v47);
                }
                v63 = v6->field_60(v5);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he82e3561b711fbad();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd663053263e8b2(v8);
                v64 = v5;
                v65 = v6;
                if (v65->field_0)
                    v66(v64);
                if (v65->field_8)
                {
                    __rust_dealloc(v64);
                    return v63;
                }
                return v63;
            }
            else if (!v16)
            {
                uu_dircolors::generate_dircolors_config::h616df0df142c6e8e(v8);
                *((int [3])&v1) = v8;
                v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v29 = &g_4f06a8;
                v30 = 2;
                v33 = 0;
                v31 = &v1;
                v32 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v29, v46, v47);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he82e3561b711fbad();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd663053263e8b2(v8);
LABEL_444265:
                v38 = 0;
            }
            else
            {
                v8 = 0;
                *((int128_t *)&v9) = *((int128_t *)&v15->field_0->field_8);
                v11 = 1;
                *((int [3])&v5) = v8;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v29 = &g_4f0870;
                v30 = 2;
                v33 = 0;
                v31 = v5;
                v32 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v29);
                v32 = 1;
                *((int128_t *)&v29) = *((int128_t *)&v1);
                v31 = v3;
                v38 = __rust_alloc(32, 8);
                if (!v38)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                goto LABEL_444431;
            }
        }
LABEL_443d72:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he82e3561b711fbad();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f14c77f68b630d1(&v14);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf76cdc6a45767a51(&v21);
        if (!v38)
        {
            vvar_1321{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v63;
        }
        goto LABEL_443881;
    }
}
