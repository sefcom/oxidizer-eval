
  int64_t uu_mktemp::uu_app::h678f679507a186e9(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::h76c7f6d05f88d66b(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::hd42484b89d9bacd4(&var_530, &var_7f8, 
        "0.0.28Create a temporary file or…");
    clap_builder::builder::command::Command::about::h7938a9e7ef03708f(&var_7f8, &var_530, 
        "Create a temporary file or direc…", 0x25);
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [TEMPLATE]Make a …", 0x19);
    clap_builder::builder::command::Command::override_usage::h619a592790955547(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_530, 
        "directorydry-runquietsuffixtmpdi…");
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&var_a48, &var_530, 0x64);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&var_530, &var_a48, 
        "directorydry-runquietsuffixtmpdi…");
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_a48, &var_530, 
        "Make a directory instead of a fi…", 0x22);
    int64_t var_268;
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_7f8, 
        "dry-runquietsuffixtmpdirptcould …");
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&var_a48, &var_7f8, 0x75);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&var_7f8, &var_a48, 
        "dry-runquietsuffixtmpdirptcould …");
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_a48, &var_7f8, 
        "do not create anything; merely p…", 0x34);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_530, 
        "quietsuffixtmpdirptcould not per…");
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&var_a48, &var_530, 0x71);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&var_530, &var_a48, 
        "quietsuffixtmpdirptcould not per…");
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_a48, &var_530, 
        "Fail silently if an error occurs…", 0x21);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_7f8, 
        "suffixtmpdirptcould not persist …");
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&var_a48, &var_7f8, 
        "suffixtmpdirptcould not persist …");
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_7f8, &var_a48, 
        "append SUFFIX to TEMPLATE; SUFFI…", 0x7c);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&var_a48, &var_7f8, 
        "SUFFIXshort form of --tmpdirDIRi…");
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_530, 
        "ptcould not persist file with --…");
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&var_a48, &var_530, 0x70);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_530, &var_a48, 
        "short form of --tmpdirDIRinterpr…", 0x16);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&var_a48, &var_530, 
        "DIRinterpret TEMPLATE relative t…");
    clap_builder::builder::arg::Arg::num_args::h6743cf132f863e79(&var_530, &var_a48);
    int64_t var_a60 = 3;
    int64_t var_a50;
    int64_t var_258 = var_a50;
    var_268 = var_a60;
    int64_t var_a58;
    int64_t var_260 = var_a58;
    clap_builder::builder::arg::Arg::value_parser::hb5266bfd1f63f64c(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::value_hint::h5b4535c7fc4341eb(&var_268, &var_a48, 4);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_7f8, 
        "tmpdirptcould not persist file w…");
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&var_a48, &var_7f8, 
        "tmpdirptcould not persist file w…");
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_7f8, &var_a48, 
        "interpret TEMPLATE relative to D…", 0x100);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&var_a48, &var_7f8, 
        "DIRinterpret TEMPLATE relative t…");
    var_268 = 0;
    int64_t var_260_1 = 1;
    var_258 = 0;
    clap_builder::builder::arg::Arg::num_args::he75e4a05b31a31ab(&var_7f8, &var_a48, &var_268);
    memcpy(&var_a48, &var_7f8, 0x248);
    int32_t var_5b0;
    int32_t var_800 = 0x80 | var_5b0;
    int32_t var_5ac;
    int32_t var_7fc = var_5ac;
    clap_builder::builder::arg::Arg::overrides_with::h2c072bf86a60bf55(&var_7f8, &var_a48, 
        "ptcould not persist file with --…");
    clap_builder::builder::arg::Arg::value_parser::hb5266bfd1f63f64c(&var_a48, &var_7f8, &var_a60);
    clap_builder::builder::arg::Arg::value_hint::h5b4535c7fc4341eb(&var_268, &var_a48, 4);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_530, 
        "tcould not persist file with --s…");
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&var_a48, &var_530, 0x74);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&var_530, &var_a48, 
        "Generate a template (using the s…", 0x7d);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&var_a48, &var_530);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&var_7f8, "templateDeadlock");
    clap_builder::builder::arg::Arg::num_args::hc0a90c4cca44ae1d(&var_a48, &var_7f8);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(arg1, &var_530, &var_a48);
    return arg1;
}
