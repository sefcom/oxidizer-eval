
  fn uu_mkdir::uu_app::h2281d15957ce8683(arg1: i64) -> i64

{
    let mut var_a48: ();
    clap_builder::builder::command::Command::new::h795eb4adb8e3c50a(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h6e703008c761bba0(&var_530, &var_a48, 
        "0.0.28Create the given DIRECTORY…");
    clap_builder::builder::command::Command::about::h8658f4a857dcef07(&var_a48, &var_530, 
        "Create the given DIRECTORY(ies) …", 0x34);
    let mut var_780: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... DIRECTORY...set f…", 0x1b);
    clap_builder::builder::command::Command::override_usage::hce6268cc1a1bc3e2(&var_530, &var_a48, 
        &var_780);
    memcpy(&var_a48, &var_530, 0x2bc);
    let var_274: i64;
    let var_78c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_784: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&var_530, "modei128 as dyn ");
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&var_780, &var_530, 0x6d);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&var_530, &var_780, 
        "modei128 as dyn ");
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&var_780, &var_530, 
        "set file mode (not implemented o…", 0x2a);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&var_530, &var_a48, &var_780);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&var_a48, 
        "parentsmake parent directories a…");
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&var_780, &var_a48, 0x70);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&var_a48, &var_780, 
        "parentsmake parent directories a…");
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&var_780, &var_a48, 
        "make parent directories as neede…", 0x21);
    clap_builder::builder::arg::Arg::overrides_with::hb5e23a6bb58cce2d(&var_a48, &var_780, 
        "parentsmake parent directories a…");
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&var_780, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&var_530, 
        "verboseprint a message for each …");
    clap_builder::builder::arg::Arg::short::h188d8eee4027bcca(&var_780, &var_530, 0x76);
    clap_builder::builder::arg::Arg::long::h0e7f97fad10cb351(&var_530, &var_780, 
        "verboseprint a message for each …");
    clap_builder::builder::arg::Arg::help::hfcfe8af5e4e0b317(&var_780, &var_530, 
        "print a message for each printed…", 0x2a);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hd930c321111f1ba4(&var_a48, 
        "dirs <= \x1b[9mtrueTERMchar -> \x1b…");
    clap_builder::builder::arg::Arg::action::h4db85773161f88de(&var_780, &var_a48, 1);
    clap_builder::builder::arg::Arg::num_args::ha621a2a957949a4b(&var_a48, &var_780);
    memcpy(&var_780, &var_a48, 0x248);
    let var_800: i32;
    let var_538: i32 = var_800 | 1;
    let var_7fc: i32;
    let var_534: i32 = var_7fc;
    var_268 = 2;
    clap_builder::builder::arg::Arg::value_parser::h771dc5ae7e04ccf8(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::value_hint::h4c514b1e571be732(&var_780, &var_a48, 4);
    clap_builder::builder::command::Command::arg::h689a48614b8bd7d5(arg1, &var_530, &var_780);
    arg1
}
