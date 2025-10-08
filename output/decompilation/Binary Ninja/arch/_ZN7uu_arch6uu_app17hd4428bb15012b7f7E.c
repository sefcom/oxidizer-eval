
  void* uu_arch::uu_app::hd4428bb15012b7f7(void* arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::ha0fe77cef072d3ef(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    void var_5a8;
    clap_builder::builder::command::Command::version::h6e780c03043ed012(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::h0774b5a8e4ec13db(&var_2e0, &var_5a8);
    clap_builder::builder::command::Command::after_help::h4657f0a3d42151c8(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    int64_t var_2ec;
    *(arg1 + 0x2bc) = 0x8000000080 | var_2ec;
    int32_t var_2e4;
    *(arg1 + 0x2c4) = var_2e4;
    return arg1;
}
