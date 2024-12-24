fn uu_wc::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct64, struct437
    let v2: i192;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v3: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v4: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v6: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v3 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v3, &g_41e4e1, 160);
    v2 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v1, &v2);
    memcpy(&v1, &v3, 700);
    v1.700 = 584115552392 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v3 = clap_builder::builder::arg::Arg::new("bytes");
    v2 = clap_builder::builder::arg::Arg::short(&v3, 99);
    v3 = clap_builder::builder::arg::Arg::long(&v2, "bytes");
    v2 = clap_builder::builder::arg::Arg::help(&v3, "print the byte counts");
    v4 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v3 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("chars");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "chars");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "print the character counts");
    v4 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v1 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("files0-from");
    v2 = clap_builder::builder::arg::Arg::long(&v3, "files0-from");
    v3 = clap_builder::builder::arg::Arg::value_name(&v2, "F");
    v2 = clap_builder::builder::arg::Arg::help(&v3, &g_41e5c9, 120);
    v0 = 2;
    v4.16 = (stack_base)[2640] as i64;
    v4 = v0;
    v4.8 = (stack_base)[2648] as i64;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v3, 3);
    v3 = clap_builder::builder::command::Command::arg(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::new("lines");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 108);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "lines");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "print the newline counts");
    v4 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v1 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("max-line-length");
    v2 = clap_builder::builder::arg::Arg::short(&v3, 76);
    v3 = clap_builder::builder::arg::Arg::long(&v2, "max-line-length");
    v2 = clap_builder::builder::arg::Arg::help(&v3, "print the length of the longest line");
    v4 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v3 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("total");
    v2 = clap_builder::builder::arg::Arg::long(&v1, "total");
    v1 = struct64 {
        field_0: &g_41590c
        field_8: 4
        field_16: &g_41e487
        field_24: 6
        field_32: &g_41593c
        field_40: 4
        field_48: &g_41e48d
        field_56: 5
    };
    v4 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    memcpy(&v1, &v2, 584);
    v1.584 = (stack_base)[1336] as i32 | 16;
    v1.588 = (stack_base)[1332] as i32;
    v2 = clap_builder::builder::arg::Arg::help(&v1, &g_41e67d, 80);
    v1 = clap_builder::builder::command::Command::arg(&v3, &v2);
    v3 = clap_builder::builder::arg::Arg::new("words");
    v2 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v2, "words");
    v2 = clap_builder::builder::arg::Arg::help(&v3, "print the word counts");
    v4 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v3 = clap_builder::builder::command::Command::arg(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::new("files");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v2);
    return a0;
}
