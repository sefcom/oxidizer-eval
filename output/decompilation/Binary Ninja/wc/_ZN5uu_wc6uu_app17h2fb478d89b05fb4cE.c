
  int64_t uu_wc::uu_app::h2fb478d89b05fb4c(int64_t arg1)

{
    char const* const var_ab0;
    clap_builder::builder::command::Command::new::hdb76b1b3bbe88b70(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::hd6e327b2345828fb(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::hdcb6fb92a1e0caf9(&var_ab0, &var_568);
    void var_7e8;
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... [FILE]...print th…", 0x18);
    clap_builder::builder::command::Command::override_usage::hc9a69258f21906b8(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_7f4 = 0x8800000088 | var_2ac;
    int32_t var_2a4;
    int32_t var_7ec = var_2a4;
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_568, 
        "bytescharsfiles0-fromlinesmax-li…");
    clap_builder::builder::arg::Arg::short::h1a3b538d32751114(&var_7e8, &var_568, 0x63);
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_568, &var_7e8, 
        "bytescharsfiles0-fromlinesmax-li…");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_568, 
        "print the byte countsprint the c…", 0x15);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_ab0, 
        "charsfiles0-fromlinesmax-line-le…");
    clap_builder::builder::arg::Arg::short::h1a3b538d32751114(&var_7e8, &var_ab0, 0x6d);
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_ab0, &var_7e8, 
        "charsfiles0-fromlinesmax-line-le…");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_ab0, 
        "print the character countsFread …", 0x1a);
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_568, 
        "files0-fromlinesmax-line-lengtht…");
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_7e8, &var_568, 
        "files0-fromlinesmax-line-lengtht…");
    clap_builder::builder::arg::Arg::value_name::h43c9a29c7a9a2f59(&var_568, &var_7e8, 
        "Fread input from the files speci…");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_568, 
        "read input from the files specif…", 0x78);
    int64_t var_ac8 = 2;
    clap_builder::builder::arg::Arg::value_parser::h260f25d8f2c8eb39(&var_568, &var_7e8, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::hc8a704b196fdf959(&var_7e8, &var_568);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_ab0, 
        "linesmax-line-lengthtotalwordsfi…");
    clap_builder::builder::arg::Arg::short::h1a3b538d32751114(&var_7e8, &var_ab0, 0x6c);
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_ab0, &var_7e8, 
        "linesmax-line-lengthtotalwordsfi…");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_ab0, 
        "print the newline countsprint th…", 0x18);
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_568, 
        "max-line-lengthtotalwordsfile");
    clap_builder::builder::arg::Arg::short::h1a3b538d32751114(&var_7e8, &var_568, 0x4c);
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_568, &var_7e8, 
        "max-line-lengthtotalwordsfile");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_568, 
        "print the length of the longest …", 0x24);
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_ab0, "totalwordsfile");
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_7e8, &var_ab0, "totalwordsfile");
    var_ab0 = "autoBool";
    int64_t var_aa8 = 4;
    char const* const var_aa0 = "alwaysneverinternal error: enter…";
    int64_t var_a98 = 6;
    char const* const var_a90 = "only\x1b[1mKindboolmut kindAuto/";
    int64_t var_a88 = 4;
    char const* const var_a80 = "neverinternal error: entered unr…";
    int64_t var_a78 = 5;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5633c288c25eb3da(&var_2a0, &var_ab0);
    clap_builder::builder::arg::Arg::value_parser::h97d2b77951c87a42(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::value_name::h43c9a29c7a9a2f59(&var_7e8, &var_ab0, 
        "WHENkeysu128for<only\x1b[1mKindb…");
    memcpy(&var_ab0, &var_7e8, 0x278);
    int32_t var_570;
    int32_t var_838 = var_570 | 0x10;
    int32_t var_56c;
    int32_t var_834 = var_56c;
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_ab0, 
        "when to print a line with total …", 0x50);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_568, "wordsfile");
    clap_builder::builder::arg::Arg::short::h1a3b538d32751114(&var_7e8, &var_568, 0x77);
    clap_builder::builder::arg::Arg::long::hfdf46bf16e2a9055(&var_568, &var_7e8, "wordsfile");
    clap_builder::builder::arg::Arg::help::ha00bcebb5a4e2912(&var_7e8, &var_568, 
        "print the word countscannot open…", 0x15);
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h8c4090ff46fad2ea(&var_ab0, "file");
    clap_builder::builder::arg::Arg::action::hf63c2c22540d6dd2(&var_7e8, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_parser::h260f25d8f2c8eb39(&var_ab0, &var_7e8, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::hc8a704b196fdf959(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::arg::hea5d6fb53bcbcaa9(arg1, &var_568, &var_7e8);
    return arg1;
}
