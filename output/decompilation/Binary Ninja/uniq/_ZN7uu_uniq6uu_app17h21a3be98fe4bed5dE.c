
  int64_t uu_uniq::uu_app::h21a3be98fe4bed5d(int64_t arg1)

{
    void var_540;
    clap_builder::builder::command::Command::new::ha9f386b472c5d0f1(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    char const* const var_808;
    clap_builder::builder::command::Command::version::h6875f9389892f91c(&var_808, &var_540, 
        "0.0.28Report or omit repeated li…");
    clap_builder::builder::command::Command::about::h6a5467500d801ce2(&var_540, &var_808, 
        "Report or omit repeated lines.{}…", 0x1e);
    void* const var_a58;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a58, "{} [OPTION]... [INPUT [OUTPUT]]F…", 0x1f);
    clap_builder::builder::command::Command::override_usage::hbed072592bcabc12(&var_808, &var_540, 
        &var_a58);
    memcpy(&var_540, &var_808, 0x2bc);
    int64_t var_54c;
    int64_t var_284 = 0x8000000080 | var_54c;
    int32_t var_544;
    int32_t var_27c = var_544;
    clap_builder::builder::command::Command::after_help::hfbc5bb31e2c5b48a(&var_808, &var_540, 
        "Filter adjacent matching lines f…", 0xee);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, 
        "all-repeatedcheck-charscountigno…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_540, 0x44);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_540, &var_a58, 
        "all-repeatedcheck-charscountigno…");
    var_a58 = "nonehelpNoneshimbothname\x1b[0m …";
    int64_t var_a50 = 4;
    char const* const var_a48 = "prependprint all duplicate lines…";
    int64_t var_a40 = 7;
    char const* const var_a38 = "separate\n       extern "";
    int64_t var_a30 = 8;
    int64_t var_278;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc2378daf3056ea67(&var_278, &var_a58);
    clap_builder::builder::arg::Arg::value_parser::hf8c023e5f7cf7e06(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_540, &var_a58, 
        "print all duplicate lines. Delim…", 0x4f);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&var_a58, &var_540, 
        "delimit-methodappendshow all ite…");
    int64_t var_a70 = 0;
    int64_t var_a68 = 1;
    int64_t var_268 = 0;
    var_278 = var_a70;
    int64_t var_270 = var_a68;
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::default_missing_value::hbc3011d9bfb21fcb(&var_a58, &var_540, 
        "nonehelpNoneshimbothname\x1b[0m …");
    memcpy(&var_278, &var_a58, 0x248);
    int32_t var_810;
    int32_t var_30 = 0x80 | var_810;
    int32_t var_80c;
    int32_t var_2c = var_80c;
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_808, "group");
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_a58, &var_808, "group");
    var_808 = "separate\n       extern "";
    int64_t var_800 = 8;
    char const* const var_7f8 = "prependprint all duplicate lines…";
    int64_t var_7f0 = 7;
    char const* const var_7e8 = "appendshow all items, separating…";
    int64_t var_7e0 = 6;
    void* const var_7d8 = &data_415d10;
    int64_t var_7d0 = 4;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hdb2f90364b5ffb5f(&var_278, &var_808);
    clap_builder::builder::arg::Arg::value_parser::hf8c023e5f7cf7e06(&var_808, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_808, 
        "show all items, separating group…", 0x49);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&var_808, &var_a58, 
        "group-methodcompare no more than…");
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&var_a58, &var_808, &var_a70);
    clap_builder::builder::arg::Arg::default_missing_value::hbc3011d9bfb21fcb(&var_808, &var_a58, 
        "separate\n       extern "");
    memcpy(&var_a58, &var_808, 0x248);
    var_808 = "repeatedNoEqualsargumentNO_COLOR…";
    int64_t var_800_1 = 8;
    char const* const var_7f8_1 = "all-repeatedcheck-charscountigno…";
    int64_t var_7f0_1 = 0xc;
    char const* const var_7e8_1 = "uniquezero-terminatedgroup";
    int64_t var_7e0_1 = 6;
    char const* const var_7d8_1 = "countignore-caseskip-fieldsskip-…";
    int64_t var_7d0_1 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::h108fb98df5efe6c4(&var_278, &var_a58, 
        &var_808);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, 
        "check-charscountignore-caseskip-…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_540, 0x77);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_540, &var_a58, 
        "check-charscountignore-caseskip-…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_540, 
        "compare no more than N character…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&var_278, &var_a58, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_808, 
        "countignore-caseskip-fieldsskip-…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_808, 0x63);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_808, &var_a58, 
        "countignore-caseskip-fieldsskip-…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_808, 
        "prefix lines by the number of oc…", 0x29);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, 
        "ignore-caseskip-fieldsskip-chars…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_540, 0x69);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_540, &var_a58, 
        "ignore-caseskip-fieldsskip-chars…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_540, 
        "ignore differences in case when …", 0x29);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_808, 
        "repeatedNoEqualsargumentNO_COLOR…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_808, 0x64);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_808, &var_a58, 
        "repeatedNoEqualsargumentNO_COLOR…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_808, 
        "only print duplicate linesavoid …", 0x1a);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, 
        "skip-charsuniquezero-terminatedg…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_540, 0x73);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_540, &var_a58, 
        "skip-charsuniquezero-terminatedg…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_540, 
        "avoid comparing the first N char…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&var_278, &var_a58, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_808, 
        "skip-fieldsskip-charsuniquezero-…");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_808, 0x66);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_808, &var_a58, 
        "skip-fieldsskip-charsuniquezero-…");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_808, 
        "avoid comparing the first N fiel…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h389e15842e4efb3e(&var_278, &var_a58, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, "uniquezero-terminatedgroup");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_540, 0x75);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_540, &var_a58, 
        "uniquezero-terminatedgroup");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_540, 
        "only print unique linesend lines…", 0x17);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_808, "zero-terminatedgroup");
    clap_builder::builder::arg::Arg::short::h428322b267c31649(&var_a58, &var_808, 0x7a);
    clap_builder::builder::arg::Arg::long::hb2158c63ca8a1217(&var_808, &var_a58, 
        "zero-terminatedgroup");
    clap_builder::builder::arg::Arg::help::hff8c0a6f70ec564d(&var_a58, &var_808, 
        "end lines with 0 byte, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::hc44b80d3bb7fe500(&var_540, 
        "filesInvalid argument for : -f-s…");
    clap_builder::builder::arg::Arg::action::h20c13c84f7788271(&var_a58, &var_540, 1);
    var_278 = 2;
    clap_builder::builder::arg::Arg::value_parser::h120ad401eb644ab4(&var_540, &var_a58, &var_278);
    var_278 = 0;
    int64_t var_270_1 = 2;
    var_268 = 0;
    clap_builder::builder::arg::Arg::num_args::h1727105242b5cb03(&var_a58, &var_540, &var_278);
    memcpy(&var_540, &var_a58, 0x248);
    int32_t var_5c0;
    int32_t var_2f8 = 0x80 | var_5c0 | 4;
    int32_t var_5bc;
    int32_t var_2f4 = var_5bc;
    clap_builder::builder::arg::Arg::value_hint::hc9d1bc2057741f49(&var_a58, &var_540, 3);
    clap_builder::builder::command::Command::arg::h6307814d76a87d4c(arg1, &var_808, &var_a58);
    return arg1;
}
