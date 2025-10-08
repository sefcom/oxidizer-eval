
  int64_t uu_link::uu_app::h418310be0040ada0(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::hac022b9a8d3b232f(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h255607b1fcdf44f3(&var_830, &var_568);
    clap_builder::builder::command::Command::about::h076a24e249de2314(&var_568, &var_830);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} FILE1 FILE2", 0xe);
    clap_builder::builder::command::Command::override_usage::h6acc69e058c2125c(&var_830, &var_568, 
        &var_2a0);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h36fd2188dafea7d4(&var_830);
    memcpy(&var_2a0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_28 = var_5b8 | 5;
    int32_t var_5b4;
    int32_t var_24 = var_5b4;
    clap_builder::builder::arg::Arg::num_args::h03cb521ffc085937(&var_830, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::h4ab4f2c0c4396713(&var_2a0, &var_830);
    int64_t var_848 = 2;
    clap_builder::builder::arg::Arg::value_parser::h501d9c2114dce07a(&var_830, &var_2a0, &var_848);
    clap_builder::builder::command::Command::arg::hed794b8a2daf25f1(arg1, &var_568, &var_830);
    return arg1;
}
