
  fn uu_paste::uu_app::h87aafd5fcd701ee2(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::h2d89901a4c11736f(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h1786ea0568577d16(&var_530, &var_7f8, 
        "0.0.28Write lines consisting of …");
    clap_builder::builder::command::Command::about::he37ac683e6989227(&var_7f8, &var_530, 
        "Write lines consisting of the se…", 0x79);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTIONS] [FILE]...serialpast…", 0x16);
    clap_builder::builder::command::Command::override_usage::h36151491c16bc914(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&var_530, 
        "serialpaste one file at a time i…");
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&var_a48, &var_530, 
        "serialpaste one file at a time i…");
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&var_530, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&var_a48, &var_530, 
        "paste one file at a time instead…", 0x2f);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&var_7f8, 
        "delimitersreuse characters from …");
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&var_a48, &var_7f8, 
        "delimitersreuse characters from …");
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&var_7f8, &var_a48, 0x64);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&var_a48, &var_7f8, 
        "reuse characters from LIST inste…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::hb77c6348bf2cf90f(&var_7f8, &var_a48, 
        "LISTAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::default_value::h5773730136277d55(&var_a48, &var_7f8, 
        "\t-zero-terminatedline delimiter…");
    memcpy(&var_268, &var_a48, 0x248);
    let var_800: i32;
    let var_20: i32 = 0x400 | var_800;
    let var_7fc: i32;
    let var_1c: i32 = var_7fc;
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&var_530, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::value_name::hb77c6348bf2cf90f(&var_a48, &var_530, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::default_value::h5773730136277d55(&var_a48, &var_530, 
        "-zero-terminatedline delimiter i…");
    clap_builder::builder::arg::Arg::value_hint::h9782c062f6c33716(&var_268, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h69c65de3dd0c85d1(&var_7f8, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::long::h32a364c1d5e44f7a(&var_a48, &var_7f8, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::short::h50c6c71bc945f571(&var_7f8, &var_a48, 0x7a);
    clap_builder::builder::arg::Arg::help::hd0bdc3f2ccbb627d(&var_a48, &var_7f8, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h40df50799c878ac5(&var_7f8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h319b9505fad8ef44(arg1, &var_530, &var_7f8);
    arg1
}
