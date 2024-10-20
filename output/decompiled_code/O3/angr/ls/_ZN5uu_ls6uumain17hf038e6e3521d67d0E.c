long long uu_ls::uumain::hf038e6e3521d67d0(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x5c0], Other Possible Types: char
    unsigned long long v1;  // [sp-0x5b8]
    void* v2;  // [sp-0x5b0], Other Possible Types: unsigned long
    int v3;  // [bp-0x5a8], Other Possible Types: struct_2 *, char
    unsigned long long v4;  // [sp-0x598]
    int v5;  // [bp-0x588], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x580]
    unsigned long v7;  // [sp-0x578], Other Possible Types: unsigned long long
    unsigned int v8;  // [sp-0x570]
    char v9;  // [bp-0x568]
    char v10;  // [bp-0x558]
    int v11;  // [bp-0x548], Other Possible Types: uint128_t [2]
    struct_1 *v12;  // [sp-0x540]
    int v13;  // [sp-0x538]
    int v14;  // [sp-0x528]
    unsigned long long v15;  // [sp-0x518]
    struct struct_3 **v16;  // [bp-0x508], Other Possible Types: void*, int, char, unsigned long
    uint128_t v17[2];  // [sp-0x500], Other Possible Types: unsigned long long
    int v18;  // [bp-0x4f8], Other Possible Types: void*, struct_1 *, unsigned long, unsigned long long
    char v19;  // [bp-0x4f0]
    int v20;  // [sp-0x4e8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x4e0]
    int v22;  // [sp-0x4d8], Other Possible Types: unsigned long long
    char v23;  // [sp-0x4d0]
    char v24;  // [bp-0x408]
    char v25;  // [bp-0x3f8]
    char v26;  // [bp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v27;  // [sp-0x3e8], Other Possible Types: uint128_t [2], struct_1 *, unsigned long long
    struct_1 *v28;  // [bp-0x3e0], Other Possible Types: char
    char v29;  // [bp-0x3d0]
    char v30;  // [bp-0x3c0]
    char v31;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x2e8]
    struct struct_4 **v33;  // [sp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x2d8]
    void* v35;  // [sp-0x2d0]
    struct_2 *v37;  // rdi
    unsigned int v38;  // eax
    unsigned long long v39;  // r12
    uint128_t v40[2];  // r14
    struct_1 *v41;  // r15
    uint128_t v43[2];  // rax
    unsigned long long v44;  // r14
    unsigned long long v45;  // r15
    int v46;  // xmm0
    int v47;  // xmm1
    int v48;  // xmm2
    struct_1 *v49;  // rdx
    unsigned long long v50[2];  // rax
    int v51;  // xmm0
    unsigned int v52;  // eax
    unsigned long long v53;  // rsi
    unsigned long long v54;  // rsi
    uint128_t v55[2];  // r14
    struct_1 *v56;  // r15
    struct struct_0 **v57;  // rax

    uu_ls::uu_app::h7ba69f0ba6ad74e7(&v31);
    clap_builder::builder::command::Command::try_get_matches_from::h3d72f4b54273806f(&v26, &v31, a0, a1);
    if (v26 != 0x8000000000000000)
    {
        v15 = *((long long *)&v30);
        *((int128_t *)&v14) = *((int128_t *)&v29);
        *((int128_t *)&v13) = *((int128_t *)&v28);
        *((int128_t *)&v11) = *((int128_t *)&v26);
        uu_ls::Config::from::h8d88dc527e48ba72(&v16, &v11);
        v39 = v16;
        v40 = v17;
        v41 = v18;
        if (v39 != 0x8000000000000000)
        {
            memcpy(&v28, &v19, 232);
            v26 = v39;
            *((uint128_t *[2])&v27[0]) = v40;
            v28 = v41;
            v44 = _ZN5uu_ls7options5PATHS17hbfa8adabb9f8a098E;
            v45 = g_5ad208;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb31e733a596a0ffa(&v16, &v11, v44, v45);
            clap_builder::parser::error::MatchesError::unwrap::h1bbed1f931beb7f9(&v5, v44, v45, &v16);
            if (v5)
            {
                v46 = *((int128_t *)&v5);
                v47 = *((int128_t *)&v7);
                v48 = *((int128_t *)&v9);
                *((int128_t *)&v22) = *((int128_t *)&v10);
                v20 = v48;
                v18 = v47;
                v16 = v46;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc7fd79b529cd12a0(&v0, &v16, v49);
                *((int128_t *)&v3) = *((int128_t *)&v0);
                v4 = v2;
            }
            else
            {
                v50 = __rust_alloc(16, 8);
                if (!v50)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v50[0] = ".USimpleError";
                v50[1] = 1;
                alloc::slice::hack::into_vec::h6b2658e898d36531(&v3, v50, 1);
            }
            v18 = v4;
            *((int128_t *)&v16) = (int128_t)v3;
            v40 = uu_ls::list::ha4f54c9d24f4c406(&v16, &v26);
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h4294ddb9b29772ae(&v26);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha5f5768150370ee7(&v11);
        if (v40)
        {
LABEL_467c1b:
            *((uint128_t *[2])&v11[0]) = v40;
            v12 = &g_5a92e8.field_0;
            v16 = &v11;
            v17 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hde2120b81a3b94f8;
            v31 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v32 = 1;
            v35 = 0;
            v33 = &v16;
            v34 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v24, &v31);
            *((int128_t *)&v16) = *((int128_t *)&v24);
            v53 = *((long long *)&v25);
            v18 = *((long long *)&v25);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h78e32b6bcff1dfbc(v17, v53, 1, 0))
            {
                v26 = uucore::util_name::h359eff083fe53467();
                v27 = v49;
                v5 = &v26;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h429843d86768c053;
                v31 = &g_5a9250;
                v32 = 2;
                v35 = 0;
                v33 = &v5;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v54, v49);
                v26 = &v16;
                v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v31 = &g_5a9270;
                v32 = 2;
                v35 = 0;
                v33 = &v26;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v54, v49);
            }
            if ((char)v12->field_68(v11))
            {
                v26 = uucore::execution_phrase::hded5ccd87df1fcab();
                v27 = v49;
                v5 = &v26;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h429843d86768c053;
                v31 = &g_5a9290;
                v32 = 2;
                v35 = 0;
                v33 = &v5;
                v34 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v31, v54, v49);
            }
            v52 = v12->field_60(v11);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hed991fdf9cf9e592();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he07839ad91eb5eb9(&v16);
            v55 = v11;
            v56 = v12;
            if (v56->field_0)
                v57(v55);
            if (!v56->field_8)
                return v52;
            __rust_dealloc(v55);
        }
    }
    else
    {
        v37 = v27;
        switch (v38)
        {
        case 0:
            v3 = v37;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v22 = 32;
            v23 = 3;
            v16 = 0;
            v18 = 0;
            v20 = &v0;
            v21 = &g_5a91e8;
            if ((char)_$LT$clap_builder..error..Error$LT$F$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::had98aef21d2dbf6f(&v3, &v16))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v7 = v2;
            *((int128_t *)&v5) = *((int128_t *)&v0);
            v8 = 1;
            v43 = __rust_alloc(32, 8);
            if (!v43)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_467b40:
            v40 = v43;
            v51 = (int128_t)v5;
            v40[1] = *((int128_t *)&v7);
            *((void*)&v40[0]) = v51;
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hee156be8e7007dc9(v3);
            if (!(!v40))
                goto LABEL_467c1b;
            break;
        case 12: case 14:
            v40 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v37);
            if (!(!v40))
                goto LABEL_467c1b;
            break;
        default:
            v3 = v37;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v22 = 32;
            v23 = 3;
            v16 = 0;
            v18 = 0;
            v20 = &v0;
            v21 = &g_5a91e8;
            if ((char)_$LT$clap_builder..error..Error$LT$F$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::had98aef21d2dbf6f(&v3, &v16))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v7 = v2;
            *((int128_t *)&v5) = *((int128_t *)&v0);
            v8 = 2;
            v43 = __rust_alloc(32, 8);
            if (!v43)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            goto LABEL_467b40;
        }
    }
    v52 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v52;
}
