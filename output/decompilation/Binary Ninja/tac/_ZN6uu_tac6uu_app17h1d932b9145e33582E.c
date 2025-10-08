
  int64_t uu_tac::uu_app::h1d932b9145e33582(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::ha98009625612c575(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h4fb0160a833db3d0(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Write ea…", 0x18);
    clap_builder::builder::command::Command::override_usage::hb49bde14204df719(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::h3c60efaf1973baa1(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h4410aa8eb887514a(&var_830, 
        "beforeregexseparator(uutils core…");
    clap_builder::builder::arg::Arg::short::h99ebfcf9d5ea07d2(&var_ab0, &var_830, 0x62);
    clap_builder::builder::arg::Arg::long::h0dfbb530c88d9cdf(&var_830, &var_ab0, 
        "beforeregexseparator(uutils core…");
    clap_builder::builder::arg::Arg::help::h8f51bad8d84955a5(&var_ab0, &var_830, 
        "attach the separator before inst…", 0x2c);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h55be912e0f677697(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::he15225bcf4a7ef60(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h4410aa8eb887514a(&var_568, 
        "regexseparator(uutils coreutils)…");
    clap_builder::builder::arg::Arg::short::h99ebfcf9d5ea07d2(&var_ab0, &var_568, 0x72);
    clap_builder::builder::arg::Arg::long::h0dfbb530c88d9cdf(&var_568, &var_ab0, 
        "regexseparator(uutils coreutils)…");
    clap_builder::builder::arg::Arg::help::h8f51bad8d84955a5(&var_ab0, &var_568, 
        "interpret the sequence as a regu…", 0x2e);
    clap_builder::builder::arg::Arg::action::h55be912e0f677697(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::he15225bcf4a7ef60(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h4410aa8eb887514a(&var_830, 
        "separator(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::short::h99ebfcf9d5ea07d2(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h0dfbb530c88d9cdf(&var_830, &var_ab0, 
        "separator(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::help::h8f51bad8d84955a5(&var_ab0, &var_830, 
        "use STRING as the separator inst…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::h07ebea8321eb664b(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::he15225bcf4a7ef60(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h4410aa8eb887514a(&var_568, "filemode{");
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_838 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_834 = var_2ec;
    clap_builder::builder::arg::Arg::action::h55be912e0f677697(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h294c545d0e0a3d7b(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::he15225bcf4a7ef60(arg1, &var_830, &var_ab0);
    return arg1;
}
