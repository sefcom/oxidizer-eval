
  fn uu_expand::uu_app::h244b390e8990c65c(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::hfc6c8b31e1f3b5d9(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::hbee543eae6b1aabd(&var_7f8, &var_530, 
        "0.0.28Convert tabs in each `FILE…");
    clap_builder::builder::command::Command::about::h1a6582d3f5c95cc5(&var_530, &var_7f8, 
        "Convert tabs in each `FILE` to s…", 0x7e);
    clap_builder::builder::command::Command::after_help::h93937b3acdbe28a7(&var_7f8, &var_530, 1, 
        0);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]...do not c…", 0x18);
    clap_builder::builder::command::Command::override_usage::h8c4a27fecbffb0b0(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8800000088 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&var_530, 
        "initialno-utf8FILESfailed to wri…");
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&var_a48, &var_530, 
        "initialno-utf8FILESfailed to wri…");
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&var_530, &var_a48, 0x69);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&var_a48, &var_530, 
        "do not convert tabs after non bl…", 0x24);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&var_7f8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&var_a48, &var_7f8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&var_7f8, &var_a48, 0x74);
    clap_builder::builder::arg::Arg::value_name::hffbc3eef5026b0d6(&var_a48, &var_7f8);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&var_7f8, &var_a48, 1);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&var_a48, &var_7f8, 
        "have tabs N characters apart, no…", 0x59);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&var_530, 
        "no-utf8FILESfailed to write outp…");
    clap_builder::builder::arg::Arg::long::h4cce9299e3254cc4(&var_a48, &var_530, 
        "no-utf8FILESfailed to write outp…");
    clap_builder::builder::arg::Arg::short::h9feb5ee7bae1030b(&var_530, &var_a48, 0x55);
    clap_builder::builder::arg::Arg::help::hc42e98c4b39f72b2(&var_a48, &var_530, 
        "interpret input file as 8-bit AS…", 0x35);
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h444236ecf1ab14fb(&var_7f8, 
        "FILESfailed to write outputcapac…");
    clap_builder::builder::arg::Arg::action::hda9f4dbe01033f9e(&var_a48, &var_7f8, 1);
    memcpy(&var_7f8, &var_a48, 0x248);
    let var_800: i32;
    let var_5b0: i32 = var_800 | 4;
    let var_7fc: i32;
    let var_5ac: i32 = var_7fc;
    clap_builder::builder::arg::Arg::value_hint::h706c0d5e67080208(&var_a48, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::hfa75f4a9a76db4c2(arg1, &var_530, &var_a48);
    arg1
}
