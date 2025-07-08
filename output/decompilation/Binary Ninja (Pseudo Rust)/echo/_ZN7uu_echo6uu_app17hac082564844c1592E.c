
  fn uu_echo::uu_app::hac082564844c1592(arg1: i64) -> i64

{
    let mut var_a48: ();
    clap_builder::builder::command::Command::new::hc7ec6dfb1f3b4da7(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_780: ();
    memcpy(&var_780, &var_a48, 0x2bc);
    let var_78c: i32;
    let var_4c4: i32 = var_78c | 0x22;
    let var_788: i64;
    let var_4c0: i64 = var_788;
    clap_builder::builder::command::Command::version::hafd05bea21e57d41(&var_a48, &var_780);
    clap_builder::builder::command::Command::about::hf2b328b183190985(&var_780, &var_a48);
    clap_builder::builder::command::Command::after_help::hcc85c3a742b69a8b(&var_a48, &var_780);
    let mut var_4b8: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_4b8, "{} [OPTIONS]... [STRING]...no_ne…", 0x1b);
    clap_builder::builder::command::Command::override_usage::h92e7942a580e103d(&var_780, &var_a48, 
        &var_4b8);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&var_a48, 
        "no_newlinedo not output the trai…");
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&var_4b8, &var_a48, 0x6e);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&var_a48, &var_4b8, 
        "do not output the trailing newli…", 0x22);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&var_780, 
        "enable_backslash_escapeenable in…");
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&var_4b8, &var_780, 0x65);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&var_780, &var_4b8, 
        "enable interpretation of backsla…", 0x2a);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&var_4b8, &var_780, 2);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::overrides_with::h554d066c90c03c16(&var_268, &var_4b8, 
        "disable_backslash_escapedisable …");
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&var_a48, 
        "disable_backslash_escapedisable …");
    clap_builder::builder::arg::Arg::short::h0c0faedee966dc35(&var_4b8, &var_a48, 0x45);
    clap_builder::builder::arg::Arg::help::h832a6dbb682de13b(&var_a48, &var_4b8, 
        "disable interpretation of backsl…", 0x35);
    clap_builder::builder::arg::Arg::action::hf068255853920169(&var_4b8, &var_a48, 2);
    clap_builder::builder::arg::Arg::overrides_with::h554d066c90c03c16(&var_268, &var_4b8, 
        "enable_backslash_escapeenable in…");
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::hb5e8990be33da4cd(&var_780, "STRING ");
    clap_builder::builder::arg::Arg::action::hf068255853920169(&var_4b8, &var_780, 1);
    var_268 = 2;
    clap_builder::builder::arg::Arg::value_parser::h5c4830a846a90deb(&var_780, &var_4b8, &var_268);
    clap_builder::builder::command::Command::arg::h68fa26210e2f8086(arg1, &var_a48, &var_780);
    arg1
}
