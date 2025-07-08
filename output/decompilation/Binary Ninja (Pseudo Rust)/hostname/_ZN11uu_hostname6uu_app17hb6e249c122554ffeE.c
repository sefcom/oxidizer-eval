
  fn uu_hostname::uu_app::hb6e249c122554ffe(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::hb139fd9343407bd7(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::hff495f94e3e0025a(&var_530, &var_7f8, 
        "0.0.28Display or set the system'…");
    clap_builder::builder::command::Command::about::h43dcb4d052bb4fe4(&var_7f8, &var_530, 
        "Display or set the system's host…", 0x26);
    let mut var_268: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_268, "{} [OPTION]... [HOSTNAME]Display…", 0x19);
    clap_builder::builder::command::Command::override_usage::h53f06f4b08c7f7b6(&var_530, &var_7f8, 
        &var_268);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&var_530, 
        "domainip-addressshort0.0.28Displ…");
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&var_268, &var_530, 0x64);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&var_530, &var_268, 
        "domainip-addressshort0.0.28Displ…");
    let mut var_878: *const i8 = "domainip-addressshort0.0.28Displ…";
    let var_870: i64 = 6;
    let var_868: *const i8 = "ip-addressshort0.0.28Display or …";
    let var_858: *const i8 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    let var_848: *const i8 = "short0.0.28Display or set the sy…";
    let mut var_808: *const i8 = "short0.0.28Display or set the sy…";
    let var_800: i64 = 5;
    let mut var_818: *const i8 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    let var_810: i64 = 4;
    let mut var_828: *const i8 = "ip-addressshort0.0.28Display or …";
    let var_820: i64 = 0xa;
    let mut var_838: i128 = var_878;
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&var_268, &var_530, 
        &var_838);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&var_530, &var_268, 
        "Display the name of the DNS doma…", 0x2e);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&var_268, &var_530);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&var_7f8, 
        "ip-addressshort0.0.28Display or …");
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&var_268, &var_7f8, 0x69);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&var_7f8, &var_268, 
        "ip-addressshort0.0.28Display or …");
    var_808 = var_848;
    var_818 = var_858;
    var_828 = var_868;
    var_838 = var_878;
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&var_268, &var_7f8, 
        &var_838);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&var_7f8, &var_268, 
        "Display the network address(es) …", 0x2b);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&var_268, &var_7f8);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&var_530, 
        "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&var_268, &var_530, 0x66);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&var_530, &var_268, 
        "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…");
    var_808 = var_848;
    var_818 = var_858;
    var_828 = var_868;
    var_838 = var_878;
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&var_268, &var_530, 
        &var_838);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&var_530, &var_268, 
        "Display the FQDN (Fully Qualifie…", 0x38);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&var_268, &var_530);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&var_7f8, 
        "short0.0.28Display or set the sy…");
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&var_268, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&var_7f8, &var_268, 
        "short0.0.28Display or set the sy…");
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&var_268, &var_7f8, 
        &var_878);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&var_7f8, &var_268, 
        "Display the short hostname (the …", 0x49);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&var_268, &var_7f8);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&var_530, &data_41440c);
    var_838 = 2;
    clap_builder::builder::arg::Arg::value_parser::h416a268b4c9bffcb(&var_268, &var_530, &var_838);
    clap_builder::builder::arg::Arg::value_hint::h058a03a9ff0f6c99(&var_530, &var_268, 0xa);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(arg1, &var_7f8, &var_530);
    arg1
}
