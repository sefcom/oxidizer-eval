
  fn uu_cut::uu_app::h2a5a44b0da1a04d9(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::h9a8f3ee55af8c901(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h000f49d8f9d72961(&var_530, &var_7f8, 
        "0.0.28{} OPTION... [FILE]...Prin…");
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} OPTION... [FILE]...Prints spe…", 0x16);
    clap_builder::builder::command::Command::override_usage::h61d50ed17fd5192c(&var_7f8, &var_530, 
        &var_a48);
    clap_builder::builder::command::Command::about::h9b454bf679160896(&var_530, &var_7f8, 
        "Prints specified byte or field c…", 0x51);
    clap_builder::builder::command::Command::after_help::h3c9450aca7021bb3(&var_7f8, &var_530, 
        "Each call must specify a mode (w…", 0xc0b);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8800000088 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_7f8, 
        "bytesfilter byte columns from th…");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_7f8, 0x62);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_7f8, &var_a48, 
        "bytesfilter byte columns from th…");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_7f8, 
        "filter byte columns from the inp…", 0x29);
    memcpy(&var_7f8, &var_a48, 0x248);
    let var_800: i32;
    let var_5b0: i32 = var_800 | 0x20;
    let var_7fc: i32;
    let var_5ac: i32 = var_7fc;
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_a48, &var_7f8, 
        "LISTAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_530, 
        "charactersalias for character mo…");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_530, &var_a48, 
        "charactersalias for character mo…");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_530, 
        "alias for character modespecify …", 0x18);
    memcpy(&var_530, &var_a48, 0x248);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_a48, &var_530, 
        "LISTAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_7f8, 
        "delimiterinvalid input: Only one…");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_7f8, 0x64);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_7f8, &var_a48, 
        "delimiterinvalid input: Only one…");
    let mut var_a60: i64 = 2;
    let var_a50: i64;
    let var_258: i64 = var_a50;
    var_268 = var_a60;
    let var_a58: i64;
    let var_260: i64 = var_a58;
    clap_builder::builder::arg::Arg::value_parser::h2cda3b3bd319a7fa(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_7f8, &var_a48, 
        "specify the delimiter character …", 0x5b);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_a48, &var_7f8, 
        "DELIMUse any number of whitespac…");
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_530, "whitespace-delimited''");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_530, 0x77);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_530, &var_a48, 
        "Use any number of whitespace (Sp…", 0x65);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_a48, &var_530, 
        "WHITESPACEfieldsfilter field col…");
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_7f8, 
        "fieldsfilter field columns from …");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_7f8, 0x66);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_7f8, &var_a48, 
        "fieldsfilter field columns from …");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_7f8, 
        "filter field columns from the in…", 0x2a);
    memcpy(&var_7f8, &var_a48, 0x248);
    let var_5b0_1: i32 = var_800 | 0x20;
    let var_5ac_1: i32 = var_7fc;
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_a48, &var_7f8, 
        "LISTAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_530, 
        "complementinvert the filter - in…");
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_a48, &var_530, 
        "complementinvert the filter - in…");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_530, &var_a48, 
        "invert the filter - instead of d…", 0x62);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_7f8, 
        "only-delimitedin field mode, onl…");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_7f8, &var_a48, 
        "only-delimitedin field mode, onl…");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_7f8, 
        "in field mode, only print lines …", 0x3b);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_530, 
        "zero-terminatedinstead of filter…");
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&var_a48, &var_530, 0x7a);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_530, &var_a48, 
        "zero-terminatedinstead of filter…");
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_530, 
        "instead of filtering columns bas…", 0x57);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_7f8, 
        "output-delimiterPermissionDenied…");
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&var_a48, &var_7f8, 
        "output-delimiterPermissionDenied…");
    clap_builder::builder::arg::Arg::value_parser::h2cda3b3bd319a7fa(&var_7f8, &var_a48, &var_a60);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&var_a48, &var_7f8, 
        "in field mode, replace the delim…", 0x50);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&var_268, &var_a48, "NEW_DELIM");
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&var_530, 
        "filei128 as dyn Mismatch between…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_800_1: i32 = var_800 | 0x20 | 4;
    let var_7fc_1: i32 = var_7fc;
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_hint::h6e24acd5b6e1d083(&var_a48, &var_530, 3);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(arg1, &var_7f8, &var_a48);
    arg1
}
