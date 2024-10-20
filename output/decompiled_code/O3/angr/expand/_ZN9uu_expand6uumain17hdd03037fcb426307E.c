long long uu_expand::uumain::hdd03037fcb426307(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x470]
    struct struct_0 **v1;  // [bp-0x468], Other Possible Types: int, char, unsigned long long
    int v2;  // [sp-0x460], Other Possible Types: void*, unsigned long long
    int v3;  // [sp-0x458], Other Possible Types: unsigned long long
    int v4;  // [sp-0x450], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x448]
    int v6;  // [sp-0x440]
    int v7;  // [bp-0x430], Other Possible Types: unsigned long
    unsigned long long v8;  // [sp-0x420]
    char v9;  // [bp-0x410]
    int v10;  // [bp-0x3f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x3f0], Other Possible Types: unsigned long long
    int v12;  // [sp-0x3e8]
    int v13;  // [sp-0x3d8]
    char v14;  // [bp-0x3c8]
    uint128_t v15[3];  // [bp-0x3b8], Other Possible Types: char
    struct_3 *v16;  // [sp-0x3b0]
    char v17;  // [bp-0x3a8]
    char v18;  // [bp-0x398]
    unsigned long v19;  // [sp-0x390], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x388]
    unsigned long long v21;  // [sp-0x380]
    unsigned long v22;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x370]
    int v24;  // [sp-0x368]
    int v25;  // [sp-0x358]
    unsigned long long v26;  // [sp-0x348]
    void* v27;  // [sp-0x340]
    unsigned long long v28;  // [sp-0x338]
    unsigned long long v29;  // [sp-0x330]
    char v30;  // [bp-0x328]
    char v31;  // [bp-0x320]
    char v32;  // [bp-0x318]
    char v33;  // [bp-0x310]
    char v34;  // [bp-0x300]
    int v35;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    char v36;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v37;  // [bp-0x2e8], Other Possible Types: struct struct_1 **, unsigned long long
    char v38;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v39;  // [bp-0x2d8], Other Possible Types: void*
    char v40;  // [bp-0x2d0]
    char v41;  // [bp-0x2c0]
    char v42;  // [bp-0x2b0]
    char v43;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v44;  // [sp-0x1c8]
    unsigned long long v45;  // [sp-0x1c0]
    unsigned long long v46;  // [sp-0xc8]
    void* v47;  // [sp-0xc0]
    char v48;  // [bp-0x3b]
    char v49;  // [bp-0x39]
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rax
    unsigned long v56;  // r15
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    int v59;  // xmm1
    unsigned long v60;  // r15
    uint128_t v61[3];  // r14
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm1
    unsigned int v66;  // eax
    unsigned long long v67;  // rsi
    uint128_t v68[3];  // r14
    struct_3 *v69;  // r15
    struct struct_2 **v70;  // rax

    uu_expand::uu_app::h3c928f2b57505138(&v35);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4e67549dfccd0948(&v1, a0, a1);
    uu_expand::expand_shortcuts::he7565056413fcc1e(&v30, &v1);
    v51 = *((long long *)&v31);
    v1 = v51;
    v2 = v51;
    v3 = *((long long *)&v30);
    v4 = v51 + *((long long *)&v32) * 24;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h0d0b1323233d7429(&v9, &v1);
    v0 = 0;
    if ((v48 & 8) && (v52 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v9, &v0), v52))
    {
        v55 = std::path::Path::file_stem::h441d431a81936839(v52, v53, v53, v54);
        if (v55 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v55, v53), !v1))
        {
            v56 = v3;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hd8779532fcf0deb8(&v1, v56, 0);
            if (v1)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v20, v2, v56);
            v19 = v2;
            v20 = v3;
            v21 = v56;
            v27 = 0;
            v28 = 1;
            v29 = &v19;
            alloc::vec::Vec$LT$T$C$A$GT$::drain::ha85ca10eeaa70a1a(&v15, &v9, v0, v0);
            v7 = v29;
            *((int128_t *)&v6) = *((int128_t *)&v27);
            v59 = *((int128_t *)&v17);
            *((int128_t *)&v1) = *((int128_t *)&v15);
            v3 = v59;
            v5 = *((long long *)&v18);
            _$LT$alloc..vec..splice..Splice$LT$I$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfeaa2c600346aaef(&v1);
            _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0fd5192265e0742f(&v1);
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h34ab85456a71f444();
            v46 = 1;
            v47 = 0;
            if (v43 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc9229253cd10ad28();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7345eb3579ccaa83(&v43);
            }
            v43 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v10, &v35, &v9, v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc9229253cd10ad28();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7345eb3579ccaa83(&v19);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9531b58c69e603d2(&v9);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h38c51b254cae8f22(&v9);
            goto LABEL_439f2d;
            goto LABEL_439f2d;
        }
    }
    if (!(v49 & 2))
    {
        v57 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v9, &v0);
        if (v57)
        {
            v58 = std::path::Path::file_name::h79ecbb7850a9c7f3(v57, v53, v53, v54);
            if (v58)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v58, v53);
                if (!v1 && v43 == 0x8000000000000000)
                {
                    v60 = v3;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hd8779532fcf0deb8(&v1, v60, 0);
                    if (v1)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v44, v2, v60);
                    v43 = v2;
                    v44 = v3;
                    v45 = v60;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v10, &v35, &v9, v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9531b58c69e603d2(&v9);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h38c51b254cae8f22(&v9);
