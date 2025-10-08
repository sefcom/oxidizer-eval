
  int64_t uu_stdbuf::uu_app::h91a2ac6dea78ecdd(int64_t arg1)

{
    void var_2f8;
    clap_builder::builder::command::Command::new::h9ca623c83efd3946(&var_2f8, 
        uucore::util_name::h074417a1e6395129());
    void var_5c0;
    clap_builder::builder::command::Command::version::h21b85f57db025e92(&var_5c0, &var_2f8);
    clap_builder::builder::command::Command::about::hfde95826b8fb4cbb(&var_2f8, &var_5c0);
    clap_builder::builder::command::Command::after_help::hdf8ea01d2986567b(&var_5c0, &var_2f8);
    void var_840;
    uucore::format_usage::he053403a896311ed(&var_840, "{} [OPTION]... COMMANDadjust sta…", 0x16);
    clap_builder::builder::command::Command::override_usage::he89037e8ae7760d0(&var_2f8, &var_5c0, 
        &var_840);
    memcpy(&var_5c0, &var_2f8, 0x2bc);
    int64_t var_3c;
    int64_t var_304 = 0x80000000a0 | var_3c;
    int32_t var_34;
    int32_t var_2fc = var_34;
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_2f8, 
        "inputoutputerrorLline buffering …");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_2f8, 
        "inputoutputerrorLline buffering …");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_2f8, &var_840, 0x69);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_2f8, 
        "adjust standard input stream buf…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_2f8, &var_840);
    char const* const var_860 = "outputerrorLline buffering stdin…";
    int64_t var_858 = 6;
    char const* const var_850 = "errorLline buffering stdin is me…";
    int64_t var_848 = 5;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_2f8, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_5c0, 
        "outputerrorLline buffering stdin…");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_5c0, 
        "outputerrorLline buffering stdin…");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_5c0, &var_840, 0x6f);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_5c0, 
        "adjust standard output stream bu…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_5c0, &var_840);
    var_860 = "inputoutputerrorLline buffering …";
    int64_t var_858_1 = 5;
    char const* const var_850_1 = "errorLline buffering stdin is me…";
    int64_t var_848_1 = 5;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_5c0, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_5c0, &var_2f8, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_2f8, 
        "errorLline buffering stdin is me…");
    clap_builder::builder::arg::Arg::long::h0bcea7f669722248(&var_840, &var_2f8, 
        "errorLline buffering stdin is me…");
    clap_builder::builder::arg::Arg::short::h1937515580318e98(&var_2f8, &var_840, 0x65);
    clap_builder::builder::arg::Arg::help::hc8a3ffc0e36a85f4(&var_840, &var_2f8, 
        "adjust standard error stream buf…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h83ab5c665de65a2b(&var_2f8, &var_840);
    var_860 = "inputoutputerrorLline buffering …";
    int64_t var_858_2 = 5;
    char const* const var_850_2 = "outputerrorLline buffering stdin…";
    int64_t var_848_2 = 6;
    clap_builder::builder::arg::Arg::required_unless_present_any::h46711816c503c090(&var_840, 
        &var_2f8, &var_860);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::he8a42768ed42fec0(&var_5c0, "command");
    clap_builder::builder::arg::Arg::action::h550de8a59619d235(&var_840, &var_5c0);
    memcpy(&var_5c0, &var_840, 0x278);
    int32_t var_5c8;
    int32_t var_348 = var_5c8 | 5;
    int32_t var_5c4;
    int32_t var_344 = var_5c4;
    clap_builder::builder::arg::Arg::value_hint::h6b2dc8dbe8ff6fd0(&var_840, &var_5c0);
    clap_builder::builder::command::Command::arg::ha666ab677c1246e0(arg1, &var_2f8, &var_840);
    return arg1;
}
