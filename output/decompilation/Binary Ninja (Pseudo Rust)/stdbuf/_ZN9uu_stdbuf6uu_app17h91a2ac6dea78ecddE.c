
  fn uu_stdbuf::uu_app::h91a2ac6dea78ecdd(arg1: i64) -> i64

{
    let mut var_2f8: ();
    clap_builder::builder::command::Command::new::h9ca623c83efd3946(&var_2f8, 
        uucore::util_name::h074417a1e6395129());
    let mut var_5c0: ();
    clap_builder::builder::command::Command::version::h21b85f57db025e92(&var_5c0, &var_2f8);
    clap_builder::builder::command::Command::about::hfde95826b8fb4cbb(&var_2f8, &var_5c0);
    clap_builder::builder::command::Command::after_help::hdf8ea01d2986567b(&var_5c0, &var_2f8);
    let mut var_840: ();
    uucore::format_usage::he053403a896311ed(&var_840, "{} [OPTION]... COMMANDadjust sta…", 0x16);
    clap_builder::builder::command::Command::override_usage::he89037e8ae7760d0(&var_2f8, &var_5c0, 
        &var_840);
    memcpy(&var_5c0, &var_2f8, 0x2bc);
    let var_3c: i64;
    let var_304: i64 = 0x80000000a0 | var_3c;
    let var_34: i32;
    let var_2fc: i32 = var_34;
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_2f8, 
        "inputoutputerrorLline buffering …");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_2f8, 
        "inputoutputerrorLline buffering …");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_2f8, &var_840, 0x69);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_2f8, 
        "adjust standard input stream buf…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_2f8, &var_840);
    let mut var_860: *const i8 = "outputerrorLline buffering stdin…";
    let var_858: i64 = 6;
    let var_850: *const i8 = "errorLline buffering stdin is me…";
    let var_848: i64 = 5;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_2f8, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_5c0, 
        "outputerrorLline buffering stdin…");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_5c0, 
        "outputerrorLline buffering stdin…");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_5c0, &var_840, 0x6f);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_5c0, 
        "adjust standard output stream bu…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_5c0, &var_840);
    var_860 = "inputoutputerrorLline buffering …";
    let var_858_1: i64 = 5;
    let var_850_1: *const i8 = "errorLline buffering stdin is me…";
    let var_848_1: i64 = 5;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_5c0, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_5c0, &var_2f8, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_2f8, 
        "errorLline buffering stdin is me…");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_2f8, 
        "errorLline buffering stdin is me…");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_2f8, &var_840, 0x65);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_2f8, 
        "adjust standard error stream buf…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_2f8, &var_840);
    var_860 = "inputoutputerrorLline buffering …";
    let var_858_2: i64 = 5;
    let var_850_2: *const i8 = "outputerrorLline buffering stdin…";
    let var_848_2: i64 = 6;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_2f8, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_5c0, "command");
    clap_builder::builder::arg::Arg::action::h550de8a59619d235(&var_840, &var_5c0);
    memcpy(&var_5c0, &var_840, 0x278);
    let var_5c8: i32;
    let var_348: i32 = var_5c8 | 5;
    let var_5c4: i32;
    let var_344: i32 = var_5c4;
    clap_builder::builder::arg::Arg::value_hint::h6b2dc8dbe8ff6fd0(&var_840, &var_5c0);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(arg1, &var_2f8, &var_840);
    arg1
}
