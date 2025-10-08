
  fn uu_ls::uu_app::h9a6b851284402e3c(arg1: i64) -> i64

{
    let mut var_390: ();
    clap_builder::builder::command::Command::new::hade136bb8d3ce40c(&var_390, 
        uucore::util_name::h074417a1e6395129());
    let mut var_658: *const i8;
    clap_builder::builder::command::Command::version::h8252c3133c7709e9(&var_658, &var_390);
    let mut var_c38: *const i8;
    uucore::format_usage::he053403a896311ed(&var_c38, "{} [OPTION]... [FILE]...List dir…", 0x18);
    clap_builder::builder::command::Command::override_usage::he9e437dd84185fc9(&var_390, &var_658, 
        &var_c38);
    clap_builder::builder::command::Command::about::h6ae6e44359fe2b67(&var_658, &var_390);
    memcpy(&var_390, &var_658, 0x2bc);
    let var_39c: i64;
    let var_d4: i64 = 0x8008800080088 | var_39c;
    let var_394: i32;
    let var_cc: i32 = var_394;
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "helpnoneSDMTHKWTNonecallNZDTshim…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "helpnoneSDMTHKWTNonecallNZDTshim…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Print help information.Set the d…", 0x17);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 5);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "formatignore-backupsdirectoryino…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "formatignore-backupsdirectoryino…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Set the display format.Display t…", 0x17);
    var_c38 = "long', 'FFMTZero\x1b[7mauto";
    let var_c30: i64 = 4;
    let var_c28: *const i8 = "verbosesingle-columncolumnsacros…";
    let var_c20: i64 = 7;
    let mut var_c18: *const i8 = "single-columncolumnsacrosshorizo…";
    let var_c10: i64 = 0xd;
    let var_c08: *const i8 = "columnsacrosshorizontalcommasint…";
    let var_c00: i64 = 7;
    let mut var_bf8: *const i8 = "vertical";
    let mut var_bf0: i64 = 8;
    let var_be8: *const i8 = "acrosshorizontalcommasinternal e…";
    let mut var_be0: i64 = 6;
    let var_bd8: *const i8 = "horizontalcommasinternal error: …";
    let mut var_bd0: i64 = 0xa;
    let var_bc8: *const i8 = "commasinternal error: entered un…";
    let mut var_bc0: i64 = 6;
    let mut var_8d8: *const i8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::haea924a45c8fd222(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_390, &var_8d8);
    memcpy(&var_390, &var_c38, 0x278);
    let var_9c0: i32;
    let var_118: i32 = 0x90 | var_9c0;
    let var_9bc: i32;
    let var_114: i32 = var_9bc;
    var_8d8 = "formatignore-backupsdirectoryino…";
    let var_8d0: i64 = 6;
    let var_8c8: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_8c0: i64 = 1;
    let var_8b8: *const i8 = "long', 'FFMTZero\x1b[7mauto";
    let var_8b0: i64 = 4;
    let var_8a8: *const i8 = "xtabsizemgonumeric-uid-gidallalm…";
    let var_8a0: i64 = 1;
    let var_898: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_890: i64 = 1;
    let var_888: *const i8 = "diredhyperlink%b %e  %Y%Y-%m-%d …";
    let var_880: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "Cxtabsizemgonumeric-uid-gidallal…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x43);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Display the files in columns.Dis…", 0x1d);
    var_8d8 = "formatignore-backupsdirectoryino…";
    let var_8d0_1: i64 = 6;
    let var_8c8_1: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_8c0_1: i64 = 1;
    let var_8b8_1: *const i8 = "long', 'FFMTZero\x1b[7mauto";
    let var_8b0_1: i64 = 4;
    let var_8a8_1: *const i8 = "xtabsizemgonumeric-uid-gidallalm…";
    let var_8a0_1: i64 = 1;
    let var_898_1: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_890_1: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8097d04ad996c65d(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "long', 'FFMTZero\x1b[7mauto");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x6c);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "long', 'FFMTZero\x1b[7mauto");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Display detailed information.Lis…", 0x1d);
    var_8d8 = "formatignore-backupsdirectoryino…";
    let var_8d0_2: i64 = 6;
    let var_8c8_2: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_8c0_2: i64 = 1;
    let var_8b8_2: *const i8 = "long', 'FFMTZero\x1b[7mauto";
    let var_8b0_2: i64 = 4;
    let var_8a8_2: *const i8 = "xtabsizemgonumeric-uid-gidallalm…";
    let var_8a0_2: i64 = 1;
    let var_898_2: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_890_2: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8097d04ad996c65d(&var_390, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_390, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "xtabsizemgonumeric-uid-gidallalm…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x78);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "List entries in rows instead of …", 0x2b);
    var_8d8 = "formatignore-backupsdirectoryino…";
    let var_8d0_3: i64 = 6;
    let var_8c8_3: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_8c0_3: i64 = 1;
    let var_8b8_3: *const i8 = "long', 'FFMTZero\x1b[7mauto";
    let var_8b0_3: i64 = 4;
    let var_8a8_3: *const i8 = "xtabsizemgonumeric-uid-gidallalm…";
    let var_8a0_3: i64 = 1;
    let var_898_3: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_890_3: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8097d04ad996c65d(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "tabsizemgonumeric-uid-gidallalmo…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x54);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "tabsizemgonumeric-uid-gidallalmo…");
    clap_builder::builder::arg::Arg::env::h77f2b28cd2e0ca5b(&var_c38, &var_390, 
        "TABSIZE(uutils coreutils) 0.0.30…");
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_390, &var_c38, 
        "COLSWHENhashkeysZuluEESTu128for<…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Assume tab stops at each COLS in…", 0x2a);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "mgonumeric-uid-gidallalmost-allS…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x6d);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "List entries separated by commas…", 0x21);
    var_8d8 = "formatignore-backupsdirectoryino…";
    let var_8d0_4: i64 = 6;
    let var_8c8_4: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_8c0_4: i64 = 1;
    let var_8b8_4: *const i8 = "long', 'FFMTZero\x1b[7mauto";
    let var_8b0_4: i64 = 4;
    let var_8a8_4: *const i8 = "xtabsizemgonumeric-uid-gidallalm…";
    let var_8a0_4: i64 = 1;
    let var_898_4: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
    let var_890_4: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8097d04ad996c65d(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "zerowhenAnsiEire -- \x1b[8mhelpn…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "zerowhenAnsiEire -- \x1b[8mhelpn…");
    clap_builder::builder::arg::Arg::overrides_with::hda8369a98aa355cd(&var_390, &var_c38, 
        "zerowhenAnsiEire -- \x1b[8mhelpn…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "List entries separated by ASCII …", 0x2f);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "diredhyperlink%b %e  %Y%Y-%m-%d …");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "diredhyperlink%b %e  %Y%Y-%m-%d …");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_658, &var_c38, 0x44);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "generate output designed for Ema…", 0x41);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_658, &var_c38, 2);
    clap_builder::builder::arg::Arg::overrides_with::hda8369a98aa355cd(&var_c38, &var_658, 
        "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…");
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "hyperlink%b %e  %Y%Y-%m-%d %Y-%m…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "hyperlink file names WHENList on…", 0x19);
    let var_c08_1: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_c00_1: i64 = 6;
    let var_c20_1: i64 = -0x8000000000000000;
    let var_c48: i128;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_1: i64 = 8;
    let var_c28_1: i64 = 0;
    var_bf8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "yesforcettyif-ttynevernointernal…");
    let mut var_9b0: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_9b0, 
        &var_8d8, "forcettyif-ttynevernointernal er…");
    let var_c08_2: *const i8 = "auto";
    let var_c00_2: i64 = 4;
    let var_c20_2: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_2: i64 = 8;
    let var_c28_2: i64 = 0;
    var_bf8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "ttyif-ttynevernointernal error: …");
    let mut var_968: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_968, 
        &var_8d8, "if-ttynevernointernal error: ent…");
    let mut var_c08_3: *const i8 = "nevernointernal error: entered u…";
    let var_c00_3: i64 = 5;
    let var_c20_3: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_3: i64 = 8;
    let mut var_c28_3: i64 = 0;
    var_bf8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "nointernal error: entered unreac…");
    let mut var_920: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_920, 
        &var_8d8, "noneSDMTHKWTNonecallNZDTshimSlim…");
    var_c38 = var_9b0;
    let mut var_9a0: i128;
    var_c28_3 = var_9a0;
    let var_990: i128;
    var_c18 = var_990;
    let mut var_980: i128;
    var_c08_3 = var_980;
    let mut var_970: i64;
    let mut var_bf8_1: i64 = var_970;
    var_bf0 = var_968;
    let mut var_958: i128;
    var_be0 = var_958;
    let var_948: i128;
    var_bd0 = var_948;
    let mut var_938: i128;
    var_bc0 = var_938;
    let mut var_928: i64;
    let var_bb0: i64 = var_928;
    let mut var_8e0: i64;
    let var_b68: i64 = var_8e0;
    let mut var_8f0: i128;
    let var_b78: i128 = var_8f0;
    let var_900: i128;
    let var_b88: i128 = var_900;
    let mut var_910: i128;
    let var_b98: i128 = var_910;
    let var_ba8: i128 = var_920;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hba21500d3bf5bb45(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_390, &var_8d8);
    memcpy(&var_390, &var_c38, 0x278);
    let var_118_1: i32 = 0x80 | var_9c0;
    let var_114_1: i32 = var_9bc;
    clap_builder::builder::arg::Arg::num_args::h7328b4081dd82874(&var_c38, &var_390, 0);
    clap_builder::builder::arg::Arg::default_missing_value::h11c612c1fa0658ea(&var_390, &var_c38);
    clap_builder::builder::arg::Arg::default_value::ha88ce1d125fc7fd3(&var_c38, &var_390);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_390, &var_c38, 
        "WHENhashkeysZuluEESTu128for<ansi…");
    clap_builder::builder::arg::Arg::overrides_with::hda8369a98aa355cd(&var_c38, &var_390, 
        "diredhyperlink%b %e  %Y%Y-%m-%d …");
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "1Cxtabsizemgonumeric-uid-gidalla…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x31);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "List one file per line.Long form…", 0x17);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "onumeric-uid-gidallalmost-allStU…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x6f);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Long format without group inform…", 0x52);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_390, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "gonumeric-uid-gidallalmost-allSt…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x67);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Long format without owner inform…", 0x26);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "numeric-uid-gidallalmost-allStUv…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x6e);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "numeric-uid-gidallalmost-allStUv…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "-l with numeric UIDs and GIDs.Se…", 0x1e);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "quoting-stylehide-control-charss…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "quoting-stylehide-control-charss…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Set quoting style.c-maybelUse li…", 0x12);
    let var_90: *const i8 = "literalquote-namepfile-typederef…";
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
    var_980 = "shell-escapeshell-escape-alwaysi…";
    *var_980[8] = 0xc;
    *var_9a0[8] = -0x8000000000000000;
    var_9b0 = 0;
    *var_9b0[8] = 8;
    var_9a0 = 0;
    var_970 = 0;
    var_938 = "shell-alwaysshell-escapeshell-es…";
    *var_938[8] = 0xc;
    *var_958[8] = -0x8000000000000000;
    var_968 = 0;
    *var_968[8] = 8;
    var_958 = 0;
    var_928 = 0;
    var_8f0 = "shell-escape-alwaysinternal erro…";
    *var_8f0[8] = 0x13;
    *var_910[8] = -0x8000000000000000;
    var_920 = 0;
    *var_920[8] = 8;
    var_910 = 0;
    var_8e0 = 0;
    let mut var_c08_4: *const i8 = "cblock-sizehuman-readablesikibib…";
    let var_c00_4: i64 = 1;
    let var_c20_4: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_4: i64 = 8;
    let mut var_c28_4: i64 = 0;
    var_bf8_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "c-maybelUse literal quoting styl…");
    let var_a68: i128 = var_c48;
    var_c38 = var_c0;
    var_c28_4 = var_b0;
    var_c18 = var_c48;
    var_c08_4 = var_90;
    let mut var_bf8_2: i64 = var_80;
    var_bf0 = var_78;
    var_be0 = var_68;
    var_bd0 = var_c48;
    var_bc0 = var_48;
    let var_bb0_1: i64 = var_38;
    let var_b68_1: i64 = var_970;
    let var_b78_1: i128 = var_980;
    let var_b88_1: i128 = var_c48;
    let var_b98_1: i128 = var_9a0;
    let var_ba8_1: i128 = var_9b0;
    let var_b20: i64 = var_928;
    let var_b30: i128 = var_938;
    let var_b40: i128 = var_c48;
    let var_b50: i128 = var_958;
    let var_b60: i128 = var_968;
    let var_ad8: i64 = var_8e0;
    let var_ae8: i128 = var_8f0;
    let var_af8: i128 = var_c48;
    let var_b08: i128 = var_910;
    let var_b18: i128 = var_920;
    let var_a90: *const i8 = var_898_4;
    let var_aa0: i128 = var_8a8_4;
    let var_ab0: i128 = var_8b8_4;
    let var_ac0: i128 = var_8c8_4;
    let var_ad0: i128 = var_8d8;
    let var_a88: i64 = 0;
    let var_a80: i64 = 8;
    let var_a78: i64 = 0;
    let var_a70: i64 = -0x8000000000000000;
    let var_a58: *const i8 = "escapeliteralquote-namepfile-typ…";
    let var_a50: i64 = 6;
    let var_a48: i8 = 0;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h8b1dc3e7daf4d209(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_658, &var_8d8);
    var_658 = "quoting-stylehide-control-charss…";
    let var_650: i64 = 0xd;
    let var_648: *const i8 = "literalquote-namepfile-typederef…";
    let var_640: i64 = 7;
    let mut var_638: *const i8 = "escapeliteralquote-namepfile-typ…";
    let var_630: i64 = 6;
    let var_628: *const i8 = "quote-namepfile-typedereferenced…";
    let var_620: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_8d8, &var_c38, 
        &var_658);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "literalquote-namepfile-typederef…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x4e);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "literalquote-namepfile-typederef…");
    clap_builder::builder::arg::Arg::alias::h7dc45e80685a9adb(&var_c38, &var_390);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Use literal quoting style. Equiv…", 0x42);
    var_8d8 = "quoting-stylehide-control-charss…";
    let var_8d0_5: i64 = 0xd;
    let var_8c8_5: *const i8 = "literalquote-namepfile-typederef…";
    let var_8c0_5: i64 = 7;
    let var_8b8_5: *const i8 = "escapeliteralquote-namepfile-typ…";
    let var_8b0_5: i64 = 6;
    let var_8a8_5: *const i8 = "quote-namepfile-typedereferenced…";
    let var_8a0_5: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "escapeliteralquote-namepfile-typ…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x62);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "escapeliteralquote-namepfile-typ…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "Use escape quoting style. Equiva…", 0x40);
    var_8d8 = "quoting-stylehide-control-charss…";
    let var_8d0_6: i64 = 0xd;
    let var_8c8_6: *const i8 = "literalquote-namepfile-typederef…";
    let var_8c0_6: i64 = 7;
    let var_8b8_6: *const i8 = "escapeliteralquote-namepfile-typ…";
    let var_8b0_6: i64 = 6;
    let var_8a8_6: *const i8 = "quote-namepfile-typedereferenced…";
    let var_8a0_6: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_658, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "quote-namepfile-typedereferenced…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x51);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "quote-namepfile-typedereferenced…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Use C quoting style. Equivalent …", 0x36);
    var_8d8 = "quoting-stylehide-control-charss…";
    let var_8d0_7: i64 = 0xd;
    let var_8c8_7: *const i8 = "literalquote-namepfile-typederef…";
    let var_8c0_7: i64 = 7;
    let var_8b8_7: *const i8 = "escapeliteralquote-namepfile-typ…";
    let var_8b0_7: i64 = 6;
    let var_8a8_7: *const i8 = "quote-namepfile-typedereferenced…";
    let var_8a0_7: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_390, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_390, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "hide-control-charsshow-control-c…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x71);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "hide-control-charsshow-control-c…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "Replace control characters with …", 0x3c);
    var_8d8 = "hide-control-charsshow-control-c…";
    let var_8d0_8: i64 = 0x12;
    let var_8c8_8: *const i8 = "show-control-charswidthauthorfor…";
    let var_8c0_8: i64 = 0x12;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_658, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "show-control-charswidthauthorfor…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "show-control-charswidthauthorfor…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Show control characters 'as is' …", 0x38);
    var_8d8 = "hide-control-charsshow-control-c…";
    let var_8d0_9: i64 = 0x12;
    let var_8c8_9: *const i8 = "show-control-charswidthauthorfor…";
    let var_8c0_9: i64 = 0x12;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "timeHashW-SUtip:\x1b[3mCOLSWHENh…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "timeHashW-SUtip:\x1b[3mCOLSWHENh…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Show time in <field>:\n\taccess …", 0xa5);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_c38, &var_658, 
        "fieldIf the long listing format …");
    let var_628_1: *const i8 = "atimeusemtimemodificationbirthin…";
    let var_620_1: i64 = 5;
    let var_640_1: i64 = -0x8000000000000000;
    var_638 = var_c48;
    var_658 = nullptr;
    let var_650_1: i64 = 8;
    let var_648_1: i64 = 0;
    let var_618: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_658, "accessatimeusemtimemodificationb…");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_9b0, 
        &var_8d8, "usemtimemodificationbirthinterna…");
    let var_628_2: *const i8 = "ctimestatusaccessatimeusemtimemo…";
    let var_620_2: i64 = 5;
    let var_640_2: i64 = -0x8000000000000000;
    var_638 = var_c48;
    var_658 = nullptr;
    let var_650_2: i64 = 8;
    let var_648_2: i64 = 0;
    let var_618_1: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_968, 
        &var_658, "statusaccessatimeusemtimemodific…");
    let var_628_3: *const i8 = "mtimemodificationbirthinternal e…";
    let var_620_3: i64 = 5;
    let var_640_3: i64 = -0x8000000000000000;
    var_638 = var_c48;
    var_658 = nullptr;
    let var_650_3: i64 = 8;
    let var_648_3: i64 = 0;
    let var_618_2: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_920, 
        &var_658, "modificationbirthinternal error:…");
    let mut var_628_4: *const i8 = "birthinternal error: entered unr…";
    let var_620_4: i64 = 5;
    let var_640_4: i64 = -0x8000000000000000;
    var_638 = var_c48;
    var_658 = nullptr;
    let var_650_4: i64 = 8;
    let mut var_648_4: i64 = 0;
    let mut var_618_3: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_658, "creation@");
    var_658 = var_9b0;
    var_648_4 = var_9a0;
    var_638 = var_c48;
    var_628_4 = var_980;
    var_618_3 = var_970;
    let mut var_610: i128 = var_968;
    let mut var_600: i128 = var_958;
    let mut var_5f0: i128 = var_c48;
    let var_5e0: i128 = var_938;
    let var_5d0: i64 = var_928;
    let var_588: i64 = var_8e0;
    let var_598: i128 = var_8f0;
    let var_5a8: i128 = var_c48;
    let var_5b8: i128 = var_910;
    let var_5c8: i128 = var_920;
    let var_540: *const i8 = var_898_4;
    let var_550: i128 = var_8a8_7;
    let var_560: i128 = var_8b8_7;
    let var_570: i128 = var_8c8_9;
    let var_580: i128 = var_8d8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hb83e21d56e0a14a8(&var_8d8, &var_658);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_658, &var_c38, &var_8d8);
    memcpy(&var_c38, &var_658, 0x278);
    let var_3e0: i32;
    let var_9c0_1: i32 = 0x90 | var_3e0;
    let var_3dc: i32;
    let var_9bc_1: i32 = var_3dc;
    var_658 = "timeHashW-SUtip:\x1b[3mCOLSWHENh…";
    let var_650_5: i64 = 4;
    let var_648_5: *const i8 = "ucblock-sizehuman-readablesikibi…";
    let var_640_5: i64 = 1;
    let var_638_1: *const i8 = "cblock-sizehuman-readablesikibib…";
    let var_630_1: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_8d8, &var_c38, 
        &var_658);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "cblock-sizehuman-readablesikibib…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x63);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "If the long listing format (e.g.…", 0x119);
    var_8d8 = "timeHashW-SUtip:\x1b[3mCOLSWHENh…";
    let var_8d0_10: i64 = 4;
    let var_8c8_10: *const i8 = "ucblock-sizehuman-readablesikibi…";
    let var_8c0_10: i64 = 1;
    let var_8b8_8: *const i8 = "cblock-sizehuman-readablesikibib…";
    let var_8b0_8: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "ucblock-sizehuman-readablesikibi…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x75);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "If the long listing format (e.g.…", 0xf7);
    var_8d8 = "timeHashW-SUtip:\x1b[3mCOLSWHENh…";
    let var_8d0_11: i64 = 4;
    let var_8c8_11: *const i8 = "ucblock-sizehuman-readablesikibi…";
    let var_8c0_11: i64 = 1;
    let var_8b8_9: *const i8 = "cblock-sizehuman-readablesikibib…";
    let var_8b0_9: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "hidehurdNZSTTBMTmainCubaWITAchar…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "hidehurdNZSTTBMTmainCubaWITAchar…");
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_390, &var_c38, 1);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_c38, &var_390, 
        "PATTERNdo not list implied entri…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_8d8, &var_c38, 
        "do not list implied entries matc…", 0x4b);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "ignorecontextgroup-directories-f…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x49);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "ignorecontextgroup-directories-f…");
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 1);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_658, &var_c38, 
        "PATTERNdo not list implied entri…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "do not list implied entries matc…", 0x32);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "ignore-backupsdirectoryinodereve…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x42);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "ignore-backupsdirectoryinodereve…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Ignore entries which end with ~.…", 0x20);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, &data_4cfeac[0x38]);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        &data_4cfeac[0x38]);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Sort by <field>: name, none (-U)…", 0x4f);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_c38, &var_658, 
        "fieldIf the long listing format …");
    var_658 = "nameSJMTYDDTACDTBDSTCyanWAST    …";
    let var_650_6: i64 = 4;
    let var_648_6: *const i8 = "noneSDMTHKWTNonecallNZDTshimSlim…";
    let var_640_6: i64 = 4;
    let var_638_2: *const i8 = "timeHashW-SUtip:\x1b[3mCOLSWHENh…";
    let var_630_2: i64 = 4;
    let var_628_5: *const i8 = "sizeIranWESTAKSTHKSTACSTi128 as …";
    let var_620_5: i64 = 4;
    var_618_3 = "versionextensioninternal error: …";
    var_610 = 7;
    *var_610[8] = "extensioninternal error: entered…";
    var_600 = 9;
    *var_600[8] = "widthauthorformatignore-backupsd…";
    var_5f0 = 5;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5dfc9f635934857d(&var_8d8, &var_658);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_658, &var_c38, &var_8d8);
    memcpy(&var_c38, &var_658, 0x278);
    let rax_18: i32 = 0x80 | var_3e0;
    var_658 = &data_4cfeac[0x38];
    let var_650_7: i64 = 4;
    let var_648_7: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_640_7: i64 = 1;
    let var_638_3: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_630_3: i64 = 1;
    let var_628_6: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_620_6: i64 = 1;
    var_618_3 = "vXucblock-sizehuman-readablesiki…";
    var_610 = 1;
    *var_610[8] = "Xucblock-sizehuman-readablesikib…";
    var_600 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_8d8, &var_c38, 
        &var_658);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "StUvXucblock-sizehuman-readables…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x53);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Sort by file size, largest first…", 0x21);
    var_8d8 = &data_4cfeac[0x38];
    let var_8d0_12: i64 = 4;
    let var_8c8_12: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_8c0_12: i64 = 1;
    let var_8b8_10: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_8b0_10: i64 = 1;
    let var_8a8_8: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_8a0_8: i64 = 1;
    let var_898_5: *const i8 = "vXucblock-sizehuman-readablesiki…";
    let var_890_5: i64 = 1;
    let var_888_1: *const i8 = "Xucblock-sizehuman-readablesikib…";
    let var_880_1: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "tUvXucblock-sizehuman-readablesi…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x74);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Sort by modification time (the '…", 0x43);
    var_8d8 = &data_4cfeac[0x38];
    let var_8d0_13: i64 = 4;
    let var_8c8_13: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_8c0_13: i64 = 1;
    let var_8b8_11: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_8b0_11: i64 = 1;
    let var_8a8_9: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_8a0_9: i64 = 1;
    let var_898_6: *const i8 = "vXucblock-sizehuman-readablesiki…";
    let var_890_6: i64 = 1;
    let var_888_2: *const i8 = "Xucblock-sizehuman-readablesikib…";
    let var_880_2: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "vXucblock-sizehuman-readablesiki…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x76);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Natural sort of (version) number…", 0x33);
    var_8d8 = &data_4cfeac[0x38];
    let var_8d0_14: i64 = 4;
    let var_8c8_14: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_8c0_14: i64 = 1;
    let var_8b8_12: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_8b0_12: i64 = 1;
    let var_8a8_10: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_8a0_10: i64 = 1;
    let var_898_7: *const i8 = "vXucblock-sizehuman-readablesiki…";
    let var_890_7: i64 = 1;
    let var_888_3: *const i8 = "Xucblock-sizehuman-readablesikib…";
    let var_880_3: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "Xucblock-sizehuman-readablesikib…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x58);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Sort alphabetically by entry ext…", 0x27);
    var_8d8 = &data_4cfeac[0x38];
    let var_8d0_15: i64 = 4;
    let var_8c8_15: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_8c0_15: i64 = 1;
    let var_8b8_13: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_8b0_13: i64 = 1;
    let var_8a8_11: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_8a0_11: i64 = 1;
    let var_898_8: *const i8 = "vXucblock-sizehuman-readablesiki…";
    let var_890_8: i64 = 1;
    let var_888_4: *const i8 = "Xucblock-sizehuman-readablesikib…";
    let var_880_4: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "UvXucblock-sizehuman-readablesik…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x55);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Do not sort; list the files in w…", 0xc5);
    var_8d8 = &data_4cfeac[0x38];
    let var_8d0_16: i64 = 4;
    let var_8c8_16: *const i8 = "StUvXucblock-sizehuman-readables…";
    let var_8c0_16: i64 = 1;
    let var_8b8_14: *const i8 = "tUvXucblock-sizehuman-readablesi…";
    let var_8b0_14: i64 = 1;
    let var_8a8_12: *const i8 = "UvXucblock-sizehuman-readablesik…";
    let var_8a0_12: i64 = 1;
    let var_898_9: *const i8 = "vXucblock-sizehuman-readablesiki…";
    let var_890_9: i64 = 1;
    let var_888_5: *const i8 = "Xucblock-sizehuman-readablesikib…";
    let var_880_5: i64 = 1;
    clap_builder::builder::arg::Arg::overrides_with_all::h8ded532cdfeba478(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "dereferencedereference-command-l…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x4c);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "dereferencedereference-command-l…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "When showing file information fo…", 0x81);
    var_8d8 = "dereferencedereference-command-l…";
    let var_8d0_17: i64 = 0xb;
    let var_8c8_17: *const i8 = "dereference-command-line-symlink…";
    let var_8c0_17: i64 = 0x27;
    let var_8b8_15: *const i8 = "dereference-command-linederefere…";
    let var_8b0_15: i64 = 0x18;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_658, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "dereference-command-line-symlink…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "dereference-command-line-symlink…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Do not follow symlinks except wh…", 0x64);
    var_8d8 = "dereferencedereference-command-l…";
    let var_8d0_18: i64 = 0xb;
    let var_8c8_18: *const i8 = "dereference-command-line-symlink…";
    let var_8c0_18: i64 = 0x27;
    let var_8b8_16: *const i8 = "dereference-command-linederefere…";
    let var_8b0_16: i64 = 0x18;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "dereference-command-linederefere…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x48);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "dereference-command-linederefere…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "Do not follow symlinks except wh…", 0x43);
    var_8d8 = "dereferencedereference-command-l…";
    let var_8d0_19: i64 = 0xb;
    let var_8c8_19: *const i8 = "dereference-command-line-symlink…";
    let var_8c0_19: i64 = 0x27;
    let var_8b8_17: *const i8 = "dereference-command-linederefere…";
    let var_8b0_17: i64 = 0x18;
    clap_builder::builder::arg::Arg::overrides_with_all::h5fa5ca83fdad2628(&var_658, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "no-groupPatternsParseIntcreation…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "no-groupPatternsParseIntcreation…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_390, &var_c38, 0x47);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Do not show group in long format…", 0x21);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "authorformatignore-backupsdirect…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "authorformatignore-backupsdirect…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Show author in long format. On t…", 0x61);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "allalmost-allStUvXucblock-sizehu…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x61);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "allalmost-allStUvXucblock-sizehu…");
    var_8d8 = "allalmost-allStUvXucblock-sizehu…";
    let var_8d0_20: i64 = 3;
    let var_8c8_20: *const i8 = "almost-allStUvXucblock-sizehuman…";
    let var_8c0_20: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Do not ignore hidden files (file…", 0x42);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_390, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "almost-allStUvXucblock-sizehuman…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x41);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "almost-allStUvXucblock-sizehuman…");
    var_8d8 = "allalmost-allStUvXucblock-sizehu…";
    let var_8d0_21: i64 = 3;
    let var_8c8_21: *const i8 = "almost-allStUvXucblock-sizehuman…";
    let var_8c0_21: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "In a directory, do not ignore al…", 0x5b);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "directoryinodereverserecursiveco…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x64);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "directoryinodereverserecursiveco…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Only list the names of directori…", 0xf3);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "human-readablesikibibytesescapel…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x68);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "human-readablesikibibytesescapel…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "Print human readable file sizes …", 0x33);
    var_8d8 = "block-sizehuman-readablesikibiby…";
    let var_8d0_22: i64 = 0xa;
    let var_8c8_22: *const i8 = "sikibibytesescapeliteralquote-na…";
    let var_8c0_22: i64 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_658, &var_c38, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "kibibytesescapeliteralquote-name…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x6b);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "kibibytesescapeliteralquote-name…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "default to 1024-byte blocks for …", 0x5d);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "sikibibytesescapeliteralquote-na…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "sikibibytesescapeliteralquote-na…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Print human readable file sizes …", 0x45);
    var_8d8 = "block-sizehuman-readablesikibiby…";
    let var_8d0_23: i64 = 0xa;
    let var_8c8_23: *const i8 = "human-readablesikibibytesescapel…";
    let var_8c0_23: i64 = 0xe;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "block-sizehuman-readablesikibiby…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "block-sizehuman-readablesikibiby…");
    memcpy(&var_390, &var_c38, 0x278);
    let var_118_2: i32 = 0x80 | rax_18;
    let var_114_2: i32 = var_3dc;
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_c38, &var_390, 
        "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "scale sizes by BLOCK_SIZE when p…", 0x2c);
    var_8d8 = "sikibibytesescapeliteralquote-na…";
    let var_8d0_24: i64 = 2;
    let var_8c8_24: *const i8 = "human-readablesikibibytesescapel…";
    let var_8c0_24: i64 = 0xe;
    clap_builder::builder::arg::Arg::overrides_with_all::h21717cdb38f6d6c4(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "inodereverserecursivecolorpathsi…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x69);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "inodereverserecursivecolorpathsi…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "print the index number of each f…", 0x23);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "reverserecursivecolorpathsindica…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x72);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, 
        "reverserecursivecolorpathsindica…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Reverse whatever the sorting met…", 0x83);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "recursivecolorpathsindicator-sty…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x52);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "recursivecolorpathsindicator-sty…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "List the contents of all directo…", 0x31);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "widthauthorformatignore-backupsd…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "widthauthorformatignore-backupsd…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_390, &var_c38, 0x77);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Assume that the terminal is COLS…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_8d8, &var_c38, 
        "COLSWHENhashkeysZuluEESTu128for<…");
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "sizeIranWESTAKSTHKSTACSTi128 as …");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x73);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "sizeIranWESTAKSTHKSTACSTi128 as …");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "print the allocated size of each…", 0x30);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "colorpathsindicator-styletime-st…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "colorpathsindicator-styletime-st…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Color output based on file type.…", 0x20);
    let var_c08_5: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_c00_5: i64 = 6;
    let var_c20_5: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_5: i64 = 8;
    let var_c28_5: i64 = 0;
    var_bf8_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_9b0, 
        &var_8d8, "forcettyif-ttynevernointernal er…");
    let var_c08_6: *const i8 = "auto";
    let var_c00_6: i64 = 4;
    let var_c20_6: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_6: i64 = 8;
    let var_c28_6: i64 = 0;
    var_bf8_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_968, 
        &var_8d8, "if-ttynevernointernal error: ent…");
    let mut var_c08_7: *const i8 = "nevernointernal error: entered u…";
    let var_c00_7: i64 = 5;
    let var_c20_7: i64 = -0x8000000000000000;
    var_c18 = var_c48;
    var_c38 = nullptr;
    let var_c30_7: i64 = 8;
    let mut var_c28_7: i64 = 0;
    var_bf8_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_920, 
        &var_8d8, "noneSDMTHKWTNonecallNZDTshimSlim…");
    var_c38 = var_9b0;
    var_c28_7 = var_9a0;
    var_c18 = var_c48;
    var_c08_7 = var_980;
    let mut var_bf8_3: i64 = var_970;
    var_bf0 = var_968;
    var_be0 = var_958;
    var_bd0 = var_c48;
    var_bc0 = var_938;
    let var_bb0_2: i64 = var_928;
    let var_b68_2: i64 = var_8e0;
    let var_b78_2: i128 = var_8f0;
    let var_b88_2: i128 = var_c48;
    let var_b98_2: i128 = var_910;
    let var_ba8_2: i128 = var_920;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hba21500d3bf5bb45(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_390, &var_8d8);
    memcpy(&var_390, &var_c38, 0x278);
    clap_builder::builder::arg::Arg::num_args::h7328b4081dd82874(&var_c38, &var_390, 0);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "indicator-styletime-stylefull-ti…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "indicator-styletime-stylefull-ti…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Append indicator with style WORD…", 0x74);
    var_c38 = "noneSDMTHKWTNonecallNZDTshimSlim…";
    let var_c30_8: i64 = 4;
    let var_c28_8: *const i8 = "slashCOLUMNS: ignoring invalid w…";
    let var_c20_8: i64 = 5;
    let mut var_c18_1: *const i8 = "file-typedereferencedereference-…";
    let var_c10_1: i64 = 9;
    let var_c08_8: *const i8 = "classi";
    let var_c00_8: i64 = 8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf74d2029c7d3aa42(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_658, &var_8d8);
    var_658 = "file-typedereferencedereference-…";
    let var_650_8: i64 = 9;
    let var_648_8: *const i8 = "pfile-typedereferencedereference…";
    let var_640_8: i64 = 1;
    let var_638_4: *const i8 = "classi";
    let var_630_4: i64 = 8;
    let var_628_7: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_620_7: i64 = 0xf;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_8d8, &var_c38, 
        &var_658);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, "classi");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x46);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_390, &var_c38, "classi");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "Append a character to each file …", 0x2b9);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_390, &var_c38, 
        "whenAnsiEire -- \x1b[8mhelpnoneS…");
    let var_c08_9: *const i8 = "alwaysyesforcettyif-ttynevernoin…";
    let var_c00_9: i64 = 6;
    let var_c20_9: i64 = -0x8000000000000000;
    var_c18_1 = var_c48;
    var_c38 = nullptr;
    let var_c30_9: i64 = 8;
    let var_c28_9: i64 = 0;
    var_bf8_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "yesforcettyif-ttynevernointernal…");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_9b0, 
        &var_8d8, "forcettyif-ttynevernointernal er…");
    let var_c08_10: *const i8 = "auto";
    let var_c00_10: i64 = 4;
    let var_c20_10: i64 = -0x8000000000000000;
    var_c18_1 = var_c48;
    var_c38 = nullptr;
    let var_c30_10: i64 = 8;
    let var_c28_10: i64 = 0;
    var_bf8_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "ttyif-ttynevernointernal error: …");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_968, 
        &var_8d8, "if-ttynevernointernal error: ent…");
    let mut var_c08_11: *const i8 = "nevernointernal error: entered u…";
    let var_c00_11: i64 = 5;
    let var_c20_11: i64 = -0x8000000000000000;
    var_c18_1 = var_c48;
    var_c38 = nullptr;
    let var_c30_11: i64 = 8;
    let mut var_c28_11: i64 = 0;
    var_bf8_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_8d8, 
        &var_c38, "nointernal error: entered unreac…");
    clap_builder::builder::possible_value::PossibleValue::alias::h9f8866c93660c54f(&var_920, 
        &var_8d8, "noneSDMTHKWTNonecallNZDTshimSlim…");
    var_c38 = var_9b0;
    var_c28_11 = var_9a0;
    var_c18_1 = var_c48;
    var_c08_11 = var_980;
    let var_bf8_4: i64 = var_970;
    var_bf0 = var_968;
    var_be0 = var_958;
    var_bd0 = var_c48;
    var_bc0 = var_938;
    let var_bb0_3: i64 = var_928;
    let var_b68_3: i64 = var_8e0;
    let var_b78_3: i128 = var_8f0;
    let var_b88_3: i128 = var_c48;
    let var_b98_3: i128 = var_910;
    let var_ba8_3: i128 = var_920;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hba21500d3bf5bb45(&var_8d8, &var_c38);
    clap_builder::builder::arg::Arg::value_parser::heec5dd8c76aa2b43(&var_c38, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::default_missing_value::h11c612c1fa0658ea(&var_390, &var_c38);
    memcpy(&var_c38, &var_390, 0x278);
    let var_9c0_3: i32 = 0x80 | 0x80 | rax_18;
    let var_9bc_3: i32 = var_3dc;
    clap_builder::builder::arg::Arg::num_args::h7328b4081dd82874(&var_390, &var_c38, 0);
    var_8d8 = "file-typedereferencedereference-…";
    let var_8d0_25: i64 = 9;
    let var_8c8_25: *const i8 = "pfile-typedereferencedereference…";
    let var_8c0_25: i64 = 1;
    let var_8b8_18: *const i8 = "classi";
    let var_8b0_18: i64 = 8;
    let var_8a8_13: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_8a0_13: i64 = 0xf;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "file-typedereferencedereference-…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "file-typedereferencedereference-…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "Same as --classify, but do not a…", 0x29);
    var_8d8 = "file-typedereferencedereference-…";
    let var_8d0_26: i64 = 9;
    let var_8c8_26: *const i8 = "pfile-typedereferencedereference…";
    let var_8c0_26: i64 = 1;
    let var_8b8_19: *const i8 = "classi";
    let var_8b0_19: i64 = 8;
    let var_8a8_14: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_8a0_14: i64 = 0xf;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_c38, &var_658, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "pfile-typedereferencedereference…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_390, 0x70);
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "Append / indicator to directorie…", 0x22);
    var_8d8 = "file-typedereferencedereference-…";
    let var_8d0_27: i64 = 9;
    let var_8c8_27: *const i8 = "pfile-typedereferencedereference…";
    let var_8c0_27: i64 = 1;
    let var_8b8_20: *const i8 = "classi";
    let var_8b0_20: i64 = 8;
    let var_8a8_15: *const i8 = "indicator-styletime-stylefull-ti…";
    let var_8a0_15: i64 = 0xf;
    clap_builder::builder::arg::Arg::overrides_with_all::h7820a239855f50d2(&var_c38, &var_390, 
        &var_8d8);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "time-stylefull-timeignorecontext…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_658, 
        "time-stylefull-timeignorecontext…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_658, &var_c38, 
        "time/date format with -l; see TI…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::h555fe71a8fa25575(&var_c38, &var_658, 
        "TIME_STYLElike -l --time-style=f…");
    clap_builder::builder::arg::Arg::env::h77f2b28cd2e0ca5b(&var_658, &var_c38, 
        "TIME_STYLElike -l --time-style=f…");
    clap_builder::builder::arg::Arg::value_parser::hce7be17ea9d3e038(&var_c38, &var_658);
    var_658 = "time-stylefull-timeignorecontext…";
    let var_650_9: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::haa16c618b3999d33(&var_8d8, &var_c38, 
        &var_658);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::overrides_with::hda8369a98aa355cd(&var_390, &var_c38, 
        "full-timeignorecontextgroup-dire…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_390, 
        "like -l --time-style=full-isogro…", 0x1d);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "contextgroup-directories-firstdi…");
    clap_builder::builder::arg::Arg::short::h412cada1f7d3ba63(&var_c38, &var_658, 0x5a);
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_658, &var_c38, 
        "contextgroup-directories-firstdi…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_c38, &var_658, 
        "print any security context of ea…", 0x35);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_8d8, &var_c38, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_8d8);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_390, 
        "group-directories-firstdiredhype…");
    clap_builder::builder::arg::Arg::long::hda60b1dde00284fa(&var_c38, &var_390, 
        "group-directories-firstdiredhype…");
    clap_builder::builder::arg::Arg::help::hd6e77a7993e746e9(&var_390, &var_c38, 
        "group directories before files; …", 0x78);
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_390, 2);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_390, &var_658, &var_c38);
    clap_builder::builder::arg::Arg::new::h7e866f1725a90e43(&var_658, 
        "pathsindicator-styletime-stylefu…");
    clap_builder::builder::arg::Arg::action::h81cb95c38f2cd278(&var_c38, &var_658, 1);
    clap_builder::builder::arg::Arg::value_hint::h3e36b459e469e3ab(&var_658, &var_c38);
    var_8d8 = 2;
    clap_builder::builder::arg::Arg::value_parser::hdfc7498dbba18b14(&var_c38, &var_658, &var_8d8);
    clap_builder::builder::command::Command::arg::hc1660e2d2d8055cb(&var_658, &var_390, &var_c38);
    clap_builder::builder::command::Command::after_help::h88cbd2f942e7ee68(arg1, &var_658);
    arg1
}
