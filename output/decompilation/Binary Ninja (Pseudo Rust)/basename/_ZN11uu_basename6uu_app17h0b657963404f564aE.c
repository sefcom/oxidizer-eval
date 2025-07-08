
  fn uu_basename::uu_app::h0b657963404f564a(arg1: i64) -> i64

{
    let mut var_5b0: ();
    clap_builder::builder::command::Command::new::ha7e74aad005b9b58(&var_5b0, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_2e8: ();
    clap_builder::builder::command::Command::version::h2ab79dc99314c352(&var_2e8, &var_5b0);
    clap_builder::builder::command::Command::about::hab620b7e1058a585(&var_5b0, &var_2e8);
    let mut var_800: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_800, "{} [-z] NAME [SUFFIX]\n{} OPTION…", 0x2a);
    clap_builder::builder::command::Command::override_usage::h60cd123b01a36509(&var_2e8, &var_5b0, 
        &var_800);
    memcpy(&var_5b0, &var_2e8, 0x2bc);
    let var_2c: i64;
    let var_2f4: i64 = 0x8000000080 | var_2c;
    let var_24: i32;
    let var_2ec: i32 = var_24;
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&var_2e8, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&var_800, &var_2e8, 0x61);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&var_2e8, &var_800, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&var_800, &var_2e8, 
        "support multiple arguments and t…", 0x33);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&var_2e8, &var_800, 2);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&var_800, &var_2e8, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&var_2e8, &var_5b0, &var_800);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&var_5b0, &data_412f24[0xc]);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&var_800, &var_5b0, 1);
    clap_builder::builder::arg::Arg::value_hint::hd37af2c9a3a8ca5f(&var_5b0, &var_800);
    memcpy(&var_800, &var_5b0, 0x248);
    let var_368: i32;
    let var_5b8: i32 = 0x204 | var_368;
    let var_364: i32;
    let var_5b4: i32 = var_364;
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&var_5b0, &var_2e8, &var_800);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&var_2e8, 
        "suffix0.0.28{} [-z] NAME [SUFFIX…");
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&var_800, &var_2e8, 0x73);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&var_2e8, &var_800, 
        "suffix0.0.28{} [-z] NAME [SUFFIX…");
    clap_builder::builder::arg::Arg::value_name::h2d3314c9c3f2d083(&var_800, &var_2e8);
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&var_2e8, &var_800, 
        "remove a trailing SUFFIX; implie…", 0x24);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&var_800, &var_2e8, 
        "suffix0.0.28{} [-z] NAME [SUFFIX…");
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&var_2e8, &var_5b0, &var_800);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&var_5b0, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&var_800, &var_5b0, 0x7a);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&var_5b0, &var_800, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&var_800, &var_5b0, 
        "end each output line with NUL, n…", 0x2a);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&var_5b0, &var_800, 2);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&var_800, &var_5b0, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(arg1, &var_2e8, &var_800);
    arg1
}
