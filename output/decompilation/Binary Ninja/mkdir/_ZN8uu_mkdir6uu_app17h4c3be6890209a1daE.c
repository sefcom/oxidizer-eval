
  int64_t uu_mkdir::uu_app::h4c3be6890209a1da(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::h0e729747a2c294df(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h64b68f09cdfcde29(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::he437bb4356d87ffe(&var_ab0, &var_568);
    void var_7e8;
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... DIRECTORY...set f…", 0x1b);
    clap_builder::builder::command::Command::override_usage::he61b13701732a500(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_7f4 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_7ec = var_2a4;
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_568, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h794a52cbac9eeb1c(&var_7e8, &var_568, 0x6d);
    clap_builder::builder::arg::Arg::long::h63798b7700cb9e97(&var_568, &var_7e8, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::h9f30c3b4a9544fa8(&var_7e8, &var_568, 
        "set file mode (not implemented o…", 0x2a);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_ab0, 
        "parentsmake parent directories a…");
    clap_builder::builder::arg::Arg::short::h794a52cbac9eeb1c(&var_7e8, &var_ab0, 0x70);
    clap_builder::builder::arg::Arg::long::h63798b7700cb9e97(&var_ab0, &var_7e8, 
        "parentsmake parent directories a…");
    clap_builder::builder::arg::Arg::help::h9f30c3b4a9544fa8(&var_7e8, &var_ab0, 
        "make parent directories as neede…", 0x21);
    clap_builder::builder::arg::Arg::overrides_with::h4f80c54f6a988437(&var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::action::hfb326fb76d16f3d4(&var_7e8, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_568, 
        "verboseprint a message for each …");
    clap_builder::builder::arg::Arg::short::h794a52cbac9eeb1c(&var_7e8, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h63798b7700cb9e97(&var_568, &var_7e8, 
        "verboseprint a message for each …");
    clap_builder::builder::arg::Arg::help::h9f30c3b4a9544fa8(&var_7e8, &var_568, 
        "print a message for each printed…", 0x2a);
    int64_t var_2a0;
    clap_builder::builder::arg::Arg::action::hfb326fb76d16f3d4(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_ab0, 
        "zset SELinux security context of…");
    clap_builder::builder::arg::Arg::short::h794a52cbac9eeb1c(&var_7e8, &var_ab0, 0x5a);
    clap_builder::builder::arg::Arg::help::h9f30c3b4a9544fa8(&var_ab0, &var_7e8, 
        "set SELinux security context of …", 0x4a);
    clap_builder::builder::arg::Arg::action::hfb326fb76d16f3d4(&var_7e8, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_568, 
        "contextinnermid > lensystem.posi…");
    clap_builder::builder::arg::Arg::long::h63798b7700cb9e97(&var_7e8, &var_568, 
        "contextinnermid > lensystem.posi…");
    clap_builder::builder::arg::Arg::value_name::h66b7ae27c6cccbb2(&var_568, &var_7e8);
    clap_builder::builder::arg::Arg::help::h9f30c3b4a9544fa8(&var_7e8, &var_568, 
        "like -Z, or if CTX is specified …", 0x55);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::ha0a90d1c9ea5726a(&var_ab0, 
        "dirs\x1b[9m <= trueTERMmainchar …");
    clap_builder::builder::arg::Arg::action::hfb326fb76d16f3d4(&var_7e8, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::h3159c93b1d7f3131(&var_ab0, &var_7e8);
    memcpy(&var_7e8, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_570 = var_838 | 1;
    int32_t var_834;
    int32_t var_56c = var_834;
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h3b312421b418b606(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::hfff52fa0bf176b07(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::arg::hc762977cc90e0a11(arg1, &var_568, &var_7e8);
    return arg1;
}
