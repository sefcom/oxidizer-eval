
  fn uu_true::uu_app::he71b321b5ffe34f5(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::hc87e4909c4c858e6(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h9a4c3b19fe5a89ec(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hef80e6afefea7a46(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x28000000280000 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::hfda42851990e6d76(&var_830, &data_4153c4);
    let mut var_2a0: ();
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
    arg1
}
