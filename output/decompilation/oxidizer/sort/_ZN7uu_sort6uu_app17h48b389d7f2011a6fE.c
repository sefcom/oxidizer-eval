fn uu_sort::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xac8]
    let v2: u64;  // [bp-0xac0]
    let v3: u64;  // [bp-0xab8]
    let v4: struct16;  // [bp-0xab0]
    let v5: u64;  // [bp-0xaa8]
    let v6: u64;  // [bp-0xaa0]
    let v7: u64;  // [bp-0xa98]
    let v8: u64;  // [bp-0xa90]
    let v9: u64;  // [bp-0xa88]
    let v10: u64;  // [bp-0xa80]
    let v11: u64;  // [bp-0xa78]
    let v12: core::fmt::Arguments;  // [bp-0xa70], Other Possible Types: u8
    let v13: u32;  // [bp-0x828]
    let v14: u32;  // [bp-0x824]
    let v15: struct437;  // [bp-0x820], Other Possible Types: struct96
    let v16: u64;  // [bp-0x564]
    let v17: u32;  // [bp-0x55c]
    let v18: u64;  // [bp-0x558]
    let v19: u64;  // [bp-0x550]
    let v20: u64;  // [bp-0x548]
    let v21: u32;  // [bp-0x310]
    let v22: i8;  // [bp-0x30c]
    let v23: u64;  // [bp-0x29c]
    let v24: u32;  // [bp-0x294]
    let v25: struct96;  // [bp-0x288], Other Possible Types: struct24, u128
    let v26: u64;  // [bp-0x278]
    let v27: u64;  // [bp-0x270]
    let v28: u64;  // [bp-0x268]
    let v29: u64;  // [bp-0x260]
    let v30: u64;  // [bp-0x258]
    let v31: u64;  // [bp-0x250]
    let v34: u64;  // rdx

    v15 = clap_builder::builder::command::Command::new(uucore::util_name(), v34);
    clap_builder::builder::command::Command::version(&v18, &v15, "0.0.28");
    clap_builder::builder::command::Command::about(&v15, &v18, "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.");
    clap_builder::builder::command::Command::after_help(&v18, &v15, "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key.");
    uucore::format_usage(&v12, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v15, &v18, &v12);
    memcpy(&v18, &v15, 700);
    v23 = 5630083651076232 | v16;
    v24 = v17;
    clap_builder::builder::arg::Arg::new(&v15, "help");
    clap_builder::builder::arg::Arg::long(&v12, &v15, "help");
    clap_builder::builder::arg::Arg::help(&v15, &v12, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v12, &v15, 5);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "version");
    clap_builder::builder::arg::Arg::long(&v12, &v18, "version");
    clap_builder::builder::arg::Arg::help(&v18, &v12, "Print version information.");
    clap_builder::builder::arg::Arg::action(&v12, &v18, 8);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "sort");
    clap_builder::builder::arg::Arg::long(&v12, &v15, "sort");
    v15 = struct96 {
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
    v25 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v15);
    clap_builder::builder::arg::Arg::value_parser(&v15, &v12, &v25);
    v25 = struct96 {
        field_0: g_5ffbf8.field_0
        field_16: g_5ffc08.field_0
        field_32: g_5ffc18.field_0
        field_48: g_5ffc28.field_0
        field_64: g_5ffc38.field_0
        field_80: g_5ffc48.field_0
    };
    clap_builder::builder::arg::Arg::conflicts_with_all(&v12, &v15, &v25);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    uu_sort::make_sort_mode_arg(&v12, "human-numeric-sort", 104, "compare according to human readable sizes, eg 1M > 100k");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    uu_sort::make_sort_mode_arg(&v12, "month-sort", 77, "compare according to month name abbreviation");
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    uu_sort::make_sort_mode_arg(&v12, "numeric-sort", 110, "compare according to string numerical value");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    uu_sort::make_sort_mode_arg(&v12, "general-numeric-sort", 103, "compare according to string general numerical value");
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    uu_sort::make_sort_mode_arg(&v12, "version-sort", 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    uu_sort::make_sort_mode_arg(&v12, "random-sort", 82, "shuffle in random order");
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "dictionary-order");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 100);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "dictionary-order");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "consider only blanks and alphanumeric characters");
    v4 = &g_42f025.field_0;
    v5 = 12;
    v6 = &g_42eff5;
    v7 = 20;
    v8 = &g_42f009;
    v9 = 18;
    v10 = &g_42f01b;
    v11 = 10;
    v30 = &g_42f01b;
    v31 = 10;
    v28 = &g_42f009;
    v29 = 18;
    v26 = &g_42eff5;
    v27 = 20;
    v25 = *(&v4.field_0 as &i128);
    clap_builder::builder::arg::Arg::conflicts_with_all(&v18, &v12, &v25);
    clap_builder::builder::arg::Arg::action(&v12, &v18, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "merge");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 109);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "merge");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "merge already sorted files; do not sort");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "check");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 99);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "check");
    memcpy(&v12, &v18, 584);
    v13 = 128 | v21;
    v14 = *(&v22 as &i32);
    clap_builder::builder::arg::Arg::num_args(&v18, &v12);
    v12 = core::fmt::Arguments {
        pieces: [&g_42f544, &g_42f554, &g_42f564, &g_42f574, &g_42f584, &g_42f594]
        args: [&g_42f54a, &g_42f55a, &g_42f56a, &g_42f57a, &g_42f58a]
        fmt: &g_42f54f
    };
    v25 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v12);
    clap_builder::builder::arg::Arg::value_parser(&v12, &v18, &v25);
    clap_builder::builder::arg::Arg::conflicts_with(&v18, &v12, "output");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "check for sorted input; do not sort");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "check-silent");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 67);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "check-silent");
    clap_builder::builder::arg::Arg::conflicts_with(&v12, &v15, "output");
    clap_builder::builder::arg::Arg::help(&v15, &v12, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.");
    clap_builder::builder::arg::Arg::action(&v12, &v15, 2);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "ignore-case");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 102);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "ignore-case");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "fold lower case to upper case characters");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v25);
    clap_builder::builder::arg::Arg::new(&v15, "ignore-nonprinting");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 105);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "ignore-nonprinting");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "ignore nonprinting characters");
    clap_builder::builder::arg::Arg::conflicts_with_all(&v15, &v12, &v4);
    clap_builder::builder::arg::Arg::action(&v12, &v15, 2);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "ignore-leading-blanks");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 98);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "ignore-leading-blanks");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "ignore leading blanks when finding sort keys in each line");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v25);
    clap_builder::builder::arg::Arg::new(&v15, "output");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 111);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "output");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "write output to FILENAME instead of stdout");
    clap_builder::builder::arg::Arg::value_name(&v15, &v12, "FILENAME");
    clap_builder::builder::arg::Arg::value_hint(&v12, &v15, 3);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "reverse");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 114);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "reverse");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "reverse the output");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v25);
    clap_builder::builder::arg::Arg::new(&v15, "stable");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 115);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "stable");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "stabilize sort by disabling last-resort comparison");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "unique");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 117);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "unique");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "output only the first of an equal run");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v25);
    clap_builder::builder::arg::Arg::new(&v15, "key");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 107);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "key");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "sort by a key");
    clap_builder::builder::arg::Arg::action(&v15, &v12, 1);
    clap_builder::builder::arg::Arg::num_args(&v12, &v15);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v12);
    clap_builder::builder::arg::Arg::new(&v18, "field-separator");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 116);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "field-separator");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "custom separator for -k");
    v0 = 2;
    v20 = v3;
    v18 = v0;
    v19 = v2;
    clap_builder::builder::arg::Arg::value_parser(&v25, &v12, &v18);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v25);
    clap_builder::builder::arg::Arg::new(&v15, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 122);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v25, &v12, 2);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "parallel");
    clap_builder::builder::arg::Arg::long(&v12, &v18, "parallel");
    clap_builder::builder::arg::Arg::help(&v18, &v12, "change the number of threads running concurrently to NUM_THREADS");
    clap_builder::builder::arg::Arg::value_name(&v12, &v18, "NUM_THREADS");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "buffer-size");
    clap_builder::builder::arg::Arg::short(&v12, &v15, 83);
    clap_builder::builder::arg::Arg::long(&v15, &v12, "buffer-size");
    clap_builder::builder::arg::Arg::help(&v12, &v15, "sets the maximum SIZE of each segment in number of sorted items");
    clap_builder::builder::arg::Arg::value_name(&v25, &v12, "SIZE");
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "temporary-directory");
    clap_builder::builder::arg::Arg::short(&v12, &v18, 84);
    clap_builder::builder::arg::Arg::long(&v18, &v12, "temporary-directory");
    clap_builder::builder::arg::Arg::help(&v12, &v18, "use DIR for temporaries, not $TMPDIR or /tmp");
    clap_builder::builder::arg::Arg::value_name(&v18, &v12, "DIR");
    clap_builder::builder::arg::Arg::value_hint(&v12, &v18, 4);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "compress-program");
    clap_builder::builder::arg::Arg::long(&v12, &v15, "compress-program");
    clap_builder::builder::arg::Arg::help(&v15, &v12, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout");
    clap_builder::builder::arg::Arg::value_name(&v12, &v15, "PROG");
    clap_builder::builder::arg::Arg::value_hint(&v25, &v12, 6);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "batch-size");
    clap_builder::builder::arg::Arg::long(&v12, &v18, "batch-size");
    clap_builder::builder::arg::Arg::help(&v18, &v12, "Merge at most N_MERGE inputs at once.");
    clap_builder::builder::arg::Arg::value_name(&v12, &v18, "N_MERGE");
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "files0-from");
    clap_builder::builder::arg::Arg::long(&v12, &v15, "files0-from");
    clap_builder::builder::arg::Arg::help(&v15, &v12, "read input from the files specified by NUL-terminated NUL_FILES");
    clap_builder::builder::arg::Arg::value_name(&v12, &v15, "NUL_FILES");
    clap_builder::builder::arg::Arg::action(&v15, &v12, 1);
    v25 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v12, &v15, &v25);
    clap_builder::builder::arg::Arg::value_hint(&v25, &v12, 3);
    clap_builder::builder::command::Command::arg(&v15, &v18, &v25);
    clap_builder::builder::arg::Arg::new(&v18, "debug");
    clap_builder::builder::arg::Arg::long(&v12, &v18, "debug");
    clap_builder::builder::arg::Arg::help(&v18, &v12, "underline the parts of the line that are actually used for sorting");
    clap_builder::builder::arg::Arg::action(&v12, &v18, 2);
    clap_builder::builder::command::Command::arg(&v18, &v15, &v12);
    clap_builder::builder::arg::Arg::new(&v15, "files");
    clap_builder::builder::arg::Arg::action(&v12, &v15, 1);
    clap_builder::builder::arg::Arg::value_parser(&v15, &v12, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v12, &v15, 3);
    clap_builder::builder::command::Command::arg(a0, &v18, &v12);
    return a0;
}
