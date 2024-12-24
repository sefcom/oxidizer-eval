fn uu_csplit::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa50], Other Possible Types: struct592, struct712
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i3496;  // [sp-0x538], Other Possible Types: struct592, struct712, struct437
    let v3: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v0 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v0, "Split a file into sections determined by context lines");
    v1 = uucore::format_usage("{} [OPTION]... FILE PATTERN...");
    v0 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    memcpy(&v2, &v0, 700);
    v2.700 = 584115552392 | (stack_base)[1940] as i64;
    v2.708 = (stack_base)[1932] as i32;
    v0 = clap_builder::builder::arg::Arg::new("suffix-format");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "suffix-format");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_470acd);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "use sprintf FORMAT instead of %02d");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("prefix");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "prefix");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, &g_470af5);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "use PREFIX instead of 'xx'");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("keep-files");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 107);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "keep-files");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "do not remove output files on errors");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("suppress-matched");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "suppress-matched");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "suppress the lines matching PATTERN");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("digits");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 110);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "digits");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_470b5c);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "use specified number of digits instead of 2");
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("quiet");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "quiet");
    v1 = clap_builder::builder::arg::Arg::visible_alias(&v2, "silent");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "do not print counts of output file sizes");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "elide-empty-files");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "remove empty output files");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v2, 584);
    v1.584 = (stack_base)[752] as i32 | 5;
    v1.588 = (stack_base)[748] as i32;
    v3 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("pattern");
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[2056] as i32 | 4;
    v1.588 = (stack_base)[2052] as i32;
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[2056] as i32 | 1;
    v1.588 = (stack_base)[2052] as i32;
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.");
    return a0;
}
