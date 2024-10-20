long long uu_ln::uumain::he30e4f7f701db323(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x6b9]
    int v1;  // [bp-0x6b8], Other Possible Types: char, unsigned long long
    struct_1 *v2;  // [sp-0x6b0]
    unsigned long long v3;  // [sp-0x6a8]
    unsigned long v4;  // [sp-0x6a0], Other Possible Types: unsigned long long
    struct_1 *v5;  // [sp-0x698], Other Possible Types: unsigned long long
    int v6;  // [sp-0x690]
    int v7;  // [sp-0x680]
    unsigned long long v8;  // [sp-0x670]
    char v9;  // [bp-0x668]
    char v10;  // [bp-0x660]
    char v11;  // [bp-0x658]
    void* v12;  // [sp-0x650]
    char v13;  // [bp-0x640]
    char v14;  // [bp-0x638], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v15;  // [sp-0x630], Other Possible Types: unsigned long, unsigned long long
    char v16;  // [bp-0x628], Other Possible Types: unsigned long long
    char v17;  // [bp-0x618]
    char v18;  // [bp-0x608]
    char v19;  // [bp-0x5f8]
    char v20;  // [bp-0x5f0]
    char v21;  // [bp-0x5e0]
    char v22;  // [bp-0x5d0]
    int v23;  // [sp-0x5c8], Other Possible Types: unsigned long, unsigned long long
    void* v24;  // [sp-0x5c0], Other Possible Types: unsigned long long
    int v25;  // [sp-0x5b8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x5b0]
    int v27;  // [bp-0x5a8], Other Possible Types: void*
    int v28;  // [sp-0x598]
    char v29;  // [sp-0x428], Other Possible Types: unsigned long, unsigned long long
    int v30;  // [sp-0x420]
    int v31;  // [sp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v32;  // [sp-0x2f0], Other Possible Types: unsigned long long
    unsigned long v33;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v34;  // [bp-0x2e0], Other Possible Types: struct_1 *
    char v35;  // [bp-0x2d8]
    unsigned long long v36;  // [sp-0x2d0]
    char v37;  // [bp-0x2c8]
    char v38;  // [sp-0x2c7]
    char v39;  // [sp-0x2c6]
    char v40;  // [sp-0x2c5]
    char v41;  // [sp-0x2c4]
    char v42;  // [sp-0x2c3]
    char v43;  // [sp-0x2c2]
    char v44;  // [sp-0x2c1]
    char v45;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v46;  // [sp-0x1c8]
    unsigned long long v47;  // [sp-0x1c0]
    unsigned long long v48;  // [sp-0xc8]
    void* v49;  // [sp-0xc0]
    char v50;  // [bp-0x3b]
    char v51;  // [bp-0x39]
    unsigned long long v53;  // rbp
    unsigned long long v54;  // rax
    struct_1 *v55;  // rdx
    unsigned long long v56;  // rcx
    unsigned long long v57;  // rax
    unsigned long v58;  // r14
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    unsigned long v61;  // r14
    unsigned long long v62;  // rbx
    unsigned long long v63;  // r15
    unsigned long long v64;  // r12
    int v65;  // xmm0
    int v66;  // xmm1
    char v68;  // bl
    unsigned long long v71;  // rax
    unsigned long long v72;  // r8
    unsigned long long v73;  // r9
    unsigned int v74;  // eax
    unsigned long long v75;  // rsi
    unsigned long long v76;  // r14
    struct_1 *v77;  // r15
    struct struct_0 **v78;  // rax

    v31 = &g_4ecfc0;
    v32 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2c1fe5af1d6f11;
    v33 = &g_4ecfd0;
    v34 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2c1fe5af1d6f11;
    v23 = &g_4ecfe0;
    v24 = 2;
    v27 = 0;
    v25 = &v31;
    v26 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v19, &v23);
    uu_ln::uu_app::hbb5e4778c8342f01(&v23);
    v53 = *((long long *)&v19);
    if (v53 != 0x8000000000000000)
        *((int128_t *)&v31) = *((int128_t *)&v20);
    if (v29 != 0x8000000000000000)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e33bc23fd1eb8f6();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha7eccbc9d8cb329b(&v29);
    }
    v29 = v53;
    *((int128_t *)&v30) = *((int128_t *)&v31);
    memcpy(&v31, &v23, 712);
    clap_lex::RawArgs::new::h64137e4729e1c8ce(&v1, a0, a1);
    v12 = 0;
    if ((v50 & 8) && (v54 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v1, &v12), v54))
    {
        v57 = std::path::Path::file_stem::h441d431a81936839(v54, v55, v55, v56);
        if (v57 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v23, v57, v55), !v23))
        {
            v58 = v25;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hec8b0d03e12fa345(&v23, v58, 0);
            if (v23)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v24, v24, v58);
            v23 = v24;
            v24 = v25;
            v25 = v58;
            clap_lex::RawArgs::insert::h4bf420c1f29ca41d(&v1, &v12, &v23);
            v48 = 1;
            v49 = 0;
            if (v45 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e33bc23fd1eb8f6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha7eccbc9d8cb329b(&v45);
            }
            v45 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v14, &v31, &v1, v12);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e33bc23fd1eb8f6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha7eccbc9d8cb329b(&v23);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h705bef152ba2a2e9(&v1);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf58b9043356ae937(&v1);
            goto LABEL_43ac76;
            goto LABEL_43ac76;
        }
    }
    if (!(v51 & 2))
    {
        v59 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v1, &v12);
        if (v59)
        {
            v60 = std::path::Path::file_name::h79ecbb7850a9c7f3(v59, v55, v55, v56);
            if (v60)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v23, v60, v55);
                if (!v23 && v45 == 0x8000000000000000)
                {
                    v61 = v25;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hec8b0d03e12fa345(&v23, v61, 0);
                    if (v23)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v46, v24, v61);
                    v45 = v24;
                    v46 = v25;
                    v47 = v61;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v14, &v31, &v1, v12);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h705bef152ba2a2e9(&v1);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf58b9043356ae937(&v1);
