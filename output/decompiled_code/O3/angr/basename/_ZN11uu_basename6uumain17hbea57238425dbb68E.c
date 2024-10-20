long long uu_basename::uumain::hbea57238425dbb68(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x421]
    void* v1;  // [bp-0x420], Other Possible Types: char, unsigned long long
    int v2;  // [sp-0x418], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x410]
    int v4;  // [bp-0x408], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x400]
    unsigned long long v6;  // [sp-0x3f8]
    uint128_t v7[2];  // [bp-0x3e8], Other Possible Types: char
    struct_2 *v8;  // [sp-0x3e0]
    char v9;  // [bp-0x3d8]
    char v10;  // [bp-0x3d0]
    char v11;  // [bp-0x3c8]
    unsigned long long v12;  // [sp-0x3c0], Other Possible Types: unsigned long
    void* v13;  // [bp-0x3b8], Other Possible Types: struct struct_0 **, int, char, unsigned long long, unsigned long
    int v14;  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    char v15;  // [bp-0x3a8], Other Possible Types: unsigned long long
    char v16;  // [bp-0x3a0], Other Possible Types: unsigned long
    char v17;  // [bp-0x398]
    char v18;  // [bp-0x388]
    char v19;  // [bp-0x380]
    unsigned long long v20;  // [sp-0x378]
    unsigned long v21;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x368]
    int v23;  // [sp-0x360]
    int v24;  // [sp-0x350]
    unsigned long long v25;  // [sp-0x340]
    char v26;  // [bp-0x328]
    char v27;  // [bp-0x318]
    char v28;  // [bp-0x310]
    char v29;  // [bp-0x300]
    int v30;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_3 **v31;  // [sp-0x2f0], Other Possible Types: unsigned long long *, unsigned long, unsigned long long
    int v32;  // [bp-0x2e8], Other Possible Types: struct struct_4 **, unsigned long long *, unsigned long long
    int v33;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    int v34;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v35;  // [sp-0x2c8]
    unsigned long long v36;  // [sp-0x2c0]
    uint128_t v38[2];  // rax
    unsigned long long v40;  // r12
    unsigned long long v41;  // r13
    unsigned long long v42;  // rax
    int v44;  // xmm0
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdx
    unsigned long long v48;  // r12
    unsigned long long v49;  // r13
    unsigned long long *v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    struct struct_3 **v55;  // r13
    unsigned long long v56;  // rbp
    struct struct_3 **v57;  // r12
    unsigned long long v58[3];  // rax
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rdx
    unsigned int v62;  // eax
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rsi
    uint128_t v65[2];  // r14
    struct_2 *v66;  // r15
    struct struct_1 **v67;  // rax

    uucore::Args::collect_lossy::h3b2b7d4cb764ede3(&v26, a0, a1);
    uu_basename::uu_app::hf514b07ffd210561(&v30);
    v6 = *((long long *)&v27);
    *((int128_t *)&v4) = *((int128_t *)&v26);
    clap_builder::builder::command::Command::try_get_matches_from::h4952b2334459129b(&v13, &v30, &v4);
    if (v21 == 0x8000000000000000)
    {
        v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v22);
        if (!v38)
        {
            vvar_810{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v62;
        }
    }
    else
    {
        v25 = *((long long *)&v18);
        *((int128_t *)&v24) = *((int128_t *)&v17);
        *((int128_t *)&v23) = *((int128_t *)&v15);
        v21 = v13;
        v22 = v14;
        *((int *)&v0) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, _ZN11uu_basename7options4ZERO17h2728403727cc5e34E, g_4dba28) ? 10 : 0);
        v40 = _ZN11uu_basename7options4NAME17h4c5c00d4ba2e19aaE;
        v41 = g_4dba08;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc7a3eb6222cb476c(&v30, &v21, v40, v41);
        clap_builder::parser::error::MatchesError::unwrap::h6ab10a4cd68b99d0(&v13, v40, v41, &v30);
        v42 = v13;
        if (!v42)
        {
            v42 = core::ops::function::FnOnce::call_once::h6df41ad681db7d3f;
            v46 = 0;
        }
        else
        {
            v44 = *((int128_t *)&v17);
            v45 = *((long long *)&v18);
            v46 = *((long long *)&v19);
        }
        v30 = v42;
        v31 = "&";
        *((int128_t *)&v32) = *((int128_t *)&v15);
        v34 = v44;
        v35 = v45;
        v36 = v46;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h874793de8493030e(&v10, &v30);
        if (!v12)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb70154a51fca80d2(&v30, 15, 0);
            if (v30)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v50 = v32;
            *((long long *)((char *)v50 + 7)) = 7236828795186999072;
            *(v50) = 2334956331002456429;
            v33 = 1;
            v30 = v31;
            v31 = v50;
            v32 = 15;
            v38 = __rust_alloc(32, 8);
            if (!v38)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v51 = *((int128_t *)&v30);
            v52 = (int128_t)v32;
        }
        else
        {
            v48 = _ZN11uu_basename7options6SUFFIX17hde4a5958e796940bE;
            v49 = g_4dba18;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc169e3d7a403bf8b(&v30, &v21, v48, v49);
            if (!clap_builder::parser::error::MatchesError::unwrap::hce42a1e1df0cc12a(v48, v49, &v30) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v21, _ZN11uu_basename7options8MULTIPLE17hfdcfe916600e7b46E, g_4db9f8))
            {
                v53 = v12;
                if (v53 == 1)
                    goto LABEL_434ae7;
                if (v53 != 2)
                {
                    if (!v53)
                    {
                        v30 = &g_4d91e8;
                        v31 = 1;
                        v32 = 8;
                        *((int128_t *)&v33) = 0;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v30); /* do not return */
                    }
                    v13 = 0;
                    *((int128_t *)&v14) = *((int128_t *)(*((long long *)(*((long long *)&v11) + 16)) + 8));
                    v16 = 1;
                    v4 = &v13;
                    v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v30 = &g_4d9210;
                    v31 = 1;
                    v34 = 0;
                    v32 = &v4;
                    v33 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v7, &v30);
                    v33 = 1;
                    *((int128_t *)&v30) = *((int128_t *)&v7);
                    v32 = *((long long *)&v9);
                    v38 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                }
                else
                {
                    v12 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v1, *((long long *)(*((long long *)&v11) + 8)));
