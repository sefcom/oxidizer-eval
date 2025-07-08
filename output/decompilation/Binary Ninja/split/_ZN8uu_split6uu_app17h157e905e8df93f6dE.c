
  int64_t uu_split::uu_app::h157e905e8df93f6d(int64_t arg1)

{
    void var_808;
    clap_builder::builder::command::Command::new::h0d66166954a99b3e(&var_808, 
        uucore::util_name::h60d842bf27b05e82());
    void var_540;
    clap_builder::builder::command::Command::version::h19697d4afff15525(&var_540, &var_808, 
        "0.0.28Create output files contai…");
    clap_builder::builder::command::Command::about::hf7a64f51fdbb94d5(&var_808, &var_540, 
        "Create output files containing c…", 0x4b);
    clap_builder::builder::command::Command::after_help::ha86584327cc30ce7(&var_540, &var_808, 
        "Output fixed-size pieces of INPU…", 0x2d1);
    void var_a58;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a58, "{} [OPTION]... [INPUT [PREFIX]]p…", 0x1f);
    clap_builder::builder::command::Command::override_usage::h6c4df92a788a0f94(&var_808, &var_540, 
        &var_a58);
    memcpy(&var_540, &var_808, 0x2bc);
    int64_t var_54c;
    int64_t var_284 = 0x8000000080 | var_54c;
    int32_t var_544;
    int32_t var_27c = var_544;
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "bytesline-byteslinesadditional-s…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_808, 0x62);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_808, &var_a58, 
        "bytesline-byteslinesadditional-s…");
    memcpy(&var_a58, &var_808, 0x248);
    int32_t var_5c0;
    int32_t var_810 = var_5c0 | 0x20;
    int32_t var_5bc;
    int32_t var_80c = var_5bc;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_808, &var_a58, 
        &data_417a54[4]);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_808, 
        "put SIZE bytes per output filepu…", 0x1e);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "line-byteslinesadditional-suffix…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x43);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_540, &var_a58, 
        "line-byteslinesadditional-suffix…");
    memcpy(&var_a58, &var_540, 0x248);
    int32_t var_2f8;
    int32_t var_810_1 = var_2f8 | 0x20;
    int32_t var_2f4;
    int32_t var_80c_1 = var_2f4;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_540, &var_a58, 
        &data_417a54[4]);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_540, 
        "put at most SIZE bytes of lines …", 0x2f);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "linesadditional-suffixfilternumb…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_808, 0x6c);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_808, &var_a58, 
        "linesadditional-suffixfilternumb…");
    memcpy(&var_a58, &var_808, 0x248);
    int32_t var_810_2 = var_5c0 | 0x20;
    int32_t var_80c_2 = var_5bc;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_808, &var_a58, 
        "NUMBERput NUMBER lines/records p…");
    clap_builder::builder::arg::Arg::default_value::h48cc9ffdd06268db(&var_a58, &var_808, 
        "1000\x1b[4mSomedumb\x1b[5m <= \x1b…");
    int128_t var_278;
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "put NUMBER lines/records per out…", 0x28);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "number-dhex-suffixes-xsuffix-len…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x6e);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_540, &var_a58, 
        "number-dhex-suffixes-xsuffix-len…");
    memcpy(&var_a58, &var_540, 0x248);
    int32_t rax_9 = var_2f8 | 0x20;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_540, &var_a58, 
        "CHUNKSgenerate CHUNKS output fil…");
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_540, 
        "generate CHUNKS output files; se…", 0x33);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "additional-suffixfilternumber-dh…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "additional-suffixfilternumber-dh…");
    memcpy(&var_808, &var_a58, 0x248);
    int32_t var_5c0_1 = rax_9 | 0x20;
    int32_t var_5bc_1 = var_2f4;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_a58, &var_808, 
        "SUFFIXadditional SUFFIX to appen…");
    clap_builder::builder::arg::Arg::default_value::h48cc9ffdd06268db(&var_808, &var_a58, 1);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_808, 
        "additional SUFFIX to append to o…", 0x30);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "filternumber-dhex-suffixes-xsuff…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_540, 
        "filternumber-dhex-suffixes-xsuff…");
    memcpy(&var_540, &var_a58, 0x248);
    int32_t rax_13 = rax_9 | 0x20;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_a58, &var_540, 
        "COMMANDwrite to shell COMMAND; f…");
    clap_builder::builder::arg::Arg::value_hint::h6bcc63344f8bbb02(&var_540, &var_a58, 6);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_540, 
        "write to shell COMMAND; file nam…", 0x52);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "elide-empty-files-io-blksizeinpu…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "elide-empty-files-io-blksizeinpu…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_808, &var_a58, 0x65);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_808, 
        "do not generate empty output fil…", 0x2c);
    clap_builder::builder::arg::Arg::action::hfc40aae07e82fc86(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "-dhex-suffixes-xsuffix-lengthver…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x64);
    clap_builder::builder::arg::Arg::action::hfc40aae07e82fc86(&var_540, &var_a58, 2);
    char const* const var_ab0 = "numeric-suffixesk";
    int64_t var_aa8 = 0x10;
    char const* const var_aa0 = "-dhex-suffixes-xsuffix-lengthver…";
    char const* const var_a90 = "hex-suffixes-xsuffix-lengthverbo…";
    char const* const var_a80 = "-xsuffix-lengthverboseseparatore…";
    char const* const var_248 = "-xsuffix-lengthverboseseparatore…";
    int64_t var_240 = 2;
    char const* const var_258 = "hex-suffixes-xsuffix-lengthverbo…";
    int64_t var_250 = 0xc;
    char const* const var_268 = "-dhex-suffixes-xsuffix-lengthver…";
    int64_t var_260 = 2;
    var_278 = var_ab0;
    clap_builder::builder::arg::Arg::overrides_with_all::h0f85aaf739527b15(&var_a58, &var_540, 
        &var_278);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "use numeric suffixes starting at…", 0x32);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, "numeric-suffixesk");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "numeric-suffixesk");
    memcpy(&var_808, &var_a58, 0x248);
    int32_t var_5c0_2 = 0x80 | rax_9;
    int32_t var_5bc_2 = var_2f4;
    int64_t var_a70 = 0;
    int64_t var_268_1 = 0;
    var_278 = var_a70;
    *var_278[8] = 1;
    clap_builder::builder::arg::Arg::num_args::heae8fe644d507918(&var_a58, &var_808, &var_278);
    var_248 = var_a80;
    var_258 = var_a90;
    var_268_1 = var_aa0;
    var_278 = var_ab0;
    clap_builder::builder::arg::Arg::overrides_with_all::h0f85aaf739527b15(&var_808, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_a58, &var_808, 
        &data_417b04);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "same as -d, but allow setting th…", 0x2d);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "-xsuffix-lengthverboseseparatore…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x78);
    clap_builder::builder::arg::Arg::action::hfc40aae07e82fc86(&var_540, &var_a58, 2);
    var_248 = var_a80;
    var_258 = var_a90;
    var_268_1 = var_aa0;
    var_278 = var_ab0;
    clap_builder::builder::arg::Arg::overrides_with_all::h0f85aaf739527b15(&var_a58, &var_540, 
        &var_278);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "use hex suffixes starting at 0, …", 0x2e);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "hex-suffixes-xsuffix-lengthverbo…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "hex-suffixes-xsuffix-lengthverbo…");
    memcpy(&var_808, &var_a58, 0x248);
    clap_builder::builder::arg::Arg::num_args::heae8fe644d507918(&var_a58, &var_808, &var_a70);
    clap_builder::builder::arg::Arg::overrides_with_all::h0f85aaf739527b15(&var_808, &var_a58, 
        &var_ab0);
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_a58, &var_808, 
        &data_417b04);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "same as -x, but allow setting th…", 0x2d);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "suffix-lengthverboseseparatoreli…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x61);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_540, &var_a58, 
        "suffix-lengthverboseseparatoreli…");
    memcpy(&var_a58, &var_540, 0x248);
    int32_t var_810_4 = rax_13 | 0x20;
    int32_t var_80c_4 = var_2f4;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_540, &var_a58, 
        "Ngenerate suffixes of length N (…");
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_a58, &var_540, 
        "generate suffixes of length N (d…", 0x29);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "verboseseparatorelide-empty-file…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "verboseseparatorelide-empty-file…");
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_808, &var_a58, 
        "print a diagnostic just before e…", 0x39);
    clap_builder::builder::arg::Arg::action::hfc40aae07e82fc86(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "separatorelide-empty-files-io-bl…");
    clap_builder::builder::arg::Arg::short::h4c75e70428513a63(&var_a58, &var_540, 0x74);
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_540, &var_a58, 
        "separatorelide-empty-files-io-bl…");
    memcpy(&var_a58, &var_540, 0x248);
    int32_t var_810_5 = rax_13 | 0x20;
    int32_t var_80c_5 = var_2f4;
    clap_builder::builder::arg::Arg::value_name::h9845504f21c8416a(&var_540, &var_a58, 
        "SEPuse SEP instead of newline as…");
    clap_builder::builder::arg::Arg::action::hfc40aae07e82fc86(&var_a58, &var_540, 1);
    clap_builder::builder::arg::Arg::help::h41365591449d20b2(&var_278, &var_a58, 
        "use SEP instead of newline as th…", 0x5b);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "-io-blksizeinputprefix---a-b-C-l…");
    clap_builder::builder::arg::Arg::long::hd7c1cf324c4cc25d(&var_a58, &var_808, 
        "io-blksize-xmulti-character sepa…");
    clap_builder::builder::arg::Arg::alias::h7251c9734033b15d(&var_808, &var_a58, 
        "-io-blksizeinputprefix---a-b-C-l…");
    memcpy(&var_a58, &var_808, 0x248);
    int32_t var_810_6 = 0x80 | rax_9 | 4;
    int32_t var_80c_6 = var_2f4;
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_540, 
        "inputprefix---a-b-C-l-n-tsrc/uu/…");
    clap_builder::builder::arg::Arg::default_value::h48cc9ffdd06268db(&var_a58, &var_540, 
        "-xmulti-character separator mult…");
    clap_builder::builder::arg::Arg::value_hint::h6bcc63344f8bbb02(&var_278, &var_a58, 3);
    clap_builder::builder::command::Command::arg::h708b562346dd5323(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h0098277cabbd9825(&var_808, 
        "prefix---a-b-C-l-n-tsrc/uu/split…");
    clap_builder::builder::arg::Arg::default_value::h48cc9ffdd06268db(&var_a58, &var_808, 
        "xmulti-character separator multi…");
    clap_builder::builder::command::Command::arg::h708b562346dd5323(arg1, &var_540, &var_a58);
    return arg1;
}
