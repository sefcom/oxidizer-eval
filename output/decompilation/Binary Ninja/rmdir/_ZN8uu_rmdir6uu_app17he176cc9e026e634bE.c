
  int64_t uu_rmdir::uu_app::he176cc9e026e634b(int64_t arg1)

{
    void var_a50;
    clap_builder::builder::command::Command::new::h729fb2eca598e7e0(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    clap_builder::builder::command::Command::version::h4e16bcafc6797686(&var_538, &var_a50);
    clap_builder::builder::command::Command::about::h2590688cd038a4f8(&var_a50, &var_538);
    void var_788;
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... DIRECTORY...ignor…", 0x1b);
    clap_builder::builder::command::Command::override_usage::h984a09963e79e475(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    int64_t var_27c;
    int64_t var_794 = 0x8000000080 | var_27c;
    int32_t var_274;
    int32_t var_78c = var_274;
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&var_538, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&var_788, &var_538, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&var_538, &var_788, 
        "ignore each failure that is sole…", 0x43);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&var_a50, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::short::h325ab8446f1eb8ba(&var_788, &var_a50, 0x70);
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&var_a50, &var_788, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&var_788, &var_a50, 
        "remove DIRECTORY and its ancesto…", 0x6c);
    int64_t var_270;
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&var_538, 
        "verbose: removing directory, \n0…");
    clap_builder::builder::arg::Arg::short::h325ab8446f1eb8ba(&var_788, &var_538, 0x76);
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&var_538, &var_788, 
        "verbose: removing directory, \n0…");
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&var_788, &var_538, 
        "output a diagnostic for every di…", 0x31);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&var_a50, 
        "dirs\x1b[9mtrueTERMchar -> \x1b[…");
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&var_788, &var_a50, 1);
    clap_builder::builder::arg::Arg::num_args::h4ae6db6e08d351be(&var_a50, &var_788);
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_808;
    int32_t var_540 = var_808 | 1;
    int32_t var_804;
    int32_t var_53c = var_804;
    var_270 = 2;
    clap_builder::builder::arg::Arg::value_parser::h7936c038b7a39011(&var_a50, &var_788, &var_270);
    clap_builder::builder::arg::Arg::value_hint::h0db0af3d90a31669(&var_788, &var_a50);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(arg1, &var_538, &var_788);
    return arg1;
}
