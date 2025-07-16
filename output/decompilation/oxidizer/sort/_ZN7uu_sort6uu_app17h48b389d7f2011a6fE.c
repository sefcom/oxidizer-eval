fn uu_sort::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xac8]
    let v1: u64;  // [bp-0xac0]
    let v2: u64;  // [bp-0xab8]
    let v3: u64;  // [bp-0xab0]
    let v4: u64;  // [bp-0xaa8]
    let v5: u64;  // [bp-0xaa0]
    let v6: u64;  // [bp-0xa98]
    let v7: u64;  // [bp-0xa90]
    let v8: u64;  // [bp-0xa88]
    let v9: u64;  // [bp-0xa80]
    let v10: u64;  // [bp-0xa78]
    let v11: u384;  // [bp-0xa70]
    let v12: u32;  // [bp-0x828]
    let v13: u32;  // [bp-0x824]
    let v14: struct437;  // [bp-0x820], Other Possible Types: u768
    let v15: u64;  // [bp-0x564]
    let v16: u32;  // [bp-0x55c]
    let v17: u8;  // [bp-0x558]
    let v18: u64;  // [bp-0x550]
    let v19: u64;  // [bp-0x548]
    let v20: u32;  // [bp-0x310]
    let v21: i8;  // [bp-0x30c]
    let v22: u64;  // [bp-0x29c]
    let v23: u32;  // [bp-0x294]
    let v24: struct24;  // [bp-0x288], Other Possible Types: u768
    let v25: u64;  // [bp-0x278]
    let v26: u64;  // [bp-0x270]
    let v27: u64;  // [bp-0x268]
    let v28: u64;  // [bp-0x260]
    let v29: u64;  // [bp-0x258]
    let v30: u64;  // [bp-0x250]
    let v33: u64;  // rdx

    v14 = clap_builder::builder::command::Command::new(uucore::util_name(), v33);
    clap_builder::builder::command::Command::version(&v17, &v14, "0.0.28");
    clap_builder::builder::command::Command::about(&v14, &v17, "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.");
    clap_builder::builder::command::Command::after_help(&v17, &v14, "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key.");
    uucore::format_usage(&v11, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v14, &v17, &v11);
    memcpy(&v17, &v14, 700);
    v22 = 5630083651076232 | v15;
    v23 = v16;
    clap_builder::builder::arg::Arg::new(&v14, "help");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "help");
    clap_builder::builder::arg::Arg::help(&v14, &v11, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v11, &v14, 5);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "version");
    clap_builder::builder::arg::Arg::long(&v11, &v17, "version");
    clap_builder::builder::arg::Arg::help(&v17, &v11, "Print version information.");
    clap_builder::builder::arg::Arg::action(&v11, &v17, 8);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "sort");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "sort");
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
    v24 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v14);
    clap_builder::builder::arg::Arg::value_parser(&v14, &v11, &v24);
    v24 = struct96 {
        field_0: g_5ffbf8.field_0
        field_16: g_5ffc08.field_0
        field_32: g_5ffc18.field_0
        field_48: g_5ffc28.field_0
        field_64: g_5ffc38.field_0
        field_80: g_5ffc48.field_0
    };
    clap_builder::builder::arg::Arg::conflicts_with_all(&v11, &v14, &v24);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    uu_sort::make_sort_mode_arg(&v11, "human-numeric-sort", 104, "compare according to human readable sizes, eg 1M > 100k");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    uu_sort::make_sort_mode_arg(&v11, "month-sort", 77, "compare according to month name abbreviation");
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    uu_sort::make_sort_mode_arg(&v11, "numeric-sort", 110, "compare according to string numerical value");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    uu_sort::make_sort_mode_arg(&v11, "general-numeric-sort", 103, "compare according to string general numerical value");
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    uu_sort::make_sort_mode_arg(&v11, "version-sort", 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    uu_sort::make_sort_mode_arg(&v11, "random-sort", 82, "shuffle in random order");
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "dictionary-order");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 100);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "dictionary-order");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "consider only blanks and alphanumeric characters");
    v3 = &g_42f025;
    v4 = 12;
    v5 = &g_42eff5;
    v6 = 20;
    v7 = &g_42f009;
    v8 = 18;
    v9 = &g_42f01b;
    v10 = 10;
    v29 = &g_42f01b;
    v30 = 10;
    v27 = &g_42f009;
    v28 = 18;
    v25 = &g_42eff5;
    v26 = 20;
    memcpy(&v24, &v3, 16);
    clap_builder::builder::arg::Arg::conflicts_with_all(&v17, &v11, &v24);
    clap_builder::builder::arg::Arg::action(&v11, &v17, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "merge");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 109);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "merge");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "merge already sorted files; do not sort");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "check");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 99);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "check");
    memcpy(&v11, &v17, 584);
    v12 = 128 | v20;
    v13 = *(&v21 as &i32);
    clap_builder::builder::arg::Arg::num_args(&v17, &v11);
    v11 = core::fmt::Arguments {
        pieces: [&g_42f544, &g_42f554, &g_42f564, &g_42f574, &g_42f584, &g_42f594]
        args: [&g_42f54a, &g_42f55a, &g_42f56a, &g_42f57a, &g_42f58a]
        fmt: &g_42f54f
    };
    v24 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v11);
    clap_builder::builder::arg::Arg::value_parser(&v11, &v17, &v24);
    clap_builder::builder::arg::Arg::conflicts_with(&v17, &v11, "output");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "check for sorted input; do not sort");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "check-silent");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 67);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "check-silent");
    clap_builder::builder::arg::Arg::conflicts_with(&v11, &v14, "output");
    clap_builder::builder::arg::Arg::help(&v14, &v11, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.");
    clap_builder::builder::arg::Arg::action(&v11, &v14, 2);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "ignore-case");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 102);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "ignore-case");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "fold lower case to upper case characters");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "ignore-nonprinting");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 105);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "ignore-nonprinting");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "ignore nonprinting characters");
    clap_builder::builder::arg::Arg::conflicts_with_all(&v14, &v11, &v3);
    clap_builder::builder::arg::Arg::action(&v11, &v14, 2);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "ignore-leading-blanks");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 98);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "ignore-leading-blanks");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "ignore leading blanks when finding sort keys in each line");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "output");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 111);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "output");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "write output to FILENAME instead of stdout");
    clap_builder::builder::arg::Arg::value_name(&v14, &v11, "FILENAME");
    clap_builder::builder::arg::Arg::value_hint(&v11, &v14, 3);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "reverse");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 114);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "reverse");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "reverse the output");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "stable");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 115);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "stable");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "stabilize sort by disabling last-resort comparison");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "unique");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 117);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "unique");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "output only the first of an equal run");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "key");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 107);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "key");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "sort by a key");
    clap_builder::builder::arg::Arg::action(&v14, &v11, 1);
    clap_builder::builder::arg::Arg::num_args(&v11, &v14);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v11);
    clap_builder::builder::arg::Arg::new(&v17, "field-separator");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 116);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "field-separator");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "custom separator for -k");
    v0 = 2;
    v19 = v2;
    v17 = v0;
    v18 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v24, &v11, &v17);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 122);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "parallel");
    clap_builder::builder::arg::Arg::long(&v11, &v17, "parallel");
    clap_builder::builder::arg::Arg::help(&v17, &v11, "change the number of threads running concurrently to NUM_THREADS");
    clap_builder::builder::arg::Arg::value_name(&v11, &v17, "NUM_THREADS");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "buffer-size");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 83);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "buffer-size");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "sets the maximum SIZE of each segment in number of sorted items");
    clap_builder::builder::arg::Arg::value_name(&v24, &v11, "SIZE");
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "temporary-directory");
    clap_builder::builder::arg::Arg::short(&v11, &v17, 84);
    clap_builder::builder::arg::Arg::long(&v17, &v11, "temporary-directory");
    clap_builder::builder::arg::Arg::help(&v11, &v17, "use DIR for temporaries, not $TMPDIR or /tmp");
    clap_builder::builder::arg::Arg::value_name(&v17, &v11, "DIR");
    clap_builder::builder::arg::Arg::value_hint(&v11, &v17, 4);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "compress-program");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "compress-program");
    clap_builder::builder::arg::Arg::help(&v14, &v11, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout");
    clap_builder::builder::arg::Arg::value_name(&v11, &v14, "PROG");
    clap_builder::builder::arg::Arg::value_hint(&v24, &v11, 6);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "batch-size");
    clap_builder::builder::arg::Arg::long(&v11, &v17, "batch-size");
    clap_builder::builder::arg::Arg::help(&v17, &v11, "Merge at most N_MERGE inputs at once.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v17, "N_MERGE");
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "files0-from");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "files0-from");
    clap_builder::builder::arg::Arg::help(&v14, &v11, "read input from the files specified by NUL-terminated NUL_FILES");
    clap_builder::builder::arg::Arg::value_name(&v11, &v14, "NUL_FILES");
    clap_builder::builder::arg::Arg::action(&v14, &v11, 1);
    v25 = v2;
    memcpy(&v24, &v0, 16);
    clap_builder::builder::arg::Arg::value_parser(&v11, &v14, &v24);
    clap_builder::builder::arg::Arg::value_hint(&v24, &v11, 3);
    clap_builder::builder::command::Command::arg(&v14, &v17, &v24);
    clap_builder::builder::arg::Arg::new(&v17, "debug");
    clap_builder::builder::arg::Arg::long(&v11, &v17, "debug");
    clap_builder::builder::arg::Arg::help(&v17, &v11, "underline the parts of the line that are actually used for sorting");
    clap_builder::builder::arg::Arg::action(&v11, &v17, 2);
    clap_builder::builder::command::Command::arg(&v17, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "files");
    clap_builder::builder::arg::Arg::action(&v11, &v14, 1);
    clap_builder::builder::arg::Arg::value_parser(&v14, &v11, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v11, &v14, 3);
    clap_builder::builder::command::Command::arg(a0, &v17, &v11);
    return a0;
}
