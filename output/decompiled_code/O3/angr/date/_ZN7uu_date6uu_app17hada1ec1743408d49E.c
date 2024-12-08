long long uu_date::uu_app::hada1ec1743408d49(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa58]
    unsigned long long v2;  // [sp-0xa50]
    unsigned long long v3;  // [sp-0xa48]
    unsigned long long v4;  // [sp-0xa40]
    unsigned long long v5;  // [sp-0xa38]
    unsigned long long v6;  // [sp-0xa30]
    unsigned long long v7;  // [sp-0xa28]
    unsigned long long v8;  // [sp-0xa20]
    unsigned long long v9;  // [sp-0xa18]
    char v10;  // [bp-0x7a4]
    char v11;  // [bp-0x79c]
    char v12;  // [bp-0x798], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x790]
    unsigned long long v14;  // [sp-0x788]
    unsigned long long v15;  // [sp-0x780]
    unsigned long long v16;  // [sp-0x778]
    unsigned long long v17;  // [sp-0x770]
    char v18;  // [bp-0x548]
    unsigned long long v19;  // [sp-0x28c]
    unsigned int v20;  // [sp-0x284]
    char v21;  // [bp-0x280]
    unsigned long long v23;  // rdx

    clap_builder::builder::command::Command::new::ha2d646cc2c6e805c(&v18, uucore::util_name::h412db5e565a079f3(), v23);
    clap_builder::builder::command::Command::version::h4519e889b24333c7(&v0, &v18, v23);
    clap_builder::builder::command::Command::about::h772eb10a5e74a923(&v18, &v0);
    uucore::format_usage::h00b69bae12d8ac9c(&v12, "{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedis", 66);
    clap_builder::builder::command::Command::override_usage::h8e1e9dcd4937beec(&v0, &v18, &v12);
    memcpy(&v18, &v0, 700);
    v19 = 549755814016 | *((long long *)&v10);
    v20 = *((int *)&v11);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v0, "datethur]", 4);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v0, 100);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v0, &v12, "datethur]", 4);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v12, &v0, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v21, &v12, "display time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coord", 43);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v0, &v18, &v21);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v18, "filemode{", 4);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v18, 102);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v18, &v12, "filemode{", 4);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v12, &v18, "DATEFILE", 8);
    clap_builder::builder::arg::Arg::value_hint::hd9cba84c8082da4d(&v18, &v12, 3);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v12, &v18, "like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity o", 43);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v18, &v0, &v12);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v0, "iso-8601", 8);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v0, 73);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v0, &v12, "iso-8601", 8);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v12, &v0, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175", 3);
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
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h58fe32c55010cd63(&v21, &v0);
    clap_builder::builder::arg::Arg::value_parser::h75710a0f20ae86dc(&v0, &v12, &v21);
    clap_builder::builder::arg::Arg::num_args::hc470018ab0292970(&v12, &v0);
    clap_builder::builder::arg::Arg::default_missing_value::he02fdcc1589acc46(&v0, &v12);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v12, &v0, "output date/time in ISO 8601 format.\n FMT='date' for date only (the default),\n 'hours', 'minutes', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00output date and time in RFC 5322 format.\n Example: Mon, ", 200);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v18, "rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba", 9);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v18, 82);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v18, &v12, "rfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba", 9);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v12, &v18, "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by S", 82);
    clap_builder::builder::arg::Arg::action::hb86226f4056b3342(&v21, &v12);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v18, &v0, &v21);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v0, "rfc-3339", 8);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v12, &v0, "rfc-3339", 8);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v0, &v12, "FMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175", 3);
    v12 = "datethur]";
    v13 = 4;
    v14 = "secondsnssrc/uu/date/src/date.rs";
    v15 = 7;
    v16 = "nssrc/uu/date/src/date.rs";
    v17 = 2;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::ha731618e4f91f5e6(&v21, &v12);
    clap_builder::builder::arg::Arg::value_parser::h75710a0f20ae86dc(&v12, &v0, &v21);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v21, &v12, "output date/time in RFC 3339 format.\n FMT='date', 'seconds', or 'ns'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 151);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v0, &v18, &v21);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v18, "debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/", 5);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v12, &v18, "debugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/", 5);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v18, &v12, "annotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/libra", 69);
    clap_builder::builder::arg::Arg::action::hb86226f4056b3342(&v12, &v18);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v18, &v0, &v12);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v0, "referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda", 9);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v0, 114);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v0, &v12, "referencedisplay the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda", 9);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v12, &v0, &g_4508e4, 4);
    clap_builder::builder::arg::Arg::value_hint::hd9cba84c8082da4d(&v0, &v12, 2);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v12, &v0, "display the last modification time of FILEsetuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175b", 42);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v18, "setuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rust", 3);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v18, 115);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v18, &v12, "setuniversalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rust", 3);
    clap_builder::builder::arg::Arg::value_name::hfce140d353f09d74(&v12, &v18, "STRINGdisplay time described by STRING, not 'now'like --date; once for each line of DATEFILEFMTrfc-emaildebugannotate the parsed date, and warn about questionable usage to stderrreferencedisplay the last modification time of FILEsetuniversalutcprint or set", 6);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v21, &v12, "set time described by STRINGhoursminutessecondsnssrc/uu/date/src/date.rs", 28);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v18, &v0, &v21);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v0, "universalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8", 9);
    clap_builder::builder::arg::Arg::short::h4b5de27b219e1ead(&v12, &v0, 117);
    clap_builder::builder::arg::Arg::long::h11b94e2cd8a778f7(&v0, &v12, "universalutcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8", 9);
    clap_builder::builder::arg::Arg::alias::headc261609fd190e(&v12, &v0, "utcprint or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a", 3);
    clap_builder::builder::arg::Arg::help::hca9d8fac8d7a6560(&v0, &v12, "print or set Coordinated Universal Time (UTC)formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db", 45);
    clap_builder::builder::arg::Arg::action::hb86226f4056b3342(&v12, &v0);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(&v0, &v18, &v12);
    clap_builder::builder::arg::Arg::new::hfa74ec507851d359(&v18, "formatcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsunexpected regex find error: \nto handle find errors, use 'try' or 'search' methods/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-automata-0.4.8/src/util/iter.rs", 6);
    clap_builder::builder::command::Command::arg::h2446b1b916d520d2(a0, &v0, &v18);
    return a0;
}
