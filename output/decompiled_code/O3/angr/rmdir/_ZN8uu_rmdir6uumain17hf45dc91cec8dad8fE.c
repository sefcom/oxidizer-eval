long long uu_rmdir::uumain::hf45dc91cec8dad8f(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x411]
    unsigned long v1;  // [sp-0x410], Other Possible Types: unsigned long long
    struct_1 *v2;  // [sp-0x408], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x400]
    unsigned long long v4;  // [sp-0x3f8]
    unsigned long v5;  // [sp-0x3f0], Other Possible Types: unsigned long long
    int v6;  // [bp-0x3e8], Other Possible Types: char, unsigned long, unsigned long long
    char v7;  // [bp-0x3e7]
    unsigned long v8;  // [sp-0x3e0], Other Possible Types: unsigned long long
    char v9;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x3d0]
    void* v11;  // [bp-0x3c8], Other Possible Types: char
    char v12;  // [bp-0x3b8]
    int v13;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3a0]
    int v15;  // [bp-0x398], Other Possible Types: unsigned long long
    char v16;  // [sp-0x390]
    unsigned long long v17;  // [sp-0x388]
    unsigned long v18;  // [sp-0x378], Other Possible Types: unsigned long long
    struct_1 *v19;  // [sp-0x370], Other Possible Types: unsigned long long
    int v20;  // [sp-0x368]
    int v21;  // [sp-0x358]
    unsigned long long v22;  // [sp-0x348]
    unsigned long v23;  // [sp-0x340], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x338]
    char v25;  // [bp-0x328]
    char v26;  // [bp-0x320]
    char v27;  // [bp-0x318]
    char v28;  // [bp-0x310]
    char v29;  // [bp-0x300]
    char v30;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v31;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v32;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0x2e0]
    void* v34;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x2d0], Other Possible Types: unsigned long
    unsigned long long v36;  // [sp-0x2c8]
    unsigned long v37;  // [sp-0x2c0], Other Possible Types: unsigned long long
    char v38;  // [bp-0x2b8]
    unsigned long long v40;  // rax
    unsigned int v41;  // eax
    struct_1 *v42;  // rdx
    unsigned int v43;  // eax
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx
    int v48;  // xmm0
    unsigned long long v50;  // rdi
    unsigned long long v53[3];  // rax
    unsigned long long v55;  // r15
    unsigned long long v56;  // r13
    unsigned long long v57;  // rax
    unsigned long long v59;  // rbx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rsi
    unsigned int v63;  // eax
    unsigned long long v64;  // r14
    struct_1 *v65;  // r15
    struct struct_0 **v66;  // rax

    uu_rmdir::uu_app::h3195175fc900423d(&v30);
    clap_builder::builder::command::Command::try_get_matches_from::hc1bc456283cfe159(&v6, &v30, a0, a1);
    if (v18 != 0x8000000000000000)
    {
        v22 = *((long long *)&v12);
        *((int128_t *)&v21) = *((int128_t *)&v11);
        *((int128_t *)&v20) = *((int128_t *)&v9);
        v18 = v6;
        v19 = v8;
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v18, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17h96c438a06d3c1bbcE, g_4dc040);
        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v18, _ZN8uu_rmdir11OPT_PARENTS17h6ef168c525e099aaE, g_4dc050);
        v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v18, _ZN8uu_rmdir11OPT_VERBOSE17h6a5c4637515d4f45E, g_4dc060);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h378890b4fdff7bd1(&v30, &v18, v23, v24);
        v23 = _ZN8uu_rmdir8ARG_DIRS17hab2b224eb67d7a4fE;
        v24 = g_4dc070;
        if (v30)
        {
            v17 = v35;
            v48 = *((int128_t *)&v31);
            *((int128_t *)&v15) = *((int128_t *)&v33);
            v13 = v48;
            v1 = &v23;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c1237663afc6dac;
            v3 = &v13;
            v4 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v6 = &g_4d97e8;
            v8 = 2;
            v11 = 0;
            v9 = &v1;
            v10 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v6); /* do not return */
        }
        v47 = v31;
        if (!v47)
        {
            v47 = core::ops::function::FnOnce::call_once::hc56171f3687ccfdc;
            v50 = 0;
        }
        else
        {
            v50 = *((long long *)&v38);
        }
        v30 = v47;
        v31 = "&";
        *((int128_t *)&v32) = *((int128_t *)&v33);
        v34 = v35;
        v35 = 0;
        v36 = v37;
        v37 = v50;
        while (true)
        {
            v53 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7015255293829697(&v30);
            if (!v53)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6fbb71229f2e4e26(&v18);
                break;
            }
            uu_rmdir::remove::h6b95edc6976a278a(&v25, v53[1], v53[2], v43 * 0x10000 | v41 * 0x100 | v0);
            if (!v5)
                continue;
            v55 = *((long long *)&v26);
            v56 = *((long long *)&v27);
            v5 = *((long long *)&v25);
            if (!(v0) || !((char)uu_rmdir::dir_not_empty::hbb6b9d947babe494(&v5, v55, v56)))
            {
                uucore::mods::error::set_exit_code::h0565497d88d725e1();
                v57 = v5;
                if (!(((unsigned int)v57 & 3) >= 2) || !(((unsigned int)v57 & 3) == 2) || !((unsigned int)(v57 >> 32) == 20) || !((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h24f745637bfdb278(v55, v56, "//home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/rmdir/src/rmdir.rsfailed to remove : Symbolic link not followed\ncapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsError flushing stdout: \n", 1)))
                {
LABEL_435a60:
                    v13 = uucore::util_name::h359eff083fe53467();
                    v14 = v61;
                    v1 = &v13;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c1237663afc6dac;
                    v6 = &g_4d9850;
                    v8 = 2;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v62, v61);
                    v13 = 1;
                    v14 = v55;
                    v15 = v56;
                    v16 = 1;
                    uucore::mods::error::strip_errno::h89e531afd08cac23(&v23, &v5);
                    v1 = &v13;
                    v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v3 = &v23;
                    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v6 = &g_4d98c8;
                    v8 = 3;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v62, v61);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb14f602d795ed29c();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc786e8f1145ad695(&v23);
                    ::0x434c50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2db4db20f1a35654(v5);
                    continue;
                }
                else
                {
                    v59 = v56;
                    v60 = v59 - 1;
                    if (v59 < 1)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v55, v60))
                        goto LABEL_435a60;
                    uu_rmdir::uumain::uumain::points_to_directory::h438fd58e11d4626c(&v6, v55, v60);
                    if (v6)
                    {
                        ::0x434c50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2db4db20f1a35654(v8);
                        goto LABEL_43597b;
                    }
                    if (!v7)
                        goto LABEL_435a60;
