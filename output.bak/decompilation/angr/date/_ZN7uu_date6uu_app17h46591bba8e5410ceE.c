long long uu_date::uu_app::h46591bba8e5410ce(unsigned long long a0)
{
    char v0;  // [bp-0xa58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa50]
    unsigned long long v2;  // [sp-0xa48]
    unsigned long long v3;  // [sp-0xa40]
    unsigned long long v4;  // [sp-0xa38]
    unsigned long long v5;  // [sp-0xa30]
    unsigned long long v6;  // [sp-0xa28]
    unsigned long long v7;  // [sp-0xa20]
    unsigned long long v8;  // [sp-0xa18]
    unsigned long long v9;  // [sp-0xa10]
    char v10;  // [bp-0x79c]
    char v11;  // [bp-0x794]
    char v12;  // [bp-0x790], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x788]
    unsigned long long v14;  // [sp-0x780]
    unsigned long long v15;  // [sp-0x778]
    unsigned long long v16;  // [sp-0x770]
    unsigned long long v17;  // [sp-0x768]
    char v18;  // [bp-0x540]
    unsigned long long v19;  // [sp-0x284]
    unsigned int v20;  // [sp-0x27c]
    void* v21;  // [bp-0x278], Other Possible Types: char
    unsigned long long v22;  // [sp-0x270]
    char v23;  // [sp-0x268]
    unsigned long long v25;  // rdx

    clap_builder::builder::command::Command::new::hd9826196214d2c4f(&v18, uucore::util_name::h60d842bf27b05e82(), v25);
    clap_builder::builder::command::Command::version::h161717c8ebc266cc(&v0, &v18, "0.0.28Print or set the system date and time{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn abo", 6);
    clap_builder::builder::command::Command::about::hb7173941c0c8dfc2(&v18, &v0, "Print or set the system date and time{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about que", 37);
    uucore::format_usage::h76fcb2d15fbabc58(&v12, "{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedis", 66);
    clap_builder::builder::command::Command::override_usage::h5735dea81badfd79(&v0, &v18, &v12);
    memcpy(&v18, &v0, 700);
    v19 = 549755814016 | *((long long *)&v10);
    v20 = *((int *)&v11);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v0, "datethur]", 4);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v0, 100);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v0, &v12, "datethur]", 4);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v12, &v0, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v21, &v12, "display time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coord", 43);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v0, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v18, "filemode{", 4);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v18, 102);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v18, &v12, "filemode{", 4);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v12, &v18, "DATEFILE", 8);
    clap_builder::builder::arg::Arg::value_hint::h47c8a99cbc3a89c3(&v18, &v12, 3);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v12, &v18, "like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 43);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v18, &v0, &v12);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v0, "iso-8601", 8);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v0, 73);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v0, &v12, "iso-8601", 8);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v12, &v0, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v0 = "datethur]";
    v1 = 4;
    v2 = "hoursminutessecondsnssrc/uu/date/src/date.rs";
    v3 = 5;
    v4 = "minutessecondsnssrc/uu/date/src/date.rs";
    v5 = 7;
    v6 = "secondsnssrc/uu/date/src/date.rs";
    v7 = 7;
    v8 = "nssrc/uu/date/src/date.rs";
    v9 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he2a824a314ec1e43(&v21, &v0);
    clap_builder::builder::arg::Arg::value_parser::h9f376b1dd37b5aeb(&v0, &v12, &v21);
    v21 = 0;
    v22 = 1;
    v23 = 0;
    clap_builder::builder::arg::Arg::num_args::h2188acb4f39cf13a(&v12, &v0, &v21);
    clap_builder::builder::arg::Arg::default_missing_value::h135fac1eb528b780(&v0, &v12);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v12, &v0, "output date/time in ISO 8601 format.\n FMT='date' for date only (the default),\n 'hours', 'minutes', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00output date and time in RFC 5322 format.\n Example: Mon, ", 200);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v18, "rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v18, 82);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v18, &v12, "rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v12, &v18, "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by S", 82);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&v21, &v12);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v18, &v0, &v21);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v0, "rfc-3339", 8);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v12, &v0, "rfc-3339", 8);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v0, &v12, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    v12 = "datethur]";
    v13 = 4;
    v14 = "secondsnssrc/uu/date/src/date.rs";
    v15 = 7;
    v16 = "nssrc/uu/date/src/date.rs";
    v17 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::heb8648efcc3e58b4(&v21, &v12);
    clap_builder::builder::arg::Arg::value_parser::h9f376b1dd37b5aeb(&v12, &v0, &v21);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v21, &v12, "output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 151);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v0, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v18, "debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 5);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v12, &v18, "debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 5);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v18, &v12, "annotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 69);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&v12, &v18);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v18, &v0, &v12);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v0, "referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v0, 114);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v0, &v12, "referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v12, &v0, &g_4506e4, 4);
    clap_builder::builder::arg::Arg::value_hint::h47c8a99cbc3a89c3(&v0, &v12, 2);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v12, &v0, "display the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)format", 42);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v18, "setuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v18, 115);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v18, &v12, "setuniversalutcprint or set Coordinated Universal Time (UTC)format", 3);
    clap_builder::builder::arg::Arg::value_name::h006fe9fc008c14d0(&v12, &v18, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v21, &v12, "set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 28);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v18, &v0, &v21);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v0, "universalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::short::h4cc0d2cff70f7d13(&v12, &v0, 117);
    clap_builder::builder::arg::Arg::long::h638405025bc9c111(&v0, &v12, "universalutcprint or set Coordinated Universal Time (UTC)format", 9);
    clap_builder::builder::arg::Arg::alias::hd9fa8728006a9b30(&v12, &v0, "utcprint or set Coordinated Universal Time (UTC)format", 3);
    clap_builder::builder::arg::Arg::help::h7b8f73cd52095a52(&v0, &v12, "print or set Coordinated Universal Time (UTC)format", 45);
    clap_builder::builder::arg::Arg::action::h90da531525695d3d(&v12, &v0);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::h106195aa2fe03bc6(&v18, "format", 6);
    clap_builder::builder::command::Command::arg::h881f7e23a5e414cd(a0, &v0, &v18);
    return a0;
}
