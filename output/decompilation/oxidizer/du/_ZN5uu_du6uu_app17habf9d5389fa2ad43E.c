fn uu_du::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct216;  // [bp-0xb58], Other Possible Types: struct24, void*, struct640
    let v1: u64;  // [bp-0xb50]
    let v2: void*;  // [bp-0xb48]
    let v3: u64;  // [bp-0xb40]
    let v4: iNone;  // [bp-0xb38]
    let v5: &str;  // [bp-0xb28]
    let v6: u8;  // [bp-0xb18]
    let v7: u32;  // [bp-0x8e0]
    let v8: u32;  // [bp-0x8dc]
    let v9: iNone;  // [bp-0x8d0]
    let v10: struct437;  // [bp-0x8c0], Other Possible Types: struct712, struct640
    let v11: struct712;  // [bp-0x8c0]
    let v12: struct640;  // [bp-0x8c0]
    let v13: struct640;  // [bp-0x8c0]
    let v14: struct640;  // [bp-0x8c0]
    let v15: u32;  // [bp-0x648]
    let v16: u64;  // [bp-0x604]
    let v17: u32;  // [bp-0x5fc]
    let v18: struct712;  // [bp-0x5f8], Other Possible Types: struct640
    let v19: struct712;  // [bp-0x5f8]
    let v20: struct640;  // [bp-0x5f8]
    let v21: struct640;  // [bp-0x5f8]
    let v22: u32;  // [bp-0x380]
    let v23: u64;  // [bp-0x33c]
    let v24: u32;  // [bp-0x334]
    let v25: struct72;  // [bp-0x330]
    let v26: struct216;  // [bp-0x330]
    let v27: struct72;  // [bp-0x2e8]
    let v28: struct72;  // [bp-0x2a0], Other Possible Types: struct640
    let v31: u64;  // rdx

    v10 = clap_builder::builder::command::Command::new(uucore::util_name(), v31);
    v18 = clap_builder::builder::command::Command::version(&v10);
    v10 = clap_builder::builder::command::Command::about(&v18);
    v18 = clap_builder::builder::command::Command::after_help(&v10);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...\n{} [OPTION]... --files0-from=F");
    v10 = clap_builder::builder::command::Command::override_usage(&v18, &v0);
    memcpy(&v18, &v10, 700);
    v23 = 2252349570023552 | v16;
    v24 = v17;
    v10 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "help");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 5);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("all");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 97);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "all");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "write counts for all files, not just directories");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("apparent-size");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "apparent-size");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the like");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("block-size");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 66);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "block-size");
    v0 = clap_builder::builder::arg::Arg::value_name(&v18, "SIZE");
    v28 = clap_builder::builder::arg::Arg::help(&v0, "scale sizes by SIZE before printing them. E.g., '-BM' prints sizes in units of 1,048,576 bytes. See SIZE format below.");
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("b");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 98);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "equivalent to '--apparent-size --block-size=1'");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("c");
    v0 = clap_builder::builder::arg::Arg::long(&v18, "total");
    v18 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::help(&v18, "produce a grand total");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("d");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 100);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "max-depth");
    v0 = clap_builder::builder::arg::Arg::value_name(&v10, "N");
    v28 = clap_builder::builder::arg::Arg::help(&v0, "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarize");
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("h");
    v0 = clap_builder::builder::arg::Arg::long(&v18, "human-readable");
    v18 = clap_builder::builder::arg::Arg::short(&v0, 104);
    v0 = clap_builder::builder::arg::Arg::help(&v18, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("inodes");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "inodes");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "list inode usage information instead of block usage like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("k");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 107);
    v18 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1K");
    v0 = clap_builder::builder::arg::Arg::action(&v18, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("l");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 108);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "count-links");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "count sizes many times if hard linked");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 76);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "follow all symbolic links");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("dereference-args");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 68);
    v10 = clap_builder::builder::arg::Arg::visible_short_alias(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v10, "dereference-args");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "follow only symlinks that are listed on the command line");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("no-dereference");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 80);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "no-dereference");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "don't follow any symbolic links (this is the default)");
    v18 = clap_builder::builder::arg::Arg::overrides_with(&v0);
    v0 = clap_builder::builder::arg::Arg::action(&v18, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("m");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 109);
    v10 = clap_builder::builder::arg::Arg::help(&v0, "like --block-size=1M");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("0");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 48);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "null");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "end each output line with 0 byte rather than newline");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("S");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 83);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "separate-dirs");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "do not include size of subdirectories");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("s");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 115);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "summarize");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "display only a total for each argument");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("si");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "si");
    v10 = clap_builder::builder::arg::Arg::help(&v0, "like -h, but use powers of 1000 not 1024");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    v11 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("one-file-system");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 120);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "one-file-system");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "skip directories on different file systems");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v11, &v28);
    v12 = clap_builder::builder::arg::Arg::new("threshold");
    v0 = clap_builder::builder::arg::Arg::short(&v12, 116);
    v13 = clap_builder::builder::arg::Arg::long(&v0, "threshold");
    v0 = clap_builder::builder::arg::Arg::value_name(&v13, "SIZE");
    v14 = clap_builder::builder::arg::Arg::num_args(&v0);
    memcpy(&v0, &v14, 632);
    v7 = v15 | 32;
    v8 = v15;
    v28 = clap_builder::builder::arg::Arg::help(&v0, "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negative");
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 118);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v18, "verbose mode (option not present in GNU/Coreutils)");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("exclude");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "exclude");
    v10 = clap_builder::builder::arg::Arg::value_name(&v0, "PATTERN");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "exclude files that match PATTERN");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v10 = clap_builder::builder::command::Command::arg(&v18, &v28);
    v18 = clap_builder::builder::arg::Arg::new("exclude-from");
    v0 = clap_builder::builder::arg::Arg::short(&v18, 88);
    v18 = clap_builder::builder::arg::Arg::long(&v0, "exclude-from");
    v0 = clap_builder::builder::arg::Arg::value_name(&v18, "FILE");
    v18 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v0 = clap_builder::builder::arg::Arg::help(&v18, "exclude files that match any pattern in FILE");
    v28 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v19 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("files0-from");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "files0-from");
    v10 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v10, 3);
    v10 = clap_builder::builder::arg::Arg::help(&v0, "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard input");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 1);
    v10 = clap_builder::builder::command::Command::arg(&v19, &v0);
    v20 = clap_builder::builder::arg::Arg::new("time");
    v0 = clap_builder::builder::arg::Arg::long(&v20, "time");
    v21 = clap_builder::builder::arg::Arg::value_name(&v0, "WORD");
    memcpy(&v0, &v21, 632);
    v7 = 128 | v22;
    v8 = v22;
    v18 = clap_builder::builder::arg::Arg::num_args(&v0);
    v5 = "atime";
    v3 = 0x8000000000000000;
    v4 = v9;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v6 = 0;
    v28 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "access");
    v25 = clap_builder::builder::possible_value::PossibleValue::alias(&v28, "use");
    v5 = "ctime";
    v3 = 0x8000000000000000;
    v4 = v9;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v6 = 0;
    v27 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "status");
    v5 = "creation";
    v3 = 0x8000000000000000;
    v4 = v9;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v6 = 0;
    v28 = clap_builder::builder::possible_value::PossibleValue::alias(&v0, "birth");
    v0 = v26;
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v28, &v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v18, &v28);
    v28 = clap_builder::builder::arg::Arg::help(&v0, "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creation");
    v18 = clap_builder::builder::command::Command::arg(&v10, &v28);
    v10 = clap_builder::builder::arg::Arg::new("time-style");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "time-style");
    v10 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'");
    v10 = clap_builder::builder::command::Command::arg(&v18, &v0);
    v18 = clap_builder::builder::arg::Arg::new("FILE");
    memcpy(&v0, &v18, 632);
    v7 = v22 | 4;
    v8 = *((&(&v21)[79].field_0 as &char + 4) as &i32);
    v18 = clap_builder::builder::arg::Arg::value_hint(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::action(&v18, 1);
    clap_builder::builder::command::Command::arg(a0, &v10, &v0);
    return;
}
