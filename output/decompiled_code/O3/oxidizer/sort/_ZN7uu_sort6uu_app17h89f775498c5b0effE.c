fn uu_sort::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xac8]
    let v1: i64;  // [sp-0xab0]
    let v2: i64;  // [sp-0xaa8]
    let v3: i64;  // [sp-0xaa0]
    let v4: i64;  // [sp-0xa98]
    let v5: i64;  // [sp-0xa90]
    let v6: i64;  // [sp-0xa88]
    let v7: i64;  // [sp-0xa80]
    let v8: i64;  // [sp-0xa78]
    let v9: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct24, struct48
    let v10: i4736;  // [sp-0x820], Other Possible Types: struct592, struct712, struct437, struct96
    let v11: i4736;  // [sp-0x558], Other Possible Types: struct592, struct712
    let v12: i128;  // [sp-0x288], Other Possible Types: struct592, struct24, struct96
    let v13: i64;  // [sp-0x270]
    let v14: i64;  // [sp-0x268]
    let v15: i64;  // [sp-0x260]
    let v16: i64;  // [sp-0x258]
    let v17: i64;  // [sp-0x250]
    let v19: i64;  // rdx

    v10 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v11 = clap_builder::builder::command::Command::version(&v10, "0.0.28");
    v10 = clap_builder::builder::command::Command::about(&v11, "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.");
    v11 = clap_builder::builder::command::Command::after_help(&v10, &g_42ef75, 663);
    v9 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v10 = clap_builder::builder::command::Command::override_usage(&v11, &v9);
    memcpy(&v11, &v10, 700);
    v11.700 = 5630083651076232 | (stack_base)[1380] as i64;
    v11.708 = (stack_base)[1372] as i32;
    v10 = clap_builder::builder::arg::Arg::new("help");
    v9 = clap_builder::builder::arg::Arg::long(&v10, "help");
    v10 = clap_builder::builder::arg::Arg::help(&v9, "Print help information.");
    v9 = clap_builder::builder::arg::Arg::action(&v10, 5);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("version");
    v9 = clap_builder::builder::arg::Arg::long(&v11, "version");
    v11 = clap_builder::builder::arg::Arg::help(&v9, "Print version information.");
    v9 = clap_builder::builder::arg::Arg::action(&v11, 8);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("sort");
    v9 = clap_builder::builder::arg::Arg::long(&v10, "sort");
    v10 = struct96 {
        field_0: &g_42f25c
        field_8: 15
        field_16: &g_42f26b
        field_24: 13
        field_32: &g_42f278
        field_40: 5
        field_48: &g_42f27d
        field_56: 7
        field_64: &g_42f23b
        field_72: 7
        field_80: &g_42f284
        field_88: 6
    };
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v10);
    v10 = clap_builder::builder::arg::Arg::value_parser(&v9, &v12);
    *(&v12.field_0 as &struct96) = struct96 {
        field_0: g_5ff0d0
        field_16: g_5ff0e0
        field_32: g_5ff0f0
        field_48: g_5ff100
        field_64: g_5ff110
        field_80: g_5ff120
    };
    v9 = clap_builder::builder::arg::Arg::conflicts_with_all(&v10, &v12);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v9 = uu_sort::make_sort_mode_arg("human-numeric-sort", 104, "compare according to human readable sizes, eg 1M > 100k");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v9 = uu_sort::make_sort_mode_arg("month-sort", 77, "compare according to month name abbreviation");
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v9 = uu_sort::make_sort_mode_arg("numeric-sort", 110, "compare according to string numerical value");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v9 = uu_sort::make_sort_mode_arg("general-numeric-sort", 103, "compare according to string general numerical value");
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v9 = uu_sort::make_sort_mode_arg("version-sort", 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v9 = uu_sort::make_sort_mode_arg("random-sort", 82, "shuffle in random order");
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("dictionary-order");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 100);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "dictionary-order");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "consider only blanks and alphanumeric characters");
    v1 = &g_42eed4;
    v2 = 12;
    v3 = &g_42eea4;
    v4 = 20;
    v5 = &g_42eeb8;
    v6 = 18;
    v7 = &g_42eeca;
    v8 = 10;
    v16 = v7;
    v17 = v8;
    v14 = v5;
    v15 = v6;
    v12.field_16 = vvar_1141{stack -2720};
    v13 = v4;
    v12 = v1;
    v11 = clap_builder::builder::arg::Arg::conflicts_with_all(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("merge");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 109);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "merge");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "merge already sorted files; do not sort");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("check");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 99);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "check");
    memcpy(&v9, &v11, 584);
    v9.584 = 128 | (stack_base)[784] as i32;
    v9.588 = (stack_base)[780] as i32;
    v11 = clap_builder::builder::arg::Arg::num_args(&v9);
    v9 = struct48 {
        field_0: &g_42f3f3
        field_8: 6
        field_16: &g_42f3f9
        field_24: 5
        field_32: &g_42f3fe
        field_40: 14
    };
    v12 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v9);
    v9 = clap_builder::builder::arg::Arg::value_parser(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::conflicts_with(&v9, "output");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "check for sorted input; do not sort");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("check-silent");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 67);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "check-silent");
    v9 = clap_builder::builder::arg::Arg::conflicts_with(&v10, "output");
    v10 = clap_builder::builder::arg::Arg::help(&v9, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.");
    v9 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("ignore-case");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 102);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "ignore-case");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "fold lower case to upper case characters");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v12);
    v10 = clap_builder::builder::arg::Arg::new("ignore-nonprinting");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 105);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "ignore-nonprinting");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "ignore nonprinting characters");
    v10 = clap_builder::builder::arg::Arg::conflicts_with_all(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("ignore-leading-blanks");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 98);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "ignore-leading-blanks");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "ignore leading blanks when finding sort keys in each line");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v12);
    v10 = clap_builder::builder::arg::Arg::new("output");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 111);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "output");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "write output to FILENAME instead of stdout");
    v10 = clap_builder::builder::arg::Arg::value_name(&v9, "FILENAME");
    v9 = clap_builder::builder::arg::Arg::value_hint(&v10, 3);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("reverse");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 114);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "reverse");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "reverse the output");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v12);
    v10 = clap_builder::builder::arg::Arg::new("stable");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 115);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "stable");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "stabilize sort by disabling last-resort comparison");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("unique");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 117);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "unique");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "output only the first of an equal run");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v12);
    v10 = clap_builder::builder::arg::Arg::new("key");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 107);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "key");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "sort by a key");
    v10 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::num_args(&v10, v19);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v9);
    v11 = clap_builder::builder::arg::Arg::new("field-separator");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 116);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "field-separator");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "custom separator for -k");
    v0 = 2;
    v11.16 = (stack_base)[2744] as i64;
    v11 = v0;
    v11.8 = (stack_base)[2752] as i64;
    v12 = clap_builder::builder::arg::Arg::value_parser(&v9, &v11);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v12);
    v10 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 122);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "zero-terminated");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "line delimiter is NUL, not newline");
    v12 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("parallel");
    v9 = clap_builder::builder::arg::Arg::long(&v11, "parallel");
    v11 = clap_builder::builder::arg::Arg::help(&v9, "change the number of threads running concurrently to NUM_THREADS");
    v9 = clap_builder::builder::arg::Arg::value_name(&v11, "NUM_THREADS");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("buffer-size");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 83);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "buffer-size");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "sets the maximum SIZE of each segment in number of sorted items");
    v12 = clap_builder::builder::arg::Arg::value_name(&v9, "SIZE");
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("temporary-directory");
    v9 = clap_builder::builder::arg::Arg::short(&v11, 84);
    v11 = clap_builder::builder::arg::Arg::long(&v9, "temporary-directory");
    v9 = clap_builder::builder::arg::Arg::help(&v11, "use DIR for temporaries, not $TMPDIR or /tmp");
    v11 = clap_builder::builder::arg::Arg::value_name(&v9, "DIR");
    v9 = clap_builder::builder::arg::Arg::value_hint(&v11, 4);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("compress-program");
    v9 = clap_builder::builder::arg::Arg::long(&v10, "compress-program");
    v10 = clap_builder::builder::arg::Arg::help(&v9, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout");
    v9 = clap_builder::builder::arg::Arg::value_name(&v10, "PROG");
    v12 = clap_builder::builder::arg::Arg::value_hint(&v9, 6);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("batch-size");
    v9 = clap_builder::builder::arg::Arg::long(&v11, "batch-size");
    v11 = clap_builder::builder::arg::Arg::help(&v9, "Merge at most N_MERGE inputs at once.");
    v9 = clap_builder::builder::arg::Arg::value_name(&v11, "N_MERGE");
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("files0-from");
    v9 = clap_builder::builder::arg::Arg::long(&v10, "files0-from");
    v10 = clap_builder::builder::arg::Arg::help(&v9, "read input from the files specified by NUL-terminated NUL_FILES");
    v9 = clap_builder::builder::arg::Arg::value_name(&v10, "NUL_FILES");
    v10 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v12.16 = (stack_base)[2744] as i64;
    v12 = v0;
    v9 = clap_builder::builder::arg::Arg::value_parser(&v10, &v12);
    v12 = clap_builder::builder::arg::Arg::value_hint(&v9, 3);
    v10 = clap_builder::builder::command::Command::arg(&v11, &v12);
    v11 = clap_builder::builder::arg::Arg::new("debug");
    v9 = clap_builder::builder::arg::Arg::long(&v11, "debug");
    v11 = clap_builder::builder::arg::Arg::help(&v9, "underline the parts of the line that are actually used for sorting");
    v9 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v11 = clap_builder::builder::command::Command::arg(&v10, &v9);
    v10 = clap_builder::builder::arg::Arg::new("files");
    v9 = clap_builder::builder::arg::Arg::action(&v10, 1);
    v10 = clap_builder::builder::arg::Arg::value_parser(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v10, 3);
    clap_builder::builder::command::Command::arg(a0, &v11, &v9);
    return a0;
}
