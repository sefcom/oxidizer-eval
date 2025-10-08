
  int64_t uu_basename::uu_app::h0214ef177401846b(int64_t arg1)

{
    void var_5b0;
    clap_builder::builder::command::Command::new::h459332d9f8e578d8(&var_5b0, 
        uucore::util_name::h074417a1e6395129());
    void var_2e8;
    clap_builder::builder::command::Command::version::hfb65dc2f2ba316e0(&var_2e8, &var_5b0);
    clap_builder::builder::command::Command::about::he0ea2338ffab2ea1(&var_5b0, &var_2e8);
    void var_830;
    uucore::format_usage::he053403a896311ed(&var_830, "{} [-z] NAME [SUFFIX]\n{} OPTION…", 0x2a);
    clap_builder::builder::command::Command::override_usage::hb9d846602d926a8a(&var_2e8, &var_5b0, 
        &var_830);
    memcpy(&var_5b0, &var_2e8, 0x2bc);
    int64_t var_2c;
    int64_t var_2f4 = 0x8000000080 | var_2c;
    int32_t var_24;
    int32_t var_2ec = var_24;
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
    int32_t var_338;
    int32_t var_5b8 = 0x204 | var_338;
    int32_t var_334;
    int32_t var_5b4 = var_334;
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
    return arg1;
}
