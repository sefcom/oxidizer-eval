long long uu_numfmt::uumain::hb40b81999c58e3f1(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x4d8], Other Possible Types: void*, uint128_t [2], unsigned long long
    int v1;  // [sp-0x4d0], Other Possible Types: struct_1 *, unsigned long long
    unsigned long long v2;  // [sp-0x4c8]
    unsigned long long v3;  // [sp-0x4c0]
    unsigned long v4;  // [sp-0x4b0], Other Possible Types: unsigned long long
    struct_4 *v5;  // [sp-0x4a8]
    char v6;  // [sp-0x4a0]
    void* v7;  // [sp-0x498], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x490]
    void* v9;  // [sp-0x488]
    struct struct_4 **v10;  // [sp-0x480]
    int v11;  // [bp-0x478], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v12;  // [sp-0x470], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x468], Other Possible Types: unsigned long long
    char v14;  // [bp-0x458]
    char v15;  // [bp-0x448]
    unsigned long v16;  // [sp-0x430], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x428]
    int v18;  // [sp-0x420]
    int v19;  // [sp-0x410]
    unsigned long long v20;  // [sp-0x400]
    unsigned long long v21;  // [sp-0x3f8]
    unsigned long v22;  // [sp-0x3f0], Other Possible Types: unsigned long long
    int v23;  // [bp-0x3e8], Other Possible Types: struct struct_2 **, char, unsigned long, unsigned long long
    struct_1 *v24;  // [sp-0x3e0], Other Possible Types: unsigned long, unsigned long long
    int v25;  // [bp-0x3d8], Other Possible Types: char, unsigned long long
    char v26;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v27;  // [bp-0x3b8]
    char v28;  // [bp-0x328]
    char v29;  // [bp-0x310]
    char v30;  // [bp-0x300]
    int v31;  // [bp-0x2f8], Other Possible Types: void*, char, unsigned long, unsigned long long
    int v32;  // [bp-0x2f0], Other Possible Types: struct_1 *, char, unsigned long long
    int v33;  // [bp-0x2e8], Other Possible Types: void*, struct struct_3 **, char, unsigned long long
    unsigned long v34;  // [sp-0x2e0], Other Possible Types: unsigned long long
    int v35;  // [sp-0x2d8], Other Possible Types: void*, unsigned long, unsigned long long
    char v36;  // [bp-0x2d0], Other Possible Types: unsigned long long
    int v37;  // [bp-0x2c8], Other Possible Types: unsigned long long
    char v38;  // [sp-0x2c0]
    uint128_t v40[2];  // r14
    unsigned long long v41;  // r14
    int v42;  // xmm0
    uint128_t v43[2];  // rax
    struct_1 *v44;  // r15
    int v45;  // xmm0
    int v46;  // xmm0
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm2
    unsigned long long v51[3];  // rax
    uint128_t v52[2];  // rax
    struct_1 *v53;  // rdx
    unsigned long long v54;  // rax
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rdi
    struct_4 *v59;  // r12
    uint128_t v60[2];  // rax
    int v61;  // xmm0
    unsigned long long v62;  // rsi
    unsigned long long v63;  // rax
    unsigned int v64;  // eax
    unsigned long long v65;  // rsi
    uint128_t v66[2];  // r14
    struct_1 *v67;  // r15
    struct struct_0 **v68;  // rax

    uu_numfmt::uu_app::h9366f707e4457221(&v31);
    clap_builder::builder::command::Command::try_get_matches_from::h4538c222f549f166(&v23, &v31, a0, a1);
    if (v16 == 0x8000000000000000)
    {
        v40 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v17);
        if (!(!v40))
            goto LABEL_4401a1;
        goto LABEL_440784;
    }
    v20 = *((long long *)&v27);
    *((int128_t *)&v19) = *((int128_t *)&v26);
    *((int128_t *)&v18) = *((int128_t *)&v25);
    v16 = v23;
    v17 = v24;
    uu_numfmt::parse_options::hdb891e1f4bf770bf(&v31, &v16);
    v41 = v31;
    if (v41 == 2)
    {
        v42 = *((int128_t *)&v32);
        v0 = v42;
        v2 = v34;
        v34 = v2;
        v32 = v42;
        v31 = 1;
        v43 = __rust_alloc(32, 8);
        if (!v43)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v40 = v43;
        v46 = *((int128_t *)&v31);
        v43[1] = (int128_t)(&v32)[8];
        *((void*)&v43[0]) = v46;
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha22c709c2fa8f4cf(&v16);
        if (!(!v40))
            goto LABEL_4401a1;
        goto LABEL_440784;
    }
    v44 = v32;
    *((int128_t *)&v11) = *((int128_t *)&v33);
    v13 = v35;
    memcpy(&v26, &v36, 168);
    v45 = (int128_t)v11;
    v0 = v45;
    v25 = v45;
    v26 = v13;
    v23 = v41;
    v24 = v44;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3389ea9408025c7d(&v31, &v16, "NUMBERerror flushing stdout/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/numfmt/src/numfmt.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and", 6);
    clap_builder::parser::error::MatchesError::unwrap::h5b80e0a0a79524ed(&v11, "NUMBERerror flushing stdout/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/numfmt/src/numfmt.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and", 6, &v31);
    if (v11)
    {
        v48 = (int128_t)v11;
        v49 = *((int128_t *)&v13);
        v50 = *((int128_t *)&v14);
        *((int128_t *)&v37) = *((int128_t *)&v15);
        v35 = v50;
        v33 = v49;
        v31 = v48;
        do
        {
            v51 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he1ba77db0ffa598a(&v31);
        } while ((v52 = (unsigned long long)uu_numfmt::format_and_handle_validation::hc855df9cfd2ff733(v51[1], v51[2], &v23), !v52));
        v11 = std::io::stdio::stdout::h077da66234850927();
        v63 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v11, v62, v53);
        if (v63)
        {
            v31 = v63;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::hb84bf3cc89689beb(&v23);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha22c709c2fa8f4cf(&v16);
        if (v40)
        {
LABEL_4401a1:
            *((uint128_t *[2])&v0[0]) = v40;
            v1 = &g_4f8060.field_0;
            v23 = &v0[0];
            v24 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9970415cc52678;
            v31 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v32 = 1;
            v35 = 0;
            v33 = &v23;
            v34 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v29, &v31);
            *((int128_t *)&v23) = *((int128_t *)&v29);
            v65 = *((long long *)&v30);
            v25 = *((long long *)&v30);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hcba5c0a5ea1e4450(v24, v65, 1, 0))
            {
                v11 = uucore::util_name::h359eff083fe53467();
                v12 = v53;
                v16 = &v11;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0320db2b8cbe9beb;
                v31 = &g_4f80d0;
                v32 = 2;
                v35 = 0;
                v33 = &v16;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v62, v53);
                v11 = &v23;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v31 = &g_4f8008;
                v32 = 2;
                v35 = 0;
                v33 = &v11;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v62, v53);
            }
            if ((char)v1->field_68(v0))
            {
                v11 = uucore::execution_phrase::hded5ccd87df1fcab();
                v12 = v53;
                v16 = &v11;
                v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0320db2b8cbe9beb;
                v31 = &g_4f80f0;
                v32 = 2;
                v35 = 0;
                v33 = &v16;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v62, v53);
            }
            v64 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb59128cb5f117354();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h751892df47f6425a(&v23);
            v66 = v0;
            v67 = v1;
            if (v67->field_0)
                v68(v66);
            if (v67->field_8)
            {
                __rust_dealloc(v66);
                return v64;
            }
            return v64;
        }