LABEL_434e5d:
                    v20 = *((long long *)&v10);
                    v55 = *((long long *)&v11);
                    v56 = v12;
                    if (v56)
                    {
                        v57 = 0;
                        do
                        {
                            v58 = *((long long *)(v31 + v57));
                            uu_basename::basename::hf06dd0101fdecdb4(&v4, v58[1], v58[2], v2, v3);
                            v13 = &v4;
                            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v15 = &v0;
                            v16 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hfc6ce48d626fd89a;
                            v30 = &g_40ff48;
                            v31 = 2;
                            v34 = 0;
                            v32 = &v13;
                            v33 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v30, v59, v60);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf96d8e37fde0706a();
                            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41479ffefb548b05(&v4);
                            v57 += 1;
                        } while (v56 << 3 != v57);
                    }
                    v31 = v55;
                    v30 = v20;
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd68b6d44bf04a242(&v30);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf96d8e37fde0706a();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41479ffefb548b05(&v1);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hacb1cfe5745e08f1(&v21);
                    v62 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                    return v62;
                }
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc169e3d7a403bf8b(&v30, &v21, v48, v49);
                v54 = clap_builder::parser::error::MatchesError::unwrap::hce42a1e1df0cc12a(v48, v49, &v30);
                if (v54 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v30, v54), *((int128_t *)&v13) = *((int128_t *)&v31), v1 != 0x8000000000000000))
                {
                    *((int128_t *)&v2) = (int128_t)v13;
                    v1 = v30;
                    goto LABEL_434e5d;
                }
LABEL_434ae7:
                v1 = 0;
                v2 = 1;
                v3 = 0;
                goto LABEL_434e5d;
            }
        }
        *((void*)&v38[1]) = v52;
        *((void*)&v38[0]) = v51;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf96d8e37fde0706a();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd68b6d44bf04a242(&v10);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hacb1cfe5745e08f1(&v21);
    }
    *((uint128_t *[2])&v7[0]) = v38;
    v8 = &g_4d9178.field_0;
    v13 = &v7;
    v14 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h118fa8f9b414e242;
    v30 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v31 = 1;
    v34 = 0;
    v32 = &v13;
    v33 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v28, &v30);
    *((int128_t *)&v13) = *((int128_t *)&v28);
    v15 = *((long long *)&v29);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7e4bd681d2d48ef2(v14, *((long long *)&v29), 1, 0))
    {
        v21 = uucore::util_name::h359eff083fe53467();
        v22 = v63;
        v4 = &v21;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcccfb3e6cd33a0e;
        v30 = &g_4d90e0;
        v31 = 2;
        v34 = 0;
        v32 = &v4;
        v33 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v64, v63);
        v21 = &v13;
        v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v30 = &g_4d9100;
        v31 = 2;
        v34 = 0;
        v32 = &v21;
        v33 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v64, v63);
    }
    if ((char)v8->field_68(v7))
    {
        v21 = uucore::execution_phrase::hded5ccd87df1fcab();
        v22 = v63;
        v4 = &v21;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbcccfb3e6cd33a0e;
        v30 = &g_4d9120;
        v31 = 2;
        v34 = 0;
        v32 = &v4;
        v33 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v64, v63);
    }
    v62 = v8->field_60(v7);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf96d8e37fde0706a();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41479ffefb548b05(&v13);
    v65 = v7;
    v66 = v8;
    if (v66->field_0)
        v67(v65);
    if (v66->field_8)
    {
        __rust_dealloc(v65);
        return v62;
    }
    return v62;
}