LABEL_43ac76:
    ::0x439e00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7d8e470c038a6f1f(&v31);
    if (v4 == 0x8000000000000000)
    {
        v64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v5);
        if (!(!v64))
            goto LABEL_43acb4;
    }
    else
    {
        v8 = *((long long *)&v18);
        *((int128_t *)&v7) = *((int128_t *)&v17);
        *((int128_t *)&v6) = *((int128_t *)&v16);
        v4 = v14;
        v5 = v15;
        v62 = _ZN5uu_ln9ARG_FILES17had9e61f1eb4bfd1eE;
        v63 = g_4ef908;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h338196e7c1d6a86d(&v23, &v4, v62, v63);
        clap_builder::parser::error::MatchesError::unwrap::hfe81ec0f575045ef(&v31, v62, v63, &v23);
        if (!v31)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v65 = *((int128_t *)&v31);
        v66 = *((int128_t *)&v33);
        *((int128_t *)&v28) = *((int128_t *)&v37);
        *((int128_t *)&v27) = *((int128_t *)&v35);
        v25 = v66;
        v23 = v65;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9a8d84ffa794b43f(&v9, &v23);
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "forceinteractivelogicalno-target-directoryno-dereferenceverboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 5))
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "interactivelogicalno-target-directoryno-dereferenceverboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 11);
        uucore::features::backup_control::determine_backup_mode::he1cd810c8ed419e9(&v31, &v4);
        v64 = v31;
        if (v64)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbe04717e40799b7f(&v9);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf58b9043356ae937(&v9);
            v32 = v32;
        }
        else
        {
            v68 = (char)v32;
            uucore::features::backup_control::determine_backup_suffix::h5326e27ab6568374(&v12, &v4);
            v3 = *((long long *)&v13);
            *((int128_t *)&v1) = *((int128_t *)&v12);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca0186a1a2b0be08(&v31, &v4, "target-directory", 16);
            v71 = clap_builder::parser::error::MatchesError::unwrap::h3081945820e64bfc("target-directory", 16, &v31);
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "logicalno-target-directoryno-dereferenceverboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 7);
            if (!v71)
            {
                v14 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v31, v71);
                v16 = v33;
                *((int128_t *)&v14) = *((int128_t *)&v31);
            }
            v43 = 2;
            v44 = v68;
            *((int128_t *)&v31) = (int128_t)v1;
            v33 = v3;
            v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "symbolicDeadlock", 8);
            v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "relativeextern \"", 8);
            v39 = v0;
            *((int128_t *)&v34) = *((int128_t *)&v14);
            v36 = v16;
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "no-target-directoryno-dereferenceverboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 19);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "no-dereferenceverboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 14);
            v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "verboseMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 7);
            v64 = uu_ln::exec::hf66d6e8f6ce8500e(*((long long *)&v10), *((long long *)&v11), &v31, v16, v72, v73);
            core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::h93e389785a856055(&v31);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbe04717e40799b7f(&v9);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf58b9043356ae937(&v9);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6696b632409606f4(&v4);
        if (v64)
        {
LABEL_43acb4:
            v1 = v64;
            v2 = v32;
            v31 = &v1;
            v32 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf448e82f7e9a3ba0;
            v23 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v24 = 1;
            v27 = 0;
            v25 = &v31;
            v26 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v23);
            *((int128_t *)&v31) = *((int128_t *)&v21);
            v33 = *((long long *)&v22);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0879bae0a4c64cca(v32, *((long long *)&v22), 1, 0))
            {
                v14 = uucore::util_name::h359eff083fe53467();
                v15 = v55;
                v4 = &v14;
                v5 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2c1fe5af1d6f11;
                v23 = &g_4ecf60;
                v24 = 2;
                v27 = 0;
                v25 = &v4;
                v26 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v75, v55);
                v14 = &v31;
                v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v23 = &g_4ecf80;
                v24 = 2;
                v27 = 0;
                v25 = &v14;
                v26 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v75, v55);
            }
            if ((char)v2->field_68(v1))
            {
                v14 = uucore::execution_phrase::hded5ccd87df1fcab();
                v15 = v55;
                v4 = &v14;
                v5 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1c2c1fe5af1d6f11;
                v23 = &g_4ecfa0;
                v24 = 2;
                v27 = 0;
                v25 = &v4;
                v26 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v75, v55);
            }
            v74 = v2->field_60(v1);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e33bc23fd1eb8f6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha7eccbc9d8cb329b(&v31);
            v76 = v1;
            v77 = v2;
            if (v77->field_0)
                v78(v76);
            if (v77->field_8)
            {
                __rust_dealloc(v76);
                return v74;
            }
            return v74;
        }
    }
    v74 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v74;
}
