long long uu_dir::uumain::h9d4d49dac2cc7dd7(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    int v0;  // [bp-0x968], Other Possible Types: char
    unsigned long long v1;  // [sp-0x958]
    void* v2;  // [sp-0x950]
    int v3;  // [bp-0x948], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x940]
    int v5;  // [sp-0x938]
    int v6;  // [sp-0x928]
    unsigned long long v7;  // [sp-0x918]
    unsigned long v8;  // [sp-0x908], Other Possible Types: unsigned long long
    void* v9;  // [sp-0x900]
    unsigned long long v10;  // [sp-0x8f8]
    void* v11;  // [sp-0x8f0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x8e8]
    unsigned long v13;  // [sp-0x8e0], Other Possible Types: unsigned long long
    char v14;  // [bp-0x8d0]
    char v15;  // [bp-0x8c0]
    char v16;  // [bp-0x8b0]
    char v17;  // [bp-0x8a0]
    int v18;  // [bp-0x898], Other Possible Types: char, unsigned long, unsigned long long
    void* v19;  // [sp-0x890], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v20;  // [sp-0x888], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long long v21;  // [sp-0x880]
    int v22;  // [sp-0x878], Other Possible Types: void*, unsigned long long
    int v23;  // [bp-0x870]
    int v24;  // [bp-0x868]
    unsigned long long v25;  // [sp-0x860]
    int v26;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v27;  // [sp-0x5c0]
    struct_1 *v28;  // [bp-0x5b8], Other Possible Types: char, unsigned long long
    char v29;  // [bp-0x5a8]
    char v30;  // [sp-0x4d3]
    char v31;  // [sp-0x4d1]
    char v32;  // [sp-0x4d0]
    char v33;  // [bp-0x2f8], Other Possible Types: unsigned long long
    struct_1 *v34;  // [sp-0x2f0], Other Possible Types: unsigned long long
    char v35;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v36;  // [sp-0x1c8]
    unsigned long long v37;  // [sp-0x1c0]
    unsigned long long v38;  // [sp-0xc8]
    void* v39;  // [sp-0xc0]
    char v40;  // [bp-0x3b]
    char v41;  // [bp-0x39]
    unsigned long long v43;  // rax
    struct_1 *v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rax
    unsigned long v47;  // r14
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    int v50;  // xmm1
    unsigned long v51;  // r14
    char v52;  // bpl
    char v54;  // r12b
    unsigned long long v56;  // r14
    unsigned long long v57;  // r13
    struct_1 *v58;  // rbx
    struct_1 *v59;  // rbx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r12
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    unsigned long long v65[2];  // rax
    unsigned int v66;  // eax
    unsigned long long v67;  // rsi
    unsigned long long v68;  // r14
    struct_1 *v69;  // r15
    struct struct_0 **v70;  // rax

    uu_dir::uu_app::ha4a87926ad30d31d(&v33);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h661c5eed13f16f5f(&v0, a0, a1);
    v2 = 0;
    if ((v40 & 8) && (v43 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v2), v43))
    {
        v46 = std::path::Path::file_stem::h441d431a81936839(v43, v44, v44, v45);
        if (v46 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v18, v46, v44), !v18))
        {
            v47 = v20;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3a109e3ef7990350(&v18, v47, 0);
            if (v18)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            memcpy(v9, v19, v47);
            v8 = v19;
            v9 = v20;
            v10 = v47;
            v11 = 0;
            v12 = 1;
            v13 = &v8;
            alloc::vec::Vec$LT$T$C$A$GT$::drain::hecec3d5307a31613(&v26, &v0, v2, v2);
            v25 = v13;
            *((int128_t *)&v23) = *((int128_t *)&v11);
            v50 = *((int128_t *)&v28);
            *((int128_t *)&v18) = *((int128_t *)&v26);
            v20 = v50;
            v22 = *((long long *)&v29);
            _$LT$alloc..vec..splice..Splice$LT$I$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc2c74851e09cfc51(&v18);
            _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1c47ef2091ae7e7(&v18);
            _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc759ae2a0797862a();
            v38 = 1;
            v39 = 0;
            if (v35 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e8b9f052f01fc50();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he4b6dfd9d2cd5fa3(&v35);
            }
            v35 = 0x8000000000000000;
            clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v11, &v33, &v0, v2);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e8b9f052f01fc50();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he4b6dfd9d2cd5fa3(&v8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb1f398e56639e963(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hef6202aaa5818629(&v0);
            goto LABEL_463197;
            goto LABEL_463197;
        }
    }
    if (!(v41 & 2))
    {
        v48 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v0, &v2);
        if (v48)
        {
            v49 = std::path::Path::file_name::h79ecbb7850a9c7f3(v48, v44, v44, v45);
            if (v49)
            {
                std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v18, v49, v44);
                if (!v18 && v35 == 0x8000000000000000)
                {
                    v51 = v20;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3a109e3ef7990350(&v18, v51, 0);
                    if (v18)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    memcpy(v36, v19, v51);
                    v35 = v19;
                    v36 = v20;
                    v37 = v51;
                }
            }
        }
    }
    clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v11, &v33, &v0, v2);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb1f398e56639e963(&v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hef6202aaa5818629(&v0);
LABEL_463197:
    memcpy(&v26, &v33, 712);
    if (v11 == 0x8000000000000000)
    {
        memcpy(&v18, &v33, 712);
        v8 = v12;
        ::0x462470::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h69ce605cabc30086(&v18);
        clap_builder::error::Error$LT$F$GT$::exit::ha2e0e2db80cdf754(&v8); /* do not return */
    }
    v7 = *((long long *)&v15);
    *((int128_t *)&v6) = *((int128_t *)&v14);
    *((int128_t *)&v5) = *((int128_t *)&v13);
    *((int128_t *)&v3) = *((int128_t *)&v11);
    ::0x462470::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h69ce605cabc30086(&v26);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v3, _ZN5uu_ls7options13QUOTING_STYLE17h4dd7267fdfe9fc4aE, g_5a9b90) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options7quoting1C17h8364e35d3f16e66fE, g_5a9b00) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options7quoting6ESCAPE17hd87c2c39169583c0E, g_5a9af0))
        v52 = 0;
    else
        v52 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options7quoting7LITERAL17he2ed0d4467046f88E, g_5a9ae0) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options7quoting7LITERAL17he2ed0d4467046f88E, g_5a9ae0) ^ 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v3, _ZN5uu_ls7options6FORMAT17h1dd93a834b8030aeE, g_5a9b80) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format6ACROSS17h3272307c0cd98a1dE, g_5a9f50) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format7COLUMNS17h44ccbe92c323c6bdE, g_5a9f40) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format6COMMAS17h435d22344e88c4adE, g_5a9f60) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format4LONG17hb43b471ce27d441cE, g_5a9f30) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format13LONG_NO_GROUP17h7bd84d7101d7f175E, g_5a9f80) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format13LONG_NO_OWNER17h6fdd43966687ab80E, g_5a9f70) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h6e05dc237b8187e3E, g_5a9f90))
        v54 = 0;
    else
        v54 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format8ONE_LINE17h16f376ade0dc9edcE, g_5a9f20) | -0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, _ZN5uu_ls7options6format8ONE_LINE17h16f376ade0dc9edcE, g_5a9f20) ^ 1;
    uu_ls::Config::from::h8d88dc527e48ba72(&v18, &v3);
    v56 = v18;
    v57 = v19;
    v58 = v20;
    if (v56 != 0x8000000000000000)
    {
        memcpy(&v28, &v20, 232);
        v26 = v56;
        v27 = v57;
        v28 = v58;
        if (v52)
        {
            v30 = 0;
            v31 = 2;
        }
        if (v54)
            v32 = 0;
        v60 = _ZN5uu_ls7options5PATHS17hbfa8adabb9f8a098E;
        v61 = g_5a9ba0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6c553bb23b3d0722(&v18, &v3, v60, v61);
        clap_builder::parser::error::MatchesError::unwrap::h0393427c55050685(&v11, v60, v61, &v18);
        if (v11)
        {
            v62 = *((int128_t *)&v11);
            v63 = *((int128_t *)&v13);
            v64 = *((int128_t *)&v14);
            *((int128_t *)&v24) = *((int128_t *)&v15);
            v22 = v64;
            v20 = v63;
            v18 = v62;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha8749396563fd6bc(&v8, &v18, v44);
            *((int128_t *)&v0) = *((int128_t *)&v8);
            v1 = v10;
        }
        else
        {
            v65 = __rust_alloc(16, 8);
            if (!v65)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v65[0] = ".Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rsError flushing stdout: \n";
            v65[1] = 1;
            alloc::slice::hack::into_vec::hc94c90ada33144f8(&v0, v65, 1);
        }
        v20 = v1;
        v18 = v0;
        v57 = uu_ls::list::ha4f54c9d24f4c406(&v18, &v26);
        core::ptr::drop_in_place$LT$uu_ls..Config$GT$::hfeca24d8d6231689(&v26);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1583dd69ce72e2a3(&v3);
    if (!v57)
    {
        v66 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v66;
    }
    v3 = v57;
    v4 = v59;
    v26 = &v3;
    v27 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he0fcd21c608edd86;
    v18 = &anon.7e3f4860a2e911a59611bbf231719495.13.llvm.4199784323301509206;
    v19 = 1;
    v22 = 0;
    v20 = &v26;
    v21 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v16, &v18);
    *((int128_t *)&v26) = *((int128_t *)&v16);
    v28 = *((long long *)&v17);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd717056e7e02cea2(v27, *((long long *)&v17), 1, 0))
    {
        v33 = uucore::util_name::h359eff083fe53467();
        v34 = v44;
        v11 = &v33;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0d58b3dc62ab6e21;
        v18 = &g_5a5c48;
        v19 = 2;
        v22 = 0;
        v20 = &v11;
        v21 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v67, v44);
        v33 = &v26;
        v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v18 = &g_5a5c68;
        v19 = 2;
        v22 = 0;
        v20 = &v33;
        v21 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v67, v44);
    }
    if ((char)v4->field_68(v3))
    {
        v33 = uucore::execution_phrase::hded5ccd87df1fcab();
        v34 = v44;
        v11 = &v33;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0d58b3dc62ab6e21;
        v18 = &g_5a5c88;
        v19 = 2;
        v22 = 0;
        v20 = &v11;
        v21 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v67, v44);
    }
    v66 = v4->field_60(v3);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e8b9f052f01fc50();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he4b6dfd9d2cd5fa3(&v26);
    v68 = v3;
    v69 = v4;
    if (v69->field_0)
        v70(v68);
    if (v69->field_8)
    {
        __rust_dealloc(v68);
        return v66;
    }
    return v66;
}
