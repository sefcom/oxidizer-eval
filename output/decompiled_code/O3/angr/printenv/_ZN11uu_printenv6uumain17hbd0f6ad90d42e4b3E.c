long long uu_printenv::uumain::hbd0f6ad90d42e4b3(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x478], Other Possible Types: struct_0 *, unsigned long long
    struct_0 *v1;  // [sp-0x470], Other Possible Types: struct_2 *
    int v2;  // [sp-0x468], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x460]
    int v4;  // [sp-0x458], Other Possible Types: unsigned long, unsigned long long
    int v5;  // [bp-0x450]
    unsigned long long v6;  // [sp-0x448]
    int v7;  // [sp-0x438], Other Possible Types: void*, unsigned long
    struct_0 *v8;  // [sp-0x430]
    unsigned long long v9;  // [sp-0x428]
    int v10;  // [bp-0x418], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x410]
    char v12;  // [bp-0x408], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x400]
    void* v14;  // [bp-0x3f8], Other Possible Types: char
    char v15;  // [bp-0x3e8]
    char v16;  // [bp-0x3d8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v17;  // [sp-0x3d0]
    char v18;  // [bp-0x3c8]
    char v19;  // [bp-0x3c0]
    char v20;  // [bp-0x3b0]
    int v21;  // [sp-0x3a8]
    unsigned long long v22;  // [sp-0x398]
    unsigned long v23;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x388]
    char v25;  // [bp-0x380], Other Possible Types: unsigned long long
    struct_2 *v26;  // [sp-0x378], Other Possible Types: unsigned long long
    int v27;  // [sp-0x348]
    char v28;  // [bp-0x330]
    char v29;  // [bp-0x320]
    char v30;  // [bp-0x318]
    char v31;  // [bp-0x308]
    int v32;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v33;  // [sp-0x2f0]
    int v34;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x2e0]
    int v36;  // [bp-0x2d8], Other Possible Types: void*, unsigned long long
    unsigned long long v37;  // [sp-0x2d0]
    int v38;  // [sp-0x2c8]
    unsigned long long v40;  // r15
    unsigned long long v41;  // r12
    int v42;  // xmm0
    int v43;  // xmm1
    int v44;  // xmm0
    int v45;  // ymm0
    int v46;  // ymm0
    unsigned long long v48;  // rcx
    struct_0 *v49;  // rax
    void* v50;  // r14
    unsigned long long v51;  // rcx
    int v52;  // xmm0
    int v53;  // xmm0
    char *v54;  // rsi
    unsigned long long v55;  // rdx
    char *v56;  // rax
    int v57;  // xmm0
    int v58;  // xmm0
    unsigned long long v59;  // rsi
    struct_2 *v60;  // rdx
    int v61;  // xmm0
    int v62;  // ymm0
    int v63;  // xmm0
    int v64;  // xmm0
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdx
    unsigned long long v67;  // r13
    unsigned int v68;  // eax
    unsigned long long v69;  // r14
    struct_2 *v70;  // r15
    struct struct_1 **v71;  // rax

    uu_printenv::uu_app::he3c74b71074a6e7c(&v32);
    clap_builder::builder::command::Command::get_matches_from::hdb520205ca01bd13(&v25, &v32, a0, a1);
    v40 = _ZN11uu_printenv13ARG_VARIABLES17hebae490d8a167bf4E;
    v41 = g_4d2c40;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h74efac48c8a7d8f7(&v32, &v25, v40, v41);
    clap_builder::parser::error::MatchesError::unwrap::hcf2e42d704fb7b08(&v10, v40, v41, &v32);
    if (!v10)
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
    }
    else
    {
        v42 = *((int128_t *)&v10);
        v43 = *((int128_t *)&v12);
        *((int128_t *)&v38) = *((int128_t *)&v15);
        *((int128_t *)&v36) = *((int128_t *)&v14);
        v34 = v43;
        v32 = v42;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd88aa10f2fcde094(&v16, &v32);
        v44 = *((int128_t *)&v16);
        v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
        v7 = v44;
        v9 = *((long long *)&v18);
    }
    *((int *)&v23) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v25, _ZN11uu_printenv8OPT_NULL17hd7b3ff41bbe85208E, g_4d2c30) ? "\nTry ' --help' for more information.\n" : &g_40ef57);
    v24 = 1;
    v48 = v9;
    if (!v48)
    {
        std::env::vars::h104f59bf3851ffdb(&v30);
        v61 = *((int128_t *)&v30);
        v62 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        *((int128_t *)&v2) = *((int128_t *)&v31);
        v0 = v61;
        while (true)
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&v16, &v0);
            if (v16 == 0x8000000000000000)
                break;
            v6 = *((long long *)&v18);
            v63 = *((int128_t *)&v16);
            v4 = v63;
            v22 = *((long long *)&v20);
            v64 = *((int128_t *)&v19);
            v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
            v21 = v64;
            v32 = &v4;
            v33 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v34 = &v21;
            v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v36 = &v23;
            v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a164478a698e828;
            v10 = &g_4d04f8;
            v11 = 3;
            v14 = 0;
            v12 = &v32;
            v13 = 3;
            std::io::stdio::_print::he918bceb0c89db46(&v10, v65, v66);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56aac249fd46a538();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7c0a8311999c373(&v21);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56aac249fd46a538();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7c0a8311999c373(&v4);
        }
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7db5ccbcd3593115(&v0);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5883178d1e21a2cc(&v7);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1959a6f4d2e37c9(&v7);
    }
    else
    {
        v49 = v8;
        v0 = v49;
        v2 = v7;
        v3 = &(&v49->field_0)[3 * v48];
        v50 = 0;
        while (true)
        {
            v1 = (char *)&v49->field_8 + 8;
            v51 = v49->field_0;
            v52 = *((int128_t *)&(&v49->field_0)[1]);
            v27 = v52;
            if (v4 == 0x8000000000000000)
                break;
            v4 = v51;
            v53 = v27;
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
            v5 = v53;
            v54 = (long long)v5;
            v55 = v6;
            if (v55 > 15)
            {
                if (core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(61, v54) == 1)
                    goto LABEL_42ff61;
            }
            else
            {
                if (v55)
                {
                    v56 = 0;
                    while (*((char *)(v54 + v56)) != 61)
                    {
                        v56 += 1;
                        if (v55 == v56)
                            goto LABEL_42ff80;
                    }
LABEL_42ff61:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56aac249fd46a538();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7c0a8311999c373(&v4);
                    v50 = v50 | -0x100 | 1;
                    goto LABEL_42fee0;
                }
            }
LABEL_42ff80:
            v34 = v6;
            v57 = *((int128_t *)&v4);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
            v32 = v57;
            std::env::var::h8925a1051af3c80e(&v16, &v32);
            v41 = v41 | -0x100 | 1;
            if (!v16)
            {
                v22 = *((long long *)&v19);
                v58 = *((int128_t *)&(&v16)[8]);
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                v21 = v58;
                v10 = &v21;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v12 = &v23;
                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a164478a698e828;
                v32 = &g_40ef60;
                v33 = 2;
                v36 = 0;
                v34 = &v10;
                v35 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&v32, v59, v60);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56aac249fd46a538();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7c0a8311999c373(&v21);
                v41 = v50 & 4294967295;
                if (!v16)
                    goto LABEL_42fee0;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h7c45a7feb876efbc(&v16);
            v50 = v41 & 4294967295;
LABEL_42fee0:
            v49 = v1;
            if (v49 == v3)
                break;
        }
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2678fe9422586a6b(&v0);
        if (((char)v50 & 1))
        {
            v67 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h4184ee23da6eaec7(1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hacaa427742af444d(&v25);
            if (!v67)
            {
                v68 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v68;
            }
            v0 = v67;
            v1 = v60;
            v10 = &v0;
            v11 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb22c693922ce33be;
            v32 = &g_40edb0;
            v33 = 1;
            v36 = 0;
            v34 = &v10;
            v35 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v28, &v32);
            *((int128_t *)&v10) = *((int128_t *)&v28);
            v12 = *((long long *)&v29);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he6811a30c0723959(v11, *((long long *)&v29), 1, 0))
            {
                v25 = uucore::util_name::h359eff083fe53467();
                v26 = v60;
                v16 = &v25;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a164478a698e828;
                v32 = &g_4d0498;
                v33 = 2;
                v36 = 0;
                v34 = &v16;
                v35 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v59, v60);
                v25 = &v10;
                v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v32 = &g_4d04b8;
                v33 = 2;
                v36 = 0;
                v34 = &v25;
                v35 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v59, v60);
            }
            if ((char)v1->field_68(v0))
            {
                v25 = uucore::execution_phrase::hded5ccd87df1fcab();
                v26 = v60;
                v16 = &v25;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a164478a698e828;
                v32 = &g_4d04d8;
                v33 = 2;
                v36 = 0;
                v34 = &v16;
                v35 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v32, v59, v60);
            }
            v68 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56aac249fd46a538();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7c0a8311999c373(&v10);
            v69 = v0;
            v70 = v1;
            if (v70->field_0)
                v71(v69);
            if (v70->field_8)
            {
                __rust_dealloc(v69);
                return v68;
            }
            return v68;
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hacaa427742af444d(&v25);
    vvar_819{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v68;
}
