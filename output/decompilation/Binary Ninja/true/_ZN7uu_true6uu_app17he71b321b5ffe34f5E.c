
  int64_t uu_true::uu_app::he71b321b5ffe34f5(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::hc87e4909c4c858e6(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h9a4c3b19fe5a89ec(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hef80e6afefea7a46(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x28000000280000 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::hfda42851990e6d76(&var_830, &data_4153c4);
    void var_2a0;
    clap_builder::builder::arg::Arg::long::h9aff8c3492eec2c6(&var_2a0, &var_830, &data_4153c4);
    clap_builder::builder::arg::Arg::help::h787143956e027ce0(&var_830, &var_2a0, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::h602356f3b14b8056(&var_2a0, &var_830, 5);
    clap_builder::builder::command::Command::arg::h7db3d395ae49ba1f(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hfda42851990e6d76(&var_568, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::h9aff8c3492eec2c6(&var_2a0, &var_568, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::h787143956e027ce0(&var_568, &var_2a0, 
        "Print version information", 0x19);
    clap_builder::builder::arg::Arg::action::h602356f3b14b8056(&var_2a0, &var_568, 8);
    clap_builder::builder::command::Command::arg::h7db3d395ae49ba1f(arg1, &var_830, &var_2a0);
    return arg1;
}
