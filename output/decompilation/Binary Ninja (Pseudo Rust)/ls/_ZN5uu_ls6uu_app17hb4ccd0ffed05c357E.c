
  fn uu_ls::uu_app::hb4ccd0ffed05c357(arg1: i64) -> i64

{
    let mut var_428: ();
    clap_builder::builder::command::Command::new::h27025ee958d6c7a0(&var_428, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_a28: i128;
    clap_builder::builder::command::Command::version::hc186ab4ba181bcc6(&var_a28, &var_428, 
        "0.0.28{} [OPTION]... [FILE]...Li…");
    let mut var_db8: *const i8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_db8, "{} [OPTION]... [FILE]...List dir…", 0x18);
    clap_builder::builder::command::Command::override_usage::h32aa47222d1d3932(&var_428, &var_a28, 
        &var_db8);
    clap_builder::builder::command::Command::about::h6e154a552409f941(&var_a28, &var_428, 
        "List directory contents.\nIgnore…", 0x54);
    memcpy(&var_428, &var_a28, 0x2bc);
    let var_76c: i64;
    let var_16c: i64 = 0x4008800040088 | var_76c;
    let var_764: i32;
    let var_164: i32 = var_764;
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
    let var_db0: i64 = 4;
    let var_da8: *const i8 = "verbosesingle-columncolumnsacros…";
    let var_da0: i64 = 7;
    let mut var_d98: *const i8 = "single-columncolumnsacrosshorizo…";
    let var_d90: i64 = 0xd;
    let var_d88: *const i8 = "columnsacrosshorizontalcommasint…";
    let var_d80: i64 = 7;
    let mut var_d78: *const i8 = "verticalNovember";
    let mut var_d70: i64 = 8;
    let var_d68: *const i8 = "acrosshorizontalcommasinternal e…";
    let mut var_d60: i64 = 6;
    let var_d58: *const i8 = "horizontalcommasinternal error: …";
    let mut var_d50: i64 = 0xa;
    let var_d48: *const i8 = "commasinternal error: entered un…";
    let mut var_d40: i64 = 6;
    let mut var_6c8: *const i8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf9b673617254a684(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    let var_b70: i32;
    let var_1e0: i32 = 0x90 | var_b70;
    let var_b6c: i32;
    let var_1dc: i32 = var_b6c;
    var_6c8 = "formatignore-backupsdirectoryino…";
    let var_6c0: i64 = 6;
    let mut var_6b8: *const i8 = "Cxtabsizemgonumeric-uid-giducFat…";
    let var_6b0: i64 = 1;
    let var_6a8: *const i8 = "long\x1b[7m";
    let var_6a0: i64 = 4;
    let var_698: *const i8 = "xtabsizemgonumeric-uid-giducFata…";
    let var_690: i64 = 1;
    let var_688: *const i8 = "Cxtabsizemgonumeric-uid-giducFat…";
    let var_680: i64 = 1;
    let mut var_678: *const i8 = "diredhyperlink ";
    let var_670: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h50919fb6377b32d0(&var_db8, &var_428, 
        &var_6c8);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_428, &var_a28, &var_db8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_a28, 
        "Cxtabsizemgonumeric-uid-giducFat…");
    clap_builder::builder::arg::Arg::short::h61186bc8a9c61e35(&var_db8, &var_a28, 0x43);
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_a28, &var_db8, 
        "Display the files in columns.Dis…", 0x1d);
    let mut var_478: *const i8 = "formatignore-backupsdirectoryino…";
    let var_470: i64 = 6;
    let var_468: *const i8 = "Cxtabsizemgonumeric-uid-giducFat…";
    let var_460: i64 = 1;
    let var_458: *const i8 = "long\x1b[7m";
    let var_448: *const i8 = "xtabsizemgonumeric-uid-giducFata…";
    let var_438: *const i8 = "Cxtabsizemgonumeric-uid-giducFat…";
    let mut var_688_1: *const i8 = "Cxtabsizemgonumeric-uid-giducFat…";
    let var_680_1: i64 = 1;
    let mut var_698_1: *const i8 = "xtabsizemgonumeric-uid-giducFata…";
    let var_690_1: i64 = 1;
    let mut var_6a8_1: *const i8 = "long\x1b[7m";
    let var_6a0_1: i64 = 4;
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
    let var_d88_1: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_d80_1: i64 = 6;
    let var_da0_1: i64 = -0x8000000000000000;
    let var_dc8: i128;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_1: i64 = 8;
    let var_da8_1: i64 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    let mut var_ad0: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    let var_d88_2: *const i8 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    let var_d80_2: i64 = 4;
    let var_da0_2: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_2: i64 = 8;
    let var_da8_2: i64 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    let mut var_b60: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    let mut var_d88_3: *const i8 = "nevernointernal error: entered u…";
    let var_d80_3: i64 = 5;
    let var_da0_3: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_3: i64 = 8;
    let mut var_da8_3: i64 = 0;
    var_d78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    let mut var_b18: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    let mut var_ac0: i128;
    var_da8_3 = var_ac0;
    let var_ab0: i128;
    var_d98 = var_ab0;
    let mut var_aa0: i128;
    var_d88_3 = var_aa0;
    let mut var_a90: i64;
    let mut var_d78_1: i64 = var_a90;
    var_d70 = var_b60;
    let mut var_b50: i128;
    var_d60 = var_b50;
    let var_b40: i128;
    var_d50 = var_b40;
    let mut var_b30: i128;
    var_d40 = var_b30;
    let mut var_b20: i64;
    let var_d30: i64 = var_b20;
    let mut var_ad8: i64;
    let var_ce8: i64 = var_ad8;
    let mut var_ae8: i128;
    let var_cf8: i128 = var_ae8;
    let var_af8: i128;
    let var_d08: i128 = var_af8;
    let mut var_b08: i128;
    let var_d18: i128 = var_b08;
    let var_d28: i128 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    let var_1e0_1: i32 = 0x80 | var_b70;
    let var_1dc_1: i32 = var_b6c;
    let mut var_760: *mut i8 = nullptr;
    let var_758: i64 = 1;
    let var_750: i8 = 0;
    var_6c8 = var_760;
    let var_6c0_1: i64 = var_758;
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
    let var_90: *const i8 = "literalshellshell-alwaysshell-es…";
    let var_88: i64 = 7;
    let var_a8: i64 = -0x8000000000000000;
    let var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let var_b0: i64 = 0;
    let var_80: i8 = 0;
    let var_48: *const i8 = "shellshell-alwaysshell-escapeshe…";
    let var_40: i64 = 5;
    let var_60: i64 = -0x8000000000000000;
    let var_78: i64 = 0;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    let var_38: i8 = 0;
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
    let mut var_d88_4: *const i8 = "cescapeinternal error: entered u…";
    let var_d80_4: i64 = 1;
    let var_da0_4: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_4: i64 = 8;
    let mut var_da8_4: i64 = 0;
    var_d78_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "c-maybelUse literal quoting styl…");
    let var_be8: i128 = var_dc8;
    var_db8 = var_c0;
    var_da8_4 = var_b0;
    var_d98 = var_dc8;
    var_d88_4 = var_90;
    let mut var_d78_2: i64 = var_80;
    var_d70 = var_78;
    var_d60 = var_68;
    var_d50 = var_dc8;
    var_d40 = var_48;
    let var_d30_1: i64 = var_38;
    let var_ce8_1: i64 = var_a90;
    let var_cf8_1: i128 = var_aa0;
    let var_d08_1: i128 = var_dc8;
    let var_d18_1: i128 = var_ac0;
    let var_d28_1: i128 = var_ad0;
    let var_ca0: i64 = var_b20;
    let var_cb0: i128 = var_b30;
    let var_cc0: i128 = var_dc8;
    let var_cd0: i128 = var_b50;
    let var_ce0: i128 = var_b60;
    let var_c58: i64 = var_ad8;
    let var_c68: i128 = var_ae8;
    let var_c78: i128 = var_dc8;
    let var_c88: i128 = var_b08;
    let var_c98: i128 = var_b18;
    let var_c10: *const i8 = var_688_1;
    let var_c20: i128 = var_698_1;
    let var_c30: i128 = var_6a8_1;
    let var_c40: i128 = var_750;
    let var_c50: i128 = var_6c8;
    let var_c08: i64 = 0;
    let var_c00: i64 = 8;
    let var_bf8: i64 = 0;
    let var_bf0: i64 = -0x8000000000000000;
    let var_bd8: *const i8 = "escapeinternal error: entered un…";
    let var_bd0: i64 = 6;
    let var_bc8: i8 = 0;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hba7d754ca915bac2(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_a28, &var_6c8);
    let mut var_748: *const i8 = "quoting-stylehide-control-charss…";
    let var_740: i64 = 0xd;
    let var_738: *const i8 = "literalquote-name";
    let var_728: *const i8 = "escapeliteralquote-name";
    let var_718: *const i8 = "quote-name";
    let var_9f8: *const i8 = "quote-name";
    let var_9f0: i64 = 0xa;
    let mut var_a08: *const i8 = "escapeliteralquote-name";
    let var_a00: i64 = 6;
    let var_a18: *const i8 = "literalquote-name";
    let var_a10: i64 = 7;
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
    let mut var_6b8_1: i64;
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
    let mut var_100: *const i8 = "hide-control-charsshow-control-c…";
    let var_f8: i64 = 0x12;
    let mut var_6b8_2: *const i8 = "show-control-charswidthauthorfor…";
    let var_6b0_1: i64 = 0x12;
    var_6c8 = var_100;
    let var_6c0_2: i64 = var_f8;
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
    let var_9f8_1: *const i8 = "atimeusebirthinternal error: ent…";
    let var_9f0_1: i64 = 5;
    let var_a10_1: i64 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    let var_a18_1: i64 = 0;
    let var_9e8: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_a28, "accessatimeusebirthinternal erro…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "usebirthinternal error: entered …");
    let var_9f8_2: *const i8 = "ctimestatusaccessatimeusebirthin…";
    let var_9f0_2: i64 = 5;
    let var_a10_2: i64 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    let var_a18_2: i64 = 0;
    let var_9e8_1: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_a28, "statusaccessatimeusebirthinterna…");
    let mut var_9f8_3: *const i8 = "birthinternal error: entered unr…";
    let var_9f0_3: i64 = 5;
    let var_a10_3: i64 = -0x8000000000000000;
    var_a08 = var_dc8;
    var_a28 = 0;
    *var_a28[8] = 8;
    let mut var_a18_3: i64 = 0;
    let mut var_9e8_2: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_a28, "creation*direct*@");
    var_a28 = var_b60;
    var_a18_3 = var_b50;
    var_a08 = var_dc8;
    var_9f8_3 = var_b30;
    var_9e8_2 = var_b20;
    let mut var_9e0: i128 = var_b18;
    let mut var_9d0: i128 = var_b08;
    let mut var_9c0: i128 = var_dc8;
    let var_9b0: i128 = var_ae8;
    let var_9a0: i64 = var_ad8;
    let var_958: *const i8 = var_688_1;
    let var_968: i128 = var_698_1;
    let var_978: i128 = var_6a8_1;
    let var_988: i128 = var_6b8_2;
    let var_998: i128 = var_6c8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_a28);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_a28, &var_db8, &var_6c8);
    memcpy(&var_db8, &var_a28, 0x248);
    let var_7e0: i32;
    let var_b70_1: i32 = 0x90 | var_7e0;
    let var_7dc: i32;
    let var_b6c_1: i32 = var_7dc;
    let mut var_160: *const i8 = "timeHashtip:\x1b[3mCOLSWHENhashu…";
    let var_150: *const i8 = "ucFatal internal error. Please c…";
    let var_140: *const i8 = "cFatal internal error. Please co…";
    let var_a08_1: *const i8 = "cFatal internal error. Please co…";
    let var_a00_1: i64 = 1;
    let var_a18_4: *const i8 = "ucFatal internal error. Please c…";
    let var_a10_4: i64 = 1;
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
    let mut var_a18_5: *const i8 = "nonehelpNoneshimcallSlimname\x1b…";
    let var_a10_5: i64 = 4;
    let mut var_a08_2: *const i8 = "timeHashtip:\x1b[3mCOLSWHENhashu…";
    let var_a00_2: i64 = 4;
    let var_9f8_4: *const i8 = "sizei128 as dyn Mask\nBacktrace:…";
    let var_9f0_4: i64 = 4;
    var_9e8_2 = "versionextensionwidthinternal er…";
    var_9e0 = 7;
    *var_9e0[8] = "extensionwidthinternal error: en…";
    var_9d0 = 9;
    *var_9d0[8] = "widthinternal error: entered unr…";
    var_9c0 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hb39976918ed9f476(&var_6c8, &var_a28);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_a28, &var_db8, &var_6c8);
    memcpy(&var_db8, &var_a28, 0x248);
    let rcx_46: i32 = 0x80 | var_7e0;
    let mut var_a88: *const i8 =
        &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161;
    let var_a80: i64 = 4;
    let var_a78: *const i8 = "StUvXpfile-type/rustc/8bfcae730a…";
    let var_a70: i64 = 1;
    let var_a68: *const i8 = "tUvXpfile-type/rustc/8bfcae730a5…";
    let var_a60: i64 = 1;
    let var_a58: *const i8 = "UvXpfile-type/rustc/8bfcae730a5d…";
    let var_a48: *const i8 = "vXpfile-type/rustc/8bfcae730a5db…";
    let var_a38: *const i8 = "Xpfile-type/rustc/8bfcae730a5db2…";
    *var_9e0[8] = "Xpfile-type/rustc/8bfcae730a5db2…";
    var_9d0 = 1;
    var_9e8_2 = "vXpfile-type/rustc/8bfcae730a5db…";
    var_9e0 = 1;
    let var_9f8_5: *const i8 = "UvXpfile-type/rustc/8bfcae730a5d…";
    let var_9f0_5: i64 = 1;
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
    let mut var_130: *const i8 = "dereferencedereference-command-l…";
    let var_128: i64 = 0xb;
    let var_120: *const i8 = "dereference-command-line-symlink…";
    let var_110: *const i8 = "dereference-command-linederefere…";
    let mut var_6a8_2: *const i8 = "dereference-command-linederefere…";
    let var_6a0_2: i64 = 0x18;
    let mut var_6b8_3: *const i8 = "dereference-command-line-symlink…";
    let var_6b0_2: i64 = 0x27;
    var_6c8 = var_130;
    let var_6c0_3: i64 = var_128;
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
    let mut var_e0: *const i8 = "allalmost-alldereferencederefere…";
    let var_d8: i64 = 3;
    let var_6b8_4: *const i8 = "almost-alldereferencedereference…";
    let var_6b0_3: i64 = 0xa;
    var_6c8 = var_e0;
    let var_6c0_4: i64 = var_d8;
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
    let var_6c0_5: i64 = 0xa;
    let var_6b8_5: *const i8 = "sikibibytes";
    let var_6b0_4: i64 = 2;
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
    let var_6c0_6: i64 = 0xa;
    let var_6b8_6: *const i8 = "human-readablesikibibytes";
    let var_6b0_5: i64 = 0xe;
    clap_builder::builder::arg::Arg::overrides_with_all::hdeed3afb89414e48(&var_db8, &var_a28, 
        &var_6c8);
    clap_builder::builder::arg::Arg::action::hdb5e3e706b5b383c(&var_6c8, &var_db8, 2);
    clap_builder::builder::command::Command::arg::h297e42c44a483805(&var_a28, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::new::he31db453408f65ac(&var_428, 
        "block-sizehuman-readablesikibiby…");
    clap_builder::builder::arg::Arg::long::hf1b525fb88a45cb8(&var_db8, &var_428, 
        "block-sizehuman-readablesikibiby…");
    memcpy(&var_428, &var_db8, 0x248);
    let var_1e0_2: i32 = 0x80 | rcx_46;
    let var_1dc_2: i32 = var_7dc;
    clap_builder::builder::arg::Arg::value_name::h88914e24105a6084(&var_db8, &var_428, 
        "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    clap_builder::builder::arg::Arg::help::hfcd8d38da1de68a9(&var_428, &var_db8, 
        "scale sizes by BLOCK_SIZE when p…", 0x2c);
    var_6c8 = "sikibibytes";
    let var_6c0_7: i64 = 2;
    let var_6b8_7: *const i8 = "human-readablesikibibytes";
    let var_6b0_6: i64 = 0xe;
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
    let var_d88_5: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_d80_5: i64 = 6;
    let var_da0_5: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_5: i64 = 8;
    let var_da8_5: i64 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    let var_d88_6: *const i8 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    let var_d80_6: i64 = 4;
    let var_da0_6: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_6: i64 = 8;
    let var_da8_6: i64 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    let mut var_d88_7: *const i8 = "nevernointernal error: entered u…";
    let var_d80_7: i64 = 5;
    let var_da0_7: i64 = -0x8000000000000000;
    var_d98 = var_dc8;
    var_db8 = nullptr;
    let var_db0_7: i64 = 8;
    let mut var_da8_7: i64 = 0;
    var_d78_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    var_da8_7 = var_ac0;
    var_d98 = var_dc8;
    var_d88_7 = var_aa0;
    let mut var_d78_3: i64 = var_a90;
    var_d70 = var_b60;
    var_d60 = var_b50;
    var_d50 = var_dc8;
    var_d40 = var_b30;
    let var_d30_2: i64 = var_b20;
    let var_ce8_2: i64 = var_ad8;
    let var_cf8_2: i128 = var_ae8;
    let var_d08_2: i128 = var_dc8;
    let var_d18_2: i128 = var_b08;
    let var_d28_2: i128 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    memcpy(&var_428, &var_db8, 0x248);
    let mut var_6b8_8: i64 = var_750;
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
    let var_db0_8: i64 = 4;
    let var_da8_8: *const i8 = "slashCOLUMNS: ignoring invalid w…";
    let var_da0_8: i64 = 5;
    let mut var_d98_1: *const i8 = "file-typeslashCOLUMNS: ignoring …";
    let var_d90_1: i64 = 9;
    let var_d88_8: *mut u64 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    let var_d80_8: i64 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h546ec2737a00a8df(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_a28, &var_6c8);
    let mut var_708: *const i8 = "file-type/rustc/8bfcae730a5db243…";
    let var_700: i64 = 9;
    let var_6f8: *const i8 = "pfile-type/rustc/8bfcae730a5db24…";
    let var_6e8: *mut u64 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    let var_6d8: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_9f8_6: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_9f0_6: i64 = 0xf;
    let var_a08_3: *mut u64 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    let var_a00_3: i64 = 8;
    let var_a18_6: *const i8 = "pfile-type/rustc/8bfcae730a5db24…";
    let var_a10_6: i64 = 1;
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
    let var_d88_9: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_d80_9: i64 = 6;
    let var_da0_9: i64 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    let var_db0_9: i64 = 8;
    let var_da8_9: i64 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_ad0, 
        &var_6c8, "forcettyif-ttynevernointernal er…");
    let var_d88_10: *const i8 = "autoBoolcodetimeHashtip:\x1b[3mC…";
    let var_d80_10: i64 = 4;
    let var_da0_10: i64 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    let var_db0_10: i64 = 8;
    let var_da8_10: i64 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b60, 
        &var_6c8, "if-ttynevernointernal error: ent…");
    let mut var_d88_11: *const i8 = "nevernointernal error: entered u…";
    let var_d80_11: i64 = 5;
    let var_da0_11: i64 = -0x8000000000000000;
    var_d98_1 = var_dc8;
    var_db8 = nullptr;
    let var_db0_11: i64 = 8;
    let mut var_da8_11: i64 = 0;
    var_d78_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_6c8, 
        &var_db8, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h26f5d1ed7f3bbf44(&var_b18, 
        &var_6c8, "nonehelpNoneshimcallSlimname\x1b…");
    var_db8 = var_ad0;
    var_da8_11 = var_ac0;
    var_d98_1 = var_dc8;
    var_d88_11 = var_aa0;
    let var_d78_4: i64 = var_a90;
    var_d70 = var_b60;
    var_d60 = var_b50;
    var_d50 = var_dc8;
    var_d40 = var_b30;
    let var_d30_3: i64 = var_b20;
    let var_ce8_3: i64 = var_ad8;
    let var_cf8_3: i128 = var_ae8;
    let var_d08_3: i128 = var_dc8;
    let var_d18_3: i128 = var_b08;
    let var_d28_3: i128 = var_b18;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h34b8c81c50234897(&var_6c8, &var_db8);
    clap_builder::builder::arg::Arg::value_parser::h24dd058799c86fb0(&var_db8, &var_428, &var_6c8);
    clap_builder::builder::arg::Arg::default_missing_value::h56f225d7434596d8(&var_428, &var_db8);
    memcpy(&var_db8, &var_428, 0x248);
    let var_b70_3: i32 = 0x80 | 0x80 | rcx_46;
    let var_b6c_3: i32 = var_7dc;
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
    arg1
}
