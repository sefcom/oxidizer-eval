
  int64_t uu_printenv::uu_app::hf1331131741036ed(int64_t arg1)

{
    void var_a50;
    clap_builder::builder::command::Command::new::h756124d03d797937(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    clap_builder::builder::command::Command::version::h2f0c204c3b28853e(&var_538, &var_a50);
    clap_builder::builder::command::Command::about::h6ce0240f9b0c168e(&var_a50, &var_538);
    void var_788;
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... [VARIABLE]...end …", 0x1c);
    clap_builder::builder::command::Command::override_usage::h89030b7305223480(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    int64_t var_27c;
    int64_t var_794 = 0x8000000080 | var_27c;
    int32_t var_274;
    int32_t var_78c = var_274;
    clap_builder::builder::arg::Arg::new::h232af3154c6234e3(&var_538, 
        "nullBOLD\x1b[4mSomedumb\x1b[5m <…");
    clap_builder::builder::arg::Arg::short::h4b8b75b37ac110d0(&var_788, &var_538);
    clap_builder::builder::arg::Arg::long::h26f18b50c67386c2(&var_538, &var_788);
    clap_builder::builder::arg::Arg::help::h457dd636a188a524(&var_788, &var_538);
    void var_270;
    clap_builder::builder::arg::Arg::action::hfac7705830aeadd1(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::h825aeeae1f3493f2(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h232af3154c6234e3(&var_a50, 
        "variables0.0.28Display the value…");
    clap_builder::builder::arg::Arg::action::hfac7705830aeadd1(&var_788, &var_a50, 1);
    clap_builder::builder::arg::Arg::num_args::h355828e295e06717(&var_a50, &var_788);
    clap_builder::builder::command::Command::arg::h825aeeae1f3493f2(arg1, &var_538, &var_a50);
    return arg1;
}
