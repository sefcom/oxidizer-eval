
  fn uu_basename::uu_app::h0214ef177401846b(arg1: i64) -> i64

{
    let mut var_5b0: ();
    clap_builder::builder::command::Command::new::h459332d9f8e578d8(&var_5b0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_2e8: ();
    clap_builder::builder::command::Command::version::hfb65dc2f2ba316e0(&var_2e8, &var_5b0);
    clap_builder::builder::command::Command::about::he0ea2338ffab2ea1(&var_5b0, &var_2e8);
    let mut var_830: ();
    uucore::format_usage::he053403a896311ed(&var_830, "{} [-z] NAME [SUFFIX]\n{} OPTION…", 0x2a);
    clap_builder::builder::command::Command::override_usage::hb9d846602d926a8a(&var_2e8, &var_5b0, 
        &var_830);
    memcpy(&var_5b0, &var_2e8, 0x2bc);
    let var_2c: i64;
    let var_2f4: i64 = 0x8000000080 | var_2c;
    let var_24: i32;
    let var_2ec: i32 = var_24;
    clap_builder::builder::arg::Arg::new::hd6bcf8aadc168148(&var_2e8, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::arg::Arg::short::h9f636bb963379e35(&var_830, &var_2e8, 0x61);
    clap_builder::builder::arg::Arg::long::h1e62d214933c52ba(&var_2e8, &var_830, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::arg::Arg::help::h03a2805fd44da2fc(&var_830, &var_2e8, 
        "support multiple arguments and t…", 0x33);
    clap_builder::builder::arg::Arg::action::h4cb045f44981e661(&var_2e8, &var_830, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5482812f43ef6bd4(&var_830, &var_2e8, 
        "multipleNO_COLOREL3HLTEL3RSTELNR…");
    clap_builder::builder::command::Command::arg::ha61b074e9aba73cf(&var_2e8, &var_5b0, &var_830);
    clap_builder::builder::arg::Arg::new::hd6bcf8aadc168148(&var_5b0, &data_417744[0xc]);
    clap_builder::builder::arg::Arg::action::h4cb045f44981e661(&var_830, &var_5b0, 1);
    clap_builder::builder::arg::Arg::value_hint::h1cf79802a65db06a(&var_5b0, &var_830);
    memcpy(&var_830, &var_5b0, 0x278);
    let var_338: i32;
    let var_5b8: i32 = 0x204 | var_338;
    let var_334: i32;
    let var_5b4: i32 = var_334;
    clap_builder::builder::command::Command::arg::ha61b074e9aba73cf(&var_5b0, &var_2e8, &var_830);
    clap_builder::builder::arg::Arg::new::hd6bcf8aadc168148(&var_2e8, 
        "suffix(uutils coreutils) 0.0.30{…");
    clap_builder::builder::arg::Arg::short::h9f636bb963379e35(&var_830, &var_2e8, 0x73);
    clap_builder::builder::arg::Arg::long::h1e62d214933c52ba(&var_2e8, &var_830, 
        "suffix(uutils coreutils) 0.0.30{…");
    clap_builder::builder::arg::Arg::value_name::h1b3c279dd8907e24(&var_830, &var_2e8);
    clap_builder::builder::arg::Arg::help::h03a2805fd44da2fc(&var_2e8, &var_830, 
        "remove a trailing SUFFIX; implie…", 0x24);
    clap_builder::builder::arg::Arg::overrides_with::h5482812f43ef6bd4(&var_830, &var_2e8, 
        "suffix(uutils coreutils) 0.0.30{…");
    clap_builder::builder::command::Command::arg::ha61b074e9aba73cf(&var_2e8, &var_5b0, &var_830);
    clap_builder::builder::arg::Arg::new::hd6bcf8aadc168148(&var_5b0, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::short::h9f636bb963379e35(&var_830, &var_5b0, 0x7a);
    clap_builder::builder::arg::Arg::long::h1e62d214933c52ba(&var_5b0, &var_830, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::help::h03a2805fd44da2fc(&var_830, &var_5b0, 
        "end each output line with NUL, n…", 0x2a);
    clap_builder::builder::arg::Arg::action::h4cb045f44981e661(&var_5b0, &var_830, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5482812f43ef6bd4(&var_830, &var_5b0, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::command::Command::arg::ha61b074e9aba73cf(arg1, &var_2e8, &var_830);
    arg1
}
