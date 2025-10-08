
  fn uu_expand::uu_app::hfd4b727879b62d41(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::h2c36ebb26d3107f1(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h205329286085b7ad(&var_830, &var_568);
    clap_builder::builder::command::Command::about::hd4fe0f30bf6745a7(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::h711791a9ebf717f5(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...do not c…", 0x18);
    clap_builder::builder::command::Command::override_usage::hd38fcd2675bea24b(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8800000088 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h3be8048476dd5590(&var_568, 
        "initialno-utf8FILES/+src/uu/expa…");
    clap_builder::builder::arg::Arg::long::ha352d0915a6bcb4e(&var_ab0, &var_568, 
        "initialno-utf8FILES/+src/uu/expa…");
    clap_builder::builder::arg::Arg::short::h321390f63acd7725(&var_568, &var_ab0, 0x69);
    clap_builder::builder::arg::Arg::help::h9711bed0115f2440(&var_ab0, &var_568, 
        "do not convert tabs after non bl…", 0x24);
    let mut var_2a0: ();
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
    let var_838: i32;
    let var_5b8: i32 = var_838 | 4;
    let var_834: i32;
    let var_5b4: i32 = var_834;
    clap_builder::builder::arg::Arg::value_hint::h43bcf93f0b81f1b4(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h3641595d12c1bc0f(arg1, &var_568, &var_ab0);
    arg1
}
