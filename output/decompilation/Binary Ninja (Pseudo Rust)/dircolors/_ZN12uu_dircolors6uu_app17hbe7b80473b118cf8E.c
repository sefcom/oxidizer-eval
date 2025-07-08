
  fn uu_dircolors::uu_app::hbe7b80473b118cf8(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::hc413131adf548d44(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h5ff63027270245bf(&var_530, &var_7f8, 
        "0.0.28Output commands to set the…");
    clap_builder::builder::command::Command::about::h866a96b16dab5d72(&var_7f8, &var_530, 
        "Output commands to set the LS_CO…", 0x3a);
    clap_builder::builder::command::Command::after_help::h96074ec3991e2264(&var_530, &var_7f8, 
        "If FILE is specified, read it to…", 0xda);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]bourne-shel…", 0x15);
    clap_builder::builder::command::Command::override_usage::hb122e13d78447662(&var_7f8, &var_530, 
        &var_a48);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8800000088 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&var_7f8, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&var_a48, &var_7f8, 
        "shc-shelloutput Bourne shell cod…");
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&var_7f8, &var_a48, 0x62);
    clap_builder::builder::arg::Arg::visible_alias::he5413a367265731b(&var_a48, &var_7f8, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::overrides_with::ha0a57baf4ae7fa8c(&var_7f8, &var_a48, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&var_a48, &var_7f8, 
        "output Bourne shell code to set …", 0x29);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&var_530, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&var_a48, &var_530, 
        "cshLS_COLORS='setenv LS_COLORS '…");
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&var_530, &var_a48, 0x63);
    clap_builder::builder::arg::Arg::visible_alias::he5413a367265731b(&var_a48, &var_530, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::overrides_with::ha0a57baf4ae7fa8c(&var_530, &var_a48, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&var_a48, &var_530, 
        "output C shell code to set LS_CO…", 0x24);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&var_7f8, 
        "print-databaseprint the byte cou…");
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&var_a48, &var_7f8, 
        "print-databaseprint the byte cou…");
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&var_7f8, &var_a48, 0x70);
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&var_a48, &var_7f8, 
        "print the byte countsprint-ls-co…", 0x15);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&var_530, 
        "print-ls-colorsoutput fully esca…");
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&var_a48, &var_530, 
        "print-ls-colorsoutput fully esca…");
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&var_530, &var_a48, 
        "output fully escaped colors for …", 0x27);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&var_7f8, 
        "FILEchar.alz.mpg -> '\''.svg.flc…");
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800: i32 = var_5b0 | 4;
    let var_5ac: i32;
    let var_7fc: i32 = var_5ac;
    clap_builder::builder::arg::Arg::value_hint::he7281a51f1d9db5c(&var_7f8, &var_a48, 3);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&var_a48, &var_7f8, 1);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(arg1, &var_530, &var_a48);
    arg1
}
