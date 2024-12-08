long long uu_shuf::uumain::uumain::h6fb17f869e3b58af(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x4d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x4d0], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x4c8]
    int v3;  // [bp-0x4b8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x4b0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x4a8], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x498]
    char v7;  // [bp-0x488]
    char v8;  // [bp-0x480]
    int v9;  // [bp-0x478], Other Possible Types: unsigned int
    unsigned long long v10;  // [sp-0x468]
    unsigned long long v11;  // [sp-0x458]
    int v12;  // [sp-0x450]
    unsigned long long v13;  // [sp-0x440]
    int v14;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x430]
    int v16;  // [bp-0x428], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [sp-0x420], Other Possible Types: void*
    int v18;  // [bp-0x418]
    void* v19;  // [sp-0x410], Other Possible Types: unsigned long long
    int v20;  // [bp-0x408], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x400], Other Possible Types: char
    char v22;  // [sp-0x3ff]
    unsigned long long v23;  // [sp-0x3f0]
    unsigned long v24;  // [sp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x3e0]
    int v26;  // [sp-0x3d8]
    int v27;  // [sp-0x3c8]
    unsigned long long v28;  // [sp-0x3b8]
    char v29;  // [bp-0x3b0]
    char v30;  // [bp-0x3a0]
    unsigned long v31;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x390]
    int v33;  // [sp-0x388]
    int v34;  // [sp-0x378]
    unsigned long long v35;  // [sp-0x368]
    unsigned long long v36;  // [sp-0x360]
    unsigned long v37;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x350]
    int v39;  // [sp-0x348]
    int v40;  // [sp-0x338]
    unsigned long long v41;  // [sp-0x328]
    unsigned long long v42;  // [sp-0x320]
    int v43;  // [bp-0x318], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v44;  // [sp-0x310], Other Possible Types: unsigned long long
    int v45;  // [sp-0x308], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v46;  // [bp-0x300], Other Possible Types: unsigned int
    void* v47;  // [bp-0x2f8], Other Possible Types: int
    int v48;  // [sp-0x2e8]
    char v49;  // [bp-0x48]
    unsigned long long v51;  // rdx
    void* v52;  // rax
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // rax
    unsigned long long v58;  // rdx
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm2
    unsigned long long v63;  // rsi
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v70;  // rdx
    unsigned long long v71;  // r15
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    char v74;  // al
    unsigned long long v75;  // rax
    char v76;  // al
    int v77;  // xmm0
    int v78;  // xmm1
    uint128_t *v80;  // rax
    int v81;  // xmm0
    int v82;  // xmm1
    int v83;  // xmm0
    int v84;  // xmm1

    uu_shuf::uu_app::h4ef06e23a2c65fa3(&v43, a1, v51);
    clap_builder::builder::command::Command::try_get_matches_from::ha4a8acf5397b7e2c(&v3, &v43, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v52 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v25);
        return v52;
    }
    v28 = *((long long *)&v7);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    *((int128_t *)&v26) = *((int128_t *)&v5);
    v24 = v3;
    v25 = v4;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v24, _ZN7uu_shuf7options4ECHO17h69f136e0ae3b69b1E, g_537f18))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h13917c8de7cb7b09(&v43, &v24, _ZN7uu_shuf7options11INPUT_RANGE17h9dbac7f927f5985bE, g_537f28);
        v53 = clap_builder::parser::error::MatchesError::unwrap::hf96029697330dd7a(_ZN7uu_shuf7options11INPUT_RANGE17h9dbac7f927f5985bE, g_537f28, &v43);
        if (!v53)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3101c2bfd7560b8b(&v43, &v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h12534387ccf42877E, g_537f88);
            clap_builder::parser::error::MatchesError::unwrap::hfba7384e0537b2a1(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h12534387ccf42877E, g_537f88, &v43);
            if (!v3)
            {
                v14 = core::ops::function::FnOnce::call_once::hdeb8a34eebac9f39;
                v15 = "&";
                v16 = "&";
                v17 = 0;
                v19 = 0;
                v21 = 0;
            }
            else
            {
                v60 = *((int128_t *)&v3);
                v61 = *((int128_t *)&v5);
                v62 = *((int128_t *)&v6);
                *((int128_t *)&v20) = *((int128_t *)&v7);
                v18 = v62;
                v16 = v61;
                v14 = v60;
            }
            v64 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1f1d44ad77c6a242(&v14, v63, v51);
            if (!v64)
            {
                v0 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v64);
                v2 = v45;
                *((int128_t *)&v0) = (int128_t)v43;
            }
            ::0x46e9c0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h01b575a408898259(&v43, "-unexpected argument '' found", 1);
            v5 = v45;
            *((int128_t *)&v3) = (int128_t)v43;
            if (v0 == 0x8000000000000000)
            {
                v10 = v5;
                *((int128_t *)&v9) = (int128_t)v3;
            }
            else
            {
                v10 = v2;
                *((int128_t *)&v9) = *((int128_t *)&v0);
                ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v3);
            }
            v65 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1f1d44ad77c6a242(&v14, v63, v51);
            if (!v65)
            {
                v13 = v10;
                *((int128_t *)&v12) = (int128_t)v9;
                v11 = 0;
                goto LABEL_46fcdc;
            }
            else
            {
                v0 = v65;
                v3 = &v0;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4c27ac7a15a014e3;
                v43 = &g_534ed0;
                v44 = 2;
                v47 = 0;
                v45 = &v3;
                v46 = 1;
                ::0x46e970::core::option::Option$LT$T$GT$::map_or_else::hdc3c69c6b671d4b4(&v29, &v43);
                v46 = 1;
                *((int128_t *)&v43) = *((int128_t *)&v29);
                v45 = *((long long *)&v30);
                v52 = alloc::boxed::Box$LT$T$GT$::new::h2c9679dbd739258c(&v43);
                ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v9);
            }
        }
        else
        {
            uu_shuf::parse_range::h4c006277fc514f7d(&v3, v53[1], v53[2]);
            if (!v3)
            {
                v13 = *((long long *)&(&v5)[8]);
                *((int128_t *)&v12) = *((int128_t *)&v4);
                v11 = 2;
                goto LABEL_46fcdc;
            }
            else
            {
                v45 = *((long long *)&(&v5)[8]);
                *((int128_t *)&v43) = *((int128_t *)&v4);
                v46 = 1;
                v52 = alloc::boxed::Box$LT$T$GT$::new::h2c9679dbd739258c(&v43);
            }
        }
