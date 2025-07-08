
  fn uu_env::uu_app::hee268625580a1e1b(arg1: i64) -> i64

{
    let mut var_538: i128;
    clap_builder::builder::command::Command::new::h82ee946e88d35563(&var_538, 
        "uu_env0.0.28Set each NAME to VAL…");
    let mut var_800: ();
    clap_builder::builder::command::Command::version::hea5eef57fa44d04c(&var_800, &var_538, 
        "0.0.28Set each NAME to VALUE in …");
    clap_builder::builder::command::Command::about::h499a27fded82a175(&var_538, &var_800, 
        "Set each NAME to VALUE in the en…", 0x39);
    let mut var_a50: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a50, "{} [OPTION]... [-] [NAME=VALUE].…", 0x35);
    clap_builder::builder::command::Command::override_usage::h2d939722c7265726(&var_800, &var_538, 
        &var_a50);
    clap_builder::builder::command::Command::after_help::h40247e36bfff4c88(&var_538, &var_800, 
        "A mere - implies -i. If no COMMA…", 0x44);
    memcpy(&var_800, &var_538, 0x2bc);
    let var_27c: i32;
    let var_544: i32 = 0xa0 | var_27c;
    let var_278: i64;
    let var_540: i64 = 0x80 | var_278;
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_538, 
        "ignore-environmentstart with an …");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_538, 0x69);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_538, &var_a50, 
        "ignore-environmentstart with an …");
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_538, 
        "start with an empty environmentc…", 0x1f);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_268, &var_a50, 2);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_538, &var_800, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_800, 
        "chdirDIRchange working directory…");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_800, 0x43);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_800, &var_a50, 
        "chdirDIRchange working directory…");
    clap_builder::builder::arg::Arg::number_of_values::h0593b8edb9882a67(&var_a50, &var_800, 1);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_800, &var_a50, 
        "DIRchange working directory to D…");
    let mut var_a68: i64 = 2;
    let var_a58: i64;
    let var_258: i64 = var_a58;
    var_268 = var_a68;
    let var_a60: i64;
    let var_260: i64 = var_a60;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_a50, &var_800, &var_268);
    clap_builder::builder::arg::Arg::value_hint::hd2c2f8470b8dc8da(&var_800, &var_a50, 4);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_800, 
        "change working directory to DIRe…", 0x1f);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_800, &var_538, &var_a50);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_538, "nullXCPUBOLDBlue]");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_538, 0x30);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_538, &var_a50, 
        "nullXCPUBOLDBlue]");
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_538, 
        "end each output line with a 0 by…", 0x63);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_268, &var_a50, 2);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_538, &var_800, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_800, "fileTSTPi128 as dyn ");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_800, 0x66);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_800, &var_a50, 
        "fileTSTPi128 as dyn ");
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_a50, &var_800, 
        "PATHvarsTERMchararg[ -> STOPTTIN…");
    clap_builder::builder::arg::Arg::value_hint::hd2c2f8470b8dc8da(&var_800, &var_a50, 3);
    let var_258_1: i64 = var_a58;
    var_268 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_a50, &var_800, &var_268);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_800, &var_a50, 1);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_800, 
        "read and set variables from a ".…", 0x5d);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_800, &var_538, &var_a50);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_538, 
        "unsetremove variable from the en…");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_538, 0x75);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_538, &var_a50, 
        "unsetremove variable from the en…");
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_a50, &var_538, 
        "NAMETRAPKILLAnsi -- \x1b[8mPIPEh…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_538, &var_a50, 1);
    let var_258_2: i64 = var_a58;
    var_268 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_a50, &var_538, &var_268);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_268, &var_a50, 
        "remove variable from the environ…", 0x24);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_538, &var_800, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_800, 
        "debugprint verbose information f…");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_800, 0x76);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_800, &var_a50, 
        "debugprint verbose information f…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_a50, &var_800, 4);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_268, &var_a50, 
        "print verbose information for ea…", 0x32);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_800, &var_538, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_538, 
        "split-stringSprocess and split S…");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_a50, &var_538, 0x53);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_538, &var_a50, 
        "split-stringSprocess and split S…");
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_a50, &var_538, 
        "Sprocess and split S into separa…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_538, &var_a50, 0);
    let var_258_3: i64 = var_a58;
    var_268 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_a50, &var_538, &var_268);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_268, &var_a50, 
        "process and split S into separat…", 0x5d);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_538, &var_800, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_800, 
        "argv0aOverride the zeroth argume…");
    clap_builder::builder::arg::Arg::overrides_with::h6554d17c14b8bfea(&var_a50, &var_800, 
        "argv0aOverride the zeroth argume…");
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&var_800, &var_a50, 0x61);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_a50, &var_800, 
        "argv0aOverride the zeroth argume…");
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_800, &var_a50, 
        "aOverride the zeroth argument pa…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_a50, &var_800, 0);
    let var_258_4: i64 = var_a58;
    var_268 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_800, &var_a50, &var_268);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_800, 
        "Override the zeroth argument pas…", 0x7c);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_800, &var_538, &var_a50);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_538, 
        "varsTERMchararg[ -> STOPTTIN\x1b…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_a50, &var_538, 1);
    let var_528: i64 = var_a58;
    var_538 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_268, &var_a50, &var_538);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&var_538, &var_800, &var_268);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&var_800, 
        "ignore-signalSIGset handling of …");
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&var_a50, &var_800, 
        "ignore-signalSIGset handling of …");
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&var_800, &var_a50, 
        "SIGset handling of SIG signal(s)…");
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&var_a50, &var_800, 1);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&var_800, &var_a50, &var_a68);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&var_a50, &var_800, 
        "set handling of SIG signal(s) to…", 0x2b);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(arg1, &var_538, &var_a50);
    arg1
}
