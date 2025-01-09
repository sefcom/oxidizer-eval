fn uu_csplit::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0xa50], Other Possible Types: struct592, struct712
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i32;  // [sp-0x540]
    let v3: i32;  // [sp-0x53c]
    let v4: i5696;  // [sp-0x538], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x27c]
    let v6: i32;  // [sp-0x274]
    let v7: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v4 = clap_builder::builder::command::Command::about(&v0, "Split a file into sections determined by context lines");
    v1 = uucore::format_usage("{} [OPTION]... FILE PATTERN...");
    v0 = clap_builder::builder::command::Command::override_usage(&v4, &v1);
    memcpy(&v4, &v0, 700);
    v5 = 584115552392 | *((&v0 as &char + 700) as &i64);
    v6 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("suffix-format");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "suffix-format");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_470611);
    v7 = clap_builder::builder::arg::Arg::help(&v1, "use sprintf FORMAT instead of %02d");
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("prefix");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x66);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "prefix");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, &g_470639);
    v7 = clap_builder::builder::arg::Arg::help(&v1, "use PREFIX instead of 'xx'");
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("keep-files");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x6b);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "keep-files");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "do not remove output files on errors");
    v7 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("suppress-matched");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "suppress-matched");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "suppress the lines matching PATTERN");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("digits");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x6e);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "digits");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_4706a0);
    v7 = clap_builder::builder::arg::Arg::help(&v1, "use specified number of digits instead of 2");
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("quiet");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x73);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "quiet");
    v1 = clap_builder::builder::arg::Arg::visible_alias(&v4, "silent");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "do not print counts of output file sizes");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x7a);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "elide-empty-files");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "remove empty output files");
    v7 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v4, 584);
    v2 = *((&v4 as &char + 584) as &i32) | 5;
    v3 = *((&v4 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("pattern");
    memcpy(&v1, &v0, 584);
    v2 = *((&v0 as &char + 584) as &i32) | 4;
    v3 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    memcpy(&v1, &v0, 584);
    v2 = *((&v0 as &char + 584) as &i32) | 1;
    v3 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.");
    return a0;
}
