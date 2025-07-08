
  int64_t uu_df::uu_app::h9c55c0d492ce5ccf(int64_t arg1)

{
    void var_808;
    clap_builder::builder::command::Command::new::hf9f63144fbfb0a23(&var_808, 
        uucore::util_name::h60d842bf27b05e82());
    void var_540;
    clap_builder::builder::command::Command::version::h433c3bafd0e1d510(&var_540, &var_808, 
        "0.0.28Show information about the…");
    clap_builder::builder::command::Command::about::h1f82c2980799f3bc(&var_808, &var_540, 
        "Show information about the file …", 0x62);
    void var_a58;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a58, "{} [OPTION]... [FILE]...Display …", 0x18);
    clap_builder::builder::command::Command::override_usage::h663950d4e1f8e73e(&var_540, &var_808, 
        &var_a58);
    clap_builder::builder::command::Command::after_help::h99a974dc1edcf639(&var_808, &var_540, 
        "Display values are in units of t…", 0x174);
    memcpy(&var_540, &var_808, 0x2bc);
    int64_t var_54c;
    int64_t var_284 = 0x4008000040080 | var_54c;
    int32_t var_544;
    int32_t var_27c = var_544;
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
    char const* const var_278 = "kilobindchar -> \x1b[2mcifsAnsi …";
    int64_t var_270 = 4;
    char const* const var_268 = "blocksizetotalhuman-readable-bin…";
    int64_t var_260 = 9;
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
    int64_t var_270_1 = 0x16;
    char const* const var_268_1 = "human-readable-binaryhuman-reada…";
    int64_t var_260_1 = 0x15;
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
    int64_t var_270_2 = 0x15;
    char const* const var_268_2 = "human-readable-decimalinodesloca…";
    int64_t var_260_2 = 0x16;
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
    int64_t var_270_3 = 9;
    char const* const var_268_3 = "kilobindchar -> \x1b[2mcifsAnsi …";
    int64_t var_260_3 = 4;
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
    int64_t var_270_4 = 4;
    char const* const var_268_4 = "no-syncoutputpathsportabilitypri…";
    int64_t var_260_4 = 7;
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
    int32_t var_5c0;
    int32_t var_810 = 0x80 | var_5c0;
    int32_t var_5bc;
    int32_t var_80c = var_5bc;
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&var_808, &var_a58, 1);
    memcpy(&var_278, &uu_df::OUTPUT_FIELD_LIST::hf9e7b203e7f2b732, 0xc0);
    clap_builder::builder::arg::Arg::value_parser::h953ef26054197563(&var_a58, &var_808, &var_278);
    clap_builder::builder::arg::Arg::default_missing_values_os::h44fe623f40d4145a(&var_808, 
        &var_a58);
    var_278 = "sourcefstypeitotaliusediavailipc…";
    int64_t var_270_5 = 6;
    char const* const var_268_5 = "sizefilei128 as dyn usedTypeERAN…";
    int64_t var_260_5 = 4;
    char const* const var_258 = "usedTypeERANGEEDEADLKENAMETOOLON…";
    int64_t var_250 = 4;
    char const* const var_248 = "availpcenttarget--block-size arg…";
    int64_t var_240 = 5;
    char const* const var_238 = "pcenttarget--block-size argument…";
    int64_t var_230 = 5;
    char const* const var_228 = "target--block-size argument  too…";
    int64_t var_220 = 6;
    clap_builder::builder::arg::Arg::default_values::hf43cac1176b844ae(&var_a58, &var_808, 
        &var_278);
    var_278 = "inodeslocalno-syncoutputpathspor…";
    int64_t var_270_6 = 6;
    char const* const var_268_6 = "portabilityprint-typeexclude-typ…";
    int64_t var_260_6 = 0xb;
    char const* const var_258_1 = "print-typeexclude-typesourcefsty…";
    int64_t var_250_1 = 0xa;
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
    int64_t var_270_7 = 7;
    char const* const var_268_7 = "synctypeSizeCyanTYPE"`$\EADVlofs…";
    int64_t var_260_7 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&var_808, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&var_a58, &var_808, 
        "invoke sync before getting usage…", 0x38);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&var_540, &data_40be9c[8]);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&var_a58, &var_540, 0x74);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&var_540, &var_a58, &data_40be9c[8]);
    char* var_a70 = 2;
    int64_t var_a60;
    int64_t var_268_8 = var_a60;
    var_278 = var_a70;
    int64_t var_a68;
    int64_t var_270_8 = var_a68;
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
    return arg1;
}