LABEL_439f2d:
    ::0x439180::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7434e6376ed15676(&v35);
    if (v22 == 0x8000000000000000)
    {
        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v23);
        if (!(!v61))
            goto LABEL_43a106;
    }
    else
    {
        v26 = *((long long *)&v14);
        v25 = v13;
        v24 = v12;
        v22 = v10;
        v23 = v11;
        uu_expand::Options::new::h89d0d654dcda2850(&v35, &v22);
        *((int128_t *)&v10) = *((int128_t *)&v36);
        *((int128_t *)&v12) = *((int128_t *)&v38);
        *((int128_t *)&v13) = *((int128_t *)&v40);
        if (v1 != 0x8000000000000000)
        {
            v8 = *((long long *)&v42);
            *((int128_t *)&v7) = *((int128_t *)&v41);
            *((int128_t *)&v2) = (int128_t)v10;
            v4 = v12;
            v6 = v13;
            v1 = v35;
            v61 = uu_expand::expand::h4f97caadc536173e(&v1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf9a510e29f1e8fea(&v22);
            core::ptr::drop_in_place$LT$uu_expand..Options$GT$::h395400d6f7c51b6e(&v1);
            if (!(!v61))
                goto LABEL_43a106;
        }
        else
        {
            v62 = (int128_t)v10;
            v39 = v13;
            v37 = v12;
            v35 = v62;
            v61 = __rust_alloc(48, 8);
            if (!v61)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v63 = (int128_t)v35;
            v64 = (int128_t)v37;
            v61[2] = (int128_t)v39;
            *((void*)&v61[1]) = v64;
            *((void*)&v61[0]) = v63;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf9a510e29f1e8fea(&v22);
LABEL_43a106:
            *((uint128_t *[3])&v15[0]) = v61;
            v16 = &g_4e2e58.field_0;
            v1 = &v15;
            v2 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h1b209c693aaaeb94;
            v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v36 = 1;
            v39 = 0;
            v37 = &v1;
            v38 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v33, &v35);
            *((int128_t *)&v1) = *((int128_t *)&v33);
            v3 = *((long long *)&v34);
            if (v3)
            {
                v10 = uucore::util_name::h359eff083fe53467();
                v11 = v53;
                v22 = &v10;
                v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52dc4077ecbc6797;
                v35 = &g_4e2dc0;
                v36 = 2;
                v39 = 0;
                v37 = &v22;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v67, v53);
                v10 = &v1;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v35 = &g_4e2de0;
                v36 = 2;
                v39 = 0;
                v37 = &v10;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v67, v53);
            }
            if ((char)v16->field_68(v15))
            {
                v10 = uucore::execution_phrase::hded5ccd87df1fcab();
                v11 = v53;
                v22 = &v10;
                v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52dc4077ecbc6797;
                v35 = &g_4e2e00;
                v36 = 2;
                v39 = 0;
                v37 = &v22;
                v38 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v67, v53);
            }
            v66 = v16->field_60(v15);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc9229253cd10ad28();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7345eb3579ccaa83(&v1);
            v68 = v15;
            v69 = v16;
            if (v69->field_0)
                v70(v68);
            if (v69->field_8)
            {
                __rust_dealloc(v68);
                return v66;
            }
            return v66;
        }
    }
    v66 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v66;
}
