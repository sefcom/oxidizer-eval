long long uu_env::uumain::h0e322e28c3116691(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x4ab], Other Possible Types: unsigned short
    char v1;  // [sp-0x4a9]
    unsigned long v2;  // [sp-0x4a8], Other Possible Types: unsigned long long
    struct_2 *v3;  // [sp-0x4a0], Other Possible Types: struct_1 *, void*, unsigned long long
    struct struct_3 **v4;  // [sp-0x498], Other Possible Types: unsigned long long
    int v5;  // [sp-0x490], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x488]
    int v7;  // [sp-0x480]
    char v8;  // [bp-0x470], Other Possible Types: unsigned long long
    struct_1 *v9;  // [sp-0x468]
    char v10;  // [bp-0x460]
    int v11;  // [sp-0x458], Other Possible Types: struct struct_2 **, void*
    unsigned long long v12;  // [sp-0x450]
    unsigned long long v13;  // [sp-0x448]
    int v14;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x430]
    int v16;  // [bp-0x428], Other Possible Types: struct_1 *
    unsigned long v17;  // [sp-0x418], Other Possible Types: unsigned long long
    struct_1 *v18;  // [sp-0x410], Other Possible Types: unsigned long long
    struct_2 *v19;  // [sp-0x408]
    unsigned long v20;  // [sp-0x400], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x3f8]
    char v22;  // [bp-0x3f0]
    char v23;  // [bp-0x3e8]
    char v24;  // [bp-0x3e0]
    int v25;  // [bp-0x3d8], Other Possible Types: char, unsigned long, unsigned long long
    struct_2 *v26;  // [sp-0x3d0], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v27;  // [sp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    char v28;  // [bp-0x3c0]
    char v29;  // [bp-0x3b0]
    char v30;  // [bp-0x380]
    char v31;  // [bp-0x33f]
    unsigned long v32;  // [sp-0x338], Other Possible Types: unsigned long long
    struct_1 *v33;  // [sp-0x330]
    unsigned long long v34;  // [sp-0x328]
    unsigned long long v35;  // [sp-0x320]
    struct_1 *v36;  // [sp-0x318]
    char v37;  // [bp-0x310]
    char v38;  // [bp-0x300]
    char v39;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v40;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct_1 *v41;  // [sp-0x2e8], Other Possible Types: unsigned long long
    char v42;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v43;  // [sp-0x2d8]
    char v44;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v45;  // [sp-0x1c8]
    unsigned long long v46;  // [sp-0x1c0]
    unsigned long long v47;  // [sp-0xc8]
    void* v48;  // [sp-0xc0]
    char v49;  // [bp-0x3b]
    char v50;  // [bp-0x39]
    unsigned long long v52;  // r14
    struct_1 *v53;  // r15
    struct_1 *v54;  // r15
    unsigned long long v55;  // rax
    struct_1 *v56;  // rdx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rax
    unsigned long v59;  // r15
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned long v62;  // r15
    unsigned long long v63;  // rax
    struct_2 *v64;  // rdi
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rsi
    unsigned long long v68;  // r12
    unsigned int v69;  // eax
    unsigned long long v70;  // r14
    struct_1 *v71;  // r15
    struct struct_0 **v72;  // rax

    v0 = 0;
    v1 = 2;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h04ab35ac01260286(&v22, a0, a1);
    uu_env::EnvAppData::process_all_string_arguments::hc7a625da8685ef99(&v25, &v0, &v22);
    v52 = v26;
    v53 = v27;
    if (v34 != 0x8000000000000000)
    {
        v34 = v25;
        v35 = v52;
        v36 = v53;
        uu_env::uu_app::h30a4269aa519db3d(&v39);
        v2 = v52;
        v4 = v34;
        v3 = v52;
        v5 = v52 + v53 * 24;
        clap_lex::RawArgs::new::h78506e9acda2015b(&v8, &v2);
        v11 = 0;
        if ((v49 & 8) && (v55 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v8, &v11), v55))
        {
            v58 = std::path::Path::file_stem::h441d431a81936839(v55, v56, v56, v57);
            if (v58 && (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, v58, v56), !v2))
            {
                v59 = v4;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb434bb6b2eee5fdc(&v2, v59, 0);
                if (v2)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                memcpy(v3, v3, v59);
                v2 = v3;
                v3 = v4;
                v4 = v59;
                clap_lex::RawArgs::insert::h10b6b4e8ba8c468d(&v8, &v11, &v2);
                v47 = 1;
                v48 = 0;
                if (v44 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb902e74d73e0abb6();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd3670a72b21f06a3(&v44);
                }
                v44 = 0x8000000000000000;
                clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v25, &v39, &v8, v11);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb902e74d73e0abb6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd3670a72b21f06a3(&v2);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h924c3b001c34a3ea(&v8);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb94956a4a7ef6f98(&v8);
                goto LABEL_44681d;
                goto LABEL_44681d;
            }
        }
        if (!(v50 & 2))
        {
            v60 = clap_lex::RawArgs::next_os::h05549a84abb22cf7(&v8, &v11);
            if (v60)
            {
                v61 = std::path::Path::file_name::h79ecbb7850a9c7f3(v60, v56, v56, v57);
                if (v61)
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, v61, v56);
                    if (!v2 && v44 == 0x8000000000000000)
                    {
                        v62 = v4;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb434bb6b2eee5fdc(&v2, v62, 0);
                        if (v2)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        memcpy(v45, v3, v62);
                        v44 = v3;
                        v45 = v4;
                        v46 = v62;
                    }
                }
            }
        }
        clap_builder::builder::command::Command::_do_parse::h52b0083634a57355(&v25, &v39, &v8, v11);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h924c3b001c34a3ea(&v8);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb94956a4a7ef6f98(&v8);
