fn uu_csplit::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab8], Other Possible Types: struct640
    let v1: u32;  // [bp-0x840]
    let v2: u32;  // [bp-0x83c]
    let v3: struct712;  // [bp-0x838], Other Possible Types: struct640
    let v4: struct712;  // [bp-0x838]
    let v5: struct640;  // [bp-0x838]
    let v6: u32;  // [bp-0x5c0]
    let v7: u64;  // [bp-0x57c]
    let v8: u32;  // [bp-0x574]
    let v9: struct437;  // [bp-0x570], Other Possible Types: struct712, struct640
    let v10: struct712;  // [bp-0x570]
    let v11: struct640;  // [bp-0x570]
    let v12: u32;  // [bp-0x2f8]
    let v13: u64;  // [bp-0x2b4]
    let v14: u32;  // [bp-0x2ac]
    let v15: struct640;  // [bp-0x2a8]
    let v18: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v3 = clap_builder::builder::command::Command::version(&v9);
    v9 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTION]... FILE PATTERN...");
    v3 = clap_builder::builder::command::Command::override_usage(&v9, &v0);
    memcpy(&v9, &v3, 700);
    v13 = 584115552392 | v7;
    v14 = v8;
    v3 = clap_builder::builder::arg::Arg::new("suffix-format");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "suffix-format");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, &g_455660);
    v15 = clap_builder::builder::arg::Arg::help(&v0, "use sprintf FORMAT instead of %02d");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v15);
    v9 = clap_builder::builder::arg::Arg::new("prefix");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 102);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "prefix");
    v0 = clap_builder::builder::arg::Arg::value_name(&v9, &g_455688);
    v15 = clap_builder::builder::arg::Arg::help(&v0, "use PREFIX instead of 'xx'");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v15);
    v3 = clap_builder::builder::arg::Arg::new("keep-files");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 107);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "keep-files");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "do not remove output files on errors");
    v15 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v15);
    v9 = clap_builder::builder::arg::Arg::new("suppress-matched");
    v0 = clap_builder::builder::arg::Arg::long(&v9, "suppress-matched");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "suppress the lines matching PATTERN");
    v0 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("digits");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "digits");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, &g_4556ef);
    v15 = clap_builder::builder::arg::Arg::help(&v0, "use specified number of digits instead of 2");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v15);
    v9 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 113);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v9);
    v9 = clap_builder::builder::arg::Arg::visible_alias(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "do not print counts of output file sizes");
    v15 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v15);
    v3 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 122);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "elide-empty-files");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "remove empty output files");
    v15 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v10, &v15);
    v11 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v11, 632);
    v1 = v12 | 5;
    v2 = v12;
    v15 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v15);
    v5 = clap_builder::builder::arg::Arg::new("pattern");
    memcpy(&v0, &v5, 632);
    v1 = v6 | 4;
    v2 = v6;
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v3, 632);
    v1 = v6 | 1;
    v2 = *((&(&v5)[79].field_0 as &char + 4) as &i32);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    clap_builder::builder::command::Command::after_help(a0, &v3);
    return;
}
