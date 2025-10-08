fn uu_fmt::uu_app(a0: &struct712) -> u64 {
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: u32;  // [bp-0x5b8]
    let v5: u32;  // [bp-0x5b4]
    let v6: u64;  // [bp-0x574]
    let v7: u32;  // [bp-0x56c]
    let v8: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v9: u64;  // [bp-0x2ac]
    let v10: u32;  // [bp-0x2a4]
    let v11: struct640;  // [bp-0x2a0]
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v8 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v8);
    v0 = uucore::format_usage("{} [-WIDTH] [OPTION]... [FILE]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("crown-margin");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 99);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "crown-margin");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("tagged-paragraph");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "tagged-paragraph");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("preserve-headers");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 109);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "preserve-headers");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("split-only");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "split-only");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Split lines only, do not reflow.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("uniform-spacing");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 117);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "uniform-spacing");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("prefix");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 112);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "prefix");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "PREFIX");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("skip-prefix");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 80);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "skip-prefix");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "PSKIP");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("exact-prefix");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 120);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "exact-prefix");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "PREFIX must match at the beginning of the line with no preceding whitespace.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("exact-skip-prefix");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 88);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "exact-skip-prefix");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "PSKIP must match at the beginning of the line with no preceding whitespace.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "WIDTH");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("goal");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 103);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "goal");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "GOAL");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("quick");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 113);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "quick");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Break lines more quickly at the expense of a potentially more ragged appearance.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("tab-width");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 84);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "tab-width");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "TABWIDTH");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILES");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 64;
    v5 = v2;
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
