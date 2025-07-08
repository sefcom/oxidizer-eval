
  fn uu_head::uu_app::h3a0d0603aeae9cb6(arg1: i64) -> i64

{
    let mut var_800: ();
    clap_builder::builder::command::Command::new::h92d2f05e153a1c13(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::hd889f9a77ef45556(&var_538, &var_800, 
        "0.0.28Print the first 10 lines o…");
    clap_builder::builder::command::Command::about::h0758d50f0a7c01fb(&var_800, &var_538, 
        "Print the first 10 lines of each…", 0x109);
    let mut var_a50: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a50, "{} [FLAG]... [FILE]...BYTESbytes…", 0x16);
    clap_builder::builder::command::Command::override_usage::h6fbe14a44972d743(&var_538, &var_800, 
        &var_a50);
    memcpy(&var_800, &var_538, 0x2bc);
    let var_27c: i64;
    let var_544: i64 = 0x8000000080 | var_27c;
    let var_274: i32;
    let var_53c: i32 = var_274;
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_538, 
        "BYTESbytes[-]NUMprint the first …");
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&var_a50, &var_538, 0x63);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_538, &var_a50, 
        "bytes[-]NUMprint the first NUM b…");
    clap_builder::builder::arg::Arg::value_name::h969f407953d1ea5a(&var_a50, &var_538);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&var_538, &var_a50, 
        "print the first NUM bytes of eac…", 0x6b);
    let mut var_270: *mut c_void = "BYTESbytes[-]NUMprint the first …";
    let var_268: i64 = 5;
    let var_260: *const i8 = "LINESlinesprint the first NUM li…";
    let var_258: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&var_a50, &var_538, 
        &var_270);
    memcpy(&var_270, &var_a50, 0x248);
    let var_808: i32;
    let var_28: i32 = var_808 | 0x20;
    let var_804: i32;
    let var_24: i32 = var_804;
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_800, 
        "LINESlinesprint the first NUM li…");
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&var_a50, &var_800, 0x6e);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_800, &var_a50, 
        "linesprint the first NUM lines i…");
    clap_builder::builder::arg::Arg::value_name::h969f407953d1ea5a(&var_a50, &var_800);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&var_800, &var_a50, 
        "print the first NUM lines instea…", 0x76);
    var_270 = "LINESlinesprint the first NUM li…";
    let var_268_1: i64 = 5;
    let var_260_1: *mut c_void = "BYTESbytes[-]NUMprint the first …";
    let var_258_1: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&var_a50, &var_800, 
        &var_270);
    memcpy(&var_270, &var_a50, 0x248);
    let var_28_1: i32 = var_808 | 0x20;
    let var_24_1: i32 = var_804;
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_538, 
        "QUIETquietsilentnever print head…");
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&var_a50, &var_538, 0x71);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_538, &var_a50, 
        "quietsilentnever print headers g…");
    clap_builder::builder::arg::Arg::visible_alias::h090d3a09074674d5(&var_a50, &var_538, 
        "silentnever print headers giving…");
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&var_538, &var_a50, 
        "never print headers giving file …", 0x25);
    var_270 = "VERBOSEverbosealways print heade…";
    let var_268_2: i64 = 7;
    let var_260_2: *const i8 = "QUIETquietsilentnever print head…";
    let var_258_2: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&var_a50, &var_538, 
        &var_270);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_800, 
        "VERBOSEverbosealways print heade…");
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&var_a50, &var_800, 0x76);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_800, &var_a50, 
        "verbosealways print headers givi…");
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&var_a50, &var_800, 
        "always print headers giving file…", 0x26);
    var_270 = "QUIETquietsilentnever print head…";
    let var_268_3: i64 = 5;
    let var_260_3: *const i8 = "VERBOSEverbosealways print heade…";
    let var_258_3: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&var_800, &var_a50, 
        &var_270);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&var_a50, &var_800, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_800, &var_538, &var_a50);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_538, 
        "-PRESUME-INPUT-PIPEpresume-input…");
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_a50, &var_538, 
        "presume-input-pipe-presume-input…");
    clap_builder::builder::arg::Arg::alias::h74bee99b7cf05cc8(&var_538, &var_a50, 
        "-presume-input-pipezero-terminat…");
    memcpy(&var_a50, &var_538, 0x248);
    let var_2f0: i32;
    let var_808_1: i32 = var_2f0 | 4;
    let var_2ec: i32;
    let var_804_1: i32 = var_2ec;
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_800, 
        "ZEROu128for<keysKindboolmut \x1b…");
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&var_a50, &var_800, 0x7a);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&var_800, &var_a50, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&var_a50, &var_800, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::overrides_with::h3dbbfa0259380c5a(&var_800, &var_a50, 
        "ZEROu128for<keysKindboolmut \x1b…");
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&var_a50, &var_800, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&var_800, &var_538, &var_a50);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&var_538, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&var_a50, &var_538, 1);
    clap_builder::builder::arg::Arg::value_hint::h445744d0bc011d63(&var_538, &var_a50, 3);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(arg1, &var_800, &var_538);
    arg1
}
