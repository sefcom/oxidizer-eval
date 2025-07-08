
  int64_t uu_false::uu_app::he23c4502b9c9f7a3(int64_t arg1)

{
    void var_800;
    clap_builder::builder::command::Command::new::hf0f143c7c60ae8b9(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    clap_builder::builder::command::Command::version::hc3a426a510f4aa12(&var_538, &var_800);
    clap_builder::builder::command::Command::about::h44199b518ccd190d(&var_800, &var_538);
    memcpy(&var_538, &var_800, 0x2bc);
    int64_t var_544;
    int64_t var_27c = 0x14000000140000 | var_544;
    int32_t var_53c;
    int32_t var_274 = var_53c;
    clap_builder::builder::arg::Arg::new::h1673065d1d9f1523(&var_800, &data_411100);
    void var_270;
    clap_builder::builder::arg::Arg::long::hcccdcf21d1a5ce73(&var_270, &var_800, &data_411100);
    clap_builder::builder::arg::Arg::help::he5bc9eec78bee47c(&var_800, &var_270, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::h92abc2fbc7b890bd(&var_270, &var_800, 5);
    clap_builder::builder::command::Command::arg::h631a2dc306f6ea00(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h1673065d1d9f1523(&var_538, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::hcccdcf21d1a5ce73(&var_270, &var_538, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::he5bc9eec78bee47c(&var_538, &var_270, 
        "Print version informationsrc/uuc…", 0x19);
    clap_builder::builder::arg::Arg::action::h92abc2fbc7b890bd(&var_270, &var_538, 8);
    clap_builder::builder::command::Command::arg::h631a2dc306f6ea00(arg1, &var_800, &var_270);
    return arg1;
}
