
  int64_t uu_env::uu_app::hb6fa1a6ab550063b(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h10aea9e303bd291a(&var_568);
    void var_830;
    clap_builder::builder::command::Command::version::h548d9e2c477e34a1(&var_830, &var_568);
    clap_builder::builder::command::Command::about::ha91a0c840ad318c0(&var_568, &var_830);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [-] [NAME=VALUE].…", 0x35);
    clap_builder::builder::command::Command::override_usage::h48752a8915b66d73(&var_830, &var_568, 
        &var_ab0);
    clap_builder::builder::command::Command::after_help::hf222361a8677e16f(&var_568, &var_830);
    memcpy(&var_830, &var_568, 0x2bc);
    int32_t var_2ac;
    int32_t var_574 = 0xa0 | var_2ac;
    int64_t var_2a8;
    int64_t var_570 = 0x80 | var_2a8;
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_568, 
        "ignore-environmentstart with an …");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_568, 0x69);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_568, &var_ab0, 
        "ignore-environmentstart with an …");
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_568, 
        "start with an empty environmentc…", 0x1f);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_830, 
        "chdirDIRchange working directory…");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_830, 0x43);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_830, &var_ab0, 
        "chdirDIRchange working directory…");
    clap_builder::builder::arg::Arg::number_of_values::h6f25579c58eee1f7(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_830, &var_ab0, 
        "DIRchange working directory to D…");
    int64_t var_ac8 = 2;
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h5fb82929a5fbcd71(&var_830, &var_ab0, 4);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_830, 
        "change working directory to DIRe…", 0x1f);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_568, "nullXCPUBOLDBlue]");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_568, 0x30);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_568, &var_ab0, 
        "nullXCPUBOLDBlue]");
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_568, 
        "end each output line with a 0 by…", 0x63);
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_830, 
        "fileTSTPi128 as dyn ERANGEEDEADL…");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_830, 0x66);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_830, &var_ab0, 
        "fileTSTPi128 as dyn ERANGEEDEADL…");
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_ab0, &var_830, 
        "PATHvarsTERMtruemainarg[charSTOP…");
    clap_builder::builder::arg::Arg::value_hint::h5fb82929a5fbcd71(&var_830, &var_ab0, 3);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_830, 
        "read and set variables from a ".…", 0x5d);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_568, 
        "unsetremove variable from the en…");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_568, 0x75);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_568, &var_ab0, 
        "unsetremove variable from the en…");
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_ab0, &var_568, 
        "NAMEAnsiTRAPKILL -- \x1b[8mPIPEh…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_ab0, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_2a0, &var_ab0, 
        "remove variable from the environ…", 0x24);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_830, 
        "debugprint verbose information f…");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_830, 0x76);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_830, &var_ab0, 
        "debugprint verbose information f…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_ab0, &var_830, 4);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_2a0, &var_ab0, 
        "print verbose information for ea…", 0x32);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_568, 
        "split-stringSprocess and split S…");
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_ab0, &var_568, 0x53);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_568, &var_ab0, 
        "split-stringSprocess and split S…");
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_ab0, &var_568, 
        "Sprocess and split S into separa…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_568, &var_ab0, 0);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_ab0, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_2a0, &var_ab0, 
        "process and split S into separat…", 0x5d);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_830, 
        "argv0aOverride the zeroth argume…");
    clap_builder::builder::arg::Arg::overrides_with::h6d3d945825dde353(&var_ab0, &var_830);
    clap_builder::builder::arg::Arg::short::hd544070060fd3e59(&var_830, &var_ab0, 0x61);
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_ab0, &var_830, 
        "argv0aOverride the zeroth argume…");
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_830, &var_ab0, 
        "aOverride the zeroth argument pa…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_ab0, &var_830, 0);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_830, &var_ab0, &var_ac8);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_830, 
        "Override the zeroth argument pas…", 0x7c);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_568, 
        "varsTERMtruemainarg[charSTOPTTIN…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_ab0, &var_568, 1);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_2a0, &var_ab0, &var_ac8);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hceaf4f5b578f9174(&var_830, 
        "ignore-signalSIGset handling of …");
    clap_builder::builder::arg::Arg::long::h6a02e8db24dd28cc(&var_ab0, &var_830, 
        "ignore-signalSIGset handling of …");
    clap_builder::builder::arg::Arg::value_name::ha7d2cd473414745b(&var_830, &var_ab0, 
        "SIGset handling of SIG signal(s)…");
    clap_builder::builder::arg::Arg::action::h210ba69996ba06d1(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_parser::h3c7b8e59c4682bfe(&var_830, &var_ab0, &var_ac8);
    clap_builder::builder::arg::Arg::help::h6b7392348b0724ae(&var_ab0, &var_830, 
        "set handling of SIG signal(s) to…", 0x2b);
    clap_builder::builder::command::Command::arg::h6d70f1bca0a3105c(arg1, &var_568, &var_ab0);
    return arg1;
}
