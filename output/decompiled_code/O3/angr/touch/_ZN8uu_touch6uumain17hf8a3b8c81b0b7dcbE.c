long long uu_touch::uumain::hf8a3b8c81b0b7dcb(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x448], Other Possible Types: uint128_t [3], char, unsigned long
    struct_1 *v1;  // [sp-0x440]
    char v2;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned int v3;  // [sp-0x430]
    char v4;  // [bp-0x428]
    struct struct_2 **v5;  // [bp-0x418], Other Possible Types: int, char, unsigned long
    unsigned long v6;  // [sp-0x410], Other Possible Types: unsigned long long
    int v7;  // [bp-0x408], Other Possible Types: char, unsigned long, unsigned long long
    int v8;  // [bp-0x400]
    int v9;  // [sp-0x3f8]
    char v10;  // [bp-0x3f0]
    char v11;  // [bp-0x3e8]
    char v12;  // [bp-0x3e0]
    unsigned long v13;  // [sp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3d0]
    unsigned int v15;  // [bp-0x3c8]
    char v16;  // [bp-0x3c0]
    char v17;  // [bp-0x3b8]
    char v18;  // [bp-0x3b0]
    unsigned long v19;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x3a0]
    unsigned long long v21;  // [sp-0x398]
    unsigned long v22;  // [sp-0x388], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x380]
    int v24;  // [sp-0x378]
    int v25;  // [sp-0x368]
    unsigned long long v26;  // [sp-0x358]
    unsigned long v27;  // [sp-0x350], Other Possible Types: unsigned long long
    int v28;  // [bp-0x348], Other Possible Types: unsigned long
    int v29;  // [sp-0x338]
    int v30;  // [sp-0x328]
    unsigned long long v31;  // [sp-0x318]
    char v32;  // [bp-0x310]
    char v33;  // [bp-0x300]
    int v34;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v35;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_3 **v36;  // [sp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    int v37;  // [sp-0x2e0], Other Possible Types: unsigned long long
    void* v38;  // [sp-0x2d8]
    unsigned long long v39;  // [sp-0x2d0]
    char v40;  // [sp-0x2c8]
    char v41;  // [sp-0x2c7]
    char v42;  // [sp-0x2c6]
    char v43;  // [sp-0x2c5]
    uint128_t v45[3];  // rax
    unsigned long long v46;  // r14
    unsigned long long v47;  // r15
    char v48;  // al
    unsigned long long v49;  // rdx
    unsigned long long v50;  // r14
    unsigned long long v51;  // r15
    unsigned long long v52[3];  // r14
    unsigned long long v53;  // r15
    unsigned long long v54;  // r12
    int v55;  // xmm0
    struct_1 *v56;  // r15
    unsigned long long v57[3];  // rax
    unsigned long long v58;  // rcx
    unsigned long long v59;  // r8
    unsigned long long v60;  // r9
    unsigned long long v61;  // r14
    unsigned long long v62;  // r15
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm1
    unsigned int v67;  // eax
    unsigned long long v68;  // rsi
    unsigned long long v69;  // rsi
    uint128_t v70[3];  // r14
    struct_1 *v71;  // r15
    struct struct_0 **v72;  // rax

    uu_touch::uu_app::h5b3e7bfd269baab7(&v34);
    clap_builder::builder::command::Command::try_get_matches_from::h717d8109814cf66d(&v5, &v34, a0, a1);
    if (v22 == 0x8000000000000000)
    {
        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v23);
        if (!v45)
        {
            vvar_799{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v67;
        }
    }
    else
    {
        v26 = *((long long *)&v11);
        v25 = v9;
        *((int128_t *)&v24) = *((int128_t *)&v7);
        v22 = v5;
        v23 = v6;
        v46 = _ZN8uu_touch9ARG_FILES17h37435c3b5cf3cdaeE;
        v47 = g_691ba0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd49ce5b77d10f06c(&v34, &v22, v46, v47);
        clap_builder::parser::error::MatchesError::unwrap::hdb95b07066d138f0(&v5, v46, v47, &v34);
        if (!v27)
        {
            v19 = uucore::execution_phrase::hded5ccd87df1fcab();
            v20 = v49;
            v13 = &v19;
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc67dbdf1f8456cd1;
            v34 = &g_68eff0;
            v35 = 2;
            v38 = 0;
            v36 = &v13;
            v37 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v34);
            v3 = 1;
            v45 = __rust_alloc(32, 8);
            if (!v45)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v55 = *((int128_t *)&v0);
            v45[1] = *((int128_t *)&v2);
            *((void*)&v45[0]) = v55;
            v56 = &g_68f048.field_0;
LABEL_4f08c3:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a978023ff592847(&v22);
        }
        else
        {
            v31 = *((long long *)&v12);
            *((int128_t *)&v30) = *((int128_t *)&v10);
            *((int128_t *)&v29) = (int128_t)v8;
            v27 = v5;
            *((int128_t *)&v28) = *((int128_t *)&v6);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d2e5c7b1e80d87d(&v16, &v27);
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN8uu_touch7options8NO_DEREF17h43ad56ad3475e597E, g_692398);
            v50 = _ZN8uu_touch7options7sources9REFERENCE17h4441ca6e906384feE;
            v51 = g_692368;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e28b2972725b816(&v34, &v22, v50, v51);
            v52 = clap_builder::parser::error::MatchesError::unwrap::h667c32a9eb49185a(v50, v51, &v34);
            v53 = _ZN8uu_touch7options7sources9TIMESTAMP17h0e1d0a146d2b047fE;
            v54 = g_692378;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h184bbaa703c8b98a(&v34, &v22, v53, v54);
            v57 = clap_builder::parser::error::MatchesError::unwrap::h667c32a9eb49185a(v53, v54, &v34);
            if (v52)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v34, v52[1], v52[2]);
                *((unsigned long *)&v15) = v36;
                *((int128_t *)&v13) = *((int128_t *)&v34);
                goto LABEL_4f058d;
            }
            if (!v57)
            {
                v13 = 9223372036854775809;
                goto LABEL_4f058d;
            }
            else
            {
                uu_touch::parse_timestamp::hb61a589f88f846bb(&v34, v57[1], v57[2], v58, v59, v60);
                if (!v34)
                {
                    v14 = v35;
                    v15 = v36;
                    v13 = 0x8000000000000000;
LABEL_4f058d:
                    v61 = _ZN8uu_touch7options7sources4DATE17h7ff4d72c43734c5aE;
                    v62 = g_692358;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h184bbaa703c8b98a(&v34, &v22, v61, v62);
                    v63 = clap_builder::parser::error::MatchesError::unwrap::h667c32a9eb49185a(v61, v62, &v34);
                    if (!v63)
                    {
                        v19 = 0x8000000000000000;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v34, v63);
                        v21 = v36;
                        *((int128_t *)&v19) = *((int128_t *)&v34);
                    }
                    v2 = *((long long *)&v15);
                    *((int128_t *)&v0) = *((int128_t *)&v13);
                    v7 = v21;
                    *((int128_t *)&v5) = *((int128_t *)&v19);
                    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN8uu_touch7options9NO_CREATE17h093bff4543db852dE, g_692388);
                    v41 = v48;
                    *((int128_t *)&v37) = (int128_t)v0;
                    v39 = v2;
                    *((int128_t *)&v34) = (int128_t)v5;
                    v36 = v7;
                    v43 = uu_touch::determine_atime_mtime_change::h31ae1ad087cd154f(&v22);
                    v42 = 0;
                    uu_touch::touch::hed66574b4143fedc(&v0, *((long long *)&v17), *((long long *)&v18), &v34);
                    if (v0 == 9223372036854775812)
                    {
                        core::ptr::drop_in_place$LT$uu_touch..Options$GT$::h305477bf4d908b04(&v34);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8bdbce29988111ef(&v16);
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he3c43e8674c0601a(&v16);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a978023ff592847(&v22);
                        v67 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                        return v67;
                    }
                    v64 = (int128_t)v0;
                    *((int128_t *)&v9) = *((int128_t *)&v4);
                    *((int128_t *)&v7) = *((int128_t *)&v2);
                    v5 = v64;
                    v45 = __rust_alloc(48, 8);
                    if (!v45)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v65 = (int128_t)v5;
                    v66 = (int128_t)v7;
                    *((void*)&v45[2]) = v9;
                    *((void*)&v45[1]) = v66;
                    *((void*)&v45[0]) = v65;
                    core::ptr::drop_in_place$LT$uu_touch..Options$GT$::h305477bf4d908b04(&v34);
                    v56 = &g_68ef80.field_0;
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8bdbce29988111ef(&v16);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he3c43e8674c0601a(&v16);
                goto LABEL_4f08c3;
            }
        }
    }
    *((uint128_t *[3])&v0[0]) = v45;
    v1 = v56;
    v5 = &v0;
    v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h910ebd80fa5be240;
    v34 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v35 = 1;
    v38 = 0;
    v36 = &v5;
    v37 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v32, &v34);
    *((int128_t *)&v5) = *((int128_t *)&v32);
    v68 = *((long long *)&v33);
    v7 = *((long long *)&v33);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9b4b389e8930748f(v6, v68, 1, 0))
    {
        v27 = uucore::util_name::h359eff083fe53467();
        v28 = v49;
        v22 = &v27;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc67dbdf1f8456cd1;
        v34 = &g_68eee8;
        v35 = 2;
        v38 = 0;
        v36 = &v22;
        v37 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v34, v69, v49);
        v27 = &v5;
        v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v34 = &g_68ef08;
        v35 = 2;
        v38 = 0;
        v36 = &v27;
        v37 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v34, v69, v49);
    }
    if ((char)v1->field_68(v0))
    {
        v27 = uucore::execution_phrase::hded5ccd87df1fcab();
        v28 = v49;
        v22 = &v27;
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc67dbdf1f8456cd1;
        v34 = &g_68ef28;
        v35 = 2;
        v38 = 0;
        v36 = &v22;
        v37 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v34, v69, v49);
    }
    v67 = v1->field_60(v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf646f3b481238291();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h88672ad89e16c152(&v5);
    v70 = v0;
    v71 = v1;
    if (v71->field_0)
        v72(v70);
    if (v71->field_8)
        __rust_dealloc(v70);
    return v67;
}
