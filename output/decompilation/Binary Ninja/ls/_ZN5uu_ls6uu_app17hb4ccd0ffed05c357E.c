
  int64_t uu_ls::uu_app::hb4ccd0ffed05c357(int64_t arg1)

{
    void var_428;
    clap_builder::builder::command::Command::new::h27025ee958d6c7a0(&var_428, 
        uucore::util_name::h60d842bf27b05e82());
    int128_t var_a28;
    clap_builder::builder::command::Command::version::hc186ab4ba181bcc6(&var_a28, &var_428, 
        "0.0.28{} [OPTION]... [FILE]...Li…");
    char const* const var_db8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_db8, "{} [OPTION]... [FILE]...List dir…", 0x18);
    clap_builder::builder::command::Command::override_usage::h32aa47222d1d3932(&var_428, &var_a28, 
        &var_db8);
    clap_builder::builder::command::Command::about::h6e154a552409f941(&var_a28, &var_428, 
        "List directory contents.\nIgnore…", 0x54);
    memcpy(&var_428, &var_a28, 0x2bc);
    int64_t var_76c;
    int64_t var_16c = 0x4008800040088 | var_76c;
    int32_t var_764;
    int32_t var_164 = var_764;
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "helpNoneshimcallSlimname\x1b[0m …");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "helpNoneshimcallSlimname\x1b[0m …");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Print help information.Set the d…", 0x17);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 5);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "formatignore-backupsdirectoryino…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "formatignore-backupsdirectoryino…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Set the display format.Display t…", 0x17);
    var_db8 = "long\x1b[7m";
    int64_t var_db0 = 4;
    char const* const var_da8 = "verbosesingle-columncolumnsacros…";
    int64_t var_da0 = 7;
    char const* const var_d98 = "single-columncolumnsacrosshorizo…";
    int64_t var_d90 = 0xd;
    char const* const var_d88 = "columnsacrosshorizontalcommasint…";
    int64_t var_d80 = 7;
    char const* const var_d78 = "verticalNovember";
    int64_t var_d70 = 8;
    char const* const var_d68 = "acrosshorizontalcommasinternal e…";
    int64_t var_d60 = 6;
    char const* const var_d58 = "horizontalcommasinternal error: …";
    int64_t var_d50 = 0xa;
    char const* const var_d48 = "commasinternal error: entered un…";
    int64_t var_d40 = 6;
    char const* const var_6c8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf9b673617254a684(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    int32_t var_b70;
    int32_t var_1e0 = 0x90 | var_b70;
    int32_t var_b6c;
    int32_t var_1dc = var_b6c;
    var_6c8 = "formatignore-backupsdirectoryino…";
    int64_t var_6c0 = 6;
    char const* const var_6b8 = "Cxtabsizemgonumeric-uid-giducFat…";
    int64_t var_6b0 = 1;
    char const* const var_6a8 = "long\x1b[7m";
    int64_t var_6a0 = 4;
    char const* const var_698 = "xtabsizemgonumeric-uid-giducFata…";
    int64_t var_690 = 1;
    char const* const var_688 = "Cxtabsizemgonumeric-uid-giducFat…";
    int64_t var_680 = 1;
    char const* const var_678 = "diredhyperlink ";
    int64_t var_670 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "Cxtabsizemgonumeric-uid-giducFat…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x43);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Display the files in columns.Dis…", 0x1d);
    char const* const var_478 = "formatignore-backupsdirectoryino…";
    int64_t var_470 = 6;
    char const* const var_468 = "Cxtabsizemgonumeric-uid-giducFat…";
    int64_t var_460 = 1;
    char const* const var_458 = "long\x1b[7m";
    char const* const var_448 = "xtabsizemgonumeric-uid-giducFata…";
    char const* const var_438 = "Cxtabsizemgonumeric-uid-giducFat…";
    char const* const var_688_1 = "Cxtabsizemgonumeric-uid-giducFat…";
    int64_t var_680_1 = 1;
    char const* const var_698_1 = "xtabsizemgonumeric-uid-giducFata…";
    int64_t var_690_1 = 1;
    char const* const var_6a8_1 = "long\x1b[7m";
    int64_t var_6a0_1 = 4;
    var_6b8 = var_468;
    var_6c8 = var_478;
    clap_builder::builder::arg::Arg::overrides_with_all::ha58d6dce6bef5d37(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, "long\x1b[7m");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x6c);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, "long\x1b[7m");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Display detailed information.Lis…", 0x1d);
    var_688_1 = var_438;
    var_698_1 = var_448;
    var_6a8_1 = var_458;
    var_6b8 = var_468;
    var_6c8 = var_478;
    clap_builder::builder::arg::Arg::overrides_with_all::ha58d6dce6bef5d37(&var_428, &var_db8, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_428, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "xtabsizemgonumeric-uid-giducFata…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x78);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "List entries in rows instead of …", 0x2b);
    var_688_1 = var_438;
    var_698_1 = var_448;
    var_6a8_1 = var_458;
    var_6b8 = var_468;
    var_6c8 = var_478;
    clap_builder::builder::arg::Arg::overrides_with_all::ha58d6dce6bef5d37(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "tabsizemgonumeric-uid-giducFatal…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x54);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "tabsizemgonumeric-uid-giducFatal…");
    clap_builder::builder::arg::Arg::env::hfea2f3c00aac285e(&var_db8, &var_428, 
        "TABSIZEAssume tab stops at each …");
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_428, &var_db8, 
        "COLSWHENhashu128for<keysKindbool…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Assume tab stops at each COLS in…", 0x3a);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "mgonumeric-uid-giducFatal intern…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x6d);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "List entries separated by commas…", 0x21);
    clap_builder::builder::arg::Arg::overrides_with_all::ha58d6dce6bef5d37(&var_db8, &var_a28, 
        &var_478);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "zeroAnsi -- \x1b[8mnonehelpNones…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "zeroAnsi -- \x1b[8mnonehelpNones…");
    clap_builder::builder::arg::Arg::overrides_with::hf30a6134c3869538(&var_428, &var_db8, 
        "zeroAnsi -- \x1b[8mnonehelpNones…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "List entries separated by ASCII …", 0x2f);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, "diredhyperlink ");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, "diredhyperlink ");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_a28, &var_db8, 0x44);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "generate output designed for Ema…", 0x41);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_a28, &var_db8, 2);
    clap_builder::builder::arg::Arg::overrides_with::hf30a6134c3869538(&var_db8, &var_a28, 
        "hyperlink ");
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, "hyperlink ");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, "hyperlink ");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "hyperlink file names WHENList on…", 0x19);
    char const* const var_d88_1 = "alwaysyesforcettyif-ttynevernoin…";
    int64_t var_d80_1 = 6;
    int64_t var_da0_1 = -0x8000000000000000;
    int128_t var_dc8;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_1 = 8;
    int64_t var_da8_1 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    int128_t var_ad0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    char const* const var_d88_2 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    int64_t var_d80_2 = 4;
    int64_t var_da0_2 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_2 = 8;
    int64_t var_da8_2 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    int128_t var_b60;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    char const* const var_d88_3 = "nevernointernal error: entered u…";
    int64_t var_d80_3 = 5;
    int64_t var_da0_3 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_3 = 8;
    int64_t var_da8_3 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    int128_t var_b18;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    int128_t var_ac0;
    var_da8_3 = var_ac0;
    int128_t var_ab0;
    var_d98 = var_ab0;
    int128_t var_aa0;
    var_d88_3 = var_aa0;
    int64_t var_a90;
    int64_t var_d78_1 = var_a90;
    var_d70 = var_b60;
    int128_t var_b50;
    var_d60 = var_b50;
    int128_t var_b40;
    var_d50 = var_b40;
    int128_t var_b30;
    var_d40 = var_b30;
    int64_t var_b20;
    int64_t var_d30 = var_b20;
    int64_t var_ad8;
    int64_t var_ce8 = var_ad8;
    int128_t var_ae8;
    int128_t var_cf8 = var_ae8;
    int128_t var_af8;
    int128_t var_d08 = var_af8;
    int128_t var_b08;
    int128_t var_d18 = var_b08;
    int128_t var_d28 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    int32_t var_1e0_1 = 0x80 | var_b70;
    int32_t var_1dc_1 = var_b6c;
    char* var_760 = nullptr;
    int64_t var_758 = 1;
    char var_750 = 0;
    var_6c8 = var_760;
    int64_t var_6c0_1 = var_758;
    clap_builder::builder::arg::Arg::num_args::h4b3c2e869f51a21c(&var_db8, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::default_missing_value::h56f225d7434596d8(&var_428, &var_db8);
    clap_builder::builder::arg::Arg::default_value::h5bfceaa52277d732(&var_db8, &var_428);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_428, &var_db8, 
        "WHENhashu128for<keysKindboolmut …");
    clap_builder::builder::arg::Arg::overrides_with::hf30a6134c3869538(&var_db8, &var_428, 
        "diredhyperlink ");
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "1Cxtabsizemgonumeric-uid-giducFa…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x31);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "List one file per line.Long form…", 0x17);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "onumeric-uid-giducFatal internal…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x6f);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Long format without group inform…", 0x52);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_428, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "gonumeric-uid-giducFatal interna…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x67);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Long format without owner inform…", 0x26);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "numeric-uid-giducFatal internal …");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x6e);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "numeric-uid-giducFatal internal …");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "-l with numeric UIDs and GIDs.Se…", 0x1e);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "quoting-stylehide-control-charss…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "quoting-stylehide-control-charss…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Set quoting style.c-maybelUse li…", 0x12);
    char const* const var_90 = "literalshellshell-alwaysshell-es…";
    int64_t var_88 = 7;
    int64_t var_a8 = -0x8000000000000000;
    int64_t var_c0 = 0;
    int64_t var_b8 = 8;
    int64_t var_b0 = 0;
    char var_80 = 0;
    char const* const var_48 = "shellshell-alwaysshell-escapeshe…";
    int64_t var_40 = 5;
    int64_t var_60 = -0x8000000000000000;
    int64_t var_78 = 0;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    char var_38 = 0;
    var_aa0 = "shell-escapeshell-escape-alwaysc…";
    *var_aa0[8] = 0xc;
    *var_ac0[8] = -0x8000000000000000;
    var_ad0 = 0;
    *var_ad0[8] = 8;
    var_ac0 = 0;
    var_a90 = 0;
    var_b30 = "shell-alwaysshell-escapeshell-es…";
    *var_b30[8] = 0xc;
    *var_b50[8] = -0x8000000000000000;
    var_b60 = 0;
    *var_b60[8] = 8;
    var_b50 = 0;
    var_b20 = 0;
    var_ae8 = "shell-escape-alwayscescapeintern…";
    *var_ae8[8] = 0x13;
    *var_b08[8] = -0x8000000000000000;
    var_b18 = 0;
    *var_b18[8] = 8;
    var_b08 = 0;
    var_ad8 = 0;
    char const* const var_d88_4 = "cescapeinternal error: entered u…";
    int64_t var_d80_4 = 1;
    int64_t var_da0_4 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_4 = 8;
    int64_t var_da8_4 = 0;
    var_d78_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "c-maybelUse literal quoting styl…");
    int128_t var_be8 = var_dc8;
    var_db8 = var_c0;
    var_da8_4 = var_b0;
    var_d98 = var_dc8;
    var_d88_4 = var_90;
    int64_t var_d78_2 = var_80;
    var_d70 = var_78;
    var_d60 = var_68;
    var_d50 = var_dc8;
    var_d40 = var_48;
    int64_t var_d30_1 = var_38;
    int64_t var_ce8_1 = var_a90;
    int128_t var_cf8_1 = var_aa0;
    int128_t var_d08_1 = var_dc8;
    int128_t var_d18_1 = var_ac0;
    int128_t var_d28_1 = var_ad0;
    int64_t var_ca0 = var_b20;
    int128_t var_cb0 = var_b30;
    int128_t var_cc0 = var_dc8;
    int128_t var_cd0 = var_b50;
    int128_t var_ce0 = var_b60;
    int64_t var_c58 = var_ad8;
    int128_t var_c68 = var_ae8;
    int128_t var_c78 = var_dc8;
    int128_t var_c88 = var_b08;
    int128_t var_c98 = var_b18;
    char const* const var_c10 = var_688_1;
    int128_t var_c20 = var_698_1;
    int128_t var_c30 = var_6a8_1;
    int128_t var_c40 = var_750;
    int128_t var_c50 = var_6c8;
    int64_t var_c08 = 0;
    int64_t var_c00 = 8;
    int64_t var_bf8 = 0;
    int64_t var_bf0 = -0x8000000000000000;
    char const* const var_bd8 = "escapeinternal error: entered un…";
    int64_t var_bd0 = 6;
    char var_bc8 = 0;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hba7d754ca915bac2(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_a28, &var_6c8);
    char const* const var_748 = "quoting-stylehide-control-charss…";
    int64_t var_740 = 0xd;
    char const* const var_738 = "literalquote-name";
    char const* const var_728 = "escapeliteralquote-name";
    char const* const var_718 = "quote-name";
    char const* const var_9f8 = "quote-name";
    int64_t var_9f0 = 0xa;
    char const* const var_a08 = "escapeliteralquote-name";
    int64_t var_a00 = 6;
    char const* const var_a18 = "literalquote-name";
    int64_t var_a10 = 7;
    var_a28 = var_748;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_6c8, &var_db8, 
        &var_a28);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, "literalquote-name");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x4e);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "literalquote-name");
    clap_builder::builder::arg::Arg::alias::h14dcc3ebb35d7cc4(&var_db8, &var_428, 
        "lUse literal quoting style. Equi…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Use literal quoting style. Equiv…", 0x42);
    var_698_1 = var_718;
    var_6a8_1 = var_728;
    int64_t var_6b8_1;
    var_6b8_1 = var_738;
    var_6c8 = var_748;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, "escapeliteralquote-name");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x62);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "escapeliteralquote-name");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "Use escape quoting style. Equiva…", 0x40);
    var_698_1 = var_718;
    var_6a8_1 = var_728;
    var_6b8_1 = var_738;
    var_6c8 = var_748;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_a28, &var_db8, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, "quote-name");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x51);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, "quote-name");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Use C quoting style. Equivalent …", 0x36);
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_428, &var_db8, 
        &var_748);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_428, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "hide-control-charsshow-control-c…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x71);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "hide-control-charsshow-control-c…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "Replace control characters with …", 0x3c);
    char const* const var_100 = "hide-control-charsshow-control-c…";
    int64_t var_f8 = 0x12;
    char const* const var_6b8_2 = "show-control-charswidthauthorfor…";
    int64_t var_6b0_1 = 0x12;
    var_6c8 = var_100;
    int64_t var_6c0_2 = var_f8;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_a28, &var_db8, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "show-control-charswidthauthorfor…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "show-control-charswidthauthorfor…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Show control characters 'as is' …", 0x38);
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_428, 
        &var_100);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "timeHashtip:\x1b[3mCOLSWHENhashu…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "timeHashtip:\x1b[3mCOLSWHENhashu…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Show time in <field>:\n\taccess …", 0x7c);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_a28, 
        "fieldIf the long listing format …");
    char const* const var_9f8_1 = "atimeusebirthinternal error: ent…";
    int64_t var_9f0_1 = 5;
    int64_t var_a10_1 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    int64_t var_a18_1 = 0;
    char var_9e8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_a28, "accessatimeusebirthinternal erro…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "usebirthinternal error: entered …");
    char const* const var_9f8_2 = "ctimestatusaccessatimeusebirthin…";
    int64_t var_9f0_2 = 5;
    int64_t var_a10_2 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    int64_t var_a18_2 = 0;
    char var_9e8_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_a28, "statusaccessatimeusebirthinterna…");
    char const* const var_9f8_3 = "birthinternal error: entered unr…";
    int64_t var_9f0_3 = 5;
    int64_t var_a10_3 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    int64_t var_a18_3 = 0;
    char var_9e8_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_a28, "creation*direct*@");
    var_a28 = var_b60;
    var_a18_3 = var_b50;
    var_a08 = var_dc8;
    var_9f8_3 = var_b30;
    var_9e8_2 = var_b20;
    int128_t var_9e0 = var_b18;
    int128_t var_9d0 = var_b08;
    int128_t var_9c0 = var_dc8;
    int128_t var_9b0 = var_ae8;
    int64_t var_9a0 = var_ad8;
    char const* const var_958 = var_688_1;
    int128_t var_968 = var_698_1;
    int128_t var_978 = var_6a8_1;
    int128_t var_988 = var_6b8_2;
    int128_t var_998 = var_6c8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_a28);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_a28, &var_db8, &var_6c8);
    memcpy(&var_db8, &var_a28, 0x248);
    int32_t var_7e0;
    int32_t var_b70_1 = 0x90 | var_7e0;
    int32_t var_7dc;
    int32_t var_b6c_1 = var_7dc;
    char const* const var_160 = "timeHashtip:\x1b[3mCOLSWHENhashu…";
    char const* const var_150 = "ucFatal internal error. Please c…";
    char const* const var_140 = "cFatal internal error. Please co…";
    char const* const var_a08_1 = "cFatal internal error. Please co…";
    int64_t var_a00_1 = 1;
    char const* const var_a18_4 = "ucFatal internal error. Please c…";
    int64_t var_a10_4 = 1;
    var_a28 = var_160;
    *var_a28[8] = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_6c8, &var_db8, 
        &var_a28);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "cFatal internal error. Please co…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x63);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "If the long listing format (e.g.…", 0x119);
    var_6a8_1 = var_140;
    var_6b8_2 = var_150;
    var_6c8 = var_160;
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "ucFatal internal error. Please c…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x75);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "If the long listing format (e.g.…", 0xf7);
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_db8, &var_a28, 
        &var_160);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "hidehurdcharJuly -> '\'' to \x1b…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "hidehurdcharJuly -> '\'' to \x1b…");
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_428, &var_db8, 1);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_428, 
        "PATTERNdo not list implied entri…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_6c8, &var_db8, 
        "do not list implied entries matc…", 0x4b);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "ignorecontextgroup-directories-f…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x49);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "ignorecontextgroup-directories-f…");
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 1);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_a28, &var_db8, 
        "PATTERNdo not list implied entri…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "do not list implied entries matc…", 0x32);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "ignore-backupsdirectoryinodereve…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x42);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "ignore-backupsdirectoryinodereve…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Ignore entries which end with ~.…", 0x20);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Sort by <field>: name, none (-U)…", 0x4f);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_a28, 
        "fieldIf the long listing format …");
    var_a28 = "name\x1b[0m    Cyan"`$\Utf8EADVs…";
    *var_a28[8] = 4;
    char const* const var_a18_5 = "nonehelpNoneshimcallSlimname\x1b…";
    int64_t var_a10_5 = 4;
    char const* const var_a08_2 = "timeHashtip:\x1b[3mCOLSWHENhashu…";
    int64_t var_a00_2 = 4;
    char const* const var_9f8_4 = "sizei128 as dyn Mask\nBacktrace:…";
    int64_t var_9f0_4 = 4;
    var_9e8_2 = "versionextensionwidthinternal er…";
    var_9e0 = 7;
    *var_9e0[8] = "extensionwidthinternal error: en…";
    var_9d0 = 9;
    *var_9d0[8] = "widthinternal error: entered unr…";
    var_9c0 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hb39976918ed9f476(&var_6c8, &var_a28);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_a28, &var_db8, &var_6c8);
    memcpy(&var_db8, &var_a28, 0x248);
    int32_t rcx_46 = 0x80 | var_7e0;
    char const* const var_a88 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161;
    int64_t var_a80 = 4;
    char const* const var_a78 = "StUvXpfile-type/rustc/8bfcae730a…";
    int64_t var_a70 = 1;
    char const* const var_a68 = "tUvXpfile-type/rustc/8bfcae730a5…";
    int64_t var_a60 = 1;
    char const* const var_a58 = "UvXpfile-type/rustc/8bfcae730a5d…";
    char const* const var_a48 = "vXpfile-type/rustc/8bfcae730a5db…";
    char const* const var_a38 = "Xpfile-type/rustc/8bfcae730a5db2…";
    *var_9e0[8] = "Xpfile-type/rustc/8bfcae730a5db2…";
    var_9d0 = 1;
    var_9e8_2 = "vXpfile-type/rustc/8bfcae730a5db…";
    var_9e0 = 1;
    char const* const var_9f8_5 = "UvXpfile-type/rustc/8bfcae730a5d…";
    int64_t var_9f0_5 = 1;
    var_a08_2 = var_a68;
    var_a18_5 = var_a78;
    var_a28 = var_a88;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_6c8, &var_db8, 
        &var_a28);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "StUvXpfile-type/rustc/8bfcae730a…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x53);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Sort by file size, largest first…", 0x21);
    var_678 = var_a38;
    var_688_1 = var_a48;
    var_698_1 = var_a58;
    var_6a8_1 = var_a68;
    var_6b8_2 = var_a78;
    var_6c8 = var_a88;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "tUvXpfile-type/rustc/8bfcae730a5…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x74);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Sort by modification time (the '…", 0x43);
    var_678 = var_a38;
    var_688_1 = var_a48;
    var_698_1 = var_a58;
    var_6a8_1 = var_a68;
    var_6b8_2 = var_a78;
    var_6c8 = var_a88;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "vXpfile-type/rustc/8bfcae730a5db…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x76);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Natural sort of (version) number…", 0x33);
    var_678 = var_a38;
    var_688_1 = var_a48;
    var_698_1 = var_a58;
    var_6a8_1 = var_a68;
    var_6b8_2 = var_a78;
    var_6c8 = var_a88;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "Xpfile-type/rustc/8bfcae730a5db2…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x58);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Sort alphabetically by entry ext…", 0x27);
    var_678 = var_a38;
    var_688_1 = var_a48;
    var_698_1 = var_a58;
    var_6a8_1 = var_a68;
    var_6b8_2 = var_a78;
    var_6c8 = var_a88;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "UvXpfile-type/rustc/8bfcae730a5d…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x55);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Do not sort; list the files in w…", 0xc5);
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_428, 
        &var_a88);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "dereferencedereference-command-l…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x4c);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "dereferencedereference-command-l…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "When showing file information fo…", 0x81);
    char const* const var_130 = "dereferencedereference-command-l…";
    int64_t var_128 = 0xb;
    char const* const var_120 = "dereference-command-line-symlink…";
    char const* const var_110 = "dereference-command-linederefere…";
    char const* const var_6a8_2 = "dereference-command-linederefere…";
    int64_t var_6a0_2 = 0x18;
    char const* const var_6b8_3 = "dereference-command-line-symlink…";
    int64_t var_6b0_2 = 0x27;
    var_6c8 = var_130;
    int64_t var_6c0_3 = var_128;
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_a28, &var_db8, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "dereference-command-line-symlink…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "dereference-command-line-symlink…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Do not follow symlinks except wh…", 0x64);
    var_6a8_2 = var_110;
    var_6b8_3 = var_120;
    var_6c8 = var_130;
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "dereference-command-linederefere…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x48);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "dereference-command-linederefere…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "Do not follow symlinks except wh…", 0x43);
    clap_builder::builder::arg::Arg::overrides_with_all::hb0ed3969eabccefe(&var_a28, &var_db8, 
        &var_130);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "no-groupParseIntPatternscreation…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "no-groupParseIntPatternscreation…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_428, &var_db8, 0x47);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Do not show group in long format…", 0x21);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "authorformatignore-backupsdirect…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "authorformatignore-backupsdirect…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Show author in long format. On t…", 0x61);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "allalmost-alldereferencederefere…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x61);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "allalmost-alldereferencederefere…");
    char const* const var_e0 = "allalmost-alldereferencederefere…";
    int64_t var_d8 = 3;
    char const* const var_6b8_4 = "almost-alldereferencedereference…";
    int64_t var_6b0_3 = 0xa;
    var_6c8 = var_e0;
    int64_t var_6c0_4 = var_d8;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Do not ignore hidden files (file…", 0x42);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_428, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "almost-alldereferencedereference…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x41);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "almost-alldereferencedereference…");
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_a28, 
        &var_e0);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "In a directory, do not ignore al…", 0x5b);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "directoryinodereverserecursiveco…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x64);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "directoryinodereverserecursiveco…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Only list the names of directori…", 0xf3);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, "human-readablesikibibytes");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x68);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "human-readablesikibibytes");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "Print human readable file sizes …", 0x33);
    var_6c8 = "block-sizehuman-readablesikibiby…";
    int64_t var_6c0_5 = 0xa;
    char const* const var_6b8_5 = "sikibibytes";
    int64_t var_6b0_4 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_a28, &var_db8, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, "kibibytes");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x6b);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, "kibibytes");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "default to 1024-byte blocks for …", 0x5d);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, "sikibibytes");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, "sikibibytes");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Print human readable file sizes …", 0x45);
    var_6c8 = "block-sizehuman-readablesikibiby…";
    int64_t var_6c0_6 = 0xa;
    char const* const var_6b8_6 = "human-readablesikibibytes";
    int64_t var_6b0_5 = 0xe;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "block-sizehuman-readablesikibiby…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "block-sizehuman-readablesikibiby…");
    memcpy(&var_428, &var_db8, 0x248);
    int32_t var_1e0_2 = 0x80 | rcx_46;
    int32_t var_1dc_2 = var_7dc;
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_428, 
        "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "scale sizes by BLOCK_SIZE when p…", 0x2c);
    var_6c8 = "sikibibytes";
    int64_t var_6c0_7 = 2;
    char const* const var_6b8_7 = "human-readablesikibibytes";
    int64_t var_6b0_6 = 0xe;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "inodereverserecursivecolorpathsi…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x69);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "inodereverserecursivecolorpathsi…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "print the index number of each f…", 0x23);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "reverserecursivecolorpathsindica…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x72);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        "reverserecursivecolorpathsindica…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Reverse whatever the sorting met…", 0x83);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "recursivecolorpathsindicator-sty…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x52);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "recursivecolorpathsindicator-sty…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "List the contents of all directo…", 0x31);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "widthauthorformatignore-backupsd…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "widthauthorformatignore-backupsd…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_428, &var_db8, 0x77);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Assume that the terminal is COLS…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_6c8, &var_db8, 
        "COLSWHENhashu128for<keysKindbool…");
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "sizei128 as dyn Mask\nBacktrace:…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x73);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "sizei128 as dyn Mask\nBacktrace:…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "print the allocated size of each…", 0x30);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "colorpathsindicator-styletime-st…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "colorpathsindicator-styletime-st…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Color output based on file type.…", 0x20);
    char const* const var_d88_5 = "alwaysyesforcettyif-ttynevernoin…";
    int64_t var_d80_5 = 6;
    int64_t var_da0_5 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_5 = 8;
    int64_t var_da8_5 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    char const* const var_d88_6 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    int64_t var_d80_6 = 4;
    int64_t var_da0_6 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_6 = 8;
    int64_t var_da8_6 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    char const* const var_d88_7 = "nevernointernal error: entered u…";
    int64_t var_d80_7 = 5;
    int64_t var_da0_7 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_7 = 8;
    int64_t var_da8_7 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    var_da8_7 = var_ac0;
    var_d98 = var_dc8;
    var_d88_7 = var_aa0;
    int64_t var_d78_3 = var_a90;
    var_d70 = var_b60;
    var_d60 = var_b50;
    var_d50 = var_dc8;
    var_d40 = var_b30;
    int64_t var_d30_2 = var_b20;
    int64_t var_ce8_2 = var_ad8;
    int128_t var_cf8_2 = var_ae8;
    int128_t var_d08_2 = var_dc8;
    int128_t var_d18_2 = var_b08;
    int128_t var_d28_2 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    int64_t var_6b8_8 = var_750;
    var_6c8 = var_760;
    clap_builder::builder::arg::Arg::num_args::h4b3c2e869f51a21c(&var_db8, &var_428, &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "indicator-styletime-stylefull-ti…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "indicator-styletime-stylefull-ti…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Append indicator with style WORD…", 0x74);
    var_db8 = "nonehelpNoneshimcallSlimname\x1b…";
    int64_t var_db0_8 = 4;
    char const* const var_da8_8 = "slashCOLUMNS: ignoring invalid w…";
    int64_t var_da0_8 = 5;
    char const* const var_d98_1 = "file-typeslashCOLUMNS: ignoring …";
    int64_t var_d90_1 = 9;
    uint64_t* const var_d88_8 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    int64_t var_d80_8 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h546ec2737a00a8df(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_a28, &var_6c8);
    char const* const var_708 = "file-type/rustc/8bfcae730a5db243…";
    int64_t var_700 = 9;
    char const* const var_6f8 = "pfile-type/rustc/8bfcae730a5db24…";
    uint64_t* const var_6e8 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    char const* const var_6d8 = "indicator-styletime-stylefull-ti…";
    char const* const var_9f8_6 = "indicator-styletime-stylefull-ti…";
    int64_t var_9f0_6 = 0xf;
    uint64_t* const var_a08_3 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    int64_t var_a00_3 = 8;
    char const* const var_a18_6 = "pfile-type/rustc/8bfcae730a5db24…";
    int64_t var_a10_6 = 1;
    var_a28 = var_708;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_6c8, &var_db8, 
        &var_a28);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409);
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x46);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_428, &var_db8, 
        &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "Append a character to each file …", 0x2b9);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_428, &var_db8, 
        "whenzeroAnsi -- \x1b[8mnonehelpN…");
    char const* const var_d88_9 = "alwaysyesforcettyif-ttynevernoin…";
    int64_t var_d80_9 = 6;
    int64_t var_da0_9 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_9 = 8;
    int64_t var_da8_9 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    char const* const var_d88_10 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    int64_t var_d80_10 = 4;
    int64_t var_da0_10 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_10 = 8;
    int64_t var_da8_10 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    char const* const var_d88_11 = "nevernointernal error: entered u…";
    int64_t var_d80_11 = 5;
    int64_t var_da0_11 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    int64_t var_db0_11 = 8;
    int64_t var_da8_11 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    var_da8_11 = var_ac0;
    var_d98_1 = var_dc8;
    var_d88_11 = var_aa0;
    int64_t var_d78_4 = var_a90;
    var_d70 = var_b60;
    var_d60 = var_b50;
    var_d50 = var_dc8;
    var_d40 = var_b30;
    int64_t var_d30_3 = var_b20;
    int64_t var_ce8_3 = var_ad8;
    int128_t var_cf8_3 = var_ae8;
    int128_t var_d08_3 = var_dc8;
    int128_t var_d18_3 = var_b08;
    int128_t var_d28_3 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::default_missing_value::h56f225d7434596d8(&var_428, &var_db8);
    memcpy(&var_db8, &var_428, 0x248);
    int32_t var_b70_3 = 0x80 | 0x80 | rcx_46;
    int32_t var_b6c_3 = var_7dc;
    clap_builder::builder::arg::Arg::num_args::h4b3c2e869f51a21c(&var_428, &var_db8, &var_760);
    var_698_1 = var_6d8;
    var_6a8_2 = var_6e8;
    var_6b8_8 = var_6f8;
    var_6c8 = var_708;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "file-type/rustc/8bfcae730a5db243…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "file-type/rustc/8bfcae730a5db243…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Same as --classify, but do not a…", 0x29);
    var_698_1 = var_6d8;
    var_6a8_2 = var_6e8;
    var_6b8_8 = var_6f8;
    var_6c8 = var_708;
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "pfile-type/rustc/8bfcae730a5db24…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_428, 0x70);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "Append / indicator to directorie…", 0x22);
    clap_builder::builder::arg::Arg::overrides_with_all::h96fc686d12fd5dc5(&var_db8, &var_428, 
        &var_708);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "time-stylefull-timeignorecontext…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_a28, 
        "time-stylefull-timeignorecontext…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "time/date format with -l; see TI…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_a28, 
        "TIME_STYLElike -l --time-style=f…");
    clap_builder::builder::arg::Arg::env::hfea2f3c00aac285e(&var_a28, &var_db8, 
        "TIME_STYLElike -l --time-style=f…");
    clap_builder::builder::arg::Arg::value_parser::h6ba94f1269f6b3cd(&var_db8, &var_a28);
    var_a28 = "time-stylefull-timeignorecontext…";
    *var_a28[8] = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::he19f6e820c3c5943(&var_6c8, &var_db8, 
        &var_a28);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::overrides_with::hf30a6134c3869538(&var_428, &var_db8, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_428, 
        "like -l --time-style=full-isogro…", 0x1d);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "contextgroup-directories-firstdi…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x5a);
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_a28, &var_db8, 
        "contextgroup-directories-firstdi…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_db8, &var_a28, 
        "print any security context of ea…", 0x35);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "group-directories-firstdiredhype…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "group-directories-firstdiredhype…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "group directories before files; …", 0x78);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_428, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "pathsindicator-styletime-stylefu…");
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_db8, &var_a28, 1);
    clap_builder::builder::arg::Arg::value_hint::hf507f03c7cef99c1(&var_a28, &var_db8, 2);
    var_6c8 = 2;
    clap_builder::builder::arg::Arg::value_parser::hbd9c2e175890d5bc(&var_db8, &var_a28, &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_db8);
    clap_builder::builder::command::Command::after_help::h4834bdd45909ef56(arg1, &var_a28, 
        "The TIME_STYLE argument can be f…", 0xb6);
    return arg1;
}
