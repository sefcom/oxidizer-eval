
  void* uu_arch::uu_app::h8f2567686988086a(void* arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::hbb56a5a7b96c7e35(&var_2e0, 
        uucore::util_name::h60d842bf27b05e82());
    void var_5a8;
    clap_builder::builder::command::Command::version::h7decdfeb72eb2da9(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::h18a6b7e00eeabd4f(&var_2e0, &var_5a8);
    clap_builder::builder::command::Command::after_help::hdeb8b7f265e710a0(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    int64_t var_2ec;
    *(arg1 + 0x2bc) = 0x8000000080 | var_2ec;
    int32_t var_2e4;
    *(arg1 + 0x2c4) = var_2e4;
    return arg1;
}
