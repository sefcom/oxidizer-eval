
  int64_t uu_df::uu_app::h7dd88faa65059b5c(int64_t arg1)

{
    void var_840;
    clap_builder::builder::command::Command::new::h67a6f61a06204ec6(&var_840, 
        uucore::util_name::h074417a1e6395129());
    void var_2f8;
    clap_builder::builder::command::Command::version::h6faf0654a1ec6cb4(&var_2f8, &var_840);
    clap_builder::builder::command::Command::about::h15013569107be41a(&var_840, &var_2f8);
    void var_ac0;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [FILE]...Display …", 0x18);
    clap_builder::builder::command::Command::override_usage::hb1d69ce83f1ce17b(&var_2f8, &var_840, 
        &var_ac0);
    clap_builder::builder::command::Command::after_help::h5255e8afe6f596a9(&var_840, &var_2f8);
    memcpy(&var_2f8, &var_840, 0x2bc);
    int64_t var_584;
    int64_t var_3c = 0x8008000080080 | var_584;
    int32_t var_57c;
    int32_t var_34 = var_57c;
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "helpnoneUse%Noneshim\x1b[0mnameS…");
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_ac0, &var_840, 
        "helpnoneUse%Noneshim\x1b[0mnameS…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_840, &var_ac0, 
        "Print help information.include d…", 0x17);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 5);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, 
        "allblocksizehuman-readable-binar…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x61);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, 
        "allblocksizehuman-readable-binar…");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_ac0, &var_2f8, 
        "allblocksizehuman-readable-binar…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_2f8, &var_ac0, 
        "include dummy file systemsblock-…", 0x1a);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_2f8, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "blocksizehuman-readable-binaryhu…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_840, 0x42);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_840, &var_ac0, 
        "block-sizescale sizes by SIZE be…");
    clap_builder::builder::arg::Arg::value_name::hec0c8c7399c0b6c9(&var_ac0, &var_840, 
        "SIZE) = Zero\x1b[7mBool");
    char const* const var_578 = "kilobindmainch";
    int64_t var_570 = 4;
    char const* const var_568 = "blocksizehuman-readable-binaryhu…";
    int64_t var_560 = 9;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_840, &var_ac0, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_840, 
        "scale sizes by SIZE before print…", 0x5c);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, "total%");
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_ac0, &var_2f8, "total%");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_2f8, &var_ac0, 
        "total%");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_2f8, 
        "produce a grand totalhuman-reada…", 0x15);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_578, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "human-readable-binaryhuman-reada…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_840, 0x68);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_840, &var_ac0, 
        "human-readableprint sizes in hum…");
    var_578 = "human-readable-decimalinodesloca…";
    int64_t var_570_1 = 0x16;
    char const* const var_568_1 = "human-readable-binaryhuman-reada…";
    int64_t var_560_1 = 0x15;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_ac0, &var_840, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_840, &var_ac0, 
        "print sizes in human readable fo…", 0x37);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, 
        "human-readable-decimalinodesloca…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x48);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, 
        "silikewise, but use powers of 10…");
    var_578 = "human-readable-binaryhuman-reada…";
    int64_t var_570_2 = 0x15;
    char const* const var_568_2 = "human-readable-decimalinodesloca…";
    int64_t var_560_2 = 0x16;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_ac0, &var_2f8, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_2f8, &var_ac0, 
        "likewise, but use powers of 1000…", 0x29);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_2f8, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_840, 0x69);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_840, &var_ac0, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_ac0, &var_840, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_840, &var_ac0, 
        "list inode information instead o…", 0x2d);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, "kilobindmainch");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x6b);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_2f8, &var_ac0, 
        "like --block-size=1Klimit listin…", 0x14);
    var_578 = "blocksizehuman-readable-binaryhu…";
    int64_t var_570_3 = 9;
    char const* const var_568_3 = "kilobindmainch";
    int64_t var_560_3 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_ac0, &var_2f8, 
        &var_578);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_578, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_840, 0x6c);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_840, &var_ac0, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_ac0, &var_840, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_840, &var_ac0, 
        "limit listing to local file syst…", 0x23);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, 
        "no-syncoutputpathsportabilitypri…");
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_ac0, &var_2f8, 
        "no-syncoutputpathsportabilitypri…");
    var_578 = "synctypeCyan    TYPE"`$\EADVlofs…";
    int64_t var_570_4 = 4;
    char const* const var_568_4 = "no-syncoutputpathsportabilitypri…";
    int64_t var_560_4 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_2f8, &var_ac0, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_2f8, 
        "do not invoke sync before gettin…", 0x36);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_578, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "outputpathsportabilityprint-type…");
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_ac0, &var_840, 
        "outputpathsportabilityprint-type…");
    clap_builder::builder::arg::Arg::value_name::hec0c8c7399c0b6c9(&var_840, &var_ac0, 
        "FIELD_LISTuse the output format …");
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 1);
    clap_builder::builder::arg::Arg::num_args::h77b85b1013d661bf(&var_840, &var_ac0);
    memcpy(&var_ac0, &var_840, 0x278);
    int32_t var_5c8;
    int32_t var_848 = 0x80 | var_5c8;
    int32_t var_5c4;
    int32_t var_844 = var_5c4;
    clap_builder::builder::arg::Arg::use_value_delimiter::hbc9e6ac97bf7a88b(&var_840, &var_ac0, 1);
    clap_builder::builder::arg::Arg::value_parser::h22f60de3ac056b5f(&var_ac0, &var_840, 
        &uu_df::OUTPUT_FIELD_LIST::hdf9a91c365a9b214);
    clap_builder::builder::arg::Arg::default_missing_values_os::h7450261ffdb59db3(&var_840, 
        &var_ac0, &uu_df::OUTPUT_FIELD_LIST::hdf9a91c365a9b214);
    var_578 = "sourcefstypeitotaliusediavailipc…";
    int64_t var_570_5 = 6;
    char const* const var_568_5 = "sizefilei128 as dyn usedTypeERAN…";
    int64_t var_560_5 = 4;
    char const* const var_558 = "usedTypeERANGEEDEADLKENAMETOOLON…";
    int64_t var_550 = 4;
    char const* const var_548 = "availpcenttarget-total%";
    int64_t var_540 = 5;
    char const* const var_538 = "pcenttarget-total%";
    int64_t var_530 = 5;
    char const* const var_528 = "target-total%";
    int64_t var_520 = 6;
    clap_builder::builder::arg::Arg::default_values::h27c064a7ef70ce87(&var_ac0, &var_840, 
        &var_578);
    var_578 = "inodeslocalno-syncoutputpathspor…";
    int64_t var_570_6 = 6;
    char const* const var_568_6 = "portabilityprint-typeexclude-typ…";
    int64_t var_560_6 = 0xb;
    char const* const var_558_1 = "print-typeexclude-typesrc/uu/df/…";
    int64_t var_550_1 = 0xa;
    clap_builder::builder::arg::Arg::conflicts_with_all::h32a65daa6d7fc264(&var_840, &var_ac0, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_840, 
        "use the output format defined by…", 0x5a);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x50);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_ac0, &var_2f8, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_2f8, &var_ac0, 
        "use the POSIX output formatinvok…", 0x1b);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_2f8, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "synctypeCyan    TYPE"`$\EADVlofs…");
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_ac0, &var_840, 
        "synctypeCyan    TYPE"`$\EADVlofs…");
    var_578 = "no-syncoutputpathsportabilitypri…";
    int64_t var_570_7 = 7;
    char const* const var_568_7 = "synctypeCyan    TYPE"`$\EADVlofs…";
    int64_t var_560_7 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_840, &var_ac0, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_840, 
        "invoke sync before getting usage…", 0x38);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_578, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, &data_419a18[0xc]);
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x74);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, &data_419a18[0xc]);
    int64_t var_ad8 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc2a9e64838dd396a(&var_ac0, &var_2f8, &var_ad8);
    clap_builder::builder::arg::Arg::value_name::hec0c8c7399c0b6c9(&var_2f8, &var_ac0, 
        &data_419a18[0x18]);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_2f8, 1);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_578, &var_ac0, 
        "limit listing to file systems of…", 0x2a);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "print-typeexclude-typesrc/uu/df/…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_840, 0x54);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_840, &var_ac0, 
        "print-typeexclude-typesrc/uu/df/…");
    clap_builder::builder::arg::Arg::overrides_with::hb0f1abfc705b7f5b(&var_ac0, &var_840, 
        "print-typeexclude-typesrc/uu/df/…");
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_840, &var_ac0, 
        "print file system typelimit list…", 0x16);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, 
        "exclude-typesrc/uu/df/src/df.rs(…");
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x78);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, 
        "exclude-typesrc/uu/df/src/df.rs(…");
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_2f8, 1);
    clap_builder::builder::arg::Arg::value_parser::hc2a9e64838dd396a(&var_2f8, &var_ac0, &var_ad8);
    clap_builder::builder::arg::Arg::value_name::hec0c8c7399c0b6c9(&var_ac0, &var_2f8, 
        &data_419a18[0x18]);
    clap_builder::builder::arg::Arg::use_value_delimiter::hbc9e6ac97bf7a88b(&var_2f8, &var_ac0, 1);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_2f8, 
        "limit listing to file systems no…", 0x2e);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_2f8, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_840, 
        "pathsportabilityprint-typeexclud…");
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_ac0, &var_840, 1);
    clap_builder::builder::arg::Arg::value_hint::he34e6a3be3181bcb(&var_840, &var_ac0);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(arg1, &var_2f8, &var_840);
    return arg1;
}
