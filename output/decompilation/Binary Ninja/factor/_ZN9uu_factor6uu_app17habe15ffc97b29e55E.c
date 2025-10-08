
  int64_t uu_factor::uu_app::habe15ffc97b29e55(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::hdcaab8b65a9e1cb0(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_7e8;
    clap_builder::builder::command::Command::version::ha8f1d239386b7a97(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::about::hdc20847c42ed6625(&var_ab0, &var_7e8);
    void var_520;
    uucore::format_usage::he053403a896311ed(&var_520, "{} [OPTION]... [NUMBER]...Print …", 0x1a);
    clap_builder::builder::command::Command::override_usage::h5d6a5e2c1e9f2fb2(&var_7e8, &var_ab0, 
        &var_520);
    memcpy(&var_ab0, &var_7e8, 0x2bc);
    int64_t var_52c;
    int64_t var_7f4 = 0x8008800080088 | var_52c;
    int32_t var_524;
    int32_t var_7ec = var_524;
    clap_builder::builder::arg::Arg::new::he7cb9d6ab12ea59f(&var_7e8, 
        "NUMBER(uutils coreutils) 0.0.30P…");
    clap_builder::builder::arg::Arg::action::he667cf7a08f99051(&var_520, &var_7e8, 1);
    clap_builder::builder::command::Command::arg::h5aadfb14ec5e8a6d(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::he7cb9d6ab12ea59f(&var_ab0, 
        "exponentsNUMBER(uutils coreutils…");
    clap_builder::builder::arg::Arg::short::h5310cc559ac3d9dd(&var_520, &var_ab0);
    clap_builder::builder::arg::Arg::long::h063e0b890c83162b(&var_ab0, &var_520, 
        "exponentsNUMBER(uutils coreutils…");
    clap_builder::builder::arg::Arg::help::hdce2363f08632f55(&var_520, &var_ab0, 
        "Print factors in the form p^ePri…", 0x1d);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::he667cf7a08f99051(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::h5aadfb14ec5e8a6d(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::he7cb9d6ab12ea59f(&var_7e8, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::long::h063e0b890c83162b(&var_520, &var_7e8, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::hdce2363f08632f55(&var_7e8, &var_520, 
        "Print help information.Only odd …", 0x17);
    clap_builder::builder::arg::Arg::action::he667cf7a08f99051(&var_520, &var_7e8, 5);
    clap_builder::builder::command::Command::arg::h5aadfb14ec5e8a6d(arg1, &var_ab0, &var_520);
    return arg1;
}
