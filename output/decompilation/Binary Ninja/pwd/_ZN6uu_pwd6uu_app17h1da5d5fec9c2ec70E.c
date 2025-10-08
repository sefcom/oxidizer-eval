
  int64_t uu_pwd::uu_app::h1da5d5fec9c2ec70(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::h5fca40c868b15037(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h422d52aed385c4dc(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::hcb3952938f8d1d95(&var_ab0, &var_568);
    void var_7e8;
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... [FILE]...logicalu…", 0x18);
    clap_builder::builder::command::Command::override_usage::h168e0206c42023f4(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_7f4 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_7ec = var_2a4;
    clap_builder::builder::arg::Arg::new::h5113b35231dbc8f9(&var_568, 
        "logicaluse PWD from environment,…");
    clap_builder::builder::arg::Arg::short::h044d053bcf658b35(&var_7e8, &var_568, 0x4c);
    clap_builder::builder::arg::Arg::long::h5fc5f7754d706d79(&var_568, &var_7e8, 
        "logicaluse PWD from environment,…");
    clap_builder::builder::arg::Arg::help::hae64d7e49d4cea58(&var_7e8, &var_568, 
        "use PWD from environment, even i…", 0x36);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hb2ecec27f8e19abd(&var_2a0, &var_7e8);
    clap_builder::builder::command::Command::arg::ha0aebcf88b273cde(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5113b35231dbc8f9(&var_ab0, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::short::h044d053bcf658b35(&var_7e8, &var_ab0, 0x50);
    clap_builder::builder::arg::Arg::long::h5fc5f7754d706d79(&var_ab0, &var_7e8, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::overrides_with::hf79643918a1e51ba(&var_7e8, &var_ab0);
    clap_builder::builder::arg::Arg::help::hae64d7e49d4cea58(&var_ab0, &var_7e8, 
        "avoid all symlinks", 0x12);
    clap_builder::builder::arg::Arg::action::hb2ecec27f8e19abd(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::arg::ha0aebcf88b273cde(arg1, &var_568, &var_7e8);
    return arg1;
}
