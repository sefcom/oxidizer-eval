
  fn uu_date::uu_app::h46591bba8e5410ce(arg1: i64) -> i64

{
    let mut var_540: ();
    clap_builder::builder::command::Command::new::hd9826196214d2c4f(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_a58: *const i8;
    clap_builder::builder::command::Command::version::h161717c8ebc266cc(&var_a58, &var_540, 
        "0.0.28Print or set the system da…");
    clap_builder::builder::command::Command::about::hb7173941c0c8dfc2(&var_540, &var_a58, 
        "Print or set the system date and…", 0x25);
    let mut var_790: *const i8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_790, "{} [OPTION]... [+FORMAT]...\n{} …", 0x42);
    clap_builder::builder::command::Command::override_usage::h5735dea81badfd79(&var_a58, &var_540, 
        &var_790);
    memcpy(&var_540, &var_a58, 0x2bc);
    let var_79c: i64;
    let var_284: i64 = 0x8000000080 | var_79c;
    let var_794: i32;
    let var_27c: i32 = var_794;
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&var_a58, "datethur]");
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&var_790, &var_a58, 0x64);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&var_a58, &var_790, "datethur]");
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&var_790, &var_a58, 
        "STRINGdisplay time described by …");
    let mut var_278: i64;
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
    let var_a50: i64 = 4;
    let var_a48: *mut c_void = "hoursminutessecondsnssrc/uu/date…";
    let var_a40: i64 = 5;
    let var_a38: *mut c_void = "minutessecondsnssrc/uu/date/src/…";
    let var_a30: i64 = 7;
    let var_a28: *mut c_void = "secondsnssrc/uu/date/src/date.rs…";
    let var_a20: i64 = 7;
    let var_a18: *mut c_void = "nssrc/uu/date/src/date.rs0.0.28P…";
    let var_a10: i64 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he2a824a314ec1e43(&var_278, &var_a58);
    clap_builder::builder::arg::Arg::value_parser::h9f376b1dd37b5aeb(&var_a58, &var_790, &var_278);
    var_278 = 0;
    let var_270: i64 = 1;
    let var_268: i8 = 0;
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
    let var_788: i64 = 4;
    let var_780: *mut c_void = "secondsnssrc/uu/date/src/date.rs…";
    let var_778: i64 = 7;
    let var_770: *mut c_void = "nssrc/uu/date/src/date.rs0.0.28P…";
    let var_768: i64 = 2;
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
    arg1
}
