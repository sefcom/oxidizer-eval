
  int64_t uu_pwd::uu_app::h4454d6573b8ab8c1(int64_t arg1)

{
    void var_a48;
    clap_builder::builder::command::Command::new::h4db4874b3d8a8e03(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    void var_780;
    clap_builder::builder::command::Command::version::hd81a191cd3852812(&var_780, &var_a48, 
        "0.0.28Display the full filename …");
    clap_builder::builder::command::Command::about::h2a616f008716511a(&var_a48, &var_780, 
        "Display the full filename of the…", 0x3b);
    void var_4b8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_4b8, "{} [OPTION]... [FILE]...logicalu…", 0x18);
    clap_builder::builder::command::Command::override_usage::hc7ce4cdbf0739487(&var_780, &var_a48, 
        &var_4b8);
    memcpy(&var_a48, &var_780, 0x2bc);
    int64_t var_4c4;
    int64_t var_78c = 0x8000000080 | var_4c4;
    int32_t var_4bc;
    int32_t var_784 = var_4bc;
    clap_builder::builder::arg::Arg::new::h9a2c8fb07ae21ef0(&var_780, 
        "logicaluse PWD from environment,…");
    clap_builder::builder::arg::Arg::short::ha1a52b1a12f316bd(&var_4b8, &var_780, 0x4c);
    clap_builder::builder::arg::Arg::long::h0f58ade3dc6edfdc(&var_780, &var_4b8, 
        "logicaluse PWD from environment,…");
    clap_builder::builder::arg::Arg::help::hcb45fc58d41bd583(&var_4b8, &var_780, 
        "use PWD from environment, even i…", 0x36);
    void var_268;
    clap_builder::builder::arg::Arg::action::h245ce03bcb8e7ef2(&var_268, &var_4b8);
    clap_builder::builder::command::Command::arg::h75d695ccf32429d8(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h9a2c8fb07ae21ef0(&var_a48, &data_412988[8]);
    clap_builder::builder::arg::Arg::short::ha1a52b1a12f316bd(&var_4b8, &var_a48, 0x50);
    clap_builder::builder::arg::Arg::long::h0f58ade3dc6edfdc(&var_a48, &var_4b8, &data_412988[8]);
    clap_builder::builder::arg::Arg::overrides_with::h8ab3139c02792904(&var_4b8, &var_a48, 
        "logicaluse PWD from environment,…");
    clap_builder::builder::arg::Arg::help::hcb45fc58d41bd583(&var_a48, &var_4b8, 
        "avoid all symlinksdescription() …", 0x12);
    clap_builder::builder::arg::Arg::action::h245ce03bcb8e7ef2(&var_4b8, &var_a48);
    clap_builder::builder::command::Command::arg::h75d695ccf32429d8(arg1, &var_780, &var_4b8);
    return arg1;
}
