
  int64_t uu_groups::uu_app::he4594228214da6d4(int64_t arg1)

{
    void var_828;
    clap_builder::builder::command::Command::new::hba7101efe3ab5e30(&var_828, 
        uucore::util_name::h074417a1e6395129());
    void var_560;
    clap_builder::builder::command::Command::version::hff776f66e12095d8(&var_560, &var_828);
    clap_builder::builder::command::Command::about::h115288191613c7de(&var_828, &var_560);
    void var_298;
    uucore::format_usage::he053403a896311ed(&var_298, "{} [OPTION]... [USERNAME]...cann…", 0x1c);
    clap_builder::builder::command::Command::override_usage::h15314e9673ad9714(&var_560, &var_828, 
        &var_298);
    memcpy(&var_828, &var_560, 0x2bc);
    int64_t var_2a4;
    int64_t var_56c = 0x8000000080 | var_2a4;
    int32_t var_29c;
    int32_t var_564 = var_29c;
    clap_builder::builder::arg::Arg::new::h6fa0ce176ebf1297(&var_560);
    clap_builder::builder::arg::Arg::action::h4f45c9ece1cf3ebf(&var_298, &var_560);
    clap_builder::builder::arg::Arg::value_name::hcea4a92290dafa1c(&var_560, &var_298);
    clap_builder::builder::arg::Arg::value_hint::h0b3246f705c0d9f2(&var_298, &var_560);
    clap_builder::builder::command::Command::arg::h5194433792eef060(arg1, &var_828, &var_298);
    return arg1;
}
