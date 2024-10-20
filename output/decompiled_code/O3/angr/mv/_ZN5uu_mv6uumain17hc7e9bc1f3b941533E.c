long long uu_mv::uumain::hc7e9bc1f3b941533(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x4aa]
    char v1;  // [sp-0x4a9]
    void* v2;  // [bp-0x4a8], Other Possible Types: struct struct_2 **, struct_2 *, int, char, unsigned long, unsigned long long
    struct_5 *v3;  // [sp-0x4a0], Other Possible Types: char, unsigned long, unsigned long long
    void* v4;  // [bp-0x498], Other Possible Types: struct struct_4 **, struct_5 *, char, unsigned long, unsigned long long
    int v5;  // [bp-0x490], Other Possible Types: unsigned int, unsigned long long
    void* v6;  // [bp-0x488], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [sp-0x480]
    unsigned long long v8;  // [bp-0x478], Other Possible Types: char
    char v9;  // [sp-0x477]
    char v10;  // [sp-0x476]
    char v11;  // [sp-0x475]
    char v12;  // [sp-0x474]
    char v13;  // [sp-0x473]
    char v14;  // [sp-0x472]
    char v15;  // [sp-0x471]
    char v16;  // [sp-0x470]
    int v17;  // [bp-0x458], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x448]
    struct_2 *v19;  // [sp-0x438], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v20;  // [sp-0x430], Other Possible Types: unsigned long long
    int v21;  // [sp-0x428]
    int v22;  // [sp-0x418]
    unsigned long long v23;  // [sp-0x408]
    char v24;  // [bp-0x400]
    char v25;  // [bp-0x3f8]
    char v26;  // [bp-0x3f0]
    char v27;  // [bp-0x3e8], Other Possible Types: unsigned long long
    int v28;  // [sp-0x3e0], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x3d8]
    unsigned long long v30;  // [sp-0x3d0]
    char v31;  // [bp-0x3c8]
    char v32;  // [bp-0x3b8]
    int v33;  // [sp-0x3a8], Other Possible Types: unsigned long long *, unsigned long long
    int v34;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x398]
    char v36;  // [sp-0x390]
    char v37;  // [bp-0x380], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v38;  // [sp-0x378]
    int v39;  // [sp-0x370]
    int v40;  // [sp-0x360]
    unsigned long long v41;  // [sp-0x350]
    unsigned long long v42;  // [sp-0x348]
    char v43;  // [bp-0x340]
    char v44;  // [bp-0x330]
    void* v45;  // [sp-0x328]
    unsigned long long v46;  // [sp-0x320]
    void* v47;  // [sp-0x318]
    char v48;  // [bp-0x310]
    char v49;  // [bp-0x300]
    char v50;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v51;  // [sp-0x2f0]
    struct struct_3 **v52;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v53;  // [sp-0x2e0]
    void* v54;  // [sp-0x2d8]
    struct_2 *v56;  // rax
    unsigned long long v57;  // r14
    unsigned long long v58;  // r15
    unsigned long long v59;  // rax
    char v62;  // bpl
    char v63;  // r14b
    unsigned long long v64;  // rdx
    unsigned long long v65;  // r15
    unsigned long long v66;  // r15
    unsigned long long v67;  // r12
    struct_5 *v68;  // rax
    unsigned long long v69;  // rax
    int v70;  // xmm0
    struct_1 *v71;  // r15
    struct_2 *v72;  // rax
    int v73;  // xmm0
    int v74;  // xmm1
    unsigned int v75;  // eax
    unsigned long long v76;  // rdx
    unsigned long long v77;  // rsi
    struct_2 *v78;  // r14
    struct_1 *v79;  // r15
    struct struct_0 **v80;  // rax

    uu_mv::uu_app::h3061ae7d1d9a5e3f(&v50);
    clap_builder::builder::command::Command::try_get_matches_from_mut::haf6778783ca2c5e4(&v2, &v50, a0, a1);
    if (v19 == 0x8000000000000000)
    {
        v56 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v20);
        goto LABEL_44d269;
    }
    v23 = *((long long *)&v8);
    *((int128_t *)&v22) = *((int128_t *)&v6);
    *((int128_t *)&v21) = *((int128_t *)&v4);
    v19 = v2;
    v20 = v3;
    v57 = _ZN5uu_mv9ARG_FILES17he49188e40d44c397E;
    v58 = g_530820;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h69b6d54ef4992121(&v2, &v19, v57, v58);
    clap_builder::parser::error::MatchesError::unwrap::h5784aa2a6cce9869(&v37, v57, v58, &v2);
    v59 = v37;
    if (!v59)
        v59 = core::ops::function::FnOnce::call_once::h6dada085569e1d10;
    v37 = v59;
    v38 = "&";
    v39 = v39;
    v40 = v40;
    v41 = v41;
    v42 = 0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h7235803b0934ffb4(&v24, &v37);
    if (*((long long *)&v26) == 1 && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hf27b87c32ba6c0d4(&v19, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h2c84a0872c50ea29E, g_5307e0))
    {
        v33 = &_ZN5uu_mv9ARG_FILES17he49188e40d44c397E;
        v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h243837844a8830d8;
        v2 = &g_52d6f8;
        v3 = 2;
        v6 = 0;
        v4 = &v33;
        v5 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v2);
        v2 = clap_builder::error::Error$LT$F$GT$::format::h0c8a0cc8d2434f7f(clap_builder::error::Error$LT$F$GT$::raw::h7b26de984ae34038(6, &v27), &v50, v64);
        clap_builder::error::Error$LT$F$GT$::exit::h8d9673608b652481(&v2); /* do not return */
    }
    v62 = uu_mv::determine_overwrite_mode::h4834419c362cefda(&v19);
    uucore::features::backup_control::determine_backup_mode::he1cd810c8ed419e9(&v2, &v19);
    v56 = v2;
    if (v56)
        goto LABEL_44d242;
    v63 = v3;
    v65 = (unsigned int)uucore::features::update_control::determine_update_mode::he3c3faa473a956a0(&v19);
    if (v63 && (!v62 || ((unsigned int)v65 | 2) == 3))
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h062fd451230865e1(&v2, 66, 0);
        if (v2)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v68 = v4;
        v68->field_30 = 129465650615362032794846830781535694125;
        v68->field_20 = 43129471625161341309589720761327562029;
        v68->field_10 = 63045783732390416309721094575626478125;
        v68->field_0 = 59983470580877091706815775436629238115;
        v68->field_40 = 27753;
        v5 = 1;
        v2 = v3;
        v3 = v68;
        v4 = 66;
        v56 = __rust_alloc(32, 8);
        if (!v56)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v70 = *((int128_t *)&v2);
        v56->field_10 = *((int128_t *)&v4);
        *((void*)&v56->field_0) = v70;
        v71 = &g_52d750.field_0;
    }
    else
    {
        uucore::features::backup_control::determine_backup_suffix::h5326e27ab6568374(&v43, &v19);
        v1 = v65;
        v66 = _ZN5uu_mv20OPT_TARGET_DIRECTORY17h2c84a0872c50ea29E;
        v67 = g_5307e0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he7af6da152e8b706(&v2, &v19, v66, v67);
        v69 = clap_builder::parser::error::MatchesError::unwrap::hcfc68c96612eb8df(v66, v67, &v2);
        if (!v69)
        {
            v17 = 0x8000000000000000;
            goto LABEL_44d72e;
        }
        _$LT$std..ffi..os_str..OsString$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h17668a9f3bd1801b(&v2, v69);
        v18 = v4;
        *((int128_t *)&v17) = *((int128_t *)&v2);
        if ((long long)v17 != 0x8000000000000000 && !(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v17)[8], v18))
        {
            v33 = 1;
            *((int128_t *)&v34) = (int128_t)(&v17)[8];
            v36 = 1;
            v45 = 0;
            v46 = 1;
            v47 = 0;
            v8 = 32;
            v16 = 3;
            v2 = 0;
            v4 = 0;
            v6 = &v45;
            v7 = &g_52d5f0;
            if ((char)_$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d(&v33, &v2))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            *((int128_t *)&v28) = *((int128_t *)&v45);
            v30 = v47;
            v27 = 8;
            v72 = __rust_alloc(56, 8);
            if (!v72)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v56 = v72;
            v56->field_30 = *((long long *)&v32);
            v73 = *((int128_t *)&v27);
            v74 = (int128_t)(&v28)[8];
            v56->field_20 = *((int128_t *)&v31);
            *((void*)&v56->field_10) = v74;
            *((void*)&v56->field_0) = v73;
            if ((long long)v17 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc06218d40b630bfe();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd034498178b4c9e5(&v17);
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc06218d40b630bfe();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd034498178b4c9e5(&v43);
            v71 = &g_52d7f8.field_0;
        }
        else
        {
LABEL_44d72e:
            v35 = *((long long *)&v44);
            *((int128_t *)&v33) = *((int128_t *)&v43);
            v29 = v18;
            v27 = (long long)v17;
            v28 = (long long)(&v17)[8];
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hdd40af3522df9332E, g_5307f0);
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv11OPT_VERBOSE17h62d74e82951bd2e2E, g_530800))
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv9OPT_DEBUG17ha2cfb0343e630fdcE, g_530830);
            v13 = v62;
            v14 = v63;
            *((int128_t *)&v2) = (int128_t)v33;
            v4 = v35;
            v15 = v1;
            *((int128_t *)&v5) = *((int128_t *)&v27);
            v7 = v29;
            v8 = v0;
            v9 = 1;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h38b9f6d5ad76c729E, g_5307d0);
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv12OPT_PROGRESS17h4fdd756e7c4480a0E, g_530810);
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v19, _ZN5uu_mv9OPT_DEBUG17ha2cfb0343e630fdcE, g_530830);
            v56 = uu_mv::mv::he8f1505cd789b8b6(*((long long *)&v25), *((long long *)&v26));
            core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h98bb49623517ea9e(&v2);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41a7bafdf379c065(&v24);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he4769e6a0863d758(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a0796d34cf0cc5b(&v19);
LABEL_44d269:
            ::0x44c150::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha54612a46e72084a(&v50);
            if (!v56)
            {
                v75 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v75;
            }
            v19 = v56;
            v20 = v71;
            v2 = &v19;
            v3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h990fccc791f8e9f8;
            v50 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v51 = 1;
            v54 = 0;
            v52 = &v2;
            v53 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v48, &v50);
            *((int128_t *)&v2) = *((int128_t *)&v48);
            v4 = *((long long *)&v49);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3dfb0d80fc38fbdb(v3, *((long long *)&v49), 1, 0))
            {
                v37 = uucore::util_name::h359eff083fe53467();
                v38 = v76;
                v27 = &v37;
                v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h243837844a8830d8;
                v50 = &g_52d698;
                v51 = 2;
                v54 = 0;
                v52 = &v27;
                v53 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v50, v77, v76);
                v37 = &v2;
                v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v50 = &g_52d6b8;
                v51 = 2;
                v54 = 0;
                v52 = &v37;
                v53 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v50, v77, v76);
            }
            if ((char)v20->field_68(v19))
            {
                v37 = uucore::execution_phrase::hded5ccd87df1fcab();
                v38 = v76;
                v27 = &v37;
                v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h243837844a8830d8;
                v50 = &g_52d6d8;
                v51 = 2;
                v54 = 0;
                v52 = &v27;
                v53 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v50, v77, v76);
            }
            v75 = v20->field_60(v19);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc06218d40b630bfe();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd034498178b4c9e5(&v2);
            v78 = v19;
            v79 = v20;
            if (v79->field_0)
                v80(v78);
            if (v79->field_8)
            {
                __rust_dealloc(v78);
                return v75;
            }
            return v75;
        }
    }
LABEL_44d242:
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h41a7bafdf379c065(&v24);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he4769e6a0863d758(&v24);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1a0796d34cf0cc5b(&v19);
    goto LABEL_44d269;
}