LABEL_44681d:
        ::0x445a40::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hed499483ffcff92d(&v39);
        v63 = v25;
        v64 = v26;
        if (v63 == 0x8000000000000000)
        {
            v19 = v64;
            if ((v64->field_d5 | 2) == 14)
            {
                v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v64);
            }
            else
            {
                v11 = &v19;
                v12 = _$LT$clap_builder..error..Error$LT$F$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h085a23cbf5712a0a;
                v2 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v3 = 1;
                v6 = 0;
                v4 = &v11;
                v5 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v2);
                *((int128_t *)&v11) = *((int128_t *)&v8);
                v13 = *((long long *)&v10);
                if (v13)
                {
                    v32 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hcb35c4fa472df91d(v12, v13);
                    v33 = v56;
                    v17 = uucore::util_name::h359eff083fe53467();
                    v18 = v56;
                    v20 = &v17;
                    v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                    v2 = &g_5096d0;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v20;
                    v5 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v66, v56);
                    v17 = &v32;
                    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                    v2 = &g_5096f0;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v17;
                    v5 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v66, v56);
                }
                v17 = uucore::util_name::h359eff083fe53467();
                v18 = v56;
                v20 = &v17;
                v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                v2 = &g_5096d0;
                v3 = 2;
                v6 = 0;
                v4 = &v20;
                v5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v66, v56);
                v17 = &g_509710;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                v2 = &g_5096f0;
                v3 = 2;
                v6 = 0;
                v4 = &v17;
                v5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v66, v56);
                v52 = uucore::mods::error::ExitCode::new::h68dc9e47a85ff670(125);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb902e74d73e0abb6();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd3670a72b21f06a3(&v11);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd1417a040f4e6432(v19);
            }
        }
        else
        {
            *((int128_t *)&v14) = *((int128_t *)&v28);
            *((int128_t *)&v16) = *((int128_t *)&v29);
            v65 = *((long long *)&v22);
            v52 = *((long long *)&v23);
            v54 = *((long long *)&v24);
            if (v14 != 0x8000000000000000)
            {
                *((int128_t *)&v7) = (int128_t)v16;
                *((int128_t *)&v5) = (int128_t)v14;
                v14 = v65;
                v15 = v52;
                v16 = v54;
                v2 = v63;
                v3 = v64;
                v4 = v27;
                if (!(char)v0)
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_count::ha6159ea0fa0521f3(&v2, "debugTry ' --help' for more information.\nError flushing stdout: \n", 5);
                v0 = 1;
                *((int *)&v1) = (v1 != 2 ? (char)((-0x100 | 2 <= (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_count::ha6159ea0fa0521f3(&v2, "debugTry ' --help' for more information.\nError flushing stdout: \n", 5)) & 4294967295 & 4294967295) : v1);
                if (v1)
                {
                    uu_env::debug_print_args::h58ab4100689a8d63(v15, v16, v56);
                    v1 = 0;
                }
                uu_env::make_options::he7cf81f1a116471e(&v39, &v2);
                v68 = v39;
                v52 = v40;
                v54 = v41;
                if (v68 != 0x8000000000000000)
                {
                    memcpy(&v28, &v42, 136);
                    v25 = v68;
                    v26 = v52;
                    v27 = v54;
                    v52 = uu_env::apply_change_directory::h1efa3cae5e6ac44b(&v25);
                    if (!v52)
                    {
                        uu_env::apply_removal_of_all_env_vars::hb97e13f27c1a95a6(&v25);
                        v52 = uu_env::load_config_file::h94b26c49cbab42dc(&v25);
                        if (!v52)
                        {
                            v52 = uu_env::apply_unset_env_vars::ha506e2177f4f4ef5(&v25);
                            if (!v52)
                            {
                                uu_env::apply_specified_env_vars::h6c78a4a1daaeaedd(&v25, v66, v56);
                                v52 = uu_env::apply_ignore_signal::h8b03a88329431929(&v25, v66, v56);
                                if (!v52)
                                {
                                    if (*((long long *)&v30))
                                    {
                                        v52 = uu_env::EnvAppData::run_program::h409ce03769123afc(&v0, &v25);
                                    }
                                    else
                                    {
                                        uu_env::print_env::h6c9d86176dbb52b2(v31, v66, v56);
                                        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h999a7decf5820531(&v25);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a8b82c2f7cc5bf3(&v2);
                                        core::ptr::drop_in_place$LT$clap_lex..RawArgs$GT$::h48e73ce7a5ec0e90(&v14);
                                        v69 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                                        return v69;
                                    }
                                }
                            }
                        }
                    }
                    core::ptr::drop_in_place$LT$uu_env..Options$GT$::h999a7decf5820531(&v25);
                }
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a8b82c2f7cc5bf3(&v2);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h924c3b001c34a3ea(&v14);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb94956a4a7ef6f98(&v14);
                if (!v52)
                {
                    vvar_1043{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
                    return v69;
                }
            }
LABEL_446d25:
            v8 = v52;
            v9 = v54;
            v25 = &v8;
            v26 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6776836689f73661;
            v39 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v40 = 1;
            v43 = 0;
            v41 = &v25;
            v42 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v37, &v39);
            *((int128_t *)&v25) = *((int128_t *)&v37);
            v27 = *((long long *)&v38);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h499e6543233a946f(v26, *((long long *)&v38), 1, 0))
            {
                v2 = uucore::util_name::h359eff083fe53467();
                v3 = v56;
                v14 = &v2;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                v39 = &g_5096d0;
                v40 = 2;
                v43 = 0;
                v41 = &v14;
                v42 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v39, v66, v56);
                v2 = &v25;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v39 = &g_5096f0;
                v40 = 2;
                v43 = 0;
                v41 = &v2;
                v42 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v39, v66, v56);
            }
            if ((char)v9->field_68(v8))
            {
                v2 = uucore::execution_phrase::hded5ccd87df1fcab();
                v3 = v56;
                v14 = &v2;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec63c7ab6bdadfd4;
                v39 = &g_509720;
                v40 = 2;
                v43 = 0;
                v41 = &v14;
                v42 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v39, v66, v56);
            }
            v69 = v9->field_60(v8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb902e74d73e0abb6();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd3670a72b21f06a3(&v25);
            v70 = v8;
            v71 = v9;
            if (v71->field_0)
                v72(v70);
            if (!v71->field_8)
                return v69;
            __rust_dealloc(v70);
        }
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h924c3b001c34a3ea(&v22);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb94956a4a7ef6f98(&v22);
    goto LABEL_446d25;
}
