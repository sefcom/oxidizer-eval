long long uu_wc::uumain::h7b933f438e30a206(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x3c8], Other Possible Types: unsigned long long, unsigned long
    void* v1;  // [sp-0x3c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x3b8], Other Possible Types: unsigned long
    char v3;  // [bp-0x3a8], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x3a0]
    void* v5;  // [sp-0x390]
    int v6;  // [bp-0x388], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v7;  // [sp-0x380], Other Possible Types: unsigned long long
    struct_1 *v8;  // [bp-0x378], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [sp-0x370]
    char v10;  // [bp-0x368]
    char v11;  // [bp-0x358]
    unsigned long v12;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_1 *v13;  // [sp-0x340], Other Possible Types: unsigned long long
    int v14;  // [sp-0x338]
    int v15;  // [sp-0x328]
    unsigned long long v16;  // [sp-0x318]
    char v17;  // [bp-0x310]
    char v18;  // [bp-0x300]
    char v19;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v20;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct_1 *v21;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long v22;  // [sp-0x2e0], Other Possible Types: unsigned long long
    void* v23;  // [sp-0x2d8]
    char v24;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0x1c8]
    unsigned long long v26;  // [sp-0x1c0]
    unsigned long long v27;  // [sp-0xc8]
    void* v28;  // [sp-0xc0]
    char v29;  // [bp-0x3b]
    char v30;  // [bp-0x39]
    unsigned long long v32;  // rax
    struct_1 *v33;  // rdx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rax
    unsigned long v36;  // r15
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long v39;  // r15
    unsigned long long v40;  // r14
    struct_1 *v42;  // r15
    unsigned int v43;  // eax
    unsigned long long v44;  // rsi
    unsigned long long v45;  // r14
    struct_1 *v46;  // r15
    struct struct_0 **v47;  // rax

    uu_wc::uu_app::h79a2b572708e1ebc(&v19);
    clap_lex::RawArgs::new::ha82322f006fab4b1(&v3, a0, a1);
    v5 = 0;
    if ((v29 & 8) && (v32 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5), v32))
    {
        v35 = std::path::Path::file_stem::h441d431a81936839(v32, v33, v33, v34);
        if (v35 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v35, v33), !v0))
        {
            v36 = v2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h974eb563c8c0f704(&v0, v36, 0);
            if (v0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v1, v1, v36);
            v0 = v1;
            v1 = v2;
            v2 = v36;
            clap_lex::RawArgs::insert::h31743d51e28f6568(&v3, &v5, &v0);
            v27 = 1;
            v28 = 0;
            if (v24 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0dbaef2cd9d1233d();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h816aff6fbc37245e(&v24);
            }
            v24 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v19, &v3, v5);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0dbaef2cd9d1233d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h816aff6fbc37245e(&v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6593170f5db7cc8e(&v3);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hafa8e431eacd0d46(&v3);
            goto LABEL_43af6b;
            goto LABEL_43af6b;
        }
    }
    if (!(v30 & 2))
    {
        v37 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v3, &v5);
        if (v37)
        {
            v38 = std::path::Path::file_name::h79ecbb7850a9c7f3(v37, v33, v33, v34);
            if (v38)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v38, v33);
                if (!v0 && v24 == 0x8000000000000000)
                {
                    v39 = v2;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h974eb563c8c0f704(&v0, v39, 0);
                    if (v0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v25, v1, v39);
                    v24 = v1;
                    v25 = v2;
                    v26 = v39;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v6, &v19, &v3, v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6593170f5db7cc8e(&v3);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hafa8e431eacd0d46(&v3);
LABEL_43af6b:
    ::0x43a390::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb678cb71e758f54c(&v19);
    if (v12 == 0x8000000000000000)
    {
        v40 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v13);
        if (!(!v40))
            goto LABEL_43afa0;
    }
    else
    {
        v16 = *((long long *)&v11);
        *((int128_t *)&v15) = *((int128_t *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v12 = v6;
        v13 = v7;
        uu_wc::Settings::new::h02713cb8e33fdb45(&v0, &v12);
        uu_wc::Inputs::new::h7d7e2396c7f935ff(&v19, &v12);
        if (v6 != 3)
        {
            v6 = v19;
            v40 = v20;
            v8 = v21;
            v9 = v22;
            v40 = uu_wc::wc::h468f76ca14048456(&v6, &v0);
            core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::h76d6022b9441ce4b(&v6);
            if (v0 >= 9223372036854775811)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0dbaef2cd9d1233d();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h816aff6fbc37245e(&v0);
            }
        }
        else
        {
            v8 = v8;
            if (v0 >= 9223372036854775811)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0dbaef2cd9d1233d();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h816aff6fbc37245e(&v0);
                v8 = v8;
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7fa592f0c026ddbe(&v12);
        if (v40)
        {
LABEL_43afa0:
            v3 = v40;
            v4 = v42;
            v6 = &v3;
            v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfa27a668c1dbc7e;
            v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v20 = 1;
            v23 = 0;
            v21 = &v6;
            v22 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v19);
            *((int128_t *)&v6) = *((int128_t *)&v17);
            v8 = *((long long *)&v18);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1b3ba68429322d3d(v7, *((long long *)&v18), 1, 0))
            {
                v12 = uucore::util_name::h359eff083fe53467();
                v13 = v33;
                v0 = &v12;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd0fdb5be7e2e5184;
                v19 = &g_4f08b8;
                v20 = 2;
                v23 = 0;
                v21 = &v0;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v44, v33);
                v12 = &v6;
                v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v19 = &g_4f08d8;
                v20 = 2;
                v23 = 0;
                v21 = &v12;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v44, v33);
            }
            if ((char)v4->field_68(v3))
            {
                v12 = uucore::execution_phrase::hded5ccd87df1fcab();
                v13 = v33;
                v0 = &v12;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd0fdb5be7e2e5184;
                v19 = &g_4f08f8;
                v20 = 2;
                v23 = 0;
                v21 = &v0;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v44, v33);
            }
            v43 = v4->field_60(v3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0dbaef2cd9d1233d();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h816aff6fbc37245e(&v6);
            v45 = v3;
            v46 = v4;
            if (v46->field_0)
                v47(v45);
            if (v46->field_8)
            {
                __rust_dealloc(v45);
                return v43;
            }
            return v43;
        }
    }
    v43 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v43;
}
