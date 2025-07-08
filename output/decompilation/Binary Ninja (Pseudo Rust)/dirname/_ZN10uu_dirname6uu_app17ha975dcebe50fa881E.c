
  fn uu_dirname::uu_app::ha975dcebe50fa881(arg1: i64) -> i64

{
    let mut var_a50: ();
    clap_builder::builder::command::Command::new::hb046f67712759821(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::about::h720b423c651aed08(&var_538, &var_a50);
    clap_builder::builder::command::Command::version::h69e0937e50c79d67(&var_a50, &var_538);
    let mut var_788: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION] NAME...separate outp…", 0x13);
    clap_builder::builder::command::Command::override_usage::h0d65f62476436467(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    let var_27c: i64;
    let var_794: i64 = 0x8800000088 | var_27c;
    let var_274: i32;
    let var_78c: i32 = var_274;
    clap_builder::builder::arg::Arg::new::hfb3207caa17ab004(&var_538, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::long::h9ce92573d619fb83(&var_788, &var_538);
    clap_builder::builder::arg::Arg::short::hf6a78be7edbf3fcd(&var_538, &var_788);
    clap_builder::builder::arg::Arg::help::h13a2fa72baf7454d(&var_788, &var_538);
    let mut var_270: ();
    clap_builder::builder::arg::Arg::action::h9f538c7666116176(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc7633f806f6cf228(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::hfb3207caa17ab004(&var_a50, 
        "dirdescription() is deprecated; …");
    memcpy(&var_788, &var_a50, 0x248);
    let var_808: i32;
    let var_540: i32 = var_808 | 4;
    let var_804: i32;
    let var_53c: i32 = var_804;
    clap_builder::builder::arg::Arg::action::h9f538c7666116176(&var_a50, &var_788, 1);
    clap_builder::builder::arg::Arg::value_hint::h29d5c69655c28734(&var_788, &var_a50);
    clap_builder::builder::command::Command::arg::hc7633f806f6cf228(arg1, &var_538, &var_788);
    arg1
}
