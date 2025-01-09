fn uu_du::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xae8], Other Possible Types: struct592, struct8, struct24, struct216
    let v1: i64;  // [sp-0xae0]
    let v2: i64;  // [sp-0xad8]
    let v3: i64;  // [sp-0xad0]
    let v4: i128;  // [sp-0xac8]
    let v5: i64;  // [sp-0xab8]
    let v6: i64;  // [sp-0xab0]
    let v7: i8;  // [bp-0xaa8]
    let v8: i32;  // [sp-0x8a0]
    let v9: i32;  // [sp-0x89c]
    let v10: i8;  // [bp-0x898]
    let v11: i4736;  // [sp-0x888], Other Possible Types: struct592, struct712
    let v12: i64;  // [sp-0x5cc]
    let v13: i32;  // [sp-0x5c4]
    let v14: i5696;  // [sp-0x5c0], Other Possible Types: struct592, struct712, struct437
    let v15: struct72;  // [sp-0x2f8]
    let v16: struct72;  // [sp-0x2b0]
    let v17: i4736;  // [sp-0x268], Other Possible Types: struct592, struct72, struct24
    let v19: i64;  // rdx

    v14 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v11 = clap_builder::builder::command::Command::version(&v14, "0.0.28");
    v14 = clap_builder::builder::command::Command::about(&v11, "Estimate file space usage");
    v11 = clap_builder::builder::command::Command::after_help(&v14, &g_41cf98, 558);
    v0 = uucore::format_usage(&g_41d1c6, 55);
    v14 = clap_builder::builder::command::Command::override_usage(&v11, &v0);
    memcpy(&v11, &v14, 700);
    v12 = 1126449662918784 | *((&v14 as &char + 700) as &i64);
    v13 = *((&v14 as &char + 708) as &i32);
    v14 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "help");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x5);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x61);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "write counts for all files, not just directories");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("apparent-size");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "apparent-size");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the like");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("block-size");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x42);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "block-size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v17 = clap_builder::builder::arg::Arg::help(&v0, "scale sizes by SIZE before printing them. E.g., '-BM' prints sizes in units of 1,048,576 bytes. See SIZE format below.");
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("b");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x62);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "equivalent to '--apparent-size --block-size=1'");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("c");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "total");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 0x63);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "produce a grand total");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("d");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x64);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "max-depth");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "N");
    v17 = clap_builder::builder::arg::Arg::help(&v0, "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarize");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("h");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "human-readable");
    v11 = clap_builder::builder::arg::Arg::short(&v0, 0x68);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("inodes");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "inodes");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "list inode usage information instead of block usage like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("k");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x6b);
    v11 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("l");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x6c);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "count-links");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "count sizes many times if hard linked");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x4c);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "follow all symbolic links");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("dereference-args");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x44);
    v14 = clap_builder::builder::arg::Arg::visible_short_alias(&v0, 0x48);
    v0 = clap_builder::builder::arg::Arg::long(&v14, "dereference-args");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "follow only symlinks that are listed on the command line");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x50);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "don't follow any symbolic links (this is the default)");
    v11 = clap_builder::builder::arg::Arg::overrides_with(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("m");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x6d);
    v14 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1M");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("0");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x30);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "null");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "end each output line with 0 byte rather than newline");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("S");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x53);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "separate-dirs");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "do not include size of subdirectories");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("s");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x73);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "summarize");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "display only a total for each argument");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("si");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "si");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "like -h, but use powers of 1000 not 1024");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x78);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "skip directories on different file systems");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("threshold");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 0x74);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "threshold");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "SIZE");
    v14 = clap_builder::builder::arg::Arg::num_args(&v0);
    memcpy(&v0, &v14, 584);
    v8 = *((&v14 as &char + 584) as &i32) | 32;
    v9 = *((&v14 as &char + 588) as &i32);
    v17 = clap_builder::builder::arg::Arg::help(&v0, "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negative");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x76);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v11, "verbose mode (option not present in GNU/Coreutils)");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("exclude");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "exclude");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "PATTERN");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "exclude files that match PATTERN");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v17);
    v11 = clap_builder::builder::arg::Arg::new("exclude-from");
    v0 = clap_builder::builder::arg::Arg::short(&v11, 0x58);
    v11 = clap_builder::builder::arg::Arg::long(&v0, "exclude-from");
    v0 = clap_builder::builder::arg::Arg::value_name(&v11, "FILE");
    v11 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v0 = clap_builder::builder::arg::Arg::help(&v11, "exclude files that match any pattern in FILE");
    v17 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("files0-from");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "files0-from");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v14, 0x3);
    v14 = clap_builder::builder::arg::Arg::help(&v0, "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard input");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 0x1);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("time");
    v0 = clap_builder::builder::arg::Arg::long(&v11, "time");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "WORD");
    memcpy(&v0, &v11, 584);
    v8 = 128 | *((&v11 as &char + 584) as &i32);
    v9 = *((&v11 as &char + 588) as &i32);
    v11 = clap_builder::builder::arg::Arg::num_args(&v0);
    v5 = &g_41cf6f;
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v10;
    v0 = struct8 {
        field_16: 0
    };
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "access");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v17, "use");
    v5 = &g_41cf74;
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v10;
    v0 = struct8 {
        field_16: 0
    };
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v16 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "status");
    v5 = &g_40fa08;
    v6 = 8;
    v3 = 0x8000000000000000;
    v4 = v10;
    v0 = struct8 {
        field_16: 0
    };
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "birth");
    v0 = struct216 {
        field_0: v15
        field_16: v20
        field_32: v21
        field_48: v22
        field_64: *((&v15 as &char + 64) as &i64)
        field_72: v16
        field_88: *((&v16 as &char + 16) as &i128)
        field_104: *((&v16 as &char + 32) as &i128)
        field_120: *((&v16 as &char + 48) as &i128)
        field_136: *((&v16 as &char + 64) as &i64)
        field_144: v17
        field_160: *((&v17 as &char + 16) as &i128)
        field_176: *((&v17 as &char + 32) as &i128)
        field_192: *((&v17 as &char + 48) as &i128)
        field_208: *((&v17 as &char + 64) as &i64)
    };
    v17 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v11, &v17);
    v17 = clap_builder::builder::arg::Arg::help(&v0, "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creation");
    v11 = clap_builder::builder::command::Command::arg(&v14, &v17);
    v14 = clap_builder::builder::arg::Arg::new("time-style");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "time-style");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v11, 584);
    v8 = *((&v11 as &char + 584) as &i32) | 4;
    v9 = *((&v11 as &char + 588) as &i32);
    v11 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x2);
    v0 = clap_builder::builder::arg::Arg::action(&v11, 0x1);
    clap_builder::builder::command::Command::arg(a0, &v14, &v0);
    return a0;
}
