
  int64_t uu_sleep::uu_app::h7f221250c3adad43(int64_t arg1)

{
    void var_530;
    clap_builder::builder::command::Command::new::h550840e1cc1ba956(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    void var_7f8;
    clap_builder::builder::command::Command::version::ha3a67252f6f91644(&var_7f8, &var_530, 
        "0.0.28{} NUMBER[SUFFIX]...\n{} O…");
    clap_builder::builder::command::Command::about::h76115d2a8ee9f3e6(&var_530, &var_7f8, 
        "Pause for NUMBER seconds.Pause f…", 0x19);
    clap_builder::builder::command::Command::after_help::he1950b12e48d234e(&var_7f8, &var_530, 
        "Pause for NUMBER seconds.  SUFFI…", 0x14f);
    void var_268;
    uucore::format_usage::h76fcb2d15fbabc58(&var_268, "{} NUMBER[SUFFIX]...\n{} OPTIONN…", 0x1e);
    clap_builder::builder::command::Command::override_usage::hfb5f500f09c205e8(&var_530, &var_7f8, 
        &var_268);
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::ha16ac1f27ee23c7e(&var_530, 
        "NUMBERpause for NUMBER secondsIn…");
    clap_builder::builder::arg::Arg::help::hd1cb79528c548903(&var_268, &var_530);
    clap_builder::builder::arg::Arg::value_name::he21f62fd7314821f(&var_530, &var_268);
    clap_builder::builder::arg::Arg::action::h97274f682063a2c0(&var_268, &var_530);
    clap_builder::builder::command::Command::arg::h4d4defefb4443c82(arg1, &var_7f8, &var_268);
    return arg1;
}
