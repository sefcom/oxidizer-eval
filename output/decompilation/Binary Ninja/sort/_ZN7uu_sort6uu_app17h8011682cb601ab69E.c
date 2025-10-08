
  int64_t uu_sort::uu_app::h8011682cb601ab69(int64_t arg1)

{
    char const* const var_840;
    clap_builder::builder::command::Command::new::h3afb6968de38ac72(&var_840, 
        uucore::util_name::h074417a1e6395129());
    void var_578;
    clap_builder::builder::command::Command::version::hc1447f01f7548aa4(&var_578, &var_840);
    clap_builder::builder::command::Command::about::haf464902c00aa0f8(&var_840, &var_578);
    clap_builder::builder::command::Command::after_help::hb123e56d034381b8(&var_578, &var_840);
    char const* const var_ad8;
    uucore::format_usage::he053403a896311ed(&var_ad8, "{} [OPTION]... [FILE]...Print he…", 0x18);
    clap_builder::builder::command::Command::override_usage::h10c615c8b61416e1(&var_840, &var_578, 
        &var_ad8);
    memcpy(&var_578, &var_840, 0x2bc);
    int64_t var_584;
    int64_t var_2bc = 0x28008800280088 | var_584;
    int32_t var_57c;
    int32_t var_2b4 = var_57c;
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "help-inflineNoneshim\x1b[0mname …");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_840, 
        "help-inflineNoneshim\x1b[0mname …");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_840, &var_ad8, 
        "Print help information.versionPr…", 0x17);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_840, 5);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_578, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_578, &var_ad8, 
        "Print version information.genera…", 0x1a);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_578, 8);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, &data_426bd0[0x14]);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_840, 
        &data_426bd0[0x14]);
    var_840 = "general-numerichuman-numericmont…";
    int64_t var_838 = 0xf;
    char const* const var_830 = "human-numericmonthnumericrandomc…";
    int64_t var_828 = 0xd;
    char const* const var_820 = "monthnumericrandomcompare accord…";
    int64_t var_818 = 5;
    char const* const var_810 = "numericrandomcompare according t…";
    int64_t var_808 = 7;
    char const* const var_800 = "versionPrint version information…";
    int64_t var_7f8 = 7;
    char const* const var_7f0 = "randomcompare according to human…";
    int64_t var_7e8 = 6;
    char const* const var_2b0;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h3ded132934dfc845(&var_2b0, &var_840);
    clap_builder::builder::arg::Arg::value_parser::h13a0652c92d041af(&var_840, &var_ad8, &var_2b0);
    clap_builder::builder::arg::Arg::conflicts_with_all::h747c377cbe357a2e(&var_ad8, &var_840, 
        &data_58d1d0);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "human-numeric-sortmonth-sortnume…", 
        0x12, 0x68, "compare according to human reada…", 0x37);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "month-sortnumeric-sortversion-so…", 
        0xa, 0x4d, "compare according to month name …", 0x2c);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "numeric-sortversion-sortrandom-s…", 
        0xc, 0x6e, "compare according to string nume…", 0x2b);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "general-numeric-sorthuman-numeri…", 
        0x14, 0x67, "compare according to string gene…", 0x33);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "version-sortrandom-sortFailed to…", 
        0xc, 0x56, "Sort by SemVer version number, e…", 0x30);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    uu_sort::make_sort_mode_arg::ha1a076c92d3e898b(&var_ad8, "random-sortFailed to fetch rlimi…", 
        0xb, 0x52, "shuffle in random orderconsider …", 0x17);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "dictionary-order[short aliases: ");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x64);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "dictionary-order[short aliases: ");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "consider only blanks and alphanu…", 0x30);
    var_2b0 = "numeric-sortversion-sortrandom-s…";
    int64_t var_2a8 = 0xc;
    char const* const var_2a0 = "general-numeric-sorthuman-numeri…";
    int64_t var_298 = 0x14;
    char const* const var_290 = "human-numeric-sortmonth-sortnume…";
    int64_t var_288 = 0x12;
    char const* const var_280 = "month-sortnumeric-sortversion-so…";
    int64_t var_278 = 0xa;
    clap_builder::builder::arg::Arg::conflicts_with_all::h65890bb380829d1e(&var_578, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_578, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "mergemerge already sorted files;…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x6d);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "mergemerge already sorted files;…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "merge already sorted files; do n…", 0x27);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "checksilentquietdiagnose-firstou…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x63);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "checksilentquietdiagnose-firstou…");
    memcpy(&var_ad8, &var_578, 0x278);
    int32_t var_300;
    int32_t var_860 = 0x80 | var_300;
    int32_t var_2fc;
    int32_t var_85c = var_2fc;
    clap_builder::builder::arg::Arg::num_args::h8bea5c2512e5ebc9(&var_578, &var_ad8);
    var_ad8 = "silentquietdiagnose-firstoutputc…";
    int64_t var_ad0 = 6;
    char const* const var_ac8 = "quietdiagnose-firstoutputcheck-s…";
    int64_t var_ac0 = 5;
    char const* const var_ab8 = "diagnose-firstoutputcheck-silent…";
    int64_t var_ab0 = 0xe;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h1aad84c19dbbd8e7(&var_2b0, &var_ad8);
    clap_builder::builder::arg::Arg::value_parser::h13a0652c92d041af(&var_ad8, &var_578, &var_2b0);
    var_2b0 = "outputcheck-silentcheck for sort…";
    int64_t var_2a8_1 = 6;
    char const* const var_2a0_1 = "check-silentcheck for sorted inp…";
    int64_t var_298_1 = 0xc;
    clap_builder::builder::arg::Arg::conflicts_with_all::h9c1cb115a19a47e9(&var_578, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "check for sorted input; do not s…", 0x23);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "check-silentcheck for sorted inp…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x43);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "check-silentcheck for sorted inp…");
    var_2b0 = "outputcheck-silentcheck for sort…";
    int64_t var_2a8_2 = 6;
    char const* const var_2a0_2 = "checksilentquietdiagnose-firstou…";
    int64_t var_298_2 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::h9c1cb115a19a47e9(&var_ad8, &var_840, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_840, &var_ad8, 
        "exit successfully if the given f…", 0x58);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_840, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "ignore-casefold lower case to up…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "ignore-casefold lower case to up…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "fold lower case to upper case ch…", 0x28);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "ignore-nonprintingignore nonprin…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x69);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "ignore-nonprintingignore nonprin…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "ignore nonprinting charactersign…", 0x1d);
    var_2b0 = "numeric-sortversion-sortrandom-s…";
    int64_t var_2a8_3 = 0xc;
    char const* const var_2a0_3 = "general-numeric-sorthuman-numeri…";
    int64_t var_298_3 = 0x14;
    char const* const var_290_1 = "human-numeric-sortmonth-sortnume…";
    int64_t var_288_1 = 0x12;
    char const* const var_280_1 = "month-sortnumeric-sortversion-so…";
    int64_t var_278_1 = 0xa;
    clap_builder::builder::arg::Arg::conflicts_with_all::h65890bb380829d1e(&var_840, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_840, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "ignore-leading-blanksignore lead…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x62);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "ignore-leading-blanksignore lead…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "ignore leading blanks when findi…", 0x39);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "outputcheck-silentcheck for sort…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x6f);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "outputcheck-silentcheck for sort…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "write output to FILENAME instead…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_840, &var_ad8, 
        "FILENAME\n       Disorder");
    clap_builder::builder::arg::Arg::value_hint::hf119227bbe679b8d(&var_ad8, &var_840, 3);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "reversereverse the outputstables…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x72);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "reversereverse the outputstables…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "reverse the outputstablestabiliz…", 0x12);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "stablestabilize sort by disablin…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x73);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "stablestabilize sort by disablin…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "stabilize sort by disabling last…", 0x32);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "uniqueoutput only the first of a…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x75);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "uniqueoutput only the first of a…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "output only the first of an equa…", 0x25);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "keysort by a keyfield-separatorc…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x6b);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "keysort by a keyfield-separatorc…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "sort by a keyfield-separatorcust…", 0xd);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_840, &var_ad8, 1);
    clap_builder::builder::arg::Arg::num_args::h6bc57b13c0c852fc(&var_ad8, &var_840);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "field-separatorcustom separator …");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x74);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "field-separatorcustom separator …");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "custom separator for -kzero-term…", 0x17);
    int64_t var_858 = 2;
    clap_builder::builder::arg::Arg::value_parser::hb352e97d3c5df919(&var_2b0, &var_ad8, &var_858);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x7a);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, "parallel' existsDeadlock");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_578, 
        "parallel' existsDeadlock");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_578, &var_ad8, 
        "change the number of threads run…", 0x40);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_ad8, &var_578, 
        "NUM_THREADSbuffer-sizesets the m…");
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "buffer-sizesets the maximum SIZE…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_840, 0x53);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_840, &var_ad8, 
        "buffer-sizesets the maximum SIZE…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_840, 
        "sets the maximum SIZE of each se…", 0x3f);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_2b0, &var_ad8, "SI");
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "temporary-directoryuse DIR for t…");
    clap_builder::builder::arg::Arg::short::h23e3272a2cf3bf02(&var_ad8, &var_578, 0x54);
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_578, &var_ad8, 
        "temporary-directoryuse DIR for t…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_ad8, &var_578, 
        "use DIR for temporaries, not $TM…", 0x2c);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_578, &var_ad8, 
        "DIRcompress temporary files with…");
    clap_builder::builder::arg::Arg::value_hint::hf119227bbe679b8d(&var_ad8, &var_578, 4);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, "compress-program");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_840, 
        "compress-program");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_840, &var_ad8, 
        "compress temporary files with PR…", 0x73);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_ad8, &var_840, 
        "PROGSomedumb\x1b[5m\x1b[9m <=  o…");
    clap_builder::builder::arg::Arg::value_hint::hf119227bbe679b8d(&var_2b0, &var_ad8, 6);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "batch-sizeMerge at most N_MERGE …");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_578, 
        "batch-sizeMerge at most N_MERGE …");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_578, &var_ad8, 
        "Merge at most N_MERGE inputs at …", 0x25);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_ad8, &var_578, 
        "N_MERGEfiles0-fromread input fro…");
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "files0-fromread input from the f…");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_840, 
        "files0-fromread input from the f…");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_840, &var_ad8, 
        "read input from the files specif…", 0x3f);
    clap_builder::builder::arg::Arg::value_name::h168c1fc386d25a03(&var_ad8, &var_840, 
        "NUL_FILESdebugunderline the part…");
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_840, &var_ad8, 1);
    clap_builder::builder::arg::Arg::value_parser::hb352e97d3c5df919(&var_ad8, &var_840, &var_858);
    clap_builder::builder::arg::Arg::value_hint::hf119227bbe679b8d(&var_2b0, &var_ad8, 3);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_578, 
        "debugunderline the parts of the …");
    clap_builder::builder::arg::Arg::long::h33c1b8ab7e9b931b(&var_ad8, &var_578, 
        "debugunderline the parts of the …");
    clap_builder::builder::arg::Arg::help::hbab65183f30f8c6d(&var_578, &var_ad8, 
        "underline the parts of the line …", 0x42);
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_578, 2);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h66e7469a5d9ab259(&var_840, 
        "filesonly one file allowed with …");
    clap_builder::builder::arg::Arg::action::hfbaf4498b00a0a7c(&var_ad8, &var_840, 1);
    clap_builder::builder::arg::Arg::value_parser::hb352e97d3c5df919(&var_840, &var_ad8, &var_858);
    clap_builder::builder::arg::Arg::value_hint::hf119227bbe679b8d(&var_ad8, &var_840, 3);
    clap_builder::builder::command::Command::arg::hfe5bbe8a9b0830d7(arg1, &var_578, &var_ad8);
    return arg1;
}
