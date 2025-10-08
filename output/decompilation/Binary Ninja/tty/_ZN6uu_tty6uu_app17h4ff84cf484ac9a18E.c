
  int64_t uu_tty::uu_app::h4ff84cf484ac9a18(int64_t arg1)

{
    void var_560;
    clap_builder::builder::command::Command::new::hbeabfb11cd130195(&var_560, 
        uucore::util_name::h074417a1e6395129());
    void var_828;
    clap_builder::builder::command::Command::version::he076559ff823ed19(&var_828, &var_560);
    clap_builder::builder::command::Command::about::hcc870ff1dd651671(&var_560, &var_828);
    void var_298;
    uucore::format_usage::he053403a896311ed(&var_298, "{} [OPTION]...silentquietprint n…", 0xe);
    clap_builder::builder::command::Command::override_usage::he25e9f1332e35951(&var_828, &var_560, 
        &var_298);
    memcpy(&var_560, &var_828, 0x2bc);
    int64_t var_56c;
    int64_t var_2a4 = 0x8000000080 | var_56c;
    int32_t var_564;
    int32_t var_29c = var_564;
    clap_builder::builder::arg::Arg::new::h2657f407a8aca4a6(&var_828);
    clap_builder::builder::arg::Arg::long::hde16cda513edd7fd(&var_298, &var_828);
    clap_builder::builder::arg::Arg::visible_alias::ha768bdaa413ae919(&var_828, &var_298);
    clap_builder::builder::arg::Arg::short::h21e0c959ad236f63(&var_298, &var_828);
    clap_builder::builder::arg::Arg::help::h0c3566801bd34b82(&var_828, &var_298);
    clap_builder::builder::arg::Arg::action::he293c9c0eccc313d(&var_298, &var_828);
    clap_builder::builder::command::Command::arg::h07548eb6fefd46f5(arg1, &var_560, &var_298);
    return arg1;
}
