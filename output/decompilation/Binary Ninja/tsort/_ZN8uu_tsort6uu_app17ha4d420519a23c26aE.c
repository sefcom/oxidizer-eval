
  int64_t uu_tsort::uu_app::ha4d420519a23c26a(int64_t arg1)

{
    void var_2e0;
    clap_builder::builder::command::Command::new::h45f4103348fd7822(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    void var_828;
    clap_builder::builder::command::Command::version::hbd4546769b4e2c16(&var_828, &var_2e0);
    void var_560;
    uucore::format_usage::he053403a896311ed(&var_560, "{} [OPTIONS] FILETopological sor…", 0x11);
    clap_builder::builder::command::Command::override_usage::habc30ca84a6959ef(&var_2e0, &var_828, 
        &var_560);
    clap_builder::builder::command::Command::about::hbcf3408e663631b1(&var_828, &var_2e0);
    memcpy(&var_2e0, &var_828, 0x2bc);
    int64_t var_56c;
    int64_t var_24 = 0x8000000080 | var_56c;
    int32_t var_564;
    int32_t var_1c = var_564;
    clap_builder::builder::arg::Arg::new::h858a57d586b2f35c(&var_828);
    clap_builder::builder::arg::Arg::default_value::h517e97fa20c60967(&var_560, &var_828);
    memcpy(&var_828, &var_560, 0x278);
    int32_t var_2e8;
    int32_t var_5b0 = var_2e8 | 4;
    int32_t var_2e4;
    int32_t var_5ac = var_2e4;
    clap_builder::builder::arg::Arg::value_hint::h29f1179a2e8da544(&var_560, &var_828);
    clap_builder::builder::command::Command::arg::hb9b4233638eaefbd(arg1, &var_2e0, &var_560);
    return arg1;
}
