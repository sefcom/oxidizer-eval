
  int64_t uu_pathchk::uu_app::hcf6bb8f6c69b5fe1(int64_t arg1)

{
    void var_828;
    clap_builder::builder::command::Command::new::h108d16f88444b04f(&var_828, 
        uucore::util_name::h074417a1e6395129());
    void var_560;
    clap_builder::builder::command::Command::version::ha28cfa0df1d5e907(&var_560, &var_828);
    clap_builder::builder::command::Command::about::hd4eb1035e7d5c7e2(&var_828, &var_560);
    void var_298;
    uucore::format_usage::he053403a896311ed(&var_298, "{} [OPTION]... NAME...posixcheck…", 0x16);
    clap_builder::builder::command::Command::override_usage::h9bc2e28f370bf6fa(&var_560, &var_828, 
        &var_298);
    memcpy(&var_828, &var_560, 0x2bc);
    int64_t var_2a4;
    int64_t var_56c = 0x8000000080 | var_2a4;
    int32_t var_29c;
    int32_t var_564 = var_29c;
    clap_builder::builder::arg::Arg::new::hb0d06e89861b0540(&var_560, 
        "posixcheck for most POSIX system…");
    clap_builder::builder::arg::Arg::short::h0ff203cd4e7d5188(&var_298, &var_560, 0x70);
    clap_builder::builder::arg::Arg::help::ha8c53d2e96b2b8a1(&var_560, &var_298, 
        "check for most POSIX systemsposi…", 0x1c);
    clap_builder::builder::arg::Arg::action::h92f160cda9e5d116(&var_298, &var_560, 2);
    clap_builder::builder::command::Command::arg::h1b024aa5a69862f4(&var_560, &var_828, &var_298);
    clap_builder::builder::arg::Arg::new::hb0d06e89861b0540(&var_828, 
        "posix-specialcheck for empty nam…");
    clap_builder::builder::arg::Arg::short::h0ff203cd4e7d5188(&var_298, &var_828, 0x50);
    clap_builder::builder::arg::Arg::help::ha8c53d2e96b2b8a1(&var_828, &var_298, 
        "check for empty names and leadin…", 0x25);
    clap_builder::builder::arg::Arg::action::h92f160cda9e5d116(&var_298, &var_828, 2);
    clap_builder::builder::command::Command::arg::h1b024aa5a69862f4(&var_828, &var_560, &var_298);
    clap_builder::builder::arg::Arg::new::hb0d06e89861b0540(&var_560, 
        "portabilitycheck for all POSIX s…");
    clap_builder::builder::arg::Arg::long::h0970928516bf3767(&var_298, &var_560);
    clap_builder::builder::arg::Arg::help::ha8c53d2e96b2b8a1(&var_560, &var_298, 
        "check for all POSIX systems (equ…", 0x31);
    clap_builder::builder::arg::Arg::action::h92f160cda9e5d116(&var_298, &var_560, 2);
    clap_builder::builder::command::Command::arg::h1b024aa5a69862f4(&var_560, &var_828, &var_298);
    clap_builder::builder::arg::Arg::new::hb0d06e89861b0540(&var_828, 
        "pathAnsi -- \x1b[8mhelpNoneshim\x1b…");
    memcpy(&var_298, &var_828, 0x278);
    int32_t var_5b0;
    int32_t var_20 = var_5b0 | 4;
    int32_t var_5ac;
    int32_t var_1c = var_5ac;
    clap_builder::builder::arg::Arg::action::h92f160cda9e5d116(&var_828, &var_298, 1);
    clap_builder::builder::arg::Arg::value_hint::hb1308a231f546382(&var_298, &var_828);
    clap_builder::builder::command::Command::arg::h1b024aa5a69862f4(arg1, &var_560, &var_298);
    return arg1;
}
