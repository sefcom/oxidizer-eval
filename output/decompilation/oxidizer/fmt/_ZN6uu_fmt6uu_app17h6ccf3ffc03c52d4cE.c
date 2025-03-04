fn uu_fmt::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa48], Other Possible Types: struct712, struct437
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i64;  // [sp-0x78c]
    let v4: i32;  // [sp-0x784]
    let v5: struct592;  // [sp-0x780], Other Possible Types: struct24
    let v6: struct592;  // [sp-0x530], Other Possible Types: struct712
    let v7: struct592;  // [sp-0x268]
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Reformat paragraphs from input files (or stdin) to stdout.");
    v5 = uucore::format_usage("{} [-WIDTH] [OPTION]... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v5);
    memcpy(&v0, &v6, 700);
    v3 = 584115552392 | *((&v6.field_0 as &char + 700) as &i64);
    v4 = *((&v6.field_0 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("crown-margin");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x63);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "crown-margin");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("tagged-paragraph");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "tagged-paragraph");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("preserve-headers");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x6d);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "preserve-headers");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("split-only");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "split-only");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "Split lines only, do not reflow.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("uniform-spacing");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x75);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "uniform-spacing");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("prefix");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x70);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "prefix");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v5, "PREFIX");
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("skip-prefix");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x50);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "skip-prefix");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP");
    v7 = clap_builder::builder::arg::Arg::value_name(&v5, "PSKIP");
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("exact-prefix");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x78);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "exact-prefix");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "PREFIX must match at the beginning of the line with no preceding whitespace.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("exact-skip-prefix");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x58);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "exact-skip-prefix");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "PSKIP must match at the beginning of the line with no preceding whitespace.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("width");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x77);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "width");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v5, "WIDTH");
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("goal");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x67);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "goal");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v5, "GOAL");
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("quick");
    v5 = clap_builder::builder::arg::Arg::short(&v0, 0x71);
    v0 = clap_builder::builder::arg::Arg::long(&v5, "quick");
    v5 = clap_builder::builder::arg::Arg::help(&v0, "Break lines more quickly at the expense of a potentially more ragged appearance.");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("tab-width");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 0x54);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "tab-width");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v5, "TABWIDTH");
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("files");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v5, "FILES");
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    memcpy(&v0, &v5, 584);
    v1 = *((&v5.field_0 as &char + 584) as &i32) | 64;
    v2 = *((&v5.field_0 as &char + 588) as &i32);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
