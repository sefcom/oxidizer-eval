
  int64_t uu_dd::uu_app::hb8ffca1f61c6f095(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::h0e6efed2cf43459b(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h459b8bd896839598(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h578c7d5ae71cd95f(&var_830, &var_568);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} [OPERAND]...\n{} OPTION### Op…", 0x19);
    clap_builder::builder::command::Command::override_usage::h741cdbff6d7144b9(&var_568, &var_830, 
        &var_2a0);
    clap_builder::builder::command::Command::after_help::h0feff51f7ef87372(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h4edc6ab5d4fbcd36(&var_830);
    clap_builder::builder::arg::Arg::num_args::hb129ec34adfb3da9(&var_2a0, &var_830);
    clap_builder::builder::command::Command::arg::h5e5a9fdc468f1f1d(arg1, &var_568, &var_2a0);
    return arg1;
}