LABEL_470673:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3fbfa99d47d1c66c(&v24);
        return v52;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3101c2bfd7560b8b(&v43, &v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h12534387ccf42877E, g_537f88);
    clap_builder::parser::error::MatchesError::unwrap::hfba7384e0537b2a1(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h12534387ccf42877E, g_537f88, &v43);
    v54 = v3;
    if (!v54)
    {
        v54 = core::ops::function::FnOnce::call_once::hdeb8a34eebac9f39;
        v58 = 0;
    }
    else
    {
        v58 = *((long long *)&v8);
    }
    v31 = v54;
    v32 = "&";
    *((int128_t *)&v33) = *((int128_t *)&v5);
    *((int128_t *)&v34) = *((int128_t *)&v6);
    v35 = *((long long *)&v7);
    v36 = v58;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h90a3ce719098cb7f(&v43, &v31, v36);
    v13 = v45;
    *((int128_t *)&v12) = *((int128_t *)&v43);
    v11 = 1;
LABEL_46fcdc:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3101c2bfd7560b8b(&v43, &v24, _ZN7uu_shuf7options10HEAD_COUNT17h7ea57c59c73c99dcE, g_537f38);
    clap_builder::parser::error::MatchesError::unwrap::hfba7384e0537b2a1(&v3, _ZN7uu_shuf7options10HEAD_COUNT17h7ea57c59c73c99dcE, g_537f38, &v43);
    v66 = v3;
    if (!v66)
    {
        v66 = core::ops::function::FnOnce::call_once::hdeb8a34eebac9f39;
        v70 = 0;
    }
    else
    {
        v70 = *((long long *)&v8);
    }
    v37 = v66;
    v38 = "&";
    *((int128_t *)&v39) = *((int128_t *)&v5);
    *((int128_t *)&v40) = *((int128_t *)&v6);
    v41 = *((long long *)&v7);
    v42 = v70;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf1801a2505c51449(&v49, &v37, v42);
    uu_shuf::parse_head_count::hf55f4fdb6fa306fb(&v9, &v49);
    if ((long long)v9 != 0x8000000000000000)
    {
        v45 = v10;
        *((int128_t *)&v43) = (int128_t)v9;
        v46 = 1;
        v52 = alloc::boxed::Box$LT$T$GT$::new::h2c9679dbd739258c(&v43);
        goto LABEL_470312;
    }
    v71 = (long long)(&v9)[8];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h13917c8de7cb7b09(&v43, &v24, _ZN7uu_shuf7options6OUTPUT17h2ba83eebcc55f317E, g_537f48);
    v72 = clap_builder::parser::error::MatchesError::unwrap::hf96029697330dd7a(_ZN7uu_shuf7options6OUTPUT17h2ba83eebcc55f317E, g_537f48, &v43);
    if (!v72)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h74cb66a7dab5a500(&v43, v72);
        v2 = v45;
        *((int128_t *)&v0) = (int128_t)v43;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h13917c8de7cb7b09(&v43, &v24, _ZN7uu_shuf7options13RANDOM_SOURCE17ha4010b5ecbb6d952E, g_537f58);
    v73 = clap_builder::parser::error::MatchesError::unwrap::hf96029697330dd7a(_ZN7uu_shuf7options13RANDOM_SOURCE17ha4010b5ecbb6d952E, g_537f58, &v43);
    if (!v73)
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h74cb66a7dab5a500(&v43, v73);
        v5 = v45;
        *((int128_t *)&v3) = (int128_t)v43;
    }
    v74 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v24, _ZN7uu_shuf7options15ZERO_TERMINATED17h9dec7f38d8410467E, g_537f78) ? 0 : 10);
    v20 = v71;
    *((int128_t *)&v14) = *((int128_t *)&v0);
    v16 = v2;
    *((int128_t *)&v17) = *((int128_t *)&v3);
    v19 = v5;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v24, _ZN7uu_shuf7options6REPEAT17h1b833cce6eda1800E, g_537f68);
    v22 = v74;
    if (v71)
    {
        v75 = v11;
        if (!v75)
        {
            v10 = v13;
            v9 = v12;
            uu_shuf::read_input_file::hf828a7223f4b949e(&v43, (long long)(&v9)[8], v13);
            if (v0 == 0x8000000000000000)
            {
                v23 = _ZN7uu_shuf7options13RANDOM_SOURCE17ha4010b5ecbb6d952E | -0x100 | v0 != 0x8000000000000000;
            }
            else
            {
                v0 = v43;
                v52 = v44;
                v2 = v45;
                v80 = ::0x46eac0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 16);
                if (!v80)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *(v80) = *((int128_t *)&v1);
                alloc::slice::hack::into_vec::hd24968b0237cd6b2(&v3, v80, 1);
                uu_shuf::find_seps::h38b66f9a28898f71(&v3, v22);
                v83 = (int128_t)v14;
                v84 = *((int128_t *)&v16);
                *((int128_t *)&v48) = (int128_t)v20;
                *((int128_t *)&v47) = (int128_t)(&v17)[8];
                v45 = v84;
                v43 = v83;
                v52 = uu_shuf::shuf_exec::h9aea5b49fdd14729(&v3, &v43);
                if (!v52)
                {
                    ::0x46e6c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h145878e7fbe28345(&v3);
                    ::0x46e5b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfccb3efdc57fef47(&v0);
                    ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v9);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3fbfa99d47d1c66c(&v24);
                    return 0;
                }
                ::0x46e6c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h145878e7fbe28345(&v3);
                ::0x46e5b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfccb3efdc57fef47(&v0);
                v23 = v23;
            }
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v9);
            v76 = v23;
