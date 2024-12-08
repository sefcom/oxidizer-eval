fn uu_du::uu_app(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i4736;  // [sp-0xae8], Other Possible Types: struct592, struct8, struct24, struct216
    let v1: i8;  // [bp-0xaa8]
    let v2: i4736;  // [sp-0x888], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x5c0], Other Possible Types: struct592, struct712, struct437
    let v4: struct72;  // [sp-0x2f8]
    let v5: struct72;  // [sp-0x2b0]
    let v6: i4736;  // [sp-0x268], Other Possible Types: struct592, struct72, struct24
    let v8: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v2 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v2, "Estimate file space usage");
    v2 = clap_builder::builder::command::Command::after_help(&v3, &g_41ce16, 558);
    v0 = uucore::format_usage(&g_41d044, 55);
    v3 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v3, 700);
    v2.700 = 1126449662918784 | (stack_base)[772] as i64;
    v2.708 = (stack_base)[764] as i32;
    v3 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 5);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 97);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "write counts for all files, not just directories");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("apparent-size");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "apparent-size");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the like");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("block-size");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 66);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "block-size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "SIZE");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "scale sizes by SIZE before printing them. E.g., '-BM' prints sizes in units of 1,048,576 bytes. See SIZE format below.");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("b");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "equivalent to '--apparent-size --block-size=1'");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("c");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "total");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "produce a grand total");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("d");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 100);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "max-depth");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarize");
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("h");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "human-readable");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 104);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("inodes");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "inodes");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "list inode usage information instead of block usage like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("k");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 107);
    v2 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("l");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 108);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "count-links");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "count sizes many times if hard linked");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 76);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "follow all symbolic links");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("dereference-args");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 68);
    v3 = clap_builder::builder::arg::Arg::visible_short_alias(&v0, 72);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "dereference-args");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "follow only symlinks that are listed on the command line");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 80);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "don't follow any symbolic links (this is the default)");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("m");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1M");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("0");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 48);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "null");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "end each output line with 0 byte rather than newline");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("S");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 83);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "separate-dirs");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "do not include size of subdirectories");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("s");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "summarize");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "display only a total for each argument");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("si");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "si");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "like -h, but use powers of 1000 not 1024");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 120);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "skip directories on different file systems");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("threshold");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "threshold");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "SIZE");
    v3 = clap_builder::builder::arg::Arg::num_args(&v0, v8);
    memcpy(&v0, &v3, 584);
    v0.584 = (stack_base)[888] as i32 | 32;
    v0.588 = (stack_base)[884] as i32;
    v6 = clap_builder::builder::arg::Arg::help(&v0, "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negative");
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "verbose mode (option not present in GNU/Coreutils)");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("exclude");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "exclude");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "PATTERN");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "exclude files that match PATTERN");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v6);
    v2 = clap_builder::builder::arg::Arg::new("exclude-from");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 88);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "exclude-from");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "FILE");
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "exclude files that match any pattern in FILE");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("files0-from");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "files0-from");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard input");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("time");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "time");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "WORD");
    memcpy(&v0, &v2, 584);
    v0.584 = 128 | (stack_base)[1600] as i32;
    v0.588 = (stack_base)[1596] as i32;
    v2 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0.48 = 4314842;
    v0.56 = 5;
    v0.24 = 0x8000000000000000;
    v0.32 = (stack_base)[2200] as i128;
    v0 = struct8 {
        field_16: 0
    };
    v0.8 = 8;
    v0.16 = 0;
    v1 = 0;
    v6 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "access");
    v4 = clap_builder::builder::possible_value::PossibleValue::alias(&v6, "use");
    v0.48 = 4314856;
    v0.56 = 5;
    v0.24 = 0x8000000000000000;
    v0.32 = (stack_base)[2200] as i128;
    v0 = struct8 {
        field_16: 0
    };
    v0.8 = 8;
    v0.16 = 0;
    v1 = 0;
    v5 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "status");
    v0.48 = 4257952;
    v0.56 = 8;
    v0.24 = 0x8000000000000000;
    v0.32 = (stack_base)[2200] as i128;
    v0 = struct8 {
        field_16: 0
    };
    v0.8 = 8;
    v0.16 = 0;
    v1 = 0;
    v6 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "birth");
    v0 = struct216 {
        field_0: v4
        field_16: v9
        field_32: v10
        field_48: v11
        field_64: *((&v4 as &char + 64) as &i64)
        field_72: v5
        field_88: *((&v5 as &char + 16) as &i128)
        field_104: *((&v5 as &char + 32) as &i128)
        field_120: *((&v5 as &char + 48) as &i128)
        field_136: *((&v5 as &char + 64) as &i64)
        field_144: v6
        field_160: *((&v6 as &char + 16) as &i128)
        field_176: *((&v6 as &char + 32) as &i128)
        field_192: *((&v6 as &char + 48) as &i128)
        field_208: *((&v6 as &char + 64) as &i64)
    };
    v6 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v6);
    v6 = clap_builder::builder::arg::Arg::help(&v0, "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creation");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("time-style");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "time-style");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'");
    v3 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[1600] as i32 | 4;
    v0.588 = (stack_base)[1596] as i32;
    v2 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::action(&v2, 1);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
