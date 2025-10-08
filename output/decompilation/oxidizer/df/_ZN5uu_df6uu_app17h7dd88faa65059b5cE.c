fn uu_df::uu_app(a0: i64) -> u64 {
    let v0: u64;  // [bp-0xae0]
    let v1: u64;  // [bp-0xad8]
    let v2: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v3: u32;  // [bp-0x848]
    let v4: u32;  // [bp-0x844]
    let v5: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v6: struct712;  // [bp-0x840]
    let v7: struct640;  // [bp-0x840]
    let v8: struct640;  // [bp-0x840]
    let v9: struct640;  // [bp-0x840]
    let v10: u32;  // [bp-0x5c8]
    let v11: u64;  // [bp-0x584]
    let v12: u32;  // [bp-0x57c]
    let v13: struct48;  // [bp-0x578], Other Possible Types: struct96, struct640, struct32
    let v14: struct712;  // [bp-0x2f8], Other Possible Types: struct640
    let v15: u64;  // [bp-0x3c]
    let v16: u32;  // [bp-0x34]
    let v19: u64;  // rdx

    v5 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v14 = clap_builder::builder::command::Command::version(&v5);
    v5 = clap_builder::builder::command::Command::about(&v14);
    v2 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v14 = clap_builder::builder::command::Command::override_usage(&v5, &v2);
    v5 = clap_builder::builder::command::Command::after_help(&v14);
    memcpy(&v14, &v5, 700);
    v15 = 2252349570023552 | v11;
    v16 = v12;
    v5 = clap_builder::builder::arg::Arg::new("help");
    v2 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v2, "Print help information.");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 5);
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("all");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 97);
    v14 = clap_builder::builder::arg::Arg::long(&v2, "all");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v14, "all");
    v14 = clap_builder::builder::arg::Arg::help(&v2, "include dummy file systems");
    v2 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v14 = clap_builder::builder::command::Command::arg(&v5, &v2);
    v5 = clap_builder::builder::arg::Arg::new("blocksize");
    v2 = clap_builder::builder::arg::Arg::short(&v5, 66);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "block-size");
    v2 = clap_builder::builder::arg::Arg::value_name(&v5, "SIZE");
    v13 = struct32 {
        field_0: "kilo"
        field_16: "blocksize"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v13);
    v2 = clap_builder::builder::arg::Arg::help(&v5, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytes");
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("total");
    v2 = clap_builder::builder::arg::Arg::long(&v14, "total");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v2, "total");
    v2 = clap_builder::builder::arg::Arg::help(&v14, "produce a grand total");
    v13 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v14 = clap_builder::builder::command::Command::arg(&v5, &v13);
    v5 = clap_builder::builder::arg::Arg::new("human-readable-binary");
    v2 = clap_builder::builder::arg::Arg::short(&v5, 104);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "human-readable");
    v13 = struct32 {
        field_0: "human-readable-decimal"
        field_16: "human-readable-binary"
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v13);
    v5 = clap_builder::builder::arg::Arg::help(&v2, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("human-readable-decimal");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 72);
    v14 = clap_builder::builder::arg::Arg::long(&v2, "si");
    v13 = struct32 {
        field_0: "human-readable-binary"
        field_16: "human-readable-decimal"
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v13);
    v14 = clap_builder::builder::arg::Arg::help(&v2, "likewise, but use powers of 1000 not 1024");
    v2 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v14 = clap_builder::builder::command::Command::arg(&v5, &v2);
    v5 = clap_builder::builder::arg::Arg::new("inodes");
    v2 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "inodes");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v5, "inodes");
    v5 = clap_builder::builder::arg::Arg::help(&v2, "list inode information instead of block usage");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("kilo");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 107);
    v14 = clap_builder::builder::arg::Arg::help(&v2, "like --block-size=1K");
    v13 = struct32 {
        field_0: "blocksize"
        field_16: "kilo"
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v13);
    v13 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v14 = clap_builder::builder::command::Command::arg(&v5, &v13);
    v5 = clap_builder::builder::arg::Arg::new("local");
    v2 = clap_builder::builder::arg::Arg::short(&v5, 108);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "local");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v5, "local");
    v5 = clap_builder::builder::arg::Arg::help(&v2, "limit listing to local file systems");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v6 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("no-sync");
    v2 = clap_builder::builder::arg::Arg::long(&v14, "no-sync");
    v13 = struct32 {
        field_0: "sync"
        field_16: "no-sync"
    };
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v13);
    v2 = clap_builder::builder::arg::Arg::help(&v14, "do not invoke sync before getting usage info (default)");
    v13 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v14 = clap_builder::builder::command::Command::arg(&v6, &v13);
    v7 = clap_builder::builder::arg::Arg::new("output");
    v2 = clap_builder::builder::arg::Arg::long(&v7, "output");
    v8 = clap_builder::builder::arg::Arg::value_name(&v2, "FIELD_LIST");
    v2 = clap_builder::builder::arg::Arg::action(&v8, 1);
    v9 = clap_builder::builder::arg::Arg::num_args(&v2);
    memcpy(&v2, &v9, 632);
    v3 = 128 | v10;
    v4 = v10;
    v5 = clap_builder::builder::arg::Arg::use_value_delimiter(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_parser(&v5, "source");
    v5 = clap_builder::builder::arg::Arg::default_missing_values_os(&v2, "source");
    v13 = struct96 {
        field_0: "source"
        field_16: "size"
        field_32: "used"
        field_48: "avail"
        field_64: "pcent"
        field_80: "target"
    };
    v2 = clap_builder::builder::arg::Arg::default_values(&v5, &v13);
    v13 = struct48 {
        field_0: "inodes"
        field_16: "portability"
        field_32: "print-type"
    };
    v5 = clap_builder::builder::arg::Arg::conflicts_with_all(&v2, &v13);
    v2 = clap_builder::builder::arg::Arg::help(&v5, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.");
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("portability");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 80);
    v14 = clap_builder::builder::arg::Arg::long(&v2, "portability");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v14, "portability");
    v14 = clap_builder::builder::arg::Arg::help(&v2, "use the POSIX output format");
    v2 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v14 = clap_builder::builder::command::Command::arg(&v5, &v2);
    v5 = clap_builder::builder::arg::Arg::new("sync");
    v2 = clap_builder::builder::arg::Arg::long(&v5, "sync");
    v13 = struct32 {
        field_0: "no-sync"
        field_16: "sync"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v13);
    v2 = clap_builder::builder::arg::Arg::help(&v5, "invoke sync before getting usage info (non-windows only)");
    v13 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v5 = clap_builder::builder::command::Command::arg(&v14, &v13);
    v14 = clap_builder::builder::arg::Arg::new("type");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 116);
    v14 = clap_builder::builder::arg::Arg::long(&v2, "type");
    v1 = 2;
    v2 = clap_builder::builder::arg::Arg::value_parser(&v14, &v1);
    v14 = clap_builder::builder::arg::Arg::value_name(&v2, "TYPE");
    v2 = clap_builder::builder::arg::Arg::action(&v14, 1);
    v13 = clap_builder::builder::arg::Arg::help(&v2, "limit listing to file systems of type TYPE");
    v14 = clap_builder::builder::command::Command::arg(&v5, &v13);
    v5 = clap_builder::builder::arg::Arg::new("print-type");
    v2 = clap_builder::builder::arg::Arg::short(&v5, 84);
    v5 = clap_builder::builder::arg::Arg::long(&v2, "print-type");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v5, "print-type");
    v5 = clap_builder::builder::arg::Arg::help(&v2, "print file system type");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v14, &v2);
    v14 = clap_builder::builder::arg::Arg::new("exclude-type");
    v2 = clap_builder::builder::arg::Arg::short(&v14, 120);
    v14 = clap_builder::builder::arg::Arg::long(&v2, "exclude-type");
    v2 = clap_builder::builder::arg::Arg::action(&v14, 1);
    v14 = clap_builder::builder::arg::Arg::value_parser(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::value_name(&v14, "TYPE");
    v14 = clap_builder::builder::arg::Arg::use_value_delimiter(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::help(&v14, "limit listing to file systems not of type TYPE");
    v14 = clap_builder::builder::command::Command::arg(&v5, &v2);
    v5 = clap_builder::builder::arg::Arg::new("paths");
    v2 = clap_builder::builder::arg::Arg::action(&v5, 1);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v2);
    clap_builder::builder::command::Command::arg(v0, &v14, &v5);
    return a0;
}
