
  int64_t uu_truncate::uu_app::hdd46c0ec29db3c96(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::habc07e768520ecdb(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::hd38b0567f5511ee1(&var_830, &var_568);
    clap_builder::builder::command::Command::about::h62627682378df86e(&var_568, &var_830);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...treat SI…", 0x18);
    clap_builder::builder::command::Command::override_usage::h52ca43afcd3b097c(&var_830, &var_568, 
        &var_ab0);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::he7d569d0c5e6aa05(&var_830, 
        "io-blocksno-createreferencefiles…");
    clap_builder::builder::arg::Arg::short::h4a5fd04a5ea3ce94(&var_ab0, &var_830, 0x6f);
    clap_builder::builder::arg::Arg::long::he2a86ef0046ce618(&var_830, &var_ab0, 
        "io-blocksno-createreferencefiles…");
    clap_builder::builder::arg::Arg::help::h91609bae8a5d3ddf(&var_ab0, &var_830, 
        "treat SIZE as the number of I/O …", 0x56);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h6c7becc968285d86(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h1dc9aee23d423d01(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he7d569d0c5e6aa05(&var_568, 
        "no-createreferencefiles(uutils c…");
    clap_builder::builder::arg::Arg::short::h4a5fd04a5ea3ce94(&var_ab0, &var_568, 0x63);
    clap_builder::builder::arg::Arg::long::he2a86ef0046ce618(&var_568, &var_ab0, 
        "no-createreferencefiles(uutils c…");
    clap_builder::builder::arg::Arg::help::h91609bae8a5d3ddf(&var_ab0, &var_568, 
        "do not create files that do not …", 0x25);
    clap_builder::builder::arg::Arg::action::h6c7becc968285d86(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h1dc9aee23d423d01(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he7d569d0c5e6aa05(&var_830, 
        "referencefiles(uutils coreutils)…");
    clap_builder::builder::arg::Arg::short::h4a5fd04a5ea3ce94(&var_ab0, &var_830, 0x72);
    clap_builder::builder::arg::Arg::long::he2a86ef0046ce618(&var_830, &var_ab0, 
        "referencefiles(uutils coreutils)…");
    clap_builder::builder::arg::Arg::required_unless_present::h65416279d5997ea5(&var_ab0, &var_830, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::h91609bae8a5d3ddf(&var_830, &var_ab0, 
        "base the size of each file on th…", 0x2f);
    clap_builder::builder::arg::Arg::value_name::h1ea2e814677343cd(&var_ab0, &var_830, 
        "RFILEset or adjust the size of e…");
    clap_builder::builder::arg::Arg::value_hint::hbfa99e75fed69c87(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h1dc9aee23d423d01(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he7d569d0c5e6aa05(&var_568, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h4a5fd04a5ea3ce94(&var_ab0, &var_568, 0x73);
    clap_builder::builder::arg::Arg::long::he2a86ef0046ce618(&var_568, &var_ab0, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::required_unless_present::h65416279d5997ea5(&var_ab0, &var_568, 
        "referencefiles(uutils coreutils)…");
    clap_builder::builder::arg::Arg::help::h91609bae8a5d3ddf(&var_568, &var_ab0, 
        "set or adjust the size of each f…", 0x68);
    clap_builder::builder::arg::Arg::value_name::h1ea2e814677343cd(&var_ab0, &var_568, 
        "SIZE) = Zero\x1b[7m");
    clap_builder::builder::command::Command::arg::h1dc9aee23d423d01(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::he7d569d0c5e6aa05(&var_830, 
        "files(uutils coreutils) 0.0.30Sh…");
    clap_builder::builder::arg::Arg::value_name::h1ea2e814677343cd(&var_ab0, &var_830, "FILEch");
    clap_builder::builder::arg::Arg::action::h6c7becc968285d86(&var_830, &var_ab0, 1);
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 1;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::arg::Arg::value_hint::hbfa99e75fed69c87(&var_830, &var_ab0);
    clap_builder::builder::command::Command::arg::h1dc9aee23d423d01(arg1, &var_568, &var_830);
    return arg1;
}
