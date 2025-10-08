
  void* uu_logname::uu_app::h0a5118412066b45c(void* arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::h1726bf8a563a64d8(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    void var_5a8;
    clap_builder::builder::command::Command::version::h4d89bad1eea2c3ea(&var_5a8, &var_2e0);
    void var_5c0;
    uucore::format_usage::he053403a896311ed(&var_5c0, "{}Print user's login name", 2);
    clap_builder::builder::command::Command::override_usage::ha4889a5ab3c11964(&var_2e0, &var_5a8, 
        &var_5c0);
    clap_builder::builder::command::Command::about::h9f2ca867078d3eab(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    int64_t var_2ec;
    *(arg1 + 0x2bc) = 0x8000000080 | var_2ec;
    int32_t var_2e4;
    *(arg1 + 0x2c4) = var_2e4;
    return arg1;
}
