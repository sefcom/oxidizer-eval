
  fn uu_test::uu_app::h10b434699cb68342(arg1: i64) -> i64

{
    let mut var_5a8: ();
    clap_builder::builder::command::Command::new::h86888fb9719c6feb(&var_5a8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_2e0: ();
    clap_builder::builder::command::Command::version::h11223c262ea6b3ba(&var_2e0, &var_5a8, 
        "0.0.28Check file types and compa…");
    clap_builder::builder::command::Command::about::h3fae39b5d41a86a0(&var_5a8, &var_2e0, 
        "Check file types and compare val…", 0x24);
    let mut var_5c0: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_5c0, "test EXPRESSION\n[\n[ EXPRESSION…", 0x2f);
    clap_builder::builder::command::Command::override_usage::h5fcf5729777e988c(&var_2e0, &var_5a8, 
        &var_5c0);
    clap_builder::builder::command::Command::after_help::ha5016ec00ea585ed(arg1, &var_2e0, 
        "Exit with the status determined …", 0xbef);
    arg1
}
