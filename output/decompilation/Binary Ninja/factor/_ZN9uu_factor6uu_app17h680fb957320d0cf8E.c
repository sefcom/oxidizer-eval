
  int64_t uu_factor::uu_app::h680fb957320d0cf8(int64_t arg1)

{
    void var_a50;
    clap_builder::builder::command::Command::new::hb5e4f03e9e5506b0(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    void var_788;
    clap_builder::builder::command::Command::version::h7b2f787e58b4ee93(&var_788, &var_a50);
    clap_builder::builder::command::Command::about::h7edd897f24cf3586(&var_a50, &var_788);
    void var_4c0;
    uucore::format_usage::h76fcb2d15fbabc58(&var_4c0, "{} [OPTION]... [NUMBER]...Print …", 0x1a);
    clap_builder::builder::command::Command::override_usage::ha9e3b5847de0e11a(&var_788, &var_a50, 
        &var_4c0);
    memcpy(&var_a50, &var_788, 0x2bc);
    int64_t var_4cc;
    int64_t var_794 = 0x4008800040088 | var_4cc;
    int32_t var_4c4;
    int32_t var_78c = var_4c4;
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&var_788, 
        "NUMBER0.0.28Print the prime fact…");
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&var_4c0, &var_788, 1);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(&var_788, &var_a50, &var_4c0);
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&var_a50, 
        "exponentsNUMBER0.0.28Print the p…");
    clap_builder::builder::arg::Arg::short::he98ee2dd7a709e3e(&var_4c0, &var_a50);
    clap_builder::builder::arg::Arg::long::hf6fb7bfc1a444d08(&var_a50, &var_4c0, 
        "exponentsNUMBER0.0.28Print the p…");
    clap_builder::builder::arg::Arg::help::h09a32e7dd5808c59(&var_4c0, &var_a50, 
        "Print factors in the form p^ePri…", 0x1d);
    void var_270;
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&var_270, &var_4c0, 2);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(&var_a50, &var_788, &var_270);
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&var_788, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::long::hf6fb7bfc1a444d08(&var_4c0, &var_788, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::help::h09a32e7dd5808c59(&var_788, &var_4c0, 
        "Print help information.Only odd …", 0x17);
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&var_4c0, &var_788, 5);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(arg1, &var_a50, &var_4c0);
    return arg1;
}
