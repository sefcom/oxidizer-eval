
  fn uu_fold::uu_app::hfa78df7319f7c039(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h121b98b6d96da7a9(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::h24d9a7ca32fdd4ad(&var_7f8, &var_530, 
        "0.0.28{} [OPTION]... [FILE]...Wr…");
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]...Writes e…", 0x18);
    clap_builder::builder::command::Command::override_usage::h18d760c68336a81b(&var_530, &var_7f8, 
        &var_a48);
    clap_builder::builder::command::Command::about::h1c6534ca9f8e90fd(&var_7f8, &var_530, 
        "Writes each file (or standard in…", 0x68);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&var_7f8, 
        "bytescount using bytes rather th…");
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&var_a48, &var_7f8, 
        "bytescount using bytes rather th…");
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&var_7f8, &var_a48, 0x62);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&var_a48, &var_7f8, 
        "count using bytes rather than co…", 0x6c);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&var_530, 
        "spacesbreak lines at word bounda…");
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&var_a48, &var_530, 
        "spacesbreak lines at word bounda…");
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&var_530, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&var_a48, &var_530, 
        "break lines at word boundaries r…", 0x39);
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&var_7f8, 
        "widthset WIDTH as the maximum li…");
    clap_builder::builder::arg::Arg::long::h030a686b44dedf14(&var_a48, &var_7f8, 
        "widthset WIDTH as the maximum li…");
    clap_builder::builder::arg::Arg::short::h82aa05e7fad831b1(&var_7f8, &var_a48, 0x77);
    clap_builder::builder::arg::Arg::help::h1fd9c0a2ec06b765(&var_a48, &var_7f8, 
        "set WIDTH as the maximum line wi…", 0x32);
    clap_builder::builder::arg::Arg::value_name::h6bb6a5099e9af500(&var_7f8, &var_a48);
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800: i32 = var_5b0 | 0x20;
    let var_5ac: i32;
    let var_7fc: i32 = var_5ac;
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbeb9e909ddb12b0f(&var_530, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_2e8: i32;
    let var_800_1: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_7fc_1: i32 = var_2e4;
    clap_builder::builder::arg::Arg::action::h0f0b64d53278c1ae(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_hint::h4b1a98209220178f(&var_a48, &var_530, 3);
    clap_builder::builder::command::Command::arg::hd508bbbf326ffb39(arg1, &var_7f8, &var_a48);
    arg1
}
