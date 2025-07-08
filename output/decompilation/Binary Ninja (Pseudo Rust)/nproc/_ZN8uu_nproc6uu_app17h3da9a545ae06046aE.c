
  fn uu_nproc::uu_app::h3da9a545ae06046a(arg1: i64) -> i64

{
    let mut var_800: ();
    clap_builder::builder::command::Command::new::hceccec51013e9e1c(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::h7bb5058d72446d03(&var_538, &var_800);
    clap_builder::builder::command::Command::about::h90572b7e349fba71(&var_800, &var_538);
    let mut var_270: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_270, "{} [OPTIONS]...print the number …", 0xf);
    clap_builder::builder::command::Command::override_usage::he65458940b2f4f13(&var_538, &var_800, 
        &var_270);
    memcpy(&var_800, &var_538, 0x2bc);
    let var_27c: i64;
    let var_544: i64 = 0x8000000080 | var_27c;
    let var_274: i32;
    let var_53c: i32 = var_274;
    clap_builder::builder::arg::Arg::new::he198255556941580(&var_538, 
        "allignore0.0.28Print the number …");
    clap_builder::builder::arg::Arg::long::h2e70cc18bf9510ea(&var_270, &var_538, 
        "allignore0.0.28Print the number …");
    clap_builder::builder::arg::Arg::help::h06a09468789626eb(&var_538, &var_270, 
        "print the number of cores availa…", 0x31);
    clap_builder::builder::arg::Arg::action::hfebe0cf4ee56a176(&var_270, &var_538);
    clap_builder::builder::command::Command::arg::hefe55eed1b7773c3(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::he198255556941580(&var_800, 
        "ignore0.0.28Print the number of …");
    clap_builder::builder::arg::Arg::long::h2e70cc18bf9510ea(&var_270, &var_800, 
        "ignore0.0.28Print the number of …");
    clap_builder::builder::arg::Arg::value_name::h41a3621bea01d5a7(&var_800, &var_270);
    clap_builder::builder::arg::Arg::help::h06a09468789626eb(&var_270, &var_800, 
        "ignore up to N coresdescription(…", 0x14);
    clap_builder::builder::command::Command::arg::hefe55eed1b7773c3(arg1, &var_538, &var_270);
    arg1
}
