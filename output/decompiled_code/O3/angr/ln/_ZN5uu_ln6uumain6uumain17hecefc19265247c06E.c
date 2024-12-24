long long uu_ln::uumain::uumain::hecefc19265247c06(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x6c1]
    unsigned long v1;  // [sp-0x6c0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x6b8]
    int v3;  // [sp-0x6b0]
    int v4;  // [sp-0x6a0]
    unsigned long long v5;  // [sp-0x690]
    int v6;  // [sp-0x688]
    unsigned long long v7;  // [sp-0x678]
    char v8;  // [bp-0x670]
    char v9;  // [bp-0x668]
    char v10;  // [bp-0x660]
    int v11;  // [bp-0x658], Other Possible Types: char
    char v12;  // [bp-0x650]
    char v13;  // [bp-0x648], Other Possible Types: unsigned long long
    char v14;  // [bp-0x638]
    char v15;  // [bp-0x628]
    char v16;  // [bp-0x620]
    char v17;  // [bp-0x610]
    int v18;  // [sp-0x608]
    int v19;  // [sp-0x5f8]
    int v20;  // [sp-0x5e8]
    int v21;  // [sp-0x5d8]
    int v22;  // [sp-0x5c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v23;  // [sp-0x5c0]
    unsigned long long v24;  // [sp-0x5b8]
    int v25;  // [sp-0x5b0], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x5a8]
    unsigned long long v27;  // [sp-0x5a0]
    char v28;  // [sp-0x598]
    char v29;  // [sp-0x597]
    char v30;  // [sp-0x596]
    char v31;  // [sp-0x595]
    char v32;  // [sp-0x594]
    char v33;  // [sp-0x593]
    char v34;  // [sp-0x592]
    char v35;  // [sp-0x591]
    unsigned long v36;  // [sp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x2f0]
    unsigned long v38;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x2e0]
    char v40;  // [bp-0x2d8]
    char v41;  // [bp-0x2c8]
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    unsigned long long v47;  // rax
    char v49;  // r13b
    unsigned long long v52;  // rax
    unsigned long long v53;  // r8
    unsigned long long v54;  // r9

    v36 = &g_52acd8;
    v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3387dfbe5308f842;
    v38 = &g_52ace8;
    v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3387dfbe5308f842;
    v22 = &g_52acf8;
    v23 = 2;
    v26 = 0;
    v24 = &v36;
    v25 = 2;
    core::option::Option$LT$T$GT$::map_or_else::ha8be9b9fff2e505a(&v16, &v22);
    uu_ln::uu_app::h3918246677044819(&v22, v43, v44);
    v7 = *((long long *)&v17);
    *((int128_t *)&v6) = *((int128_t *)&v16);
    clap_builder::builder::command::Command::after_help::h4d9585a659890600(&v36, &v22, &v6);
    clap_builder::builder::command::Command::try_get_matches_from::h81445be4c255aec6(&v11, &v36, a0, a1);
    if (v1 == 0x8000000000000000)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v2);
        return v47;
    }
    v5 = *((long long *)&v15);
    *((int128_t *)&v4) = *((int128_t *)&v14);
    *((int128_t *)&v3) = *((int128_t *)&v13);
    v1 = *((long long *)&v11);
    v2 = *((long long *)&v12);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4b4d0ad810db2fbf(&v22, &v1, _ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598);
    clap_builder::parser::error::MatchesError::unwrap::hff34282ffa899d40(&v36, _ZN5uu_ln9ARG_FILES17hc7049ff41a3ed229E, g_52d598, &v22);
    if (!v36)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    *((int128_t *)&v21) = *((int128_t *)&v41);
    *((int128_t *)&v20) = *((int128_t *)&v40);
    *((int128_t *)&v19) = *((int128_t *)&v38);
    *((int128_t *)&v18) = *((int128_t *)&v36);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6f672671cf8493e6(&v8, &v18, v44);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "force", 5))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "interactive", 11);
    uucore::features::backup_control::determine_backup_mode::hb90f1c14e295c1e2(&v22, &v1);
    v47 = v22;
    if (v47)
    {
        ::0x46dc80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hea4fd1f6b6803090(&v8);
    }
    else
    {
        v49 = v23;
        uucore::features::backup_control::determine_backup_suffix::heb4df947a6b7e2fc(&v6, &v1);
        v13 = v7;
        v11 = v6;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h825f0ba4098022b3(&v22, &v1);
        v52 = clap_builder::parser::error::MatchesError::unwrap::hf64edbd24a679212(&v22);
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "logical", 7);
        if (!v52)
        {
            v36 = 0x8000000000000000;
        }
        else
        {
            core::ops::function::FnOnce::call_once::h15e9b3833ba958a2(&v22, v52);
            v38 = v24;
            *((int128_t *)&v36) = *((int128_t *)&v22);
        }
        v34 = 2;
        v35 = v49;
        v22 = v11;
        v24 = v13;
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "symbolic", 8);
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "relative\n       ", 8);
        v30 = v0;
        *((int128_t *)&v25) = *((int128_t *)&v36);
        v27 = v38;
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "no-target-directory", 19);
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "no-dereference", 14);
        v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "verbose", 7);
        v47 = uu_ln::exec::h8ff60ab2639d4ab0(*((long long *)&v9), *((long long *)&v10), &v22, v38, v53, v54);
        core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::h8aac736d0508739a(&v22);
        ::0x46dc80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hea4fd1f6b6803090(&v8);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0f27afaa7a69ba2(&v1);
    return v47;
}
