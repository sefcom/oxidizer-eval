fn uu_fmt::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: u8;  // [bp-0x780]
    let v6: u32;  // [bp-0x538]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Reformat paragraphs from input files (or stdin) to stdout.");
    uucore::format_usage(&v5, "{} [-WIDTH] [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v9;
    v4 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "crown-margin");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 99);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "crown-margin");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "tagged-paragraph");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 116);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "tagged-paragraph");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "preserve-headers");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "preserve-headers");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "split-only");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "split-only");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "Split lines only, do not reflow.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "uniform-spacing");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 117);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "uniform-spacing");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "prefix");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "prefix");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v5, "PREFIX");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "skip-prefix");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "skip-prefix");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP");
    clap_builder::builder::arg::Arg::value_name(&v11, &v5, "PSKIP");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "exact-prefix");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 120);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "exact-prefix");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "PREFIX must match at the beginning of the line with no preceding whitespace.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "exact-skip-prefix");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 88);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "exact-skip-prefix");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "PSKIP must match at the beginning of the line with no preceding whitespace.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "width");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 119);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "width");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v5, "WIDTH");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "goal");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 103);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "goal");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v5, "GOAL");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "quick");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 113);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "quick");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "Break lines more quickly at the expense of a potentially more ragged appearance.");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "tab-width");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 84);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "tab-width");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v5, "TABWIDTH");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "files");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::value_name(&v0, &v5, "FILES");
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0, 3);
    memcpy(&v0, &v5, 584);
    v1 = v6 | 64;
    v2 = v7;
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
