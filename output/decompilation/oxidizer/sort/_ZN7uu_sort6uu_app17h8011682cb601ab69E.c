fn uu_sort::uu_app(a0: i64) -> u64 {
    let v0: u64;  // [bp-0xae0]
    let v1: struct24;  // [bp-0xad8], Other Possible Types: struct48, struct640
    let v2: u32;  // [bp-0x860]
    let v3: u32;  // [bp-0x85c]
    let v4: u64;  // [bp-0x858]
    let v5: struct437;  // [bp-0x840], Other Possible Types: struct96, struct712, struct640
    let v6: u64;  // [bp-0x584]
    let v7: u32;  // [bp-0x57c]
    let v8: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v9: struct712;  // [bp-0x578]
    let v10: struct640;  // [bp-0x578]
    let v11: struct640;  // [bp-0x578]
    let v12: u32;  // [bp-0x300]
    let v13: u64;  // [bp-0x2bc]
    let v14: u32;  // [bp-0x2b4]
    let v15: struct32;  // [bp-0x2b0], Other Possible Types: struct64, struct640, u8
    let v18: u64;  // rdx

    v5 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v8 = clap_builder::builder::command::Command::version(&v5);
    v5 = clap_builder::builder::command::Command::about(&v8);
    v8 = clap_builder::builder::command::Command::after_help(&v5);
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v5 = clap_builder::builder::command::Command::override_usage(&v8, &v1);
    memcpy(&v8, &v5, 700);
    v13 = 11259583186600072 | v6;
    v14 = v7;
    v5 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 5);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("version");
    v1 = clap_builder::builder::arg::Arg::long(&v8, "version");
    v8 = clap_builder::builder::arg::Arg::help(&v1, "Print version information.");
    v1 = clap_builder::builder::arg::Arg::action(&v8, 8);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("sort");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "sort");
    v5 = struct96 {
        field_0: "general-numeric"
        field_16: "human-numeric"
        field_32: "month"
        field_48: "numeric"
        field_64: "version"
        field_80: "random"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v15, &v5);
    v5 = clap_builder::builder::arg::Arg::value_parser(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::conflicts_with_all(&v5, "general-numeric-sort");
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uu_sort::make_sort_mode_arg("human-numeric-sort", 104, "compare according to human readable sizes, eg 1M > 100k");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v1 = uu_sort::make_sort_mode_arg("month-sort", 77, "compare according to month name abbreviation");
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uu_sort::make_sort_mode_arg("numeric-sort", 110, "compare according to string numerical value");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v1 = uu_sort::make_sort_mode_arg("general-numeric-sort", 103, "compare according to string general numerical value");
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uu_sort::make_sort_mode_arg("version-sort", 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v1 = uu_sort::make_sort_mode_arg("random-sort", 82, "shuffle in random order");
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("dictionary-order");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 100);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "dictionary-order");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "consider only blanks and alphanumeric characters");
    v15 = struct64 {
        field_0: "numeric-sort"
        field_16: "general-numeric-sort"
        field_32: "human-numeric-sort"
        field_48: "month-sort"
    };
    v8 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v9 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("merge");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 109);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "merge");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "merge already sorted files; do not sort");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v9, &v15);
    v10 = clap_builder::builder::arg::Arg::new("check");
    v1 = clap_builder::builder::arg::Arg::short(&v10, 99);
    v11 = clap_builder::builder::arg::Arg::long(&v1, "check");
    memcpy(&v1, &v11, 632);
    v2 = 128 | v12;
    v3 = v12;
    v8 = clap_builder::builder::arg::Arg::num_args(&v1);
    v1 = struct48 {
        field_0: "silent"
        field_16: "quiet"
        field_32: "diagnose-first"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v15, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v8, &v15);
    v15 = struct32 {
        field_0: "output"
        field_16: "check-silent"
    };
    v8 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::help(&v8, "check for sorted input; do not sort");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("check-silent");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 67);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "check-silent");
    v15 = struct32 {
        field_0: "output"
        field_16: "check"
    };
    v1 = clap_builder::builder::arg::Arg::conflicts_with_all(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::help(&v1, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("ignore-case");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 102);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "ignore-case");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "fold lower case to upper case characters");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("ignore-nonprinting");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "ignore-nonprinting");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "ignore nonprinting characters");
    v15 = struct64 {
        field_0: "numeric-sort"
        field_16: "general-numeric-sort"
        field_32: "human-numeric-sort"
        field_48: "month-sort"
    };
    v5 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("ignore-leading-blanks");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 98);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "ignore-leading-blanks");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "ignore leading blanks when finding sort keys in each line");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("output");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 111);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "output");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "write output to FILENAME instead of stdout");
    v5 = clap_builder::builder::arg::Arg::value_name(&v1, "FILENAME");
    v1 = clap_builder::builder::arg::Arg::value_hint(&v5, 3);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("reverse");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 114);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "reverse");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "reverse the output");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("stable");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 115);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "stable");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "stabilize sort by disabling last-resort comparison");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::new("unique");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 117);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "unique");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "output only the first of an equal run");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("key");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 107);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "key");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "sort by a key");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::num_args(&v5);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("field-separator");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 116);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "field-separator");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "custom separator for -k");
    v4 = 2;
    v15 = clap_builder::builder::arg::Arg::value_parser(&v1, &v4);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 122);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "line delimiter is NUL, not newline");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::new("parallel");
    v1 = clap_builder::builder::arg::Arg::long(&v8, "parallel");
    v8 = clap_builder::builder::arg::Arg::help(&v1, "change the number of threads running concurrently to NUM_THREADS");
    v1 = clap_builder::builder::arg::Arg::value_name(&v8, "NUM_THREADS");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("buffer-size");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 83);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "buffer-size");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "sets the maximum SIZE of each segment in number of sorted items");
    v15 = clap_builder::builder::arg::Arg::value_name(&v1, "SIZE");
    v5 = clap_builder::builder::command::Command::arg(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::new("temporary-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 84);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "temporary-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "use DIR for temporaries, not $TMPDIR or /tmp");
    v8 = clap_builder::builder::arg::Arg::value_name(&v1, "DIR");
    v1 = clap_builder::builder::arg::Arg::value_hint(&v8, 4);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("compress-program");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "compress-program");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "PROG");
    v15 = clap_builder::builder::arg::Arg::value_hint(&v1, 6);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::new("batch-size");
    v1 = clap_builder::builder::arg::Arg::long(&v8, "batch-size");
    v8 = clap_builder::builder::arg::Arg::help(&v1, "Merge at most N_MERGE inputs at once.");
    v1 = clap_builder::builder::arg::Arg::value_name(&v8, "N_MERGE");
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("files0-from");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "files0-from");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "read input from the files specified by NUL-terminated NUL_FILES");
    v1 = clap_builder::builder::arg::Arg::value_name(&v5, "NUL_FILES");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v4);
    v15 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v5 = clap_builder::builder::command::Command::arg(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v8, "debug");
    v8 = clap_builder::builder::arg::Arg::help(&v1, "underline the parts of the line that are actually used for sorting");
    v1 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v5 = clap_builder::builder::arg::Arg::value_parser(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v5, 3);
    clap_builder::builder::command::Command::arg(v0, &v8, &v1);
    return a0;
}
