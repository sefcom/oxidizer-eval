long long uu_split::uumain::h9fa09737a1c3d148(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x4d8]
    uint128_t v1[2];  // [bp-0x4d0], Other Possible Types: char
    struct_2 *v2;  // [sp-0x4c8]
    char v3;  // [bp-0x4c0]
    char v4;  // [bp-0x4b0]
    int v5;  // [sp-0x4a8]
    unsigned long long v6;  // [sp-0x498]
    char v7;  // [bp-0x490]
    int v8;  // [bp-0x478], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v9;  // [sp-0x470], Other Possible Types: unsigned long long
    int v10;  // [bp-0x468], Other Possible Types: char
    char v11;  // [bp-0x458], Other Possible Types: unsigned long long
    char v12;  // [bp-0x448]
    void* v13;  // [bp-0x440], Other Possible Types: char, unsigned long
    unsigned long long v14;  // [sp-0x438]
    unsigned long long v15;  // [sp-0x430]
    unsigned long long v16;  // [sp-0x428]
    unsigned long long v17;  // [sp-0x420]
    int v18;  // [bp-0x418], Other Possible Types: char
    int v19;  // [sp-0x408]
    unsigned long long v20;  // [sp-0x3f8]
    unsigned long v21;  // [sp-0x3f0], Other Possible Types: unsigned long long
    void* v22;  // [sp-0x3e8]
    unsigned long long v23;  // [sp-0x3e0]
    struct struct_0 **v24;  // [sp-0x3d8], Other Possible Types: int, unsigned long, unsigned long long
    void* v25;  // [sp-0x3d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v26;  // [sp-0x3c8]
    unsigned long long v27;  // [sp-0x3c0]
    unsigned long long v28;  // [sp-0x3b8]
    int v29;  // [sp-0x3b0]
    unsigned long long v30;  // [sp-0x3a0]
    int v31;  // [sp-0x328]
    unsigned long long v32;  // [sp-0x318]
    char v33;  // [bp-0x310]
    char v34;  // [bp-0x300]
    int v35;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x2f0]
    struct struct_3 **v37;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v38;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    void* v39;  // [sp-0x2d8]
    unsigned long long v40;  // [sp-0x2d0]
    char v41;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v42;  // [sp-0x1c8]
    unsigned long long v43;  // [sp-0x1c0]
    unsigned long long v44;  // [sp-0xc8]
    void* v45;  // [sp-0xc0]
    char v46;  // [bp-0x3b]
    char v47;  // [bp-0x39]
    int v49;  // xmm0
    int v50;  // xmm1
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rax
    unsigned long v56;  // r12
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    int v59;  // xmm1
    unsigned long v60;  // r12
    uint128_t v61[2];  // rax
    unsigned long long v62;  // rcx
    void* v63;  // rdi
    unsigned long long v64;  // rsi
    unsigned long long v65;  // r8
    unsigned long long v66;  // r9
    int v67;  // xmm0
    unsigned long long v68;  // r8
    unsigned long long v69;  // r9
    int v70;  // xmm0
    unsigned long long v71;  // r8
    unsigned long long v72;  // r9
    struct_2 *v73;  // r12
    unsigned int v74;  // eax
    uint128_t v75[2];  // r14
    struct_2 *v76;  // r15
    struct struct_1 **v77;  // rax

    v16 = 0x8000000000000000;
    v13 = 0;
    v1 = 0;
    v24 = a0;
    v25 = a1;
    v26 = &v16;
    v27 = &v13;
    v28 = &v1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h52e3982a77a4c3c4(&v8, &v24);
    v40 = *((long long *)&v18);
    v49 = *((int128_t *)&v16);
    v38 = v49;
    v50 = *((int128_t *)&v8);
    v35 = v50;
    v37 = *((long long *)&v10);
    v32 = v37;
    v31 = v50;
    v6 = v40;
    v5 = v49;
    uu_split::uu_app::h56a710362fc85f5b(&v35);
    v51 = (long long)(&v31)[8];
    v24 = v51;
    v25 = v51;
    v26 = (long long)v31;
    v27 = v51 + v32 * 24;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::ha8a2b1a1983e49ae(&v7, &v24);
    v0 = 0;
    if ((v46 & 8) && (v52 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v7, &v0), v52))
    {
        v55 = std::path::Path::file_stem::h441d431a81936839(v52, v53, v53, v54);
        if (v55 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v24, v55, v53), !v24))
        {
            v56 = v26;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h0cbc973b961c6d42(&v24, v56, 0);
            if (v24)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v22, v25, v56);
            v21 = v25;
            v22 = v26;
            v23 = v56;
            v13 = 0;
            v14 = 1;
            v15 = &v21;
            alloc::vec::Vec$LT$T$C$A$GT$::drain::hf0fbf878a8a46988(&v1, &v7, v0, v0);
            v30 = v15;
            *((int128_t *)&v29) = *((int128_t *)&v13);
            v59 = *((int128_t *)&v3);
            *((int128_t *)&v24) = *((int128_t *)&v1);
            *((void*)&v26) = v59;
            v28 = *((long long *)&v4);
            _$LT$alloc..vec..splice..Splice$LT$I$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1166e5f0828e2f56(&v24);
            _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2d6f665cb01e7793(&v24);
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h921749c38bbacc59();
            v44 = 1;
            v45 = 0;
            if (v41 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf262455caee7ea9c();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5342199dfab562e7(&v41);
            }
            v41 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v8, &v35, &v7, v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf262455caee7ea9c();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5342199dfab562e7(&v21);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h88fb1d7355fb3cb3(&v7);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h70d903455c6edf90(&v7);
            goto LABEL_442fe4;
            goto LABEL_442fe4;
        }
    }
    if (!(v47 & 2))
    {
        v57 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v7, &v0);
        if (v57)
        {
            v58 = std::path::Path::file_name::h79ecbb7850a9c7f3(v57, v53, v53, v54);
            if (v58)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v24, v58, v53);
                if (!v24 && v41 == 0x8000000000000000)
                {
                    v60 = v26;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h0cbc973b961c6d42(&v24, v60, 0);
                    if (v24)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v42, v25, v60);
                    v41 = v25;
                    v42 = v26;
                    v43 = v60;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v8, &v35, &v7, v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h88fb1d7355fb3cb3(&v7);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h70d903455c6edf90(&v7);
