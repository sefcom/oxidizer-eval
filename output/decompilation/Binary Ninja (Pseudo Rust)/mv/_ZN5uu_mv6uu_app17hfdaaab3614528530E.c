
  fn uu_mv::uu_app::hfdaaab3614528530(arg1: i64) -> i64

{
    let mut var_540: *mut c_void;
    clap_builder::builder::command::Command::new::h3ac40d4d2ba218e2(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_820: ();
    clap_builder::builder::command::Command::version::h3a5176627196e52e(&var_820, &var_540, 
        "0.0.28Move `SOURCE` to `DEST`, o…");
    clap_builder::builder::command::Command::about::h1d1180b4bea582ed(&var_540, &var_820, 
        "Move `SOURCE` to `DEST`, or mult…", 0x40);
    let mut var_a70: *mut *mut c_void;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a70, "{} [OPTION]... [-T] SOURCE DEST\n…", 0x68);
    clap_builder::builder::command::Command::override_usage::h447655dada94692d(&var_820, &var_540, 
        &var_a70);
    var_a70 = &data_587db0;
    let var_a68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
    let var_a60: *mut *mut c_void = &data_587da0;
    let var_a58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
    var_540 = &data_587dc0;
    let var_538: i64 = 2;
    let var_520: i64 = 0;
    let var_530: *const *mut *mut c_void = &var_a70;
    let var_528: i64 = 2;
    let mut var_558: ();
    core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_558, &var_540);
    clap_builder::builder::command::Command::after_help::hffed433d7565392e(&var_540, &var_820, 
        &var_558);
    memcpy(&var_820, &var_540, 0x2bc);
    let var_284: i64;
    let var_564: i64 = 0x8000000080 | var_284;
    let var_27c: i32;
    let var_55c: i32 = var_27c;
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_540, 
        "forceinteractiveno-clobberstrip-…");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_540, 0x66);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_540, &var_a70, 
        "forceinteractiveno-clobberstrip-…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_540, 
        "do not prompt before overwriting…", 0x20);
    let mut var_278: *const i8 = "interactiveno-clobberstrip-trail…";
    let var_270: i64 = 0xb;
    let var_268: *const i8 = "no-clobberstrip-trailing-slashes…";
    let var_260: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&var_540, &var_a70, 
        &var_278);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_540, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_820, 
        "interactiveno-clobberstrip-trail…");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_820, 0x69);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_820, &var_a70, 
        "interactiveno-clobberstrip-trail…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_820, 
        "prompt before overridedo not ove…", 0x16);
    var_278 = "forceinteractiveno-clobberstrip-…";
    let var_270_1: i64 = 5;
    let var_268_1: *const i8 = "no-clobberstrip-trailing-slashes…";
    let var_260_1: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&var_820, &var_a70, 
        &var_278);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_540, 
        "no-clobberstrip-trailing-slashes…");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_540, 0x6e);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_540, &var_a70, 
        "no-clobberstrip-trailing-slashes…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_540, 
        "do not overwrite an existing fil…", 0x21);
    var_278 = "forceinteractiveno-clobberstrip-…";
    let var_270_2: i64 = 5;
    let var_268_2: *const i8 = "interactiveno-clobberstrip-trail…";
    let var_260_2: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&var_540, &var_a70, 
        &var_278);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_540, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_820, 
        "strip-trailing-slashesno-target-…");
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_a70, &var_820, 
        "strip-trailing-slashesno-target-…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_820, &var_a70, 
        "remove any trailing slashes from…", 0x35);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&var_a70);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_a70);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&var_a70);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&var_a70);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_a70);
    uucore::features::update_control::arguments::update::h43d52bfaa3e04136(&var_a70);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    uucore::features::update_control::arguments::update_no_args::h0df581fe31ef9923(&var_a70);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_820, "target-directory/");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_820, 0x74);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_820, &var_a70, 
        "target-directory/");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_820, 
        "move all SOURCE arguments into D…", 0x28);
    clap_builder::builder::arg::Arg::value_name::h6c7f718e13d12b61(&var_820, &var_a70);
    clap_builder::builder::arg::Arg::value_hint::hd834dc4c6585e22d(&var_a70, &var_820, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h84a620ed2b3e8926(&var_820, &var_a70, 
        "no-target-directoryverbosefilesd…");
    let mut var_a88: *mut i8 = 2;
    let var_a78: i64;
    let var_268_3: i64 = var_a78;
    var_278 = var_a88;
    let var_a80: i64;
    let var_270_3: i64 = var_a80;
    clap_builder::builder::arg::Arg::value_parser::h36c41d5fcbf32a50(&var_a70, &var_820, &var_278);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_540, 
        "no-target-directoryverbosefilesd…");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_540, 0x54);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_540, &var_a70, 
        "no-target-directoryverbosefilesd…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_540, 
        "treat DEST as a normal fileexpla…", 0x1b);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_820, 
        "verbosefilesdebugThe backup suff…");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_820, 0x76);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_820, &var_a70, 
        "verbosefilesdebugThe backup suff…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_820, 
        "explain what is being doneDispla…", 0x1a);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_540, "progress");
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&var_a70, &var_540, 0x67);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_540, &var_a70, "progress");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_a70, &var_540, 
        "Display a progress bar. \nNote: …", 0x4e);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_540, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_820, 
        "filesdebugThe backup suffix is '…");
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_820, 1);
    clap_builder::builder::arg::Arg::num_args::hf9359e8da3676a05(&var_820, &var_a70);
    memcpy(&var_a70, &var_820, 0x248);
    let var_5d8: i32;
    let var_828: i32 = var_5d8 | 1;
    let var_5d4: i32;
    let var_824: i32 = var_5d4;
    clap_builder::builder::arg::Arg::value_parser::h36c41d5fcbf32a50(&var_820, &var_a70, &var_a88);
    clap_builder::builder::arg::Arg::value_hint::hd834dc4c6585e22d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&var_820, &var_540, &var_a70);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&var_540, 
        "debugThe backup suffix is '~', u…");
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&var_a70, &var_540, 
        "debugThe backup suffix is '~', u…");
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&var_540, &var_a70, 
        "explain how a file is copied. Im…", 0x28);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&var_a70, &var_540, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(arg1, &var_820, &var_a70);
    arg1
}
