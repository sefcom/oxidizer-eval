
  int64_t uu_sleep::uu_app::hdc95f04f3718f62f(int64_t arg1)

{
    void var_560;
    clap_builder::builder::command::Command::new::hc286858e88ead0e1(&var_560, 
        uucore::util_name::h074417a1e6395129());
    void var_828;
    clap_builder::builder::command::Command::version::hd4d830548186eaee(&var_828, &var_560);
    clap_builder::builder::command::Command::about::h35f2551108810745(&var_560, &var_828);
    clap_builder::builder::command::Command::after_help::hdb595e3094458c73(&var_828, &var_560);
    void var_298;
    uucore::format_usage::he053403a896311ed(&var_298, "{} NUMBER[SUFFIX]...\n{} OPTIONN…", 0x1e);
    clap_builder::builder::command::Command::override_usage::h374f4883a111a048(&var_560, &var_828, 
        &var_298);
    memcpy(&var_828, &var_560, 0x2bc);
    int64_t var_2a4;
    int64_t var_56c = 0x8000000080 | var_2a4;
    int32_t var_29c;
    int32_t var_564 = var_29c;
    clap_builder::builder::arg::Arg::new::h4dc5f7c8a6ef0c45(&var_560);
    clap_builder::builder::arg::Arg::help::hfed2f462879926ab(&var_298, &var_560);
    clap_builder::builder::arg::Arg::value_name::h281bf2b409414bc1(&var_560, &var_298);
    clap_builder::builder::arg::Arg::action::hf51fa3d02e3f8b86(&var_298, &var_560);
    clap_builder::builder::command::Command::arg::h85d5030d363477a1(arg1, &var_828, &var_298);
    return arg1;
}
