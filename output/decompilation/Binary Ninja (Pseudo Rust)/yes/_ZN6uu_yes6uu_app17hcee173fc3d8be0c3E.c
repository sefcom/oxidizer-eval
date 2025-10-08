
  fn uu_yes::uu_app::hcee173fc3d8be0c3(arg1: *mut c_void) -> *mut c_void

{
    let mut var_aa8: ();
    clap_builder::builder::command::Command::new::h49aac3302981be37(&var_aa8, 
        uucore::util_name::h074417a1e6395129());
    let mut var_560: ();
    clap_builder::builder::command::Command::version::h344c2ac0241135cf(&var_560, &var_aa8);
    clap_builder::builder::command::Command::about::h90a4fc34032dfe74(&var_aa8, &var_560);
    let mut var_7e0: ();
    uucore::format_usage::he053403a896311ed(&var_7e0, "{} [STRING]...STRINGassertion fa…", 0xe);
    clap_builder::builder::command::Command::override_usage::h9853b23b3f2882fb(&var_560, &var_aa8, 
        &var_7e0);
    clap_builder::builder::arg::Arg::new::h38a78d2059930b20(&var_aa8);
    let mut var_298: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::hd4bf3a752f7d00b9(&var_7e0, &var_aa8, &var_298);
    clap_builder::builder::arg::Arg::action::h6b46e0cedbe1953a(&var_298, &var_7e0);
    clap_builder::builder::command::Command::arg::h2ecf1aeda6f8bc73(&var_aa8, &var_560, &var_298);
    memcpy(arg1, &var_aa8, 0x2bc);
    let var_7ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_7ec;
    let var_7e4: i32;
    *arg1.byte_offset(0x2c4) = var_7e4;
    arg1
}
