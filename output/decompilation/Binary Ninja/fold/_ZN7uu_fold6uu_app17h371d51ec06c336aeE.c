
  int64_t uu_fold::uu_app::h371d51ec06c336ae(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::he0d8a7a234d11b51(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h841f696677733c1a(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Writes e…", 0x18);
    clap_builder::builder::command::Command::override_usage::h6a660578258f91a8(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::h9c2c1570a0e81e99(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h5bfc88a50d80b43b(&var_830, 
        "bytescount using bytes rather th…");
    clap_builder::builder::arg::Arg::long::hd214d50c7f98960b(&var_ab0, &var_830, 
        "bytescount using bytes rather th…");
    clap_builder::builder::arg::Arg::short::h3b589c6cc2fb815e(&var_830, &var_ab0, 0x62);
    clap_builder::builder::arg::Arg::help::h2c834e5f28612f46(&var_ab0, &var_830, 
        "count using bytes rather than co…", 0x6c);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hc005373d1cb1d88f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9e4bb752cb68fd7a(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5bfc88a50d80b43b(&var_568, 
        "spacesbreak lines at word bounda…");
    clap_builder::builder::arg::Arg::long::hd214d50c7f98960b(&var_ab0, &var_568, 
        "spacesbreak lines at word bounda…");
    clap_builder::builder::arg::Arg::short::h3b589c6cc2fb815e(&var_568, &var_ab0, 0x73);
    clap_builder::builder::arg::Arg::help::h2c834e5f28612f46(&var_ab0, &var_568, 
        "break lines at word boundaries r…", 0x39);
    clap_builder::builder::arg::Arg::action::hc005373d1cb1d88f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9e4bb752cb68fd7a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5bfc88a50d80b43b(&var_830, 
        "widthset WIDTH as the maximum li…");
    clap_builder::builder::arg::Arg::long::hd214d50c7f98960b(&var_ab0, &var_830, 
        "widthset WIDTH as the maximum li…");
    clap_builder::builder::arg::Arg::short::h3b589c6cc2fb815e(&var_830, &var_ab0, 0x77);
    clap_builder::builder::arg::Arg::help::h2c834e5f28612f46(&var_ab0, &var_830, 
        "set WIDTH as the maximum line wi…", 0x32);
    clap_builder::builder::arg::Arg::value_name::he709a22c7e5abc30(&var_830, &var_ab0);
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 0x20;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::command::Command::arg::h9e4bb752cb68fd7a(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h5bfc88a50d80b43b(&var_568, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_838_1 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_834_1 = var_2ec;
    clap_builder::builder::arg::Arg::action::hc005373d1cb1d88f(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h840b1ec8a060257d(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h9e4bb752cb68fd7a(arg1, &var_830, &var_ab0);
    return arg1;
}
