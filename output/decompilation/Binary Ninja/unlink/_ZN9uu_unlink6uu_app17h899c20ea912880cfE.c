
  int64_t uu_unlink::uu_app::h899c20ea912880cf(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h6681795f670860c0(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::hc072b0fb3970946d(&var_830, &var_568);
    clap_builder::builder::command::Command::about::heb4661c01fb44ecf(&var_568, &var_830);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} FILE\n{} OPTION", 0x11);
    clap_builder::builder::command::Command::override_usage::hc5c12236bbe48428(&var_830, &var_568, 
        &var_2a0);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h48e9a654ad1b390a(&var_830);
    memcpy(&var_2a0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_28 = var_5b8 | 5;
    int32_t var_5b4;
    int32_t var_24 = var_5b4;
    int64_t var_848 = 2;
    clap_builder::builder::arg::Arg::value_parser::hcbf50ed5fcfb3971(&var_830, &var_2a0, &var_848);
    clap_builder::builder::arg::Arg::value_hint::h72db5f6da84472b3(&var_2a0, &var_830);
    clap_builder::builder::command::Command::arg::hb9152f2050b576a0(arg1, &var_568, &var_2a0);
    return arg1;
}
