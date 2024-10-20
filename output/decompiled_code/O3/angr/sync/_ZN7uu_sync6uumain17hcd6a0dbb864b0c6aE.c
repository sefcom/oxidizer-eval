long long uu_sync::uumain::hcd6a0dbb864b0c6a(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [bp-0x3d0], Other Possible Types: uint128_t [2], char, unsigned long, unsigned long long
    int v1;  // [sp-0x3c8], Other Possible Types: struct_1 *, unsigned long long [3]
    void* v2;  // [sp-0x3c0]
    char v3;  // [bp-0x3b8], Other Possible Types: unsigned long long, unsigned long
    void* v4;  // [sp-0x3b0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v5;  // [sp-0x3a8], Other Possible Types: unsigned long
    void* v6;  // [sp-0x3a0]
    int v7;  // [bp-0x398], Other Possible Types: struct struct_2 **, char, unsigned long
    unsigned long v8;  // [sp-0x390], Other Possible Types: unsigned long long
    char v9;  // [bp-0x388], Other Possible Types: unsigned long long
    char v10;  // [bp-0x378]
    char v11;  // [bp-0x368]
    unsigned long v12;  // [sp-0x350], Other Possible Types: unsigned long long
    struct_1 *v13;  // [sp-0x348], Other Possible Types: unsigned long long
    int v14;  // [sp-0x340]
    int v15;  // [sp-0x330]
    unsigned long long v16;  // [sp-0x320]
    unsigned long long v17;  // [sp-0x318]
    char v18;  // [bp-0x310]
    char v19;  // [bp-0x300]
    int v20;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    struct_3 *v21;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v22;  // [bp-0x2e8], Other Possible Types: struct struct_4 **, struct_3 *, unsigned long long
    unsigned int v23;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v24;  // [bp-0x2d8], Other Possible Types: void*
    int v25;  // [sp-0x2c8]
    char v26;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v27;  // [sp-0x1c8]
    unsigned long long v28;  // [sp-0x1c0]
    unsigned long long v29;  // [sp-0xc8]
    void* v30;  // [sp-0xc0]
    char v31;  // [bp-0x3b]
    char v32;  // [bp-0x39]
    unsigned long long v34;  // rax
    struct_1 *v35;  // rdx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rax
    unsigned long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long v41;  // rbx
    uint128_t v42[2];  // rax
    unsigned long long v43;  // rbx
    unsigned long long v44;  // r14
    unsigned long long v47;  // rbx
    unsigned long long v48;  // r12
    unsigned long long v49;  // rcx
    struct_3 *v51;  // rax
    uint128_t v52[2];  // rax
    unsigned long long v53;  // r15
    unsigned long long v54;  // r13
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r15
    int v57;  // xmm0
    struct_1 *v58;  // r13
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rsi
    unsigned int v61;  // eax
    struct_1 *v62;  // r13
    uint128_t v63[2];  // r14
    struct_1 *v64;  // r15
    struct struct_0 **v65;  // rax

    uu_sync::uu_app::hdec4353582bcab02(&v20);
    clap_lex::RawArgs::new::he44cda1e798d23c4(&v0, a0, a1);
    v6 = 0;
    if ((v31 & 8) && (v34 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v6), v34))
    {
        v37 = std::path::Path::file_stem::h441d431a81936839(v34, v35, v35, v36);
        if (v37 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, v37, v35), !v3))
        {
            v38 = v5;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4638ad165a18d936(&v3, v38, 0);
            if (v3)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v4, v4, v38);
            v3 = v4;
            v4 = v5;
            v5 = v38;
            clap_lex::RawArgs::insert::hc92b7a2e7d5a404c(&v0, &v6, &v3);
            v29 = 1;
            v30 = 0;
            if (v26 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe1add37a65f0dfc();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72fd96eb6ac2d3af(&v26);
            }
            v26 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v7, &v20, &v0, v6);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe1add37a65f0dfc();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72fd96eb6ac2d3af(&v3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2a88c992847fbef3(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b249e759baa8670(&v0);
            goto LABEL_436421;
            goto LABEL_436421;
        }
    }
    if (!(v32 & 2))
    {
        v39 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v6);
        if (v39)
        {
            v40 = std::path::Path::file_name::h79ecbb7850a9c7f3(v39, v35, v35, v36);
            if (v40)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, v40, v35);
                if (!v3 && v26 == 0x8000000000000000)
                {
                    v41 = v5;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4638ad165a18d936(&v3, v41, 0);
                    if (v3)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v27, v4, v41);
                    v26 = v4;
                    v27 = v5;
                    v28 = v41;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v7, &v20, &v0, v6);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2a88c992847fbef3(&v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b249e759baa8670(&v0);
LABEL_436421:
    ::0x435590::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hf9ad0620e70b6824(&v20);
    if (v12 == 0x8000000000000000)
    {
        v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v13);
        if (!v42)
        {
            vvar_1002{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
            return v61;
        }
        goto LABEL_4368a3;
    }
    v16 = *((long long *)&v11);
    *((int128_t *)&v15) = *((int128_t *)&v10);
    *((int128_t *)&v14) = *((int128_t *)&v9);
    v12 = v7;
    v13 = v8;
    v43 = _ZN7uu_sync9ARG_FILES17h25f46ed8632118a2E;
    v44 = g_4dc568;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5ee8ff0f8a42415b(&v20, &v12, v43, v44);
    clap_builder::parser::error::MatchesError::unwrap::hfaa9641c18dc5d5a(&v7, v43, v44, &v20);
    if (!v7 || (*((int128_t *)&v25) = *((int128_t *)&v11), *((int128_t *)&v24) = *((int128_t *)&v10), *((int128_t *)&v22) = *((int128_t *)&v9), *((int128_t *)&v20) = *((int128_t *)&v7), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd7167d11f99c9c25(&v3, &v20), *((int128_t *)&v20) = *((int128_t *)&v4), v0 == 0x8000000000000000))
    {
        v0 = 0;
        v1[0] = 8;
        v2 = 0;
    }
    else
    {
        *((int128_t *)&v1) = (int128_t)v20;
        v0 = v3;
    }
    v47 = _ZN7uu_sync7options4DATA17hfe946e47ade04431E;
    v48 = g_4dc558;
    v49 = v2;
    if ((!v49 & (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, v47, v48)))
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4638ad165a18d936(&v20, 34, 0);
        if (v20)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v51 = v22;
        v51->field_10 = 134820369169679875500402886040621245804;
        v51->field_0 = 43139572265452250147808806175498317101;
        v51->field_20 = 29806;
        v23 = 1;
        v20 = v21;
        v21 = v51;
        v22 = 34;
        v52 = __rust_alloc(32, 8);
        if (!v52)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v57 = *((int128_t *)&v20);
        v52[1] = (int128_t)v22;
        *((void*)&v52[0]) = v57;
        v58 = &g_4d9c50.field_0;
        goto LABEL_436882;
        goto LABEL_436882;
    }
    v17 = v47;
    if (v49)
    {
        do
        {
            v53 = v49 * 24;
            v54 = v1[1];
            v55 = v1[2];
            if ((int)nix::fcntl::open::hcae9cd7a13611f01(v54, v55, 0x800, 0) == 1 && ((unsigned int)v35 != 13 || (char)std::path::Path::is_dir::h9ac0db933706da51(v54, v55)) && (v52 = _$LT$nix..errno..consts..Errno$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd220b0318f2ae60b((unsigned long long)(unsigned int)v35, v1), v52))
                goto LABEL_43687f;
        } while ((v1 += 24, v56 = v53 - 24, v53 != 24));
    }
    v59 = v17;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, _ZN7uu_sync7options11FILE_SYSTEM17h675228ede6f7377bE, g_4dc548))
    {
        v22 = v2;
        *((int128_t *)&v20) = *((int128_t *)&v0);
        v52 = uu_sync::syncfs::h33c55da164f2c4cc(&v20, v59);
        goto LABEL_43676c;
    }
    else
    {
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v12, v59, v48))
        {
            v52 = uu_sync::sync::h2db5431786f1a63c();
            if (!v52)
            {
                ::0x435b20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h87add87be1ee52cd(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd754e80f22497e9(&v12);
                vvar_1008{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v61;
            }
LABEL_43687f:
LABEL_436882:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h20e829d717a2c162(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b249e759baa8670(&v0);
        }
        else
        {
            v22 = v2;
            *((int128_t *)&v20) = *((int128_t *)&v0);
            v52 = uu_sync::fdatasync::hea1b02a0d0a6c9af(&v20, v60);
LABEL_43676c:
            if (!v52)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd754e80f22497e9(&v12);
                v61 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v61;
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd754e80f22497e9(&v12);
LABEL_4368a3:
        *((uint128_t *[2])&v0[0]) = v42;
        v1 = v62;
        v7 = &v0;
        v8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf20053395632c792;
        v20 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v21 = 1;
        v24 = 0;
        v22 = &v7;
        v23 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v20);
        *((int128_t *)&v7) = *((int128_t *)&v18);
        v9 = *((long long *)&v19);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h59c6dcfff012eee4(v8, *((long long *)&v19), 1, 0))
        {
            v12 = uucore::util_name::h359eff083fe53467();
            v13 = v35;
            v3 = &v12;
            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha59b53a9479c201b;
            v20 = &g_4d9bb8;
            v21 = 2;
            v24 = 0;
            v22 = &v3;
            v23 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v60, v35);
            v12 = &v7;
            v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v20 = &g_4d9bd8;
            v21 = 2;
            v24 = 0;
            v22 = &v12;
            v23 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v60, v35);
        }
        if ((char)v1->field_68(v0))
        {
            v12 = uucore::execution_phrase::hded5ccd87df1fcab();
            v13 = v35;
            v3 = &v12;
            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha59b53a9479c201b;
            v20 = &g_4d9bf8;
            v21 = 2;
            v24 = 0;
            v22 = &v3;
            v23 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v60, v35);
        }
        v61 = v1->field_60(v0);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfe1add37a65f0dfc();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72fd96eb6ac2d3af(&v7);
        v63 = v0;
        v64 = v1;
        if (v64->field_0)
            v65(v63);
        if (v64->field_8)
        {
            __rust_dealloc(v63);
            return v61;
        }
        return v61;
    }
}
