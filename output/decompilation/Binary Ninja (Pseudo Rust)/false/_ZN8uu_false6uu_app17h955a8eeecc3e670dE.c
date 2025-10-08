
  fn uu_false::uu_app::h955a8eeecc3e670d(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h8ce23c60413c67bc(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::hf04954f790989f2f(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h48a6398cb6a7afc7(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x28000000280000 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h1d6b8bdc58eb74d0(&var_830, &data_4153c4);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::long::h66871fb1b16489e3(&var_2a0, &var_830, &data_4153c4);
    clap_builder::builder::arg::Arg::help::h62314f4fbec9a314(&var_830, &var_2a0, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::h68a2c9a1d7501fdc(&var_2a0, &var_830, 5);
    clap_builder::builder::command::Command::arg::hb068e5c29a7ce33c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h1d6b8bdc58eb74d0(&var_568, 
        "versionPrint version information");
    clap_builder::builder::arg::Arg::long::h66871fb1b16489e3(&var_2a0, &var_568, 
        "versionPrint version information");
    clap_builder::builder::arg::Arg::help::h62314f4fbec9a314(&var_568, &var_2a0, 
        "Print version information", 0x19);
    clap_builder::builder::arg::Arg::action::h68a2c9a1d7501fdc(&var_2a0, &var_568, 8);
    clap_builder::builder::command::Command::arg::hb068e5c29a7ce33c(arg1, &var_830, &var_2a0);
    arg1
}