LABEL_43597b:
                    v13 = uucore::util_name::h359eff083fe53467();
                    v14 = v61;
                    v1 = &v13;
                    v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c1237663afc6dac;
                    v6 = &g_4d9850;
                    v8 = 2;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v62, v61);
                    v13 = 1;
                    v14 = v55;
                    v15 = v56;
                    v16 = 1;
                    v1 = &v13;
                    v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v6 = &g_4d98f8;
                    v8 = 2;
                    v11 = 0;
                    v9 = &v1;
                    v10 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v62, v61);
                }
            }
            ::0x434c50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2db4db20f1a35654(v5);
        }
    }
    else
    {
        v40 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v19);
        if (v40)
        {
            v1 = v40;
            v2 = v42;
            v6 = &v1;
            v8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h49b94fc5b3e6b085;
            v30 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v31 = 1;
            v34 = 0;
            v32 = &v6;
            v33 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v28, &v30);
            *((int128_t *)&v6) = *((int128_t *)&v28);
            v9 = *((long long *)&v29);
            if (v9)
            {
                v18 = uucore::util_name::h359eff083fe53467();
                v19 = v42;
                v13 = &v18;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c1237663afc6dac;
                v30 = &g_4d9850;
                v31 = 2;
                v34 = 0;
                v32 = &v13;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v46, v42);
                v18 = &v6;
                v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v30 = &g_4d9870;
                v31 = 2;
                v34 = 0;
                v32 = &v18;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v46, v42);
            }
            if ((char)v2->field_68(v1))
            {
                v18 = uucore::execution_phrase::hded5ccd87df1fcab();
                v19 = v42;
                v13 = &v18;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c1237663afc6dac;
                v30 = &g_4d9890;
                v31 = 2;
                v34 = 0;
                v32 = &v13;
                v33 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v30, v46, v42);
            }
            v63 = v2->field_60(v1);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb14f602d795ed29c();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc786e8f1145ad695(&v6);
            v64 = v1;
            v65 = v2;
            if (v65->field_0)
                v66(v64);
            if (v65->field_8)
            {
                __rust_dealloc(v64);
                return v63;
            }
            return v63;
        }
    }
    v63 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v63;
}
