
  fn uu_df::uu_app::h9c55c0d492ce5ccf(arg1: i64) -> i64

{
    let mut var_808: ();
    clap_builder::builder::command::Command::new::hf9f63144fbfb0a23(&var_808, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_540: ();
    clap_builder::builder::command::Command::version::h433c3bafd0e1d510(&var_540, &var_808, 
        "0.0.28Show information about the…");
    clap_builder::builder::command::Command::about::h1f82c2980799f3bc(&var_808, &var_540, 
        "Show information about the file …", 0x62);
    let mut var_a58: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a58, "{} [OPTION]... [FILE]...Display …", 0x18);
    clap_builder::builder::command::Command::override_usage::h663950d4e1f8e73e(&var_540, &var_808, 
        &var_a58);
    clap_builder::builder::command::Command::after_help::h99a974dc1edcf639(&var_808, &var_540, 
        "Display values are in units of t…", 0x174);
    memcpy(&var_540, &var_808, 0x2bc);
    let var_54c: i64;
    let var_284: i64 = 0x4008000040080 | var_54c;
    let var_544: i32;
    let var_27c: i32 = var_544;
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "helpUsednoneNoneshimUse%name\x1b…");
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_a58, &var_808, 
        "helpUsednoneNoneshimUse%name\x1b…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_808, &var_a58, 
        "Print help information.include d…", 0x17);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 5);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "allblocksizetotalhuman-readable-…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x61);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, 
        "allblocksizetotalhuman-readable-…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_a58, &var_540, 
        "allblocksizetotalhuman-readable-…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_540, &var_a58, 
        "include dummy file systemsblock-…", 0x1a);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_540, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "blocksizetotalhuman-readable-bin…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_808, 0x42);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_808, &var_a58, 
        "block-sizescale sizes by SIZE be…");
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&var_a58, &var_808, 
        "SIZEZero\x1b[7m");
    let mut var_278: *const i8 = "kilobindchar -> \x1b[2mcifsAnsi …";
    let var_270: i64 = 4;
    let var_268: *const i8 = "blocksizetotalhuman-readable-bin…";
    let var_260: i64 = 9;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_808, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_808, 
        "scale sizes by SIZE before print…", 0x5c);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "totalhuman-readable-binaryhuman-…");
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_a58, &var_540, 
        "totalhuman-readable-binaryhuman-…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_540, &var_a58, 
        "totalhuman-readable-binaryhuman-…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_540, 
        "produce a grand totalhuman-reada…", 0x15);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "human-readable-binaryhuman-reada…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_808, 0x68);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_808, &var_a58, 
        "human-readableprint sizes in hum…");
    var_278 = "human-readable-decimalinodesloca…";
    let var_270_1: i64 = 0x16;
    let var_268_1: *const i8 = "human-readable-binaryhuman-reada…";
    let var_260_1: i64 = 0x15;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_a58, &var_808, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_808, &var_a58, 
        "print sizes in human readable fo…", 0x37);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "human-readable-decimalinodesloca…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x48);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, 
        "silikewise, but use powers of 10…");
    var_278 = "human-readable-binaryhuman-reada…";
    let var_270_2: i64 = 0x15;
    let var_268_2: *const i8 = "human-readable-decimalinodesloca…";
    let var_260_2: i64 = 0x16;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_a58, &var_540, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_540, &var_a58, 
        "likewise, but use powers of 1000…", 0x29);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_540, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_808, 0x69);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_808, &var_a58, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_a58, &var_808, 
        "inodeslocalno-syncoutputpathspor…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_808, &var_a58, 
        "list inode information instead o…", 0x2d);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "kilobindchar -> \x1b[2mcifsAnsi …");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x6b);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_540, &var_a58, 
        "like --block-size=1Klimit listin…", 0x14);
    var_278 = "blocksizetotalhuman-readable-bin…";
    let var_270_3: i64 = 9;
    let var_268_3: *const i8 = "kilobindchar -> \x1b[2mcifsAnsi …";
    let var_260_3: i64 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_a58, &var_540, 
        &var_278);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_808, 0x6c);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_808, &var_a58, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_a58, &var_808, 
        "localno-syncoutputpathsportabili…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_808, &var_a58, 
        "limit listing to local file syst…", 0x23);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "no-syncoutputpathsportabilitypri…");
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_a58, &var_540, 
        "no-syncoutputpathsportabilitypri…");
    var_278 = "synctypeSizeCyanTYPE"`$\EADVlofs…";
    let var_270_4: i64 = 4;
    let var_268_4: *const i8 = "no-syncoutputpathsportabilitypri…";
    let var_260_4: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_540, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_540, 
        "do not invoke sync before gettin…", 0x36);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "outputpathsportabilityprint-type…");
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_a58, &var_808, 
        "outputpathsportabilityprint-type…");
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&var_808, &var_a58, 
        "FIELD_LISTuse the output format …");
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 1);
    clap_builder::builder::arg::Arg::num_args::h0b90fac76e4044d0(&var_808, &var_a58);
    memcpy(&var_a58, &var_808, 0x248);
    let var_5c0: i32;
    let var_810: i32 = 0x80 | var_5c0;
    let var_5bc: i32;
    let var_80c: i32 = var_5bc;
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&var_808, &var_a58, 1);
    memcpy(&var_278, &uu_df::OUTPUT_FIELD_LIST::hf9e7b203e7f2b732, 0xc0);
    clap_builder::builder::arg::Arg::value_parser::h953ef26054197563(&var_a58, &var_808, &var_278);
    clap_builder::builder::arg::Arg::default_missing_values_os::h44fe623f40d4145a(&var_808, 
        &var_a58);
    var_278 = "sourcefstypeitotaliusediavailipc…";
    let var_270_5: i64 = 6;
    let var_268_5: *const i8 = "sizefilei128 as dyn usedTypeERAN…";
    let var_260_5: i64 = 4;
    let var_258: *const i8 = "usedTypeERANGEEDEADLKENAMETOOLON…";
    let var_250: i64 = 4;
    let var_248: *const i8 = "availpcenttarget--block-size arg…";
    let var_240: i64 = 5;
    let var_238: *const i8 = "pcenttarget--block-size argument…";
    let var_230: i64 = 5;
    let var_228: *const i8 = "target--block-size argument  too…";
    let var_220: i64 = 6;
    clap_builder::builder::arg::Arg::default_values::hf43cac1176b844ae(&var_a58, &var_808, 
        &var_278);
    var_278 = "inodeslocalno-syncoutputpathspor…";
    let var_270_6: i64 = 6;
    let var_268_6: *const i8 = "portabilityprint-typeexclude-typ…";
    let var_260_6: i64 = 0xb;
    let var_258_1: *const i8 = "print-typeexclude-typesourcefsty…";
    let var_250_1: i64 = 0xa;
    clap_builder::builder::arg::Arg::conflicts_with_all::h9bfee90e28349fa4(&var_808, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_808, 
        "use the output format defined by…", 0x5a);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x50);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_a58, &var_540, 
        "portabilityprint-typeexclude-typ…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_540, &var_a58, 
        "use the POSIX output formatinvok…", 0x1b);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_540, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "synctypeSizeCyanTYPE"`$\EADVlofs…");
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_a58, &var_808, 
        "synctypeSizeCyanTYPE"`$\EADVlofs…");
    var_278 = "no-syncoutputpathsportabilitypri…";
    let var_270_7: i64 = 7;
    let var_268_7: *const i8 = "synctypeSizeCyanTYPE"`$\EADVlofs…";
    let var_260_7: i64 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_808, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_808, 
        "invoke sync before getting usage…", 0x38);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, &data_40be9c[8]);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x74);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, &data_40be9c[8]);
    let mut var_a70: *mut i8 = 2;
    let var_a60: i64;
    let var_268_8: i64 = var_a60;
    var_278 = var_a70;
    let var_a68: i64;
    let var_270_8: i64 = var_a68;
    clap_builder::builder::arg::Arg::value_parser::h8c4087523b35a77e(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&var_540, &var_a58, 
        &data_40be9c[0x14]);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_540, 1);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_278, &var_a58, 
        "limit listing to file systems of…", 0x2a);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "print-typeexclude-typesourcefsty…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_808, 0x54);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_808, &var_a58, 
        "print-typeexclude-typesourcefsty…");
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&var_a58, &var_808, 
        "print-typeexclude-typesourcefsty…");
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_808, &var_a58, 
        "print file system typelimit list…", 0x16);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, 
        "exclude-typesourcefstypeitotaliu…");
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x78);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, 
        "exclude-typesourcefstypeitotaliu…");
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_540, 1);
    clap_builder::builder::arg::Arg::value_parser::h8c4087523b35a77e(&var_540, &var_a58, &var_a70);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&var_a58, &var_540, 
        &data_40be9c[0x14]);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&var_540, &var_a58, 1);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_540, 
        "limit listing to file systems no…", 0x2e);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_808, 
        "pathsportabilityprint-typeexclud…");
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_a58, &var_808, 1);
    clap_builder::builder::arg::Arg::value_hint::h43328907032c1537(&var_808, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(arg1, &var_540, &var_808);
    arg1
}
