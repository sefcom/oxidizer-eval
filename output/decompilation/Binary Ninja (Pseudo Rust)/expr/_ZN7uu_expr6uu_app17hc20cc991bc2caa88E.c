
  fn uu_expr::uu_app::hc20cc991bc2caa88(arg1: i64) -> i64

{
    let mut var_800: ();
    clap_builder::builder::command::Command::new::h76addc3ba26221e4(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::h66ca2875f1466deb(&var_538, &var_800);
    clap_builder::builder::command::Command::about::heb0ed7269ad341e1(&var_800, &var_538);
    let mut var_270: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_270, "{} [EXPRESSION]\n{} [OPTIONS]Pri…", 0x1c);
    clap_builder::builder::command::Command::override_usage::h7cc06664601e5526(&var_538, &var_800, 
        &var_270);
    clap_builder::builder::command::Command::after_help::ha3b77d5d1d813194(&var_800, &var_538);
    memcpy(&var_538, &var_800, 0x2bc);
    let var_544: i64;
    let var_27c: i64 = 0x14008000140080 | var_544;
    let var_53c: i32;
    let var_274: i32 = var_53c;
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&var_800, 
        "versionoutput version informatio…");
    clap_builder::builder::arg::Arg::long::h013cd6110297798e(&var_270, &var_800, 
        "versionoutput version informatio…");
    clap_builder::builder::arg::Arg::help::h6cc7c409285df083(&var_800, &var_270, 
        "output version information and e…", 0x23);
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&var_270, &var_800, 8);
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&var_538, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::long::h013cd6110297798e(&var_270, &var_538, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::help::h6cc7c409285df083(&var_538, &var_270, 
        "display this help and exitexpres…", 0x1a);
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&var_270, &var_538, 5);
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&var_800, 
        "expression/rustc/8bfcae730a5db24…");
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&var_270, &var_800, 1);
    memcpy(&var_800, &var_270, 0x248);
    let var_28: i32;
    let var_5b8: i32 = var_28 | 0x20;
    let var_24: i32;
    let var_5b4: i32 = var_24;
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(arg1, &var_538, &var_800);
    arg1
}
