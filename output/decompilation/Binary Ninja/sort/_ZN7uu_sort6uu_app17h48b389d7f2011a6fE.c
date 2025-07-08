
  int64_t uu_sort::uu_app::h48b389d7f2011a6f(int64_t arg1)

{
    char const* const var_820;
    clap_builder::builder::command::Command::new::hd1db7c2463193fc5(&var_820, 
        uucore::util_name::h60d842bf27b05e82());
    int64_t var_558;
    clap_builder::builder::command::Command::version::h09678657269ecd73(&var_558, &var_820, 
        "0.0.28Display sorted concatenati…");
    clap_builder::builder::command::Command::about::h8c84fbd2c531229a(&var_820, &var_558, 
        "Display sorted concatenation of …", 0x62);
    clap_builder::builder::command::Command::after_help::h404ae101f851e81b(&var_558, &var_820, 
        "The key format is FIELD[.CHAR][O…", 0x297);
    char const* const var_a70;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a70, "{} [OPTION]... [FILE]...Print he…", 0x18);
    clap_builder::builder::command::Command::override_usage::h6de7701807b0af4f(&var_820, &var_558, 
        &var_a70);
    memcpy(&var_558, &var_820, 0x2bc);
    int64_t var_564;
    int64_t var_29c = 0x14008800140088 | var_564;
    int32_t var_55c;
    int32_t var_294 = var_55c;
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "help-inflineNoneshimname\x1b[0m …");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_820, 
        "help-inflineNoneshimname\x1b[0m …");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_820, &var_a70, 
        "Print help information.versionPr…", 0x17);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_820, 5);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_558, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_558, &var_a70, 
        "Print version information.genera…", 0x1a);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_558, 8);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, &data_424374[0x10]);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_820, 
        &data_424374[0x10]);
    var_820 = "general-numerichuman-numericmont…";
    int64_t var_818 = 0xf;
    char const* const var_810 = "human-numericmonthnumericrandomc…";
    int64_t var_808 = 0xd;
    char const* const var_800 = "monthnumericrandomcompare accord…";
    int64_t var_7f8 = 5;
    char const* const var_7f0 = "numericrandomcompare according t…";
    int64_t var_7e8 = 7;
    char const* const var_7e0 = "versionPrint version information…";
    int64_t var_7d8 = 7;
    char const* const var_7d0 = "randomcompare according to human…";
    int64_t var_7c8 = 6;
    int128_t var_288;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h3f400171af95931d(&var_288, &var_820);
    clap_builder::builder::arg::Arg::value_parser::hee521409f72fdc71(&var_820, &var_a70, &var_288);
    int128_t var_238 = *data_5ffc48;
    int128_t var_248 = *data_5ffc38;
    int128_t var_258 = *data_5ffc28;
    int128_t var_268 = *data_5ffc18;
    int128_t var_278 = *data_5ffc08;
    var_288 = *data_5ffbf8;
    clap_builder::builder::arg::Arg::conflicts_with_all::hecac1878624bc9b9(&var_a70, &var_820, 
        &var_288);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "human-numeric-sortmonth-sortnume…", 
        0x12, 0x68, "compare according to human reada…", 0x37);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "month-sortnumeric-sortversion-so…", 
        0xa, 0x4d, "compare according to month name …", 0x2c);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "numeric-sortversion-sortrandom-s…", 
        0xc, 0x6e, "compare according to string nume…", 0x2b);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "general-numeric-sorthuman-numeri…", 
        0x14, 0x67, "compare according to string gene…", 0x33);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "version-sortrandom-sortFailed to…", 
        0xc, 0x56, "Sort by SemVer version number, e…", 0x30);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&var_a70, "random-sortFailed to fetch rlimi…", 
        0xb, 0x52, "shuffle in random orderconsider …", 0x17);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, "dictionary-order");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x64);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "dictionary-order");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "consider only blanks and alphanu…", 0x30);
    char const* const var_ab0 = "numeric-sortversion-sortrandom-s…";
    int64_t var_aa8 = 0xc;
    var_258 = "month-sortnumeric-sortversion-so…";
    *var_258[8] = 0xa;
    var_268 = "human-numeric-sortmonth-sortnume…";
    *var_268[8] = 0x12;
    var_278 = "general-numeric-sorthuman-numeri…";
    *var_278[8] = 0x14;
    var_288 = var_ab0;
    clap_builder::builder::arg::Arg::conflicts_with_all::hf685bc3e3a40c93d(&var_558, &var_a70, 
        &var_288);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "mergemerge already sorted files;…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x6d);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "mergemerge already sorted files;…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "merge already sorted files; do n…", 0x27);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "checksilentquietdiagnose-firstou…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x63);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "checksilentquietdiagnose-firstou…");
    memcpy(&var_a70, &var_558, 0x248);
    int32_t var_310;
    int32_t var_828 = 0x80 | var_310;
    int32_t var_30c;
    int32_t var_824 = var_30c;
    clap_builder::builder::arg::Arg::num_args::he2517ce56841ccd1(&var_558, &var_a70);
    var_a70 = "silentquietdiagnose-firstoutputc…";
    int64_t var_a68 = 6;
    char const* const var_a60 = "quietdiagnose-firstoutputcheck f…";
    int64_t var_a58 = 5;
    char const* const var_a50 = "diagnose-firstoutputcheck for so…";
    int64_t var_a48 = 0xe;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h63cf271f696422e6(&var_288, &var_a70);
    clap_builder::builder::arg::Arg::value_parser::hee521409f72fdc71(&var_a70, &var_558, &var_288);
    clap_builder::builder::arg::Arg::conflicts_with::h3b5bf0600745f61d(&var_558, &var_a70, 
        "outputcheck for sorted input; do…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "check for sorted input; do not s…", 0x23);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "check-silentexit successfully if…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x43);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "check-silentexit successfully if…");
    clap_builder::builder::arg::Arg::conflicts_with::h3b5bf0600745f61d(&var_a70, &var_820, 
        "outputcheck for sorted input; do…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_820, &var_a70, 
        "exit successfully if the given f…", 0x58);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "ignore-casefold lower case to up…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x66);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "ignore-casefold lower case to up…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "fold lower case to upper case ch…", 0x28);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "ignore-nonprintingignore nonprin…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x69);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "ignore-nonprintingignore nonprin…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "ignore nonprinting charactersign…", 0x1d);
    clap_builder::builder::arg::Arg::conflicts_with_all::hf685bc3e3a40c93d(&var_820, &var_a70, 
        &var_ab0);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "ignore-leading-blanksignore lead…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x62);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "ignore-leading-blanksignore lead…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "ignore leading blanks when findi…", 0x39);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "outputcheck for sorted input; do…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x6f);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "outputcheck for sorted input; do…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "write output to FILENAME instead…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_820, &var_a70, 
        "FILENAME\n       Disorderextern …");
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&var_a70, &var_820, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "reversereverse the outputstables…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x72);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "reversereverse the outputstables…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "reverse the outputstablestabiliz…", 0x12);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "stablestabilize sort by disablin…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x73);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "stablestabilize sort by disablin…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "stabilize sort by disabling last…", 0x32);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "uniqueoutput only the first of a…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x75);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "uniqueoutput only the first of a…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "output only the first of an equa…", 0x25);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "keysort by a keyfield-separatorc…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x6b);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "keysort by a keyfield-separatorc…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "sort by a keyfield-separatorcust…", 0xd);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_820, &var_a70, 1);
    clap_builder::builder::arg::Arg::num_args::h4ab686050c83fbf8(&var_a70, &var_820);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "field-separatorcustom separator …");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x74);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "field-separatorcustom separator …");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "custom separator for -kzero-term…", 0x17);
    int64_t var_ac8 = 2;
    int64_t var_ab8;
    int64_t var_548 = var_ab8;
    var_558 = var_ac8;
    int64_t var_ac0;
    int64_t var_550 = var_ac0;
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&var_288, &var_a70, &var_558);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x7a);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_288, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, "parallelDeadlock");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_558, 
        "parallelDeadlock");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_558, &var_a70, 
        "change the number of threads run…", 0x40);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_a70, &var_558, 
        "NUM_THREADSbuffer-sizesets the m…");
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "buffer-sizesets the maximum SIZE…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_820, 0x53);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_820, &var_a70, 
        "buffer-sizesets the maximum SIZE…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_820, 
        "sets the maximum SIZE of each se…", 0x3f);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_288, &var_a70, 
        &data_4242cc);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "temporary-directoryuse DIR for t…");
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_a70, &var_558, 0x54);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_558, &var_a70, 
        "temporary-directoryuse DIR for t…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_a70, &var_558, 
        "use DIR for temporaries, not $TM…", 0x2c);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_558, &var_a70, 
        "DIRcompress temporary files with…");
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&var_a70, &var_558, 4);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, "compress-program");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_820, 
        "compress-program");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_820, &var_a70, 
        "compress temporary files with PR…", 0x73);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_a70, &var_820, 
        "PROGSomedumb\x1b[5m <= \x1b[9mtr…");
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&var_288, &var_a70, 6);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "batch-sizeMerge at most N_MERGE …");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_558, 
        "batch-sizeMerge at most N_MERGE …");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_558, &var_a70, 
        "Merge at most N_MERGE inputs at …", 0x25);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_a70, &var_558, 
        "N_MERGEfiles0-fromread input fro…");
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "files0-fromread input from the f…");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_820, 
        "files0-fromread input from the f…");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_820, &var_a70, 
        "read input from the files specif…", 0x3f);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&var_a70, &var_820, 
        "NUL_FILESdebugunderline the part…");
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_820, &var_a70, 1);
    var_278 = var_ab8;
    var_288 = var_ac8;
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&var_a70, &var_820, &var_288);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&var_288, &var_a70, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_820, &var_558, &var_288);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_558, 
        "debugunderline the parts of the …");
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_a70, &var_558, 
        "debugunderline the parts of the …");
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_558, &var_a70, 
        "underline the parts of the line …", 0x42);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_820, 
        "filesonly one file allowed with …");
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_a70, &var_820, 1);
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&var_820, &var_a70, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&var_a70, &var_820, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(arg1, &var_558, &var_a70);
    return arg1;
}
