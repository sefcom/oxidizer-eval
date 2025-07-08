
  int64_t uu_hashsum::uu_app_common::haf156add4ae409e5(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::h279cb1764e092cfc(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::h1915c97be964726e(&var_530, &var_7f8, 
        "0.0.28Compute and check message …");
    clap_builder::builder::command::Command::about::h32eb9af4213b0aa4(&var_7f8, &var_530, 
        "Compute and check message digest…", 0x22);
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTIONS] [FILE]...binaryread…", 0x16);
    clap_builder::builder::command::Command::override_usage::h3074fb1ea9187600(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8800000088 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_530, 0x62);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_530, &var_a48, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_530, 
        "read in binary modecheckread has…", 0x13);
    int64_t var_268;
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_7f8, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_7f8, 0x63);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_7f8, &var_a48, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_7f8, 
        "read hashsums from the FILEs and…", 0x2b);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_7f8, &var_a48, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&var_a48, &var_7f8, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_a48, &var_530, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_530, &var_a48, 
        "create a BSD-style checksumread …", 0x1b);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_a48, &var_530, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&var_268, &var_a48, 
        "textSomee");
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_7f8, "textSomee");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_7f8, 0x74);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_7f8, &var_a48, "textSomee");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_7f8, 
        "read in text mode (default)quiet…", 0x1b);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&var_7f8, &var_a48, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_530, 0x71);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_530, &var_a48, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_530, 
        "don't print OK for each successf…", 0x32);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_7f8, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_7f8, &var_a48, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_7f8, 
        "don't output anything, status co…", 0x30);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_a48, &var_530, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_530, &var_a48, 
        "exit non-zero for improperly for…", 0x35);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_7f8, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_a48, &var_7f8, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_7f8, &var_a48, 
        "don't fail or report status for …", 0x2d);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, "warnZeroV");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_530, 0x77);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_530, &var_a48, "warnZeroV");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_530, 
        "warn about improperly formatted …", 0x2e);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_7f8, "zeroAnsib");
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_a48, &var_7f8, 0x7a);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_7f8, &var_a48, "zeroAnsib");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_a48, &var_7f8, 
        "end each output line with NUL, n…", 0x2a);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_530, "fileEDOMmode{");
    clap_builder::builder::arg::Arg::index::h80fba87efb994c29(&var_a48, &var_530);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_name::h91d0b43819df8b7b(&var_a48, &var_530, 
        "fileEDOMmode{");
    clap_builder::builder::arg::Arg::value_hint::h03ccd5ef06a1424d(&var_530, &var_a48, 3);
    var_268 = 2;
    clap_builder::builder::arg::Arg::value_parser::hdd3734fe96556585(&var_a48, &var_530, &var_268);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(arg1, &var_7f8, &var_a48);
    return arg1;
}
