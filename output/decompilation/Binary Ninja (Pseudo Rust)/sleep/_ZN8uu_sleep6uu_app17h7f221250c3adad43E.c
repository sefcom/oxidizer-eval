
  fn uu_sleep::uu_app::h7f221250c3adad43(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h550840e1cc1ba956(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::ha3a67252f6f91644(&var_7f8, &var_530, 
        "0.0.28{} NUMBER[SUFFIX]...\n{} O…");
    clap_builder::builder::command::Command::about::h76115d2a8ee9f3e6(&var_530, &var_7f8, 
        "Pause for NUMBER seconds.Pause f…", 0x19);
    clap_builder::builder::command::Command::after_help::he1950b12e48d234e(&var_7f8, &var_530, 
        "Pause for NUMBER seconds.  SUFFI…", 0x14f);
    let mut var_268: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_268, "{} NUMBER[SUFFIX]...\n{} OPTIONN…", 0x1e);
    clap_builder::builder::command::Command::override_usage::hfb5f500f09c205e8(&var_530, &var_7f8, 
        &var_268);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::ha16ac1f27ee23c7e(&var_530, 
        "NUMBERpause for NUMBER secondsIn…");
    clap_builder::builder::arg::Arg::help::hd1cb79528c548903(&var_268, &var_530);
    clap_builder::builder::arg::Arg::value_name::he21f62fd7314821f(&var_530, &var_268);
    clap_builder::builder::arg::Arg::action::h97274f682063a2c0(&var_268, &var_530);
    clap_builder::builder::command::Command::arg::h4d4defefb4443c82(arg1, &var_7f8, &var_268);
    arg1
}
