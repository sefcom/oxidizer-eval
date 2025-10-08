
  int64_t uu_expand::uu_app::hfd4b727879b62d41(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h2c36ebb26d3107f1(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h205329286085b7ad(&var_830, &var_568);
    clap_builder::builder::command::Command::about::hd4fe0f30bf6745a7(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::h711791a9ebf717f5(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...do not c…", 0x18);
    clap_builder::builder::command::Command::override_usage::hd38fcd2675bea24b(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8800000088 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h3be8048476dd5590(&var_568, 
        "initialno-utf8FILES/+src/uu/expa…");
    clap_builder::builder::arg::Arg::long::ha352d0915a6bcb4e(&var_ab0, &var_568, 
        "initialno-utf8FILES/+src/uu/expa…");
    clap_builder::builder::arg::Arg::short::h321390f63acd7725(&var_568, &var_ab0, 0x69);
    clap_builder::builder::arg::Arg::help::h9711bed0115f2440(&var_ab0, &var_568, 
        "do not convert tabs after non bl…", 0x24);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h256e0eeb6b69c5d6(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3641595d12c1bc0f(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3be8048476dd5590(&var_830, "tabskindAuto/");
    clap_builder::builder::arg::Arg::long::ha352d0915a6bcb4e(&var_ab0, &var_830, "tabskindAuto/");
    clap_builder::builder::arg::Arg::short::h321390f63acd7725(&var_830, &var_ab0, 0x74);
    clap_builder::builder::arg::Arg::value_name::h1d0fa685e0fd205b(&var_ab0, &var_830);
    clap_builder::builder::arg::Arg::action::h256e0eeb6b69c5d6(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::help::h9711bed0115f2440(&var_ab0, &var_830, 
        "have tabs N characters apart, no…", 0x59);
    clap_builder::builder::command::Command::arg::h3641595d12c1bc0f(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h3be8048476dd5590(&var_568, 
        "no-utf8FILES/+src/uu/expand/src/…");
    clap_builder::builder::arg::Arg::long::ha352d0915a6bcb4e(&var_ab0, &var_568, 
        "no-utf8FILES/+src/uu/expand/src/…");
    clap_builder::builder::arg::Arg::short::h321390f63acd7725(&var_568, &var_ab0, 0x55);
    clap_builder::builder::arg::Arg::help::h9711bed0115f2440(&var_ab0, &var_568, 
        "interpret input file as 8-bit AS…", 0x35);
    clap_builder::builder::arg::Arg::action::h256e0eeb6b69c5d6(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3641595d12c1bc0f(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3be8048476dd5590(&var_830, 
        "FILES/+src/uu/expand/src/expand.…");
    clap_builder::builder::arg::Arg::action::h256e0eeb6b69c5d6(&var_ab0, &var_830, 1);
    memcpy(&var_830, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_5b8 = var_838 | 4;
    int32_t var_834;
    int32_t var_5b4 = var_834;
    clap_builder::builder::arg::Arg::value_hint::h43bcf93f0b81f1b4(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h3641595d12c1bc0f(arg1, &var_568, &var_ab0);
    return arg1;
}
