
  void* uu_hostid::uu_app::h2645cc966e8adce6(void* arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::h3f771ea0450d13cb(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    void var_5a8;
    clap_builder::builder::command::Command::version::h86a5bea98b829b50(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::hc316918f33dafaa7(&var_2e0, &var_5a8);
    void var_5c0;
    uucore::format_usage::he053403a896311ed(&var_5c0, "{} [options", 0xc);
    clap_builder::builder::command::Command::override_usage::h6c124f3890cb5a6b(&var_5a8, &var_2e0, 
        &var_5c0);
    memcpy(arg1, &var_5a8, 0x2bc);
    int64_t var_2ec;
    *(arg1 + 0x2bc) = 0x8000000080 | var_2ec;
    int32_t var_2e4;
    *(arg1 + 0x2c4) = var_2e4;
    return arg1;
}
