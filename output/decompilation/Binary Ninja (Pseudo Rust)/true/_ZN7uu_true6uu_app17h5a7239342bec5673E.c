
  fn uu_true::uu_app::h5a7239342bec5673(arg1: i64) -> i64

{
    let mut var_800: ();
    clap_builder::builder::command::Command::new::h72e1b29d46a1b563(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::h24840c368b480049(&var_538, &var_800);
    clap_builder::builder::command::Command::about::hc7b9ed5bad34d8a3(&var_800, &var_538);
    memcpy(&var_538, &var_800, 0x2bc);
    let var_544: i64;
    let var_27c: i64 = 0x14000000140000 | var_544;
    let var_53c: i32;
    let var_274: i32 = var_53c;
    clap_builder::builder::arg::Arg::new::h1278cb3c9ee3e401(&var_800, &data_411100);
    let mut var_270: ();
    clap_builder::builder::arg::Arg::long::h6a5d014ad2c63709(&var_270, &var_800, &data_411100);
    clap_builder::builder::arg::Arg::help::h0b42e7173e3bc953(&var_800, &var_270, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::hc4228c65a5dc0bdb(&var_270, &var_800, 5);
    clap_builder::builder::command::Command::arg::hd535666a5988fe6a(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h1278cb3c9ee3e401(&var_538, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::h6a5d014ad2c63709(&var_270, &var_538, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::h0b42e7173e3bc953(&var_538, &var_270, 
        "Print version informationsrc/uuc…", 0x19);
    clap_builder::builder::arg::Arg::action::hc4228c65a5dc0bdb(&var_270, &var_538, 8);
    clap_builder::builder::command::Command::arg::hd535666a5988fe6a(arg1, &var_800, &var_270);
    arg1
}
