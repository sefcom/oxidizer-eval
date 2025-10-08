
  int64_t uu_uptime::uu_app::hf423f0f417b5740e(int64_t arg1)

{
    void var_560;
    clap_builder::builder::command::Command::new::h2a62d0fdf2fe13dd(&var_560, 
        uucore::util_name::h074417a1e6395129());
    void var_828;
    clap_builder::builder::command::Command::version::h95874bd967985365(&var_828, &var_560);
    clap_builder::builder::command::Command::about::h5bcbed0ba5c4030e(&var_560, &var_828);
    void var_af0;
    uucore::format_usage::he053403a896311ed(&var_af0, "{} [OPTION]...system up sincefil…", 0xe);
    clap_builder::builder::command::Command::override_usage::h64fb30a7d4623789(&var_828, &var_560, 
        &var_af0);
    memcpy(&var_af0, &var_828, 0x2bc);
    int64_t var_56c;
    int64_t var_834 = 0x8000000080 | var_56c;
    int32_t var_564;
    int32_t var_82c = var_564;
    clap_builder::builder::arg::Arg::new::h98c87726383e8929(&var_560, 
        "since(uutils coreutils) 0.0.30Di…");
    clap_builder::builder::arg::Arg::short::h6ddccd8dffcde1f3(&var_828, &var_560);
    clap_builder::builder::arg::Arg::long::hcc9377133c1d7111(&var_560, &var_828);
    clap_builder::builder::arg::Arg::help::h35f00ec1a41f274f(&var_828, &var_560, 
        "system up sincefile to search bo…", 0xf);
    int64_t var_298;
    clap_builder::builder::arg::Arg::action::h9fe60c0ed19aae32(&var_298, &var_828, 2);
    clap_builder::builder::command::Command::arg::h64429f92e02dd71d(&var_560, &var_af0, &var_298);
    clap_builder::builder::arg::Arg::new::h98c87726383e8929(&var_828, 
        "pathAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::help::h35f00ec1a41f274f(&var_af0, &var_828, 
        "file to search boot time from: \n…", 0x1d);
    clap_builder::builder::arg::Arg::action::h9fe60c0ed19aae32(&var_828, &var_af0, 0);
    clap_builder::builder::arg::Arg::num_args::h2113c5f8a5acee8f(&var_af0, &var_828, 0);
    var_298 = 2;
    clap_builder::builder::arg::Arg::value_parser::h4f35826d2cd75d97(&var_828, &var_af0, &var_298);
    clap_builder::builder::arg::Arg::value_hint::h0f14ae961e261dbc(&var_af0, &var_828);
    clap_builder::builder::command::Command::arg::h64429f92e02dd71d(arg1, &var_560, &var_af0);
    return arg1;
}
