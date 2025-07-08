
  fn uu_truncate::uu_app::h12570e18f36d91c3(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::hee03e2cdf1addeb4(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::h38e680c56345d57a(&var_7f8, &var_530, 
        "0.0.28Shrink or extend the size …");
    clap_builder::builder::command::Command::about::hdc0b6614eee27bd9(&var_530, &var_7f8, 
        "Shrink or extend the size of eac…", 0x3d);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]...treat SI…", 0x18);
    clap_builder::builder::command::Command::override_usage::h73764f9f4ca0f96e(&var_7f8, &var_530, 
        &var_a48);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::h23364287673f1608(&var_7f8, 
        "io-blocksno-createreferencefiles");
    clap_builder::builder::arg::Arg::short::hf8477268ad2332cc(&var_a48, &var_7f8, 0x6f);
    clap_builder::builder::arg::Arg::long::h97185ba2098bc5b5(&var_7f8, &var_a48, 
        "io-blocksno-createreferencefiles");
    clap_builder::builder::arg::Arg::help::hcb1068864cc17e4e(&var_a48, &var_7f8, 
        "treat SIZE as the number of I/O …", 0x56);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h69b6cfa60b29f402(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc64231f0de05e629(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h23364287673f1608(&var_530, "no-createreferencefiles");
    clap_builder::builder::arg::Arg::short::hf8477268ad2332cc(&var_a48, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h97185ba2098bc5b5(&var_530, &var_a48, 
        "no-createreferencefiles");
    clap_builder::builder::arg::Arg::help::hcb1068864cc17e4e(&var_a48, &var_530, 
        "do not create files that do not …", 0x25);
    clap_builder::builder::arg::Arg::action::h69b6cfa60b29f402(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc64231f0de05e629(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h23364287673f1608(&var_7f8, "referencefiles");
    clap_builder::builder::arg::Arg::short::hf8477268ad2332cc(&var_a48, &var_7f8, 0x72);
    clap_builder::builder::arg::Arg::long::h97185ba2098bc5b5(&var_7f8, &var_a48, "referencefiles");
    clap_builder::builder::arg::Arg::required_unless_present::h0c596cfcfbcaec26(&var_a48, &var_7f8, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::hcb1068864cc17e4e(&var_7f8, &var_a48, 
        "base the size of each file on th…", 0x2f);
    clap_builder::builder::arg::Arg::value_name::h17e5003e2062cbd5(&var_a48, &var_7f8, 
        "RFILEset or adjust the size of e…");
    clap_builder::builder::arg::Arg::value_hint::h5a2f57dc25d37680(&var_268, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hc64231f0de05e629(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h23364287673f1608(&var_530, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::hf8477268ad2332cc(&var_a48, &var_530, 0x73);
    clap_builder::builder::arg::Arg::long::h97185ba2098bc5b5(&var_530, &var_a48, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::required_unless_present::h0c596cfcfbcaec26(&var_a48, &var_530, 
        "referencefiles");
    clap_builder::builder::arg::Arg::help::hcb1068864cc17e4e(&var_530, &var_a48, 
        "set or adjust the size of each f…", 0x68);
    clap_builder::builder::arg::Arg::value_name::h17e5003e2062cbd5(&var_a48, &var_530, 
        "SIZEZero\x1b[7m");
    clap_builder::builder::command::Command::arg::hc64231f0de05e629(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h23364287673f1608(&var_7f8, "files");
    clap_builder::builder::arg::Arg::value_name::h17e5003e2062cbd5(&var_a48, &var_7f8, 
        "FILE -> \x1b[2m -- \x1b[8mhelpNo…");
    clap_builder::builder::arg::Arg::action::h69b6cfa60b29f402(&var_7f8, &var_a48, 1);
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800: i32 = var_5b0 | 1;
    let var_5ac: i32;
    let var_7fc: i32 = var_5ac;
    clap_builder::builder::arg::Arg::value_hint::h5a2f57dc25d37680(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hc64231f0de05e629(arg1, &var_530, &var_7f8);
    arg1
}
