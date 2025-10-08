
  int64_t uu_unexpand::uu_app::h8be29c5c59f3b421(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h6a135678a30b80be(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h5a6048d963007458(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Convert …", 0x18);
    clap_builder::builder::command::Command::override_usage::h78d2d73011e3bd83(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::hc1fc754ec77b4291(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h04942cb94bab7d73(&var_830, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 4;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::arg::Arg::action::h04ca4c374c9823e8(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h021147f1a3510956(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h62125d75bbc9d063(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h04942cb94bab7d73(&var_568, 
        "allfirst-onlyno-utf8--first-only…");
    clap_builder::builder::arg::Arg::short::h0c533d41c3370822(&var_ab0, &var_568, 0x61);
    clap_builder::builder::arg::Arg::long::hbc894fa31bd799dc(&var_568, &var_ab0, 
        "allfirst-onlyno-utf8--first-only…");
    clap_builder::builder::arg::Arg::help::h2cecb8c80d494d92(&var_ab0, &var_568, 
        "convert all blanks, instead of j…", 0x32);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h04ca4c374c9823e8(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h62125d75bbc9d063(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h04942cb94bab7d73(&var_830, 
        "first-onlyno-utf8--first-only--a…");
    clap_builder::builder::arg::Arg::long::hbc894fa31bd799dc(&var_ab0, &var_830, 
        "first-onlyno-utf8--first-only--a…");
    clap_builder::builder::arg::Arg::help::h2cecb8c80d494d92(&var_830, &var_ab0, 
        "convert only leading sequences o…", 0x37);
    clap_builder::builder::arg::Arg::action::h04ca4c374c9823e8(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h62125d75bbc9d063(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h04942cb94bab7d73(&var_568, "tabskindAuto/");
    clap_builder::builder::arg::Arg::short::h0c533d41c3370822(&var_ab0, &var_568, 0x74);
    clap_builder::builder::arg::Arg::long::hbc894fa31bd799dc(&var_568, &var_ab0, "tabskindAuto/");
    clap_builder::builder::arg::Arg::help::h2cecb8c80d494d92(&var_ab0, &var_568, 
        "use comma separated LIST of tab …", 0x63);
    clap_builder::builder::arg::Arg::action::h04ca4c374c9823e8(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_name::ha8cdeac0839575b8(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h62125d75bbc9d063(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h04942cb94bab7d73(&var_830, 
        "no-utf8--first-only--all-a--tabs…");
    clap_builder::builder::arg::Arg::short::h0c533d41c3370822(&var_ab0, &var_830, 0x55);
    clap_builder::builder::arg::Arg::long::hbc894fa31bd799dc(&var_830, &var_ab0, 
        "no-utf8--first-only--all-a--tabs…");
    clap_builder::builder::arg::Arg::help::h2cecb8c80d494d92(&var_ab0, &var_830, 
        "interpret input file as 8-bit AS…", 0x35);
    clap_builder::builder::arg::Arg::action::h04ca4c374c9823e8(&var_830, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h62125d75bbc9d063(arg1, &var_568, &var_830);
    return arg1;
}