LABEL_4705b7:
            if (!v76 && v14 != 0x8000000000000000)
            {
                ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v14);
            }
            else
            {
                if (!(!v76))
                    goto LABEL_47063a;
            }
        }
        else
        {
            if ((unsigned int)v75 == 1)
            {
                v2 = v13;
                v0 = v12;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0a9b60c092728c07(&v3, v1, v1 + v2 * 24);
                uu_shuf::find_seps::h38b66f9a28898f71(&v3, v22);
                v81 = (int128_t)v14;
                v82 = *((int128_t *)&v16);
                *((int128_t *)&v48) = (int128_t)v20;
                *((int128_t *)&v47) = (int128_t)(&v17)[8];
                v45 = v82;
                v43 = v81;
                v52 = uu_shuf::shuf_exec::h9aea5b49fdd14729(&v3, &v43);
                if (!v52)
                {
                    ::0x46e6c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h145878e7fbe28345(&v3);
                    ::0x46e700::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hdd707dbcf17ef6ef(&v0);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3fbfa99d47d1c66c(&v24);
                    return 0;
                }
                ::0x46e6c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h145878e7fbe28345(&v3);
                ::0x46e700::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hdd707dbcf17ef6ef(&v0);
            }
            else
            {
                v5 = v13;
                v3 = v12;
                v77 = (int128_t)v14;
                v78 = *((int128_t *)&v16);
                *((int128_t *)&v48) = (int128_t)v20;
                *((int128_t *)&v47) = (int128_t)(&v17)[8];
                v45 = v78;
                v43 = v77;
                v52 = uu_shuf::shuf_exec::h1e367ef2f6e09b06(&v3, &v43);
                if (!v52)
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3fbfa99d47d1c66c(&v24);
                    return 0;
                }
LABEL_470312:
LABEL_47063a:
            }
            if (v11)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3fbfa99d47d1c66c(&v24);
                return v52;
            }
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v12);
            goto LABEL_470673;
        }
    }
    else if (v14 == 0x8000000000000000)
    {
        v76 = 0;
        v52 = 0;
        goto LABEL_4705b7;
    }
    else
    {
        v45 = v16;
        *((int128_t *)&v43) = (int128_t)v14;
        std::fs::File::create::h83620d9ceb2c6416(&v3, v44, v16);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc5fb889b03842975(&v0, &v3, &v43);
        v52 = v0;
        if (v52)
        {
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v43);
        }
        else
        {
            v9 = v1;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0960211b7dec6bab(&v9);
            ::0x46e590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4fae4ca23457ef20(&v43);
            v52 = 0;
        }
    }
    ::0x46e7d0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h64a126a38aa295f8(&v17);
    goto LABEL_47063a;
}
