long long uu_unlink::uumain::hcdcbfb97853bb319(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x3c0], Other Possible Types: unsigned long long, unsigned long
    void* v1;  // [sp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x3b0], Other Possible Types: unsigned long
    char v3;  // [bp-0x3a8], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x3a0]
    void* v5;  // [sp-0x390]
    int v6;  // [bp-0x388], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v7;  // [sp-0x380], Other Possible Types: unsigned long long
    char v8;  // [bp-0x378], Other Possible Types: unsigned long long
    char v9;  // [bp-0x368]
    char v10;  // [bp-0x358]
    unsigned long v11;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_1 *v12;  // [sp-0x340], Other Possible Types: unsigned long long
    int v13;  // [sp-0x338]
    int v14;  // [sp-0x328]
    unsigned long long v15;  // [sp-0x318]
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x300]
    char v18;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x2f0]
    unsigned long long v20;  // [sp-0x2e8]
    unsigned long long v21;  // [sp-0x2e0]
    void* v22;  // [sp-0x2d8]
    char v23;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v24;  // [sp-0x1c8]
    unsigned long long v25;  // [sp-0x1c0]
    unsigned long long v26;  // [sp-0xc8]
    void* v27;  // [sp-0xc0]
    char v28;  // [bp-0x3b]
    char v29;  // [bp-0x39]
    unsigned long long v31;  // rax
    struct_1 *v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rax
    unsigned long v35;  // r15
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long v38;  // r15
    unsigned long long v39;  // r14
    unsigned long long v40;  // r15
    unsigned long long v41;  // r14
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // r14
    struct_1 *v45;  // r15
    unsigned int v46;  // eax
    unsigned long long v47;  // rsi
    unsigned long long v48;  // r14
    struct_1 *v49;  // r15
    struct struct_0 **v50;  // rax

    uu_unlink::uu_app::hf9f0f122e0a59285(&v18);
    clap_lex::RawArgs::new::hf3d9b92e049b3bde(&v3, a0, a1);
    v5 = 0;
    if ((v28 & 8) && (v31 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5), v31))
    {
        v34 = std::path::Path::file_stem::h441d431a81936839(v31, v32, v32, v33);
        if (v34 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v34, v32), !v0))
        {
            v35 = v2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb8571df8b663b061(&v0, v35, 0);
            if (v0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v1, v1, v35);
            v0 = v1;
            v1 = v2;
            v2 = v35;
            clap_lex::RawArgs::insert::h281f1153c128cae0(&v3, &v5, &v0);
            v26 = 1;
            v27 = 0;
            if (v23 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe32e19094007c12();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hed408d9d77be361f(&v23);
            }
            v23 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v18, &v3, v5);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe32e19094007c12();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hed408d9d77be361f(&v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb386e902a5a47b0b(&v3);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8ec96462fe049b2d(&v3);
            goto LABEL_4355e4;
            goto LABEL_4355e4;
        }
    }
    if (!(v29 & 2))
    {
        v36 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5);
        if (v36)
        {
            v37 = std::path::Path::file_name::h79ecbb7850a9c7f3(v36, v32, v32, v33);
            if (v37)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v37, v32);
                if (!v0 && v23 == 0x8000000000000000)
                {
                    v38 = v2;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb8571df8b663b061(&v0, v38, 0);
                    if (v0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v24, v1, v38);
                    v23 = v1;
                    v24 = v2;
                    v25 = v38;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v18, &v3, v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb386e902a5a47b0b(&v3);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8ec96462fe049b2d(&v3);
LABEL_4355e4:
    ::0x434830::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h306c8777b79ebce5(&v18);
    if (v11 == 0x8000000000000000)
    {
        v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v12);
        if (!(!v41))
            goto LABEL_435619;
    }
    else
    {
        v15 = *((long long *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v9);
        *((int128_t *)&v13) = *((int128_t *)&v8);
        v11 = v6;
        v12 = v7;
        v39 = _ZN9uu_unlink8OPT_PATH17h7f852703c2d03372E;
        v40 = g_4d94f8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc6c717d83cfd629b(&v18, &v11, v39, v40);
        v42 = clap_builder::parser::error::MatchesError::unwrap::h5ef5ae6333710ab1(v39, v40, &v18);
        if (!v42)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v43 = v42[1];
        v41 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h46af8d61bd602bf7(std::fs::remove_file::h6cc6510766772ee2(v43, v42[2]), v43);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h10fa6ea4be82d633(&v11);
        if (v41)
        {
LABEL_435619:
            v3 = v41;
            v4 = v45;
            v6 = &v3;
            v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h2d18497aca6b311b;
            v18 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v19 = 1;
            v22 = 0;
            v20 = &v6;
            v21 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v16, &v18);
            *((int128_t *)&v6) = *((int128_t *)&v16);
            v8 = *((long long *)&v17);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1971c8a0bedd482f(v7, *((long long *)&v17), 1, 0))
            {
                v11 = uucore::util_name::h359eff083fe53467();
                v12 = v32;
                v0 = &v11;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4310904649a9264f;
                v18 = &g_4d6c18;
                v19 = 2;
                v22 = 0;
                v20 = &v0;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v47, v32);
                v11 = &v6;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v18 = &g_4d6c38;
                v19 = 2;
                v22 = 0;
                v20 = &v11;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v47, v32);
            }
            if ((char)v4->field_68(v3))
            {
                v11 = uucore::execution_phrase::hded5ccd87df1fcab();
                v12 = v32;
                v0 = &v11;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4310904649a9264f;
                v18 = &g_4d6c58;
                v19 = 2;
                v22 = 0;
                v20 = &v0;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v47, v32);
            }
            v46 = v4->field_60(v3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe32e19094007c12();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hed408d9d77be361f(&v6);
            v48 = v3;
            v49 = v4;
            if (v49->field_0)
                v50(v48);
            if (v49->field_8)
            {
                __rust_dealloc(v48);
                return v46;
            }
            return v46;
        }
    }
    v46 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v46;
}
