long long uu_ln::uumain::uumain::h5475cb4c432c7eac(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    char *v24;  // [sp-0x5b8], Other Possible Types: unsigned long long
    int v25;  // [sp-0x5b0], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x5a8]
    char *v27;  // [sp-0x5a0]
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
    char *v38;  // [sp-0x2e8]
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

    v36 = &g_52a4a0;
    v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    v38 = &g_52a4b0;
    v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    v22 = &g_52a480;
    v23 = 2;
    v26 = 0;
    v24 = &v36;
    v25 = 2;
    core::option::Option$LT$T$GT$::map_or_else::hc2e95a3f0c285d88(&v16, &v22);
    uu_ln::uu_app::hee3aeb3cff9e1650(&v22, v43, v44);
    v7 = *((long long *)&v17);
    *((int128_t *)&v6) = *((int128_t *)&v16);
    clap_builder::builder::command::Command::after_help::h831104ada6371e62(&v36, &v22, &v6);
    clap_builder::builder::command::Command::try_get_matches_from::h7d1036d21dbe5f01(&v11, &v36, a0, a1);
    if (v1 == 0x8000000000000000)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v2);
        return v47;
    }
    v5 = *((long long *)&v15);
    *((int128_t *)&v4) = *((int128_t *)&v14);
    *((int128_t *)&v3) = *((int128_t *)&v13);
    v1 = *((long long *)&v11);
    v2 = *((long long *)&v12);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7567da6ff6018093(&v22, &v1, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70);
    clap_builder::parser::error::MatchesError::unwrap::h29b3375d9b05783f(&v36, _ZN5uu_ln9ARG_FILES17hb547574b298b9dc3E, g_52ce70, &v22);
    if (!v36)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    *((int128_t *)&v21) = *((int128_t *)&v41);
    *((int128_t *)&v20) = *((int128_t *)&v40);
    *((int128_t *)&v19) = *((int128_t *)&v38);
    *((int128_t *)&v18) = *((int128_t *)&v36);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::haabc49640496de99(&v8, &v18, v44);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "force", 5))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "interactive", 11);
    uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&v22, &v1);
    v47 = v22;
    if (v47)
    {
        ::0x46b840::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&v8);
    }
    else
    {
        v49 = v23;
        uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&v6, &v1);
        v13 = v7;
        v11 = v6;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hccd1d72a460aa9fd(&v22, &v1);
        v52 = clap_builder::parser::error::MatchesError::unwrap::hc7b004a6e617f976("target-directory", 16, &v22);
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "logical", 7);
        if (!v52)
        {
            v36 = 0x8000000000000000;
        }
        else
        {
            core::ops::function::FnOnce::call_once::h4fd7f80f9ff1a73b(&v22, v52);
            v38 = v24;
            *((int128_t *)&v36) = *((int128_t *)&v22);
        }
        v34 = 2;
        v35 = v49;
        v22 = v11;
        v24 = v13;
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "symbolic", 8);
        v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "relative\n       ", 8);
        v30 = v0;
        *((int128_t *)&v25) = *((int128_t *)&v36);
        v27 = v38;
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "no-target-directory", 19);
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "no-dereference", 14);
        v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "verbose", 7);
        v47 = uu_ln::exec::h2656b7f7ed388dfd(*((long long *)&v9), *((long long *)&v10), &v22, v38, v53, v54);
        core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::h3dd3a774a2577456(&v22);
        ::0x46b840::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&v8);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6690b14de27b6f17(&v1);
    return v47;
}
