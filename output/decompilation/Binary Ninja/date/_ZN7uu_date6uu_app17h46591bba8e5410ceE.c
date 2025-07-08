
  int64_t uu_date::uu_app::h46591bba8e5410ce(int64_t arg1)

{
    void var_540;
    clap_builder::builder::command::Command::new::hd9826196214d2c4f(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    char const* const var_a58;
    clap_builder::builder::command::Command::version::h161717c8ebc266cc(&var_a58, &var_540, 
        "0.0.28Print or set the system da…");
    clap_builder::builder::command::Command::about::hb7173941c0c8dfc2(&var_540, &var_a58, 
        "Print or set the system date and…", 0x25);
    char const* const var_790;
    uucore::format_usage::h76fcb2d15fbabc58(&var_790, "{} [OPTION]... [+FORMAT]...\n{} …", 0x42);
    clap_builder::builder::command::Command::override_usage::h5735dea81badfd79(&var_a58, &var_540, 
        &var_790);
    memcpy(&var_540, &var_a58, 0x2bc);
    int64_t var_79c;
    int64_t var_284 = 0x8000000080 | var_79c;
    int32_t var_794;
    int32_t var_27c = var_794;
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, "datethur]");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_a58, 0x64);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_a58, &var_790, "datethur]");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_a58, 
        "STRINGdisplay time described by …");
    int64_t var_278;
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_278, &var_790, 
        "display time described by STRING…", 0x2b);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_540, "filemode{");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_540, 0x66);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_540, &var_790, "filemode{");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_540, 
        "DATEFILETimeZon");
    clap_builder::builder::arg::Arg::value_hint::h47c8a99cbc3a89c3(&var_540, &var_790, 3);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_790, &var_540, 
        "like --date; once for each line …", 0x2b);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_540, &var_a58, &var_790);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, "iso-8601tomorrow, group");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_a58, 0x49);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_a58, &var_790, 
        "iso-8601tomorrow, group");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_a58, 
        "FMTrfc-emaildebugannotate the pa…");
    var_a58 = "datethur]";
    int64_t var_a50 = 4;
    void* const var_a48 = "hoursminutessecondsnssrc/uu/date…";
    int64_t var_a40 = 5;
    void* const var_a38 = "minutessecondsnssrc/uu/date/src/…";
    int64_t var_a30 = 7;
    void* const var_a28 = "secondsnssrc/uu/date/src/date.rs…";
    int64_t var_a20 = 7;
    void* const var_a18 = "nssrc/uu/date/src/date.rs0.0.28P…";
    int64_t var_a10 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he2a824a314ec1e43(&var_278, &var_a58);
    clap_builder::builder::arg::Arg::value_parser::h9f376b1dd37b5aeb(&var_a58, &var_790, &var_278);
    var_278 = 0;
    int64_t var_270 = 1;
    char var_268 = 0;
    clap_builder::builder::arg::Arg::num_args::h2188acb4f39cf13a(&var_790, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::default_missing_value::h135fac1eb528b780(&var_a58, &var_790);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_790, &var_a58, 
        "output date/time in ISO 8601 for…", 0xc8);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_540, 
        "rfc-emaildebugannotate the parse…");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_540, 0x52);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_540, &var_790, 
        "rfc-emaildebugannotate the parse…");
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_790, &var_540, 
        "output date and time in RFC 5322…", 0x52);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&var_278, &var_790);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, "rfc-3339");
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_790, &var_a58, "rfc-3339");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_a58, &var_790, 
        "FMTrfc-emaildebugannotate the pa…");
    var_790 = "datethur]";
    int64_t var_788 = 4;
    void* const var_780 = "secondsnssrc/uu/date/src/date.rs…";
    int64_t var_778 = 7;
    void* const var_770 = "nssrc/uu/date/src/date.rs0.0.28P…";
    int64_t var_768 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::heb8648efcc3e58b4(&var_278, &var_790);
    clap_builder::builder::arg::Arg::value_parser::h9f376b1dd37b5aeb(&var_790, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_278, &var_790, 
        "output date/time in RFC 3339 for…", 0x97);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_540, 
        "debugannotate the parsed date, a…");
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_790, &var_540, 
        "debugannotate the parsed date, a…");
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_540, &var_790, 
        "annotate the parsed date, and wa…", 0x45);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&var_790, &var_540);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_540, &var_a58, &var_790);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, 
        "referencedisplay the last modifi…");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_a58, 0x72);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_a58, &var_790, 
        "referencedisplay the last modifi…");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_a58, "FI");
    clap_builder::builder::arg::Arg::value_hint::h47c8a99cbc3a89c3(&var_a58, &var_790, 2);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_790, &var_a58, 
        "display the last modification ti…", 0x2a);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_540, 
        "setuniversalutcprint or set Coor…");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_540, 0x73);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_540, &var_790, 
        "setuniversalutcprint or set Coor…");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_540, 
        "STRINGdisplay time described by …");
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_278, &var_790, 
        "set time described by STRINGhour…", 0x1c);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, 
        "universalutcprint or set Coordin…");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_a58, 0x75);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_a58, &var_790, 
        "universalutcprint or set Coordin…");
    clap_builder::builder::arg::Arg::alias::hd9fa8728006a9b30(&var_790, &var_a58, 
        "utcprint or set Coordinated Univ…");
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&var_a58, &var_790, 
        "print or set Coordinated Univers…", 0x2d);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&var_790, &var_a58);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_540, "format");
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(arg1, &var_a58, &var_540);
    return arg1;
}
