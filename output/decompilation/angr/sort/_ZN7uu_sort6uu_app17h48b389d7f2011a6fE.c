long long uu_sort::uu_app::h48b389d7f2011a6f(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xac8]
    char v1;  // [bp-0xac0]
    char v2;  // [bp-0xab8]
    unsigned long v3;  // [sp-0xab0]
    unsigned long long v4;  // [sp-0xaa8]
    unsigned long long v5;  // [sp-0xaa0]
    unsigned long long v6;  // [sp-0xa98]
    unsigned long long v7;  // [sp-0xa90]
    unsigned long long v8;  // [sp-0xa88]
    unsigned long long v9;  // [sp-0xa80]
    unsigned long long v10;  // [sp-0xa78]
    char v11;  // [bp-0xa70], Other Possible Types: unsigned long
    unsigned long long v12;  // [sp-0xa68]
    unsigned long long v13;  // [sp-0xa60]
    unsigned long long v14;  // [sp-0xa58]
    unsigned long long v15;  // [sp-0xa50]
    unsigned long long v16;  // [sp-0xa48]
    unsigned int v17;  // [sp-0x828]
    unsigned int v18;  // [sp-0x824]
    char v19;  // [bp-0x820], Other Possible Types: unsigned long
    unsigned long long v20;  // [sp-0x818]
    unsigned long long v21;  // [sp-0x810]
    unsigned long long v22;  // [sp-0x808]
    unsigned long long v23;  // [sp-0x800]
    unsigned long long v24;  // [sp-0x7f8]
    unsigned long long v25;  // [sp-0x7f0]
    unsigned long long v26;  // [sp-0x7e8]
    unsigned long long v27;  // [sp-0x7e0]
    unsigned long long v28;  // [sp-0x7d8]
    unsigned long long v29;  // [sp-0x7d0]
    unsigned long long v30;  // [sp-0x7c8]
    char v31;  // [bp-0x564]
    char v32;  // [bp-0x55c]
    char v33;  // [bp-0x558], Other Possible Types: unsigned long
    unsigned long long v34;  // [sp-0x550]
    unsigned long long v35;  // [sp-0x548]
    char v36;  // [bp-0x310]
    char v37;  // [bp-0x30c]
    unsigned long long v38;  // [sp-0x29c]
    unsigned int v39;  // [sp-0x294]
    int v40;  // [bp-0x288], Other Possible Types: char
    int v41;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v42;  // [sp-0x270]
    int v43;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v44;  // [sp-0x260]
    int v45;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v46;  // [sp-0x250]
    int v47;  // [sp-0x248]
    int v48;  // [sp-0x238]
    unsigned long long v50;  // rdx

    clap_builder::builder::command::Command::new::hd1db7c2463193fc5(&v19, uucore::util_name::h60d842bf27b05e82(), v50);
    clap_builder::builder::command::Command::version::h09678657269ecd73(&v33, &v19, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h8c84fbd2c531229a(&v19, &v33, "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.", 98);
    clap_builder::builder::command::Command::after_help::h404ae101f851e81b(&v33, &v19, "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key.", 663);
    uucore::format_usage::h76fcb2d15fbabc58(&v11, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h6de7701807b0af4f(&v19, &v33, &v11);
    memcpy(&v33, &v19, 700);
    v38 = 5630083651076232 | *((long long *)&v31);
    v39 = *((int *)&v32);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "help", 4);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v19, "help", 4);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v19, &v11, "Print help information.", 23);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v19, 5);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "version", 7);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v33, "version", 7);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v33, &v11, "Print version information.", 26);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v33, 8);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "sort", 4);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v19, "sort", 4);
    v19 = "general-numeric";
    v20 = 15;
    v21 = "human-numeric";
    v22 = 13;
    v23 = "month";
    v24 = 5;
    v25 = "numeric";
    v26 = 7;
    v27 = "version";
    v28 = 7;
    v29 = "random";
    v30 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h3f400171af95931d(&v40, &v19);
    clap_builder::builder::arg::Arg::value_parser::hee521409f72fdc71(&v19, &v11, &v40);
    *((uint128_t *)&v48) = g_5ffc48;
    *((uint128_t *)&v47) = g_5ffc38;
    *((uint128_t *)&v45) = g_5ffc28;
    *((uint128_t *)&v43) = g_5ffc18;
    *((uint128_t *)&v41) = g_5ffc08;
    *((uint128_t *)&v40) = g_5ffbf8;
    clap_builder::builder::arg::Arg::conflicts_with_all::hecac1878624bc9b9(&v11, &v19, &v40);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "human-numeric-sort", 18, 104, "compare according to human readable sizes, eg 1M > 100k", 55);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "month-sort", 10, 77, "compare according to month name abbreviation", 44);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "numeric-sort", 12, 110, "compare according to string numerical value", 43);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "general-numeric-sort", 20, 103, "compare according to string general numerical value", 51);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "version-sort", 12, 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2", 48);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(&v11, "random-sort", 11, 82, "shuffle in random order", 23);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "dictionary-order", 16);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 100);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "dictionary-order", 16);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "consider only blanks and alphanumeric characters", 48);
    v3 = "numeric-sort";
    v4 = 12;
    v5 = "general-numeric-sort";
    v6 = 20;
    v7 = "human-numeric-sort";
    v8 = 18;
    v9 = "month-sort";
    v10 = 10;
    v45 = v9;
    v46 = v10;
    v43 = v7;
    v44 = v8;
    v41 = v5;
    v42 = v6;
    *((int128_t *)&v40) = *((int128_t *)&v3);
    clap_builder::builder::arg::Arg::conflicts_with_all::hf685bc3e3a40c93d(&v33, &v11, &v40);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v33, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "merge", 5);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 109);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "merge", 5);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "merge already sorted files; do not sort", 39);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "check", 5);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 99);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "check", 5);
    memcpy(&v11, &v33, 584);
    v17 = 128 | *((int *)&v36);
    v18 = *((int *)&v37);
    clap_builder::builder::arg::Arg::num_args::he2517ce56841ccd1(&v33, &v11);
    v11 = "silent";
    v12 = 6;
    v13 = "quiet";
    v14 = 5;
    v15 = "diagnose-first";
    v16 = 14;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h63cf271f696422e6(&v40, &v11);
    clap_builder::builder::arg::Arg::value_parser::hee521409f72fdc71(&v11, &v33, &v40);
    clap_builder::builder::arg::Arg::conflicts_with::h3b5bf0600745f61d(&v33, &v11, "output", 6);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "check for sorted input; do not sort", 35);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "check-silent", 12);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 67);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "check-silent", 12);
    clap_builder::builder::arg::Arg::conflicts_with::h3b5bf0600745f61d(&v11, &v19, "output", 6);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v19, &v11, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.", 88);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v19, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "ignore-case", 11);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 102);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "ignore-case", 11);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "fold lower case to upper case characters", 40);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "ignore-nonprinting", 18);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 105);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "ignore-nonprinting", 18);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "ignore nonprinting characters", 29);
    clap_builder::builder::arg::Arg::conflicts_with_all::hf685bc3e3a40c93d(&v19, &v11, &v3);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v19, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "ignore-leading-blanks", 21);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 98);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "ignore-leading-blanks", 21);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "ignore leading blanks when finding sort keys in each line", 57);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "output", 6);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 111);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "output", 6);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "write output to FILENAME instead of stdout", 42);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v19, &v11, "FILENAME\n       ", 8);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&v11, &v19, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "reverse", 7);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 114);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "reverse", 7);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "reverse the output", 18);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "stable", 6);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 115);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "stable", 6);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "stabilize sort by disabling last-resort comparison", 50);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "unique", 6);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 117);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "unique", 6);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "output only the first of an equal run", 37);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "key", 3);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 107);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "key", 3);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "sort by a key", 13);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v19, &v11, 1);
    clap_builder::builder::arg::Arg::num_args::h4ab686050c83fbf8(&v11, &v19);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "field-separator", 15);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 116);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "field-separator", 15);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "custom separator for -k", 23);
    v0 = 2;
    v35 = *((long long *)&v2);
    v33 = v0;
    v34 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&v40, &v11, &v33);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 122);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v40, &v11, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "parallelDeadlock", 8);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v33, "parallelDeadlock", 8);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v33, &v11, "change the number of threads running concurrently to NUM_THREADS", 64);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v11, &v33, "NUM_THREADS", 11);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "buffer-size", 11);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v19, 83);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v19, &v11, "buffer-size", 11);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v19, "sets the maximum SIZE of each segment in number of sorted items", 63);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v40, &v11, "SIZE", 4);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "temporary-directory", 19);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v11, &v33, 84);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v33, &v11, "temporary-directory", 19);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v11, &v33, "use DIR for temporaries, not $TMPDIR or /tmp", 44);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v33, &v11, "DIR", 3);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&v11, &v33, 4);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "compress-program", 16);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v19, "compress-program", 16);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v19, &v11, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout", 115);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v11, &v19, "PROG", 4);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&v40, &v11, 6);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "batch-size", 10);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v33, "batch-size", 10);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v33, &v11, "Merge at most N_MERGE inputs at once.", 37);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v11, &v33, "N_MERGE", 7);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "files0-from", 11);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v19, "files0-from", 11);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v19, &v11, "read input from the files specified by NUL-terminated NUL_FILES", 63);
    clap_builder::builder::arg::Arg::value_name::h6e964bb8aa83d621(&v11, &v19, "NUL_FILES", 9);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v19, &v11, 1);
    v41 = *((long long *)&v2);
    *((int128_t *)&v40) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&v11, &v19, &v40);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&v40, &v11, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v19, &v33, &v40);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v33, "debug", 5);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v11, &v33, "debug", 5);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v33, &v11, "underline the parts of the line that are actually used for sorting", 66);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v33, 2);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(&v33, &v19, &v11);
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v19, "files", 5);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v11, &v19, 1);
    clap_builder::builder::arg::Arg::value_parser::h912096ca1f6ccb15(&v19, &v11, &v0);
    clap_builder::builder::arg::Arg::value_hint::hd24e5e837954c77c(&v11, &v19, 3);
    clap_builder::builder::command::Command::arg::h4abf436970c9cbc0(a0, &v33, &v11);
    return a0;
}
