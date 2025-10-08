
  int64_t uu_users::uu_app::h7da0e4a9ca0670f1(int64_t arg1)

{
    void var_828;
    clap_builder::builder::command::Command::new::hc0efe52af6b7628c(&var_828, 
        uucore::util_name::h074417a1e6395129());
    void var_560;
    clap_builder::builder::command::Command::version::hb27e1668c6adae4c(&var_560, &var_828);
    clap_builder::builder::command::Command::about::h93ae764a5ed7fdcb(&var_828, &var_560);
    void var_298;
    uucore::format_usage::he053403a896311ed(&var_298, "{} [FILE]", 9);
    clap_builder::builder::command::Command::override_usage::he5981e4c48aeabc4(&var_560, &var_828, 
        &var_298);
    memcpy(&var_828, &var_560, 0x2bc);
    int64_t var_2a4;
    int64_t var_56c = 0x8000000080 | var_2a4;
    int32_t var_29c;
    int32_t var_564 = var_29c;
    clap_builder::builder::arg::Arg::new::h8e9524100cdb6085(&var_560);
    clap_builder::builder::arg::Arg::num_args::hf1a656598dc052a4(&var_298, &var_560);
    clap_builder::builder::arg::Arg::value_hint::he8a13223bc6720af(&var_560, &var_298);
    int64_t var_840 = 2;
    clap_builder::builder::arg::Arg::value_parser::h403e6cf17af2c192(&var_298, &var_560, &var_840);
    clap_builder::builder::command::Command::arg::h0e3a33f2eea5278e(arg1, &var_828, &var_298);
    return arg1;
}
