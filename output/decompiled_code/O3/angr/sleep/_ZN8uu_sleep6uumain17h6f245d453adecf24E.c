long long uu_sleep::uumain::h6f245d453adecf24(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    uint128_t v0[2];  // [bp-0x3e0], Other Possible Types: char
    struct_1 *v1;  // [sp-0x3d8], Other Possible Types: unsigned long long
    char v2;  // [bp-0x3d0]
    char v3;  // [bp-0x3c8], Other Possible Types: unsigned long long, unsigned long
    void* v4;  // [sp-0x3c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x3b8], Other Possible Types: unsigned long
    unsigned int v6;  // [sp-0x3b0]
    void* v7;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x3a0]
    int v9;  // [bp-0x398], Other Possible Types: struct struct_2 **, char, unsigned long
    unsigned long v10;  // [sp-0x390], Other Possible Types: unsigned long long
    char v11;  // [bp-0x388], Other Possible Types: unsigned long long
    char v12;  // [bp-0x378]
    char v13;  // [bp-0x368]
    char v14;  // [bp-0x360]
    unsigned long v15;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x350]
    int v17;  // [sp-0x348]
    int v18;  // [sp-0x338]
    unsigned long long v19;  // [sp-0x328]
    unsigned long v20;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x318]
    char v22;  // [bp-0x310]
    char v23;  // [bp-0x300]
    char v24;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v25;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_3 **v26;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v27;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x2d8]
    int v29;  // [sp-0x2d0]
    unsigned long long v30;  // [sp-0x2c0]
    char v31;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v32;  // [sp-0x1c8]
    unsigned long long v33;  // [sp-0x1c0]
    unsigned long long v34;  // [sp-0xc8]
    void* v35;  // [sp-0xc0]
    char v36;  // [bp-0x3b]
    char v37;  // [bp-0x39]
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rax
    unsigned long v43;  // r15
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long v46;  // r15
    uint128_t v47[2];  // r14
    int v48;  // xmm0
    int v49;  // xmm0
    unsigned int v51;  // eax
    unsigned long long v52;  // rsi
    uint128_t v53[2];  // r14
    struct_1 *v54;  // r15
    struct struct_0 **v55;  // rax

    uu_sleep::uu_app::h021e8a5a69169878(&v24);
    clap_lex::RawArgs::new::hdb8d1e8826c8b421(&v0, a0, a1);
    v7 = 0;
    if ((v36 & 8) && (v39 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v7), v39))
    {
        v42 = std::path::Path::file_stem::h441d431a81936839(v39, v40, v40, v41);
        if (v42 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, v42, v40), !v3))
        {
            v43 = v5;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hdc7897ac896e8255(&v3, v43, 0);
            if (v3)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v4, v4, v43);
            v3 = v4;
            v4 = v5;
            v5 = v43;
            clap_lex::RawArgs::insert::h85dfb5705962df09(&v0, &v7, &v3);
            v34 = 1;
            v35 = 0;
            if (v31 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf728af44660b38f6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h967980189e62a19a(&v31);
            }
            v31 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v9, &v24, &v0, v7);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf728af44660b38f6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h967980189e62a19a(&v3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5e7aed1d29332b1f(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hde0a0859f72e1e34(&v0);
            goto LABEL_437954;
            goto LABEL_437954;
        }
    }
    if (!(v37 & 2))
    {
        v44 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v7);
        if (v44)
        {
            v45 = std::path::Path::file_name::h79ecbb7850a9c7f3(v44, v40, v40, v41);
            if (v45)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, v45, v40);
                if (!v3 && v31 == 0x8000000000000000)
                {
                    v46 = v5;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hdc7897ac896e8255(&v3, v46, 0);
                    if (v3)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v32, v4, v46);
                    v31 = v4;
                    v32 = v5;
                    v33 = v46;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v9, &v24, &v0, v7);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5e7aed1d29332b1f(&v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hde0a0859f72e1e34(&v0);
LABEL_437954:
    ::0x436c60::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h51bc3438ce4aa919(&v24);
    if (v15 == 0x8000000000000000)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v16);
        if (!(!v47))
            goto LABEL_437989;
    }
    else
    {
        v19 = *((long long *)&v13);
        *((int128_t *)&v18) = *((int128_t *)&v12);
        *((int128_t *)&v17) = *((int128_t *)&v11);
        v15 = v9;
        v16 = v10;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6738bfd684fa97f0(&v24, &v15, "NUMBERmissing operand\nTry ' --help' for more information.", 6);
        clap_builder::parser::error::MatchesError::unwrap::h941fc9a3d273c0e4(&v9, "NUMBERmissing operand\nTry ' --help' for more information.", 6, &v24);
        if (v24)
        {
            v30 = *((long long *)&v14);
            v48 = *((int128_t *)&v10);
            *((int128_t *)&v29) = *((int128_t *)&(&v12)[8]);
            *((int128_t *)&v27) = *((int128_t *)&(&v11)[8]);
            v24 = v9;
            v25 = v48;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd223c9f71a4f9390(&v0, &v24, v40);
            v47 = uu_sleep::sleep::h348212b9f3e96b24(v1, *((long long *)&v2));
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf728af44660b38f6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc08aac91e3c3d341(&v0);
        }
        else
        {
            v7 = uucore::execution_phrase::hded5ccd87df1fcab();
            v8 = v40;
            v20 = &v7;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc52104e92644d7c9;
            v24 = &g_4dc5e8;
            v25 = 2;
            v28 = 0;
            v26 = &v20;
            v27 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v3, &v24);
            v6 = 1;
            v47 = __rust_alloc(32, 8);
            if (!v47)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v49 = *((int128_t *)&v3);
            v47[1] = *((int128_t *)&v5);
            *((void*)&v47[0]) = v49;
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf1c9f7b8fbda1176(&v15);
        if (v47)
        {
LABEL_437989:
            *((uint128_t *[2])&v0[0]) = v47;
            v1 = &g_4dc640.field_0;
            v9 = &v0;
            v10 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h0c54f375d5651ac8;
            v24 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v25 = 1;
            v28 = 0;
            v26 = &v9;
            v27 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v22, &v24);
            *((int128_t *)&v9) = *((int128_t *)&v22);
            v11 = *((long long *)&v23);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha546d9a1b96a0ffe(v10, *((long long *)&v23), 1, 0))
            {
                v15 = uucore::util_name::h359eff083fe53467();
                v16 = v40;
                v3 = &v15;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc52104e92644d7c9;
                v24 = &g_4dc588;
                v25 = 2;
                v28 = 0;
                v26 = &v3;
                v27 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v52, v40);
                v15 = &v9;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v24 = &g_4dc5a8;
                v25 = 2;
                v28 = 0;
                v26 = &v15;
                v27 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v52, v40);
            }
            if ((char)v1->field_68(v0))
            {
                v15 = uucore::execution_phrase::hded5ccd87df1fcab();
                v16 = v40;
                v3 = &v15;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc52104e92644d7c9;
                v24 = &g_4dc5c8;
                v25 = 2;
                v28 = 0;
                v26 = &v3;
                v27 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v52, v40);
            }
            v51 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf728af44660b38f6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h967980189e62a19a(&v9);
            v53 = v0;
            v54 = v1;
            if (v54->field_0)
                v55(v53);
            if (v54->field_8)
            {
                __rust_dealloc(v53);
                return v51;
            }
            return v51;
        }
    }
    v51 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v51;
}