LABEL_440784:
        v64 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v64;
    }
    v22 = std::io::stdio::stdin::h7215cc131abb55d8();
    v5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v22);
    v6 = (char)v53 & 1;
    v10 = &v5;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9405d03094597030(&v31, &v10, v53 | -0x100 | (char)v53 & 1);
    v54 = v31;
    if (v54 == 9223372036854775809)
        v52 = 0;
    v21 = *((long long *)&v28);
    do
    {
        v57 = v32;
        if (v54 == 0x8000000000000000)
        {
            v4 = v57;
            v7 = 0;
            v8 = 1;
            v9 = 0;
            v37 = 32;
            v38 = 3;
            v31 = 0;
            v33 = 0;
            v35 = &v7;
            v36 = &g_4f7f60;
            if ((char)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739(&v4, &v31))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            *((int128_t *)&v1) = *((int128_t *)&v7);
            v3 = v9;
            v0 = 0;
            v60 = __rust_alloc(32, 8);
            if (!v60)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v52 = v60;
            v61 = *((int128_t *)&v0);
            v60[1] = (int128_t)(&v1)[8];
            *((void*)&v60[0]) = v61;
            ::0x43f8c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5a4aa10151a88807(&v4);
            v44 = &g_4f8060.field_0;
            v59 = v5;
        }
        if (0 >= v21)
        {
            v31 = v54;
            v32 = v57;
            v33 = v2;
            v52 = uu_numfmt::format_and_handle_validation::hc855df9cfd2ff733(v57);
            v44 = v53;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb59128cb5f117354();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h751892df47f6425a(&v31);
        }
        else
        {
            v0 = v54;
            v1 = v57;
            v2 = v33;
            v7 = v0;
            v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v31 = &g_4f8008;
            v32 = 2;
            v35 = 0;
            v33 = &v7;
            v34 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v31, v2, v56);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb59128cb5f117354();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h751892df47f6425a(v0);
        }
    } while ((v52 = (unsigned long long)uu_numfmt::format_and_handle_validation::hc855df9cfd2ff733(v51[1], v51[2], &v23), !v52));
}
