
  void* uu_whoami::uu_app::hf0a425c263ca9714(void* arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::hbef2a085238f9bab(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    void var_5a8;
    clap_builder::builder::command::Command::version::hbf2bdb3914761909(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::hc48434e10b5e588d(&var_2e0, &var_5a8);
    void var_5c0;
    uucore::format_usage::he053403a896311ed(&var_5c0, "{}", 2);
    clap_builder::builder::command::Command::override_usage::hca2ead5206428053(&var_5a8, &var_2e0, 
        &var_5c0);
    memcpy(arg1, &var_5a8, 0x2bc);
    int64_t var_2ec;
    *(arg1 + 0x2bc) = 0x8000000080 | var_2ec;
    int32_t var_2e4;
    *(arg1 + 0x2c4) = var_2e4;
    return arg1;
}