LABEL_442fe4:
    ::0x4421c0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7696decf49031087(&v35);
    if (v16 == 0x8000000000000000)
    {
        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v17);
        if ((long long)v5 != 0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf262455caee7ea9c();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5342199dfab562e7(&v5);
            goto LABEL_443351;
        }
    }
    v20 = *((long long *)&v12);
    *((int128_t *)&v19) = *((int128_t *)&v11);
    v18 = v10;
    v16 = v8;
    v17 = v9;
    uu_split::Settings::from::hb706234573baeae9(&v24, &v16, &v5);
    if (v24 != 2)
    {
        memcpy(&v35, &v24, 168);
        v61 = uu_split::split::h2909317b17ce33b8(&v35, v64, v53, v54, v65, v66);
        core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h3de4f5372ee51bc0(&v35);
        goto LABEL_443329;
    }
    v62 = v25;
    v63 = v62 - 3;
    if (v62 - 4 >= 5)
        v63 = 0;
    if (!v63)
    {
        if (!((unsigned int)v62 == 3))
            goto LABEL_443230;
    }
    else
    {
        if (!(v63 == 1) || !((int)v26 == 1))
        {
LABEL_443230:
            v11 = (long long)v29;
            *((int128_t *)&v10) = *((int128_t *)&(&v26)[1]);
            *((int128_t *)&v8) = *((int128_t *)&v25);
            v13 = &v8;
            v14 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hf38bfa86b8d87b45;
            v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v36 = 1;
            v39 = 0;
            v37 = &v13;
            v38 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v35);
            v38 = 1;
            *((int128_t *)&v35) = *((int128_t *)&v1);
            v37 = *((long long *)&v3);
            v61 = __rust_alloc(32, 8);
            if (!v61)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v70 = (int128_t)v35;
            v61[1] = *((int128_t *)&v37);
            *((void*)&v61[0]) = v70;
            core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::had59e8fca606432a(&v8, v64, v53, v54, v71, v72, 0, *((long long *)&v1), *((long long *)&(&v1)[8]));
            v73 = &g_508978.field_0;
            goto LABEL_443327;
            goto LABEL_443327;
        }
    }
    v11 = (long long)v29;
    *((int128_t *)&v10) = *((int128_t *)&(&v26)[1]);
    *((int128_t *)&v8) = *((int128_t *)&v25);
    v13 = &v8;
    v14 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hf38bfa86b8d87b45;
    v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v36 = 1;
    v39 = 0;
    v37 = &v13;
    v38 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v35);
    v38 = 1;
    *((int128_t *)&v35) = *((int128_t *)&v1);
    v37 = *((long long *)&v3);
    v61 = __rust_alloc(32, 8);
    if (!v61)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v67 = (int128_t)v35;
    v61[1] = *((int128_t *)&v37);
    *((void*)&v61[0]) = v67;
    core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::had59e8fca606432a(&v8, v64, v53, v54, v68, v69, 0, *((long long *)&v1), *((long long *)&(&v1)[8]));
    v73 = &g_5088d0.field_0;
LABEL_443327:
LABEL_443329:
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h94aea363bd2fd668(&v16);
    if ((long long)v5 != 0x8000000000000000)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf262455caee7ea9c();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5342199dfab562e7(&v5);
    }
LABEL_443351:
    if (!v61)
    {
        v74 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v74;
    }
    *((uint128_t *[2])&v1[0]) = v61;
    v2 = v73;
    v24 = &v1;
    v25 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf9020a6d9187e325;
    v35 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v36 = 1;
    v39 = 0;
    v37 = &v24;
    v38 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v33, &v35);
    *((int128_t *)&v24) = *((int128_t *)&v33);
    v26 = *((long long *)&v34);
    if (v26)
    {
        v8 = uucore::util_name::h359eff083fe53467();
        v9 = v53;
        v16 = &v8;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h915daee8714e28af;
        v35 = &g_508850;
        v36 = 2;
        v39 = 0;
        v37 = &v16;
        v38 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v64, v53);
        v8 = &v24;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v35 = &g_508870;
        v36 = 2;
        v39 = 0;
        v37 = &v8;
        v38 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v64, v53);
    }
    if ((char)v2->field_68(v1))
    {
        v8 = uucore::execution_phrase::hded5ccd87df1fcab();
        v9 = v53;
        v16 = &v8;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h915daee8714e28af;
        v35 = &g_508890;
        v36 = 2;
        v39 = 0;
        v37 = &v16;
        v38 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v35, v64, v53);
    }
    v74 = v2->field_60(v1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf262455caee7ea9c();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5342199dfab562e7(&v24);
    v75 = v1;
    v76 = v2;
    if (v76->field_0)
        v77(v75);
    if (v76->field_8)
    {
        __rust_dealloc(v75);
        return v74;
    }
    return v74;
}
