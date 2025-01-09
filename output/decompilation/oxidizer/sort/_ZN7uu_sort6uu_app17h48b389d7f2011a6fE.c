fn uu_sort::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xac8]
    let v1: i8;  // [bp-0xac0]
    let v2: i8;  // [bp-0xab8]
    let v3: i64;  // [sp-0xab0]
    let v4: i64;  // [sp-0xaa8]
    let v5: i64;  // [sp-0xaa0]
    let v6: i64;  // [sp-0xa98]
    let v7: i64;  // [sp-0xa90]
    let v8: i64;  // [sp-0xa88]
    let v9: i64;  // [sp-0xa80]
    let v10: i64;  // [sp-0xa78]
    let v11: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct48, struct24
    let v12: i32;  // [sp-0x828]
    let v13: i32;  // [sp-0x824]
    let v14: i4736;  // [sp-0x820], Other Possible Types: struct592, struct712, struct96, struct437
    let v15: i5696;  // [sp-0x558], Other Possible Types: struct592, struct712
    let v16: i64;  // [sp-0x550]
    let v17: i64;  // [sp-0x548]
    let v18: i64;  // [sp-0x29c]
    let v19: i32;  // [sp-0x294]
    let v20: i4736;  // [sp-0x288], Other Possible Types: struct592, struct24, struct96
    let v21: i64;  // [sp-0x278]
    let v22: i64;  // [sp-0x270]
    let v23: i64;  // [sp-0x268]
    let v24: i64;  // [sp-0x260]
    let v25: i64;  // [sp-0x258]
    let v26: i64;  // [sp-0x250]
    let v28: i64;  // rdx

    v14 = clap_builder::builder::command::Command::new(uucore::util_name(), v28);
    v15 = clap_builder::builder::command::Command::version(&v14, "0.0.28");
    v14 = clap_builder::builder::command::Command::about(&v15, "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.");
    v15 = clap_builder::builder::command::Command::after_help(&v14, "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key.");
    v11 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v14 = clap_builder::builder::command::Command::override_usage(&v15, &v11);
    memcpy(&v15, &v14, 700);
    v18 = 5630083651076232 | *((&v14 as &char + 700) as &i64);
    v19 = *((&v14 as &char + 708) as &i32);
    v14 = clap_builder::builder::arg::Arg::new("help");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "help");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "Print help information.");
    v11 = clap_builder::builder::arg::Arg::action(&v14, 0x5);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("version");
    v11 = clap_builder::builder::arg::Arg::long(&v15, "version");
    v15 = clap_builder::builder::arg::Arg::help(&v11, "Print version information.");
    v11 = clap_builder::builder::arg::Arg::action(&v15, 0x8);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("sort");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "sort");
    v14 = struct96 {
        field_0: &g_42f3ad
        field_8: 15
        field_16: &g_42f3bc
        field_24: 13
        field_32: &g_42f3c9
        field_40: 5
        field_48: &g_42f3ce
        field_56: 7
        field_64: &g_42f38c
        field_72: 7
        field_80: &g_42f3d5
        field_88: 6
    };
    v20 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v14);
    v14 = clap_builder::builder::arg::Arg::value_parser(&v11, &v20);
    *(&v20.field_0 as &struct96) = struct96 {
        field_0: g_5ffbf8
        field_16: g_5ffc08
        field_32: g_5ffc18
        field_48: g_5ffc28
        field_64: g_5ffc38
        field_80: g_5ffc48
    };
    v11 = clap_builder::builder::arg::Arg::conflicts_with_all(&v14, &v20);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v11 = uu_sort::make_sort_mode_arg("human-numeric-sort", 104, "compare according to human readable sizes, eg 1M > 100k");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v11 = uu_sort::make_sort_mode_arg("month-sort", 77, "compare according to month name abbreviation");
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v11 = uu_sort::make_sort_mode_arg("numeric-sort", 110, "compare according to string numerical value");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v11 = uu_sort::make_sort_mode_arg("general-numeric-sort", 103, "compare according to string general numerical value");
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v11 = uu_sort::make_sort_mode_arg("version-sort", 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v11 = uu_sort::make_sort_mode_arg("random-sort", 82, "shuffle in random order");
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("dictionary-order");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x64);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "dictionary-order");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "consider only blanks and alphanumeric characters");
    v3 = &g_42f025;
    v4 = 12;
    v5 = &g_42eff5;
    v6 = 20;
    v7 = &g_42f009;
    v8 = 18;
    v9 = &g_42f01b;
    v10 = 10;
    v25 = v9;
    v26 = v10;
    v23 = v7;
    v24 = v8;
    v21 = v5;
    v22 = v6;
    v20 = v3;
    v15 = clap_builder::builder::arg::Arg::conflicts_with_all(&v11, &v20);
    v11 = clap_builder::builder::arg::Arg::action(&v15, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("merge");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x6d);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "merge");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "merge already sorted files; do not sort");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("check");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x63);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "check");
    memcpy(&v11, &v15, 584);
    v12 = 128 | *((&v15 as &char + 584) as &i32);
    v13 = *((&v15 as &char + 588) as &i32);
    v15 = clap_builder::builder::arg::Arg::num_args(&v11);
    v11 = struct48 {
        field_0: &g_42f544
        field_8: 6
        field_16: &g_42f54a
        field_24: 5
        field_32: &g_42f54f
        field_40: 14
    };
    v20 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v11);
    v11 = clap_builder::builder::arg::Arg::value_parser(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::conflicts_with(&v11, "output");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "check for sorted input; do not sort");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("check-silent");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x43);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "check-silent");
    v11 = clap_builder::builder::arg::Arg::conflicts_with(&v14, "output");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.");
    v11 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("ignore-case");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x66);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "ignore-case");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "fold lower case to upper case characters");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v20);
    v14 = clap_builder::builder::arg::Arg::new("ignore-nonprinting");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x69);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "ignore-nonprinting");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "ignore nonprinting characters");
    v14 = clap_builder::builder::arg::Arg::conflicts_with_all(&v11, &v3);
    v11 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("ignore-leading-blanks");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x62);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "ignore-leading-blanks");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "ignore leading blanks when finding sort keys in each line");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v20);
    v14 = clap_builder::builder::arg::Arg::new("output");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x6f);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "output");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "write output to FILENAME instead of stdout");
    v14 = clap_builder::builder::arg::Arg::value_name(&v11, "FILENAME");
    v11 = clap_builder::builder::arg::Arg::value_hint(&v14, 0x3);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("reverse");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x72);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "reverse");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "reverse the output");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v20);
    v14 = clap_builder::builder::arg::Arg::new("stable");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x73);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "stable");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "stabilize sort by disabling last-resort comparison");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("unique");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x75);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "unique");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "output only the first of an equal run");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v20);
    v14 = clap_builder::builder::arg::Arg::new("key");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x6b);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "key");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "sort by a key");
    v14 = clap_builder::builder::arg::Arg::action(&v11, 0x1);
    v11 = clap_builder::builder::arg::Arg::num_args(&v14);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v11);
    v15 = clap_builder::builder::arg::Arg::new("field-separator");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x74);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "field-separator");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "custom separator for -k");
    v0 = 2;
    v17 = v2;
    v15 = v0;
    v16 = v1;
    v20 = clap_builder::builder::arg::Arg::value_parser(&v11, &v15);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v20);
    v14 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x7a);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "zero-terminated");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "line delimiter is NUL, not newline");
    v20 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("parallel");
    v11 = clap_builder::builder::arg::Arg::long(&v15, "parallel");
    v15 = clap_builder::builder::arg::Arg::help(&v11, "change the number of threads running concurrently to NUM_THREADS");
    v11 = clap_builder::builder::arg::Arg::value_name(&v15, "NUM_THREADS");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("buffer-size");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x53);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "buffer-size");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "sets the maximum SIZE of each segment in number of sorted items");
    v20 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("temporary-directory");
    v11 = clap_builder::builder::arg::Arg::short(&v15, 0x54);
    v15 = clap_builder::builder::arg::Arg::long(&v11, "temporary-directory");
    v11 = clap_builder::builder::arg::Arg::help(&v15, "use DIR for temporaries, not $TMPDIR or /tmp");
    v15 = clap_builder::builder::arg::Arg::value_name(&v11, "DIR");
    v11 = clap_builder::builder::arg::Arg::value_hint(&v15, 0x4);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("compress-program");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "compress-program");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout");
    v11 = clap_builder::builder::arg::Arg::value_name(&v14, "PROG");
    v20 = clap_builder::builder::arg::Arg::value_hint(&v11, 0x6);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("batch-size");
    v11 = clap_builder::builder::arg::Arg::long(&v15, "batch-size");
    v15 = clap_builder::builder::arg::Arg::help(&v11, "Merge at most N_MERGE inputs at once.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v15, "N_MERGE");
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("files0-from");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "files0-from");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "read input from the files specified by NUL-terminated NUL_FILES");
    v11 = clap_builder::builder::arg::Arg::value_name(&v14, "NUL_FILES");
    v14 = clap_builder::builder::arg::Arg::action(&v11, 0x1);
    v21 = v2;
    v20 = v0;
    v11 = clap_builder::builder::arg::Arg::value_parser(&v14, &v20);
    v20 = clap_builder::builder::arg::Arg::value_hint(&v11, 0x3);
    v14 = clap_builder::builder::command::Command::arg(&v15, &v20);
    v15 = clap_builder::builder::arg::Arg::new("debug");
    v11 = clap_builder::builder::arg::Arg::long(&v15, "debug");
    v15 = clap_builder::builder::arg::Arg::help(&v11, "underline the parts of the line that are actually used for sorting");
    v11 = clap_builder::builder::arg::Arg::action(&v15, 0x2);
    v15 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("files");
    v11 = clap_builder::builder::arg::Arg::action(&v14, 0x1);
    v14 = clap_builder::builder::arg::Arg::value_parser(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::value_hint(&v14, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v15, &v11);
    return a0;
}
