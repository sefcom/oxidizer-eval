
  fn uu_df::uu_app::h7dd88faa65059b5c(arg1: i64) -> i64

{
    let mut var_840: ();
    clap_builder::builder::command::Command::new::h67a6f61a06204ec6(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_2f8: ();
    clap_builder::builder::command::Command::version::h6faf0654a1ec6cb4(&var_2f8, &var_840);
    clap_builder::builder::command::Command::about::h15013569107be41a(&var_840, &var_2f8);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [FILE]...Display …", 0x18);
    clap_builder::builder::command::Command::override_usage::hb1d69ce83f1ce17b(&var_2f8, &var_840, 
        &var_ac0);
    clap_builder::builder::command::Command::after_help::h5255e8afe6f596a9(&var_840, &var_2f8);
    memcpy(&var_2f8, &var_840, 0x2bc);
    let var_584: i64;
    let var_3c: i64 = 0x8008000080080 | var_584;
    let var_57c: i32;
    let var_34: i32 = var_57c;
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
    let mut var_578: *const i8 = "kilobindmainch";
    let var_570: i64 = 4;
    let var_568: *const i8 = "blocksizehuman-readable-binaryhu…";
    let var_560: i64 = 9;
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
    let var_570_1: i64 = 0x16;
    let var_568_1: *const i8 = "human-readable-binaryhuman-reada…";
    let var_560_1: i64 = 0x15;
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
    let var_570_2: i64 = 0x15;
    let var_568_2: *const i8 = "human-readable-decimalinodesloca…";
    let var_560_2: i64 = 0x16;
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
    let var_570_3: i64 = 9;
    let var_568_3: *const i8 = "kilobindmainch";
    let var_560_3: i64 = 4;
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
    let var_570_4: i64 = 4;
    let var_568_4: *const i8 = "no-syncoutputpathsportabilitypri…";
    let var_560_4: i64 = 7;
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
    let var_5c8: i32;
    let var_848: i32 = 0x80 | var_5c8;
    let var_5c4: i32;
    let var_844: i32 = var_5c4;
    clap_builder::builder::arg::Arg::use_value_delimiter::hbc9e6ac97bf7a88b(&var_840, &var_ac0, 1);
    clap_builder::builder::arg::Arg::value_parser::h22f60de3ac056b5f(&var_ac0, &var_840, 
        &uu_df::OUTPUT_FIELD_LIST::hdf9a91c365a9b214);
    clap_builder::builder::arg::Arg::default_missing_values_os::h7450261ffdb59db3(&var_840, 
        &var_ac0, &uu_df::OUTPUT_FIELD_LIST::hdf9a91c365a9b214);
    var_578 = "sourcefstypeitotaliusediavailipc…";
    let var_570_5: i64 = 6;
    let var_568_5: *const i8 = "sizefilei128 as dyn usedTypeERAN…";
    let var_560_5: i64 = 4;
    let var_558: *const i8 = "usedTypeERANGEEDEADLKENAMETOOLON…";
    let var_550: i64 = 4;
    let var_548: *const i8 = "availpcenttarget-total%";
    let var_540: i64 = 5;
    let var_538: *const i8 = "pcenttarget-total%";
    let var_530: i64 = 5;
    let var_528: *const i8 = "target-total%";
    let var_520: i64 = 6;
    clap_builder::builder::arg::Arg::default_values::h27c064a7ef70ce87(&var_ac0, &var_840, 
        &var_578);
    var_578 = "inodeslocalno-syncoutputpathspor…";
    let var_570_6: i64 = 6;
    let var_568_6: *const i8 = "portabilityprint-typeexclude-typ…";
    let var_560_6: i64 = 0xb;
    let var_558_1: *const i8 = "print-typeexclude-typesrc/uu/df/…";
    let var_550_1: i64 = 0xa;
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
    let var_570_7: i64 = 7;
    let var_568_7: *const i8 = "synctypeCyan    TYPE"`$\EADVlofs…";
    let var_560_7: i64 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::h390b75bbc4ea83ce(&var_840, &var_ac0, 
        &var_578);
    clap_builder::builder::arg::Arg::help::h0a16dabfd6ab2d83(&var_ac0, &var_840, 
        "invoke sync before getting usage…", 0x38);
    clap_builder::builder::arg::Arg::action::hc2ecefe6811dd1ba(&var_578, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf2ef1ae6c22ba7d6(&var_840, &var_2f8, &var_578);
    clap_builder::builder::arg::Arg::new::h76d9c4d4934362f7(&var_2f8, &data_419a18[0xc]);
    clap_builder::builder::arg::Arg::short::hf333541e6269ab5e(&var_ac0, &var_2f8, 0x74);
    clap_builder::builder::arg::Arg::long::hde57b13e2eeedca8(&var_2f8, &var_ac0, &data_419a18[0xc]);
    let mut var_ad8: i64 = 2;
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
    arg1
}
