
  int64_t uu_split::uu_app::h4bc5bb72ff3a6c94(int64_t arg1)

{
    void var_840;
    clap_builder::builder::command::Command::new::h41e17eb1aea6c495(&var_840, 
        uucore::util_name::h074417a1e6395129());
    void var_578;
    clap_builder::builder::command::Command::version::h3b208e48757fb43f(&var_578, &var_840);
    clap_builder::builder::command::Command::about::h0a36665cc94d7b0b(&var_840, &var_578);
    clap_builder::builder::command::Command::after_help::h9fc888400bae14b3(&var_578, &var_840);
    void var_ac0;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [INPUT [PREFIX]]p…", 0x1f);
    clap_builder::builder::command::Command::override_usage::hebd3ddfa6ca071cc(&var_840, &var_578, 
        &var_ac0);
    memcpy(&var_578, &var_840, 0x2bc);
    int64_t var_584;
    int64_t var_2bc = 0x8000000080 | var_584;
    int32_t var_57c;
    int32_t var_2b4 = var_57c;
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "bytesline-byteslinesadditional-s…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_840, 0x62);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_840, &var_ac0, 
        "bytesline-byteslinesadditional-s…");
    memcpy(&var_ac0, &var_840, 0x278);
    int32_t var_5c8;
    int32_t var_848 = var_5c8 | 0x20;
    int32_t var_5c4;
    int32_t var_844 = var_5c4;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_840, &var_ac0, 
        "SIZE) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_840, 
        "put SIZE bytes per output filepu…", 0x1e);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "line-byteslinesadditional-suffix…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x43);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_578, &var_ac0, 
        "line-byteslinesadditional-suffix…");
    memcpy(&var_ac0, &var_578, 0x278);
    int32_t var_300;
    int32_t var_848_1 = var_300 | 0x20;
    int32_t var_2fc;
    int32_t var_844_1 = var_2fc;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_578, &var_ac0, 
        "SIZE) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_578, 
        "put at most SIZE bytes of lines …", 0x2f);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "linesadditional-suffixfilternumb…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_840, 0x6c);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_840, &var_ac0, 
        "linesadditional-suffixfilternumb…");
    memcpy(&var_ac0, &var_840, 0x278);
    int32_t var_848_2 = var_5c8 | 0x20;
    int32_t var_844_2 = var_5c4;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_840, &var_ac0, 
        "NUMBERput NUMBER lines/records p…");
    clap_builder::builder::arg::Arg::default_value::h21ed427647d28c05(&var_ac0, &var_840, 
        "1000\x1b[4mSomedumb\x1b[5m\x1b[9…");
    char const* const var_2b0;
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "put NUMBER lines/records per out…", 0x28);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "number-dhex-suffixes-xsuffix-len…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x6e);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_578, &var_ac0, 
        "number-dhex-suffixes-xsuffix-len…");
    memcpy(&var_ac0, &var_578, 0x278);
    int32_t rax_9 = var_300 | 0x20;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_578, &var_ac0, 
        "CHUNKSgenerate CHUNKS output fil…");
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_578, 
        "generate CHUNKS output files; se…", 0x33);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "additional-suffixfilternumber-dh…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "additional-suffixfilternumber-dh…");
    memcpy(&var_840, &var_ac0, 0x278);
    int32_t var_5c8_1 = rax_9 | 0x20;
    int32_t var_5c4_1 = var_2fc;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_ac0, &var_840, 
        "SUFFIXadditional SUFFIX to appen…");
    clap_builder::builder::arg::Arg::default_value::h21ed427647d28c05(&var_840, &var_ac0, 1);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_840, 
        "additional SUFFIX to append to o…", 0x30);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "filternumber-dhex-suffixes-xsuff…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_578, 
        "filternumber-dhex-suffixes-xsuff…");
    memcpy(&var_578, &var_ac0, 0x278);
    int32_t rax_13 = rax_9 | 0x20;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_ac0, &var_578, 
        "COMMANDwrite to shell COMMAND; f…");
    clap_builder::builder::arg::Arg::value_hint::hb02a9222ff84e842(&var_578, &var_ac0, 6);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_578, 
        "write to shell COMMAND; file nam…", 0x52);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "elide-empty-files-io-blksizeinpu…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "elide-empty-files-io-blksizeinpu…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_840, &var_ac0, 0x65);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_840, 
        "do not generate empty output fil…", 0x2c);
    clap_builder::builder::arg::Arg::action::hd0a509d31e4e1db2(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "-dhex-suffixes-xsuffix-lengthver…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x64);
    clap_builder::builder::arg::Arg::action::hd0a509d31e4e1db2(&var_578, &var_ac0, 2);
    var_2b0 = "numeric-suffixesentity not found";
    int64_t var_2a8 = 0x10;
    char const* const var_2a0 = "-dhex-suffixes-xsuffix-lengthver…";
    int64_t var_298 = 2;
    char const* const var_290 = "hex-suffixes-xsuffix-lengthverbo…";
    int64_t var_288 = 0xc;
    char const* const var_280 = "-xsuffix-lengthverboseseparatore…";
    int64_t var_278 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::h7be55cd6546cf270(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "use numeric suffixes starting at…", 0x32);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "numeric-suffixesentity not found");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "numeric-suffixesentity not found");
    memcpy(&var_840, &var_ac0, 0x278);
    int32_t var_5c8_2 = 0x80 | rax_9;
    int32_t var_5c4_2 = var_2fc;
    clap_builder::builder::arg::Arg::num_args::h5a2cdb11d0767124(&var_ac0, &var_840, 0);
    var_2b0 = "numeric-suffixesentity not found";
    int64_t var_2a8_1 = 0x10;
    char const* const var_2a0_1 = "-dhex-suffixes-xsuffix-lengthver…";
    int64_t var_298_1 = 2;
    char const* const var_290_1 = "hex-suffixes-xsuffix-lengthverbo…";
    int64_t var_288_1 = 0xc;
    char const* const var_280_1 = "-xsuffix-lengthverboseseparatore…";
    int64_t var_278_1 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::h7be55cd6546cf270(&var_840, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_ac0, &var_840, 
        &data_41a774[4]);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "same as -d, but allow setting th…", 0x2d);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "-xsuffix-lengthverboseseparatore…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x78);
    clap_builder::builder::arg::Arg::action::hd0a509d31e4e1db2(&var_578, &var_ac0, 2);
    var_2b0 = "numeric-suffixesentity not found";
    int64_t var_2a8_2 = 0x10;
    char const* const var_2a0_2 = "-dhex-suffixes-xsuffix-lengthver…";
    int64_t var_298_2 = 2;
    char const* const var_290_2 = "hex-suffixes-xsuffix-lengthverbo…";
    int64_t var_288_2 = 0xc;
    char const* const var_280_2 = "-xsuffix-lengthverboseseparatore…";
    int64_t var_278_2 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::h7be55cd6546cf270(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "use hex suffixes starting at 0, …", 0x2e);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "hex-suffixes-xsuffix-lengthverbo…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "hex-suffixes-xsuffix-lengthverbo…");
    memcpy(&var_840, &var_ac0, 0x278);
    clap_builder::builder::arg::Arg::num_args::h5a2cdb11d0767124(&var_ac0, &var_840, 0);
    var_2b0 = "numeric-suffixesentity not found";
    int64_t var_2a8_3 = 0x10;
    char const* const var_2a0_3 = "-dhex-suffixes-xsuffix-lengthver…";
    int64_t var_298_3 = 2;
    char const* const var_290_3 = "hex-suffixes-xsuffix-lengthverbo…";
    int64_t var_288_3 = 0xc;
    char const* const var_280_3 = "-xsuffix-lengthverboseseparatore…";
    int64_t var_278_3 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all::h7be55cd6546cf270(&var_840, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_ac0, &var_840, 
        &data_41a774[4]);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "same as -x, but allow setting th…", 0x2d);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "suffix-lengthverboseseparatoreli…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x61);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_578, &var_ac0, 
        "suffix-lengthverboseseparatoreli…");
    memcpy(&var_ac0, &var_578, 0x278);
    int32_t var_848_4 = rax_13 | 0x20;
    int32_t var_844_4 = var_2fc;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_578, &var_ac0, 
        "Ngenerate suffixes of length N (…");
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_ac0, &var_578, 
        "generate suffixes of length N (d…", 0x29);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "verboseseparatorelide-empty-file…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "verboseseparatorelide-empty-file…");
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_840, &var_ac0, 
        "print a diagnostic just before e…", 0x39);
    clap_builder::builder::arg::Arg::action::hd0a509d31e4e1db2(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "separatorelide-empty-files-io-bl…");
    clap_builder::builder::arg::Arg::short::h72e02daf65d8a52e(&var_ac0, &var_578, 0x74);
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_578, &var_ac0, 
        "separatorelide-empty-files-io-bl…");
    memcpy(&var_ac0, &var_578, 0x278);
    int32_t var_848_5 = rax_13 | 0x20;
    int32_t var_844_5 = var_2fc;
    clap_builder::builder::arg::Arg::value_name::hbddf314840765f66(&var_578, &var_ac0, 
        "SEPuse SEP instead of newline as…");
    clap_builder::builder::arg::Arg::action::hd0a509d31e4e1db2(&var_ac0, &var_578, 1);
    clap_builder::builder::arg::Arg::help::h362c9939a3e08521(&var_2b0, &var_ac0, 
        "use SEP instead of newline as th…", 0x5b);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "-io-blksizeinputprefix---a-b-C-l…");
    clap_builder::builder::arg::Arg::long::h43ba762a21cd8172(&var_ac0, &var_840, 
        "io-blksizex\0'' would overwrite …");
    clap_builder::builder::arg::Arg::alias::h548dd5b00076ee7d(&var_840, &var_ac0);
    memcpy(&var_ac0, &var_840, 0x278);
    int32_t var_848_6 = 0x80 | rax_9 | 4;
    int32_t var_844_6 = var_2fc;
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_578, 
        "inputprefix---a-b-C-l-n-tsrc/uu/…");
    clap_builder::builder::arg::Arg::default_value::h21ed427647d28c05(&var_ac0, &var_578, 
        "-rlsrc/uu/split/src/strategy.rsb…");
    clap_builder::builder::arg::Arg::value_hint::hb02a9222ff84e842(&var_2b0, &var_ac0, 3);
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hfa61aa1c93a987de(&var_840, 
        "prefix---a-b-C-l-n-tsrc/uu/split…");
    clap_builder::builder::arg::Arg::default_value::h21ed427647d28c05(&var_ac0, &var_840, 
        "x\0'' would overwrite input; abo…");
    clap_builder::builder::command::Command::arg::h7de35b94c77ed19a(arg1, &var_578, &var_ac0);
    return arg1;
}
