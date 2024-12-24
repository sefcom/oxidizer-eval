long long uu_mv::uumain::uumain::hbb00fe6a6ac20df1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x479]
    int v1;  // [bp-0x478], Other Possible Types: char, unsigned long, unsigned long long
    int v2;  // [sp-0x470], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_0 **v3;  // [bp-0x468], Other Possible Types: char, unsigned long, unsigned long long
    int v4;  // [bp-0x460], Other Possible Types: unsigned int, unsigned long, unsigned long long
    void* v5;  // [bp-0x458], Other Possible Types: char
    unsigned long long v6;  // [sp-0x450]
    char v7;  // [bp-0x448]
    char v8;  // [sp-0x447]
    char v9;  // [sp-0x446]
    char v10;  // [sp-0x445]
    char v11;  // [sp-0x444]
    char v12;  // [sp-0x443]
    char v13;  // [sp-0x442]
    char v14;  // [sp-0x441]
    int v15;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x418]
    unsigned long v17;  // [sp-0x410], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x408]
    int v19;  // [sp-0x400]
    int v20;  // [sp-0x3f0]
    unsigned long long v21;  // [sp-0x3e0]
    unsigned long long *v22;  // [bp-0x3d8], Other Possible Types: char, unsigned long, unsigned long long
    int v23;  // [sp-0x3d0], Other Possible Types: unsigned long long
    char v24;  // [bp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    char v25;  // [sp-0x3c0]
    char v26;  // [bp-0x3b8]
    char v27;  // [bp-0x3a8]
    char v28;  // [bp-0x3a0]
    int v29;  // [bp-0x398], Other Possible Types: char
    unsigned long v30;  // [sp-0x388], Other Possible Types: unsigned long long
    char v31;  // [bp-0x380]
    char v32;  // [bp-0x378]
    char v33;  // [bp-0x370]
    char v34;  // [bp-0x368]
    char v35;  // [bp-0x358]
    unsigned long v36;  // [sp-0x350], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x348]
    int v38;  // [sp-0x340]
    int v39;  // [sp-0x330]
    unsigned long long v40;  // [sp-0x320]
    unsigned long long v41;  // [sp-0x318]
    char v42;  // [bp-0x310]
    char v43;  // [bp-0x2f8]
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v50;  // rdx
    char v52;  // bl
    char v53;  // bpl
    unsigned long long v54;  // rdx
    unsigned long long v55;  // r13
    unsigned long long v56;  // rax
    unsigned long long v57;  // rdx
    char v58;  // al
    unsigned long long v59;  // r8
    unsigned long long v60;  // r9

    uu_mv::uu_app::h1ecbc8af3b6d204b(&v43, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from_mut::h8daf4dca810e83a5(&v1, &v43, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v18);
    }
    else
    {
        v21 = *((long long *)&v7);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        *((int128_t *)&v19) = *((int128_t *)&v3);
        v17 = v1;
        v18 = v2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha07f69fbbe09aae9(&v1, &v17, _ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8);
        clap_builder::parser::error::MatchesError::unwrap::hf35fa85b2709cdd9(&v22, _ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE, g_586ff8, &v1);
        v46 = v22;
        if (!v46)
        {
            v46 = core::ops::function::FnOnce::call_once::hcf44f074eb92304f;
            v50 = 0;
        }
        else
        {
            v50 = *((long long *)&v28);
        }
        v36 = v46;
        v37 = "&";
        *((int128_t *)&v38) = *((int128_t *)&v24);
        *((int128_t *)&v39) = *((int128_t *)&v26);
        v40 = *((long long *)&v27);
        v41 = v50;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h074f5707953bc6cc(&v31, &v36, v41);
        if (*((long long *)&v33) == 1 && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v17, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8))
        {
            v22 = &_ZN5uu_mv9ARG_FILES17h450455c27cd4d73cE;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he14643c3d503f38c;
            v1 = &g_583e98;
            v2 = 2;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hfdfdb26e65a2c4ae(&v42, &v1);
            v1 = clap_builder::error::Error$LT$F$GT$::format::hb0cd3419b39c05a6(clap_builder::error::Error$LT$F$GT$::raw::hbe7971d7c248596f(6, &v42), &v43, v54);
            clap_builder::error::Error$LT$F$GT$::exit::h85141ddeb7a16998(&v1); /* do not return */
        }
        v52 = uu_mv::determine_overwrite_mode::hd2d9e6705d368351(&v17);
        uucore::features::backup_control::determine_backup_mode::hb90f1c14e295c1e2(&v1, &v17);
        v45 = v1;
        if (v45)
            goto LABEL_492c08;
        v53 = v2;
        v55 = (unsigned int)uucore::features::update_control::determine_update_mode::hf6b96016a56651b5(&v17);
        if (!(v53) || !(!v52) && !(((unsigned int)v55 | 2) == 3))
        {
            uucore::features::backup_control::determine_backup_suffix::heb4df947a6b7e2fc(&v34, &v17);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4c021ff133c85d3c(&v1, &v17, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8);
            v56 = clap_builder::parser::error::MatchesError::unwrap::h3d6a96dd3a0cdf15(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9e68c48e073d8e7cE, g_586fb8, &v1);
            if (!v56)
            {
                v15 = 0x8000000000000000;
                goto LABEL_492d65;
            }
            core::ops::function::FnOnce::call_once::h30c3881c941ff209(&v1, v56, v57);
            v16 = v3;
            *((int128_t *)&v15) = (int128_t)v1;
            if (!((long long)v15 != 0x8000000000000000) || !(!(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v15)[8], v16)))
            {
LABEL_492d65:
                v0 = v55;
                v30 = *((long long *)&v35);
                *((int128_t *)&v29) = *((int128_t *)&v34);
                v24 = v16;
                v22 = (long long)v15;
                v23 = (long long)(&v15)[8];
                v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17h268c1d539ed3f3bdE, g_586fc8);
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv11OPT_VERBOSE17ha990e699302cc524E, g_586fd8))
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv9OPT_DEBUG17h20196c736f62d6a7E, g_587008);
                v12 = v52;
                v13 = v53;
                v1 = v29;
                v3 = v30;
                v14 = v0;
                *((int128_t *)&v4) = *((int128_t *)&v22);
                v6 = v24;
                v7 = v58;
                v8 = 1;
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17hc51bdc493fd46f05E, g_586fa8);
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv12OPT_PROGRESS17h63563f48b7cd0614E, g_586fe8);
                v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN5uu_mv9OPT_DEBUG17h20196c736f62d6a7E, g_587008);
                v45 = uu_mv::mv::h9592070d6961e61d(*((long long *)&v32), *((long long *)&v33), &v1, v24, v59, v60);
                core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h3f53b7f92d507f59(&v1);
                ::0x491cc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h011fbd3c486bf67b(&v31);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h407d671e99887059(&v17);
            }
            else
            {
                v22 = 1;
                *((int128_t *)&v23) = (int128_t)(&v15)[8];
                v25 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hc9dbc48fe0b283ac(&v29, &v22);
                v4 = v30;
                v2 = v29;
                v1 = 8;
                v45 = alloc::boxed::Box$LT$T$GT$::new::h9e8f3c1143e5c779(&v1);
                ::0x491e00::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::hadefa2887031c6df(&v15);
                ::0x491770::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb446a5efbe31ea67(&v34);
                goto LABEL_492c08;
            }
        }
        else
        {
            ::0x4922b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4fc09e69a8ac9658(&v22);
            v3 = v24;
            *((int128_t *)&v1) = *((int128_t *)&v22);
            v4 = 1;
            v45 = alloc::boxed::Box$LT$T$GT$::new::h60e2372588e84b14(&v1);
LABEL_492c08:
            ::0x491cc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h011fbd3c486bf67b(&v31);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h407d671e99887059(&v17);
        }
    }
    ::0x491970::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7cb5a8fa8ef80d93(&v43);
    return v45;
}
