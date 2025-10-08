
  int64_t uu_rmdir::uu_app::h41f54c0a55596ebe(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::h576d2df86fc63c7a(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::hd7e49546799cfb28(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::hdb56695bbe51bf91(&var_ab0, &var_568);
    void var_7e8;
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... DIRECTORY...ignor…", 0x1b);
    clap_builder::builder::command::Command::override_usage::hf62606498b350be2(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_7f4 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_7ec = var_2a4;
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_568, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_7e8, &var_568, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_568, &var_7e8, 
        "ignore each failure that is sole…", 0x43);
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_ab0, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::short::h28b5f0ae63d184a2(&var_7e8, &var_ab0, 0x70);
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_ab0, &var_7e8, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_7e8, &var_ab0, 
        "remove DIRECTORY and its ancesto…", 0x6c);
    int64_t var_2a0;
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_568, 
        "verbose: removing directory, \n(…");
    clap_builder::builder::arg::Arg::short::h28b5f0ae63d184a2(&var_7e8, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_568, &var_7e8, 
        "verbose: removing directory, \n(…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_7e8, &var_568, 
        "output a diagnostic for every di…", 0x31);
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_ab0, 
        "dirs\x1b[9m <= trueTERMmainchar …");
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_7e8, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::hb06be691b3a932ed(&var_ab0, &var_7e8);
    memcpy(&var_7e8, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_570 = var_838 | 1;
    int32_t var_834;
    int32_t var_56c = var_834;
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h02bae8d5a7fc4497(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::hd5b50e4e7b35f9fa(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(arg1, &var_568, &var_7e8);
    return arg1;
}
