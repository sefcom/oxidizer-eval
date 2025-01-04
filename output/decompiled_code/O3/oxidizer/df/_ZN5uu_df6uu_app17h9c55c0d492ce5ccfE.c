fn uu_df::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa70]
    let v1: i8;  // [bp-0xa68]
    let v2: i8;  // [bp-0xa60]
    let v3: i192;  // [sp-0xa58], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x810]
    let v5: i32;  // [sp-0x80c]
    let v6: i4736;  // [sp-0x808], Other Possible Types: struct592, struct712, struct437
    let v7: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v8: i64;  // [sp-0x284]
    let v9: i32;  // [sp-0x27c]
    let v10: i4736;  // [bp-0x278], Other Possible Types: struct32, struct592, struct96, struct48
    let v11: i64;  // [sp-0x270]
    let v12: i64;  // [sp-0x268]
    let v14: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v7 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v7, &g_4155d6, 98);
    v3 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v7 = clap_builder::builder::command::Command::override_usage(&v6, &v3);
    v6 = clap_builder::builder::command::Command::after_help(&v7, &g_415650, 372);
    memcpy(&v7, &v6, 700);
    v8 = 1126449662918784 | *((&v6 as &char + 700) as &i64);
    v9 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("help");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "help");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "Print help information.");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x5);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("all");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x61);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "all");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v7, "all");
    v7 = clap_builder::builder::arg::Arg::help(&v3, "include dummy file systems");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("blocksize");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x42);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "block-size");
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "SIZE");
    v10 = struct32 {
        field_0: &g_40be58
        field_8: 4
        field_16: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_24: 9
    };
    v6 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytes");
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("total");
    v3 = clap_builder::builder::arg::Arg::long(&v7, "total");
    v7 = clap_builder::builder::arg::Arg::overrides_with(&v3, "total");
    v3 = clap_builder::builder::arg::Arg::help(&v7, "produce a grand total");
    v10 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("human-readable-binary");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x68);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "human-readable");
    v10 = struct32 {
        field_0: &g_415476
        field_8: 22
        field_16: &g_415461
        field_24: 21
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("human-readable-decimal");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x48);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "si");
    v10 = struct32 {
        field_0: &g_415461
        field_8: 21
        field_16: &g_415476
        field_24: 22
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v7, &v10);
    v7 = clap_builder::builder::arg::Arg::help(&v3, "likewise, but use powers of 1000 not 1024");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("inodes");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x69);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "inodes");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v6, "inodes");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "list inode information instead of block usage");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("kilo");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x6b);
    v7 = clap_builder::builder::arg::Arg::help(&v3, "like --block-size=1K");
    v10 = struct32 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_8: 9
        field_16: &g_40be58
        field_24: 4
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v7, &v10);
    v10 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("local");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x6c);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "local");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v6, "local");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "limit listing to local file systems");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("no-sync");
    v3 = clap_builder::builder::arg::Arg::long(&v7, "no-sync");
    v10 = struct32 {
        field_0: &g_40bea0
        field_8: 4
        field_16: &g_415497
        field_24: 7
    };
    v7 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::help(&v7, "do not invoke sync before getting usage info (default)");
    v10 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("output");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "output");
    v6 = clap_builder::builder::arg::Arg::value_name(&v3, "FIELD_LIST");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x1);
    v6 = clap_builder::builder::arg::Arg::num_args(&v3);
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((&v6 as &char + 584) as &i32);
    v5 = *((&v6 as &char + 588) as &i32);
    v6 = clap_builder::builder::arg::Arg::use_value_delimiter(&v3, 0x1);
    memcpy(&v10, "source", 192);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::default_missing_values_os(&v3);
    v10 = struct96 {
        field_0: &g_4154ca
        field_8: 6
        field_16: &g_40bec8
        field_24: 4
        field_32: &g_40bedc
        field_40: 4
        field_48: &g_4154ed
        field_56: 5
        field_64: &g_4154f2
        field_72: 5
        field_80: &g_4154f7
        field_88: 6
    };
    v3 = clap_builder::builder::arg::Arg::default_values(&v6, &v10);
    v10 = struct48 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.8.llvm.15128465655211971851
        field_8: 6
        field_16: &anon.85076f12318d60a2ab8851d375b85267.14.llvm.15128465655211971851
        field_24: 11
        field_32: &anon.85076f12318d60a2ab8851d375b85267.17.llvm.15128465655211971851
        field_40: 10
    };
    v6 = clap_builder::builder::arg::Arg::conflicts_with_all(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.");
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("portability");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x50);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "portability");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v7, "portability");
    v7 = clap_builder::builder::arg::Arg::help(&v3, "use the POSIX output format");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("sync");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "sync");
    v10 = struct32 {
        field_0: &g_415497
        field_8: 7
        field_16: &g_40bea0
        field_24: 4
    };
    v6 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v10);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "invoke sync before getting usage info (non-windows only)");
    v10 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v10);
    v7 = clap_builder::builder::arg::Arg::new("type");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x74);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "type");
    v0 = 2;
    v12 = v2;
    v10 = v0;
    v11 = v1;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v7, &v10);
    v7 = clap_builder::builder::arg::Arg::value_name(&v3, "TYPE");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x1);
    v10 = clap_builder::builder::arg::Arg::help(&v3, "limit listing to file systems of type TYPE");
    v7 = clap_builder::builder::command::Command::arg(&v6, &v10);
    v6 = clap_builder::builder::arg::Arg::new("print-type");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x54);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "print-type");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v6, "print-type");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "print file system type");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v7, &v3);
    v7 = clap_builder::builder::arg::Arg::new("exclude-type");
    v3 = clap_builder::builder::arg::Arg::short(&v7, 0x78);
    v7 = clap_builder::builder::arg::Arg::long(&v3, "exclude-type");
    v3 = clap_builder::builder::arg::Arg::action(&v7, 0x1);
    v7 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::value_name(&v7, "TYPE");
    v7 = clap_builder::builder::arg::Arg::use_value_delimiter(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::help(&v7, "limit listing to file systems not of type TYPE");
    v7 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("paths");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x1);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v7, &v6);
    return a0;
}
