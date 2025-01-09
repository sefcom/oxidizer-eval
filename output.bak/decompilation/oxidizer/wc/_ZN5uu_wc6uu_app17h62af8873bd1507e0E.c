fn uu_wc::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i8;  // [bp-0xa58]
    let v2: i8;  // [bp-0xa50]
    let v3: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct64, struct437
    let v4: i32;  // [sp-0x800]
    let v5: i32;  // [sp-0x7fc]
    let v6: i64;  // [sp-0x78c]
    let v7: i32;  // [sp-0x784]
    let v8: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v9: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v10: i64;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v11: i64;  // [sp-0x260]
    let v12: i64;  // [sp-0x258]
    let v14: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v9 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v9, &g_41e369, 160);
    v8 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v9 = clap_builder::builder::command::Command::override_usage(&v3, &v8);
    memcpy(&v3, &v9, 700);
    v6 = 584115552392 | *((&v9 as &char + 700) as &i64);
    v7 = *((&v9 as &char + 708) as &i32);
    v9 = clap_builder::builder::arg::Arg::new("bytes");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 0x63);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "bytes");
    v8 = clap_builder::builder::arg::Arg::help(&v9, "print the byte counts");
    v10 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::new("chars");
    v8 = clap_builder::builder::arg::Arg::short(&v3, 0x6d);
    v3 = clap_builder::builder::arg::Arg::long(&v8, "chars");
    v8 = clap_builder::builder::arg::Arg::help(&v3, "print the character counts");
    v10 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v10);
    v9 = clap_builder::builder::arg::Arg::new("files0-from");
    v8 = clap_builder::builder::arg::Arg::long(&v9, "files0-from");
    v9 = clap_builder::builder::arg::Arg::value_name(&v8, "F");
    v8 = clap_builder::builder::arg::Arg::help(&v9, &g_41e451, 120);
    v0 = 2;
    v12 = v2;
    v10 = v0;
    v11 = v1;
    v9 = clap_builder::builder::arg::Arg::value_parser(&v8, &v10);
    v8 = clap_builder::builder::arg::Arg::value_hint(&v9, 0x3);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v8);
    v3 = clap_builder::builder::arg::Arg::new("lines");
    v8 = clap_builder::builder::arg::Arg::short(&v3, 0x6c);
    v3 = clap_builder::builder::arg::Arg::long(&v8, "lines");
    v8 = clap_builder::builder::arg::Arg::help(&v3, "print the newline counts");
    v10 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v10);
    v9 = clap_builder::builder::arg::Arg::new("max-line-length");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 0x4c);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "max-line-length");
    v8 = clap_builder::builder::arg::Arg::help(&v9, "print the length of the longest line");
    v10 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::new("total");
    v8 = clap_builder::builder::arg::Arg::long(&v3, "total");
    v3 = struct64 {
        field_0: &g_415794
        field_8: 4
        field_16: &g_41e30f
        field_24: 6
        field_32: &g_4157c4
        field_40: 4
        field_48: &g_41e315
        field_56: 5
    };
    v10 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v8, &v10);
    v8 = clap_builder::builder::arg::Arg::value_name(&v3, "WHEN");
    memcpy(&v3, &v8, 584);
    v4 = *((&v8 as &char + 584) as &i32) | 16;
    v5 = *((&v8 as &char + 588) as &i32);
    v8 = clap_builder::builder::arg::Arg::help(&v3, &g_41e505, 80);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("words");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 0x77);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "words");
    v8 = clap_builder::builder::arg::Arg::help(&v9, "print the word counts");
    v10 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v8 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v9, &v8);
    return a0;
}
