
  fn uu_tac::uu_app::h1d932b9145e33582(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::ha98009625612c575(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h4fb0160a833db3d0(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Write ea…", 0x18);
    clap_builder::builder::command::Command::override_usage::hb49bde14204df719(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::h3c60efaf1973baa1(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h4410aa8eb887514a(&var_830, 
        "beforeregexseparator(uutils core…");
    clap_builder::builder::arg::Arg::short::h99ebfcf9d5ea07d2(&var_ab0, &var_830, 0x62);
    clap_builder::builder::arg::Arg::long::h0dfbb530c88d9cdf(&var_830, &var_ab0, 
        "beforeregexseparator(uutils core…");
    clap_builder::builder::arg::Arg::help::h8f51bad8d84955a5(&var_ab0, &var_830, 
        "attach the separator before inst…", 0x2c);
    let mut var_2a0: ();
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
    let var_2f0: i32;
    let var_838: i32 = var_2f0 | 4;
    let var_2ec: i32;
    let var_834: i32 = var_2ec;
    clap_builder::builder::arg::Arg::action::h55be912e0f677697(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h294c545d0e0a3d7b(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::he15225bcf4a7ef60(arg1, &var_830, &var_ab0);
    arg1
}
