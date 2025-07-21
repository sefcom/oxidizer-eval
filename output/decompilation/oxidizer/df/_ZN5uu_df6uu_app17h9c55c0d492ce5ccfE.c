fn uu_df::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa70]
    let v1: u64;  // [bp-0xa68]
    let v2: u64;  // [bp-0xa60]
    let v3: u8;  // [bp-0xa58]
    let v4: u32;  // [bp-0x810]
    let v5: u32;  // [bp-0x80c]
    let v6: struct437;  // [bp-0x808]
    let v7: u32;  // [bp-0x5c0]
    let v8: i8;  // [bp-0x5bc]
    let v9: u64;  // [bp-0x54c]
    let v10: u32;  // [bp-0x544]
    let v11: u8;  // [bp-0x540]
    let v12: u64;  // [bp-0x284]
    let v13: u32;  // [bp-0x27c]
    let v14: struct48;  // [bp-0x278], Other Possible Types: struct96, struct32, u64
    let v15: u64;  // [bp-0x270]
    let v16: u64;  // [bp-0x268]
    let v19: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    clap_builder::builder::command::Command::version(&v11, &v6, "0.0.28");
    clap_builder::builder::command::Command::about(&v6, &v11, "Show information about the file system on which each FILE resides,\nor all file systems by default.");
    uucore::format_usage(&v3, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v11, &v6, &v3);
    clap_builder::builder::command::Command::after_help(&v6, &v11, "Display values are in units of the first available SIZE from --block-size,\nand the DF_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).\nUnits are K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB,... (powers\nof 1000).");
    memcpy(&v11, &v6, 700);
    v12 = 1126449662918784 | v9;
    v13 = v10;
    clap_builder::builder::arg::Arg::new(&v6, "help");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "help");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 5);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "all");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 97);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "all");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v11, "all");
    clap_builder::builder::arg::Arg::help(&v11, &v3, "include dummy file systems");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "blocksize");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 66);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "block-size");
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "SIZE");
    v14 = struct32 {
        field_0: &g_40be58
        field_8: 4
        field_16: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_24: 9
    };
    v14 = struct32 {
        field_0: &g_40be58
        field_8: 4
        field_16: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_24: 9
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytes");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "total");
    clap_builder::builder::arg::Arg::long(&v3, &v11, "total");
    clap_builder::builder::arg::Arg::overrides_with(&v11, &v3, "total");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "produce a grand total");
    clap_builder::builder::arg::Arg::action(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "human-readable-binary");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 104);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "human-readable");
    v14 = struct32 {
        field_0: &g_415476
        field_8: 22
        field_16: &g_415461
        field_24: 21
    };
    v14 = struct32 {
        field_0: &g_415476
        field_8: 22
        field_16: &g_415461
        field_24: 21
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v6, &v14);
    clap_builder::builder::arg::Arg::help(&v6, &v3, "print sizes in human readable format (e.g., 1K 234M 2G)");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "human-readable-decimal");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 72);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "si");
    v14 = struct32 {
        field_0: &g_415461
        field_8: 21
        field_16: &g_415476
        field_24: 22
    };
    v14 = struct32 {
        field_0: &g_415461
        field_8: 21
        field_16: &g_415476
        field_24: 22
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "likewise, but use powers of 1000 not 1024");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "inodes");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 105);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "inodes");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v6, "inodes");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "list inode information instead of block usage");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "kilo");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 107);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "like --block-size=1K");
    v14 = struct32 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_8: 9
        field_16: &g_40be58
        field_24: 4
    };
    v14 = struct32 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.4.llvm.15128465655211971851
        field_8: 9
        field_16: &g_40be58
        field_24: 4
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::action(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "local");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 108);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "local");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v6, "local");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "limit listing to local file systems");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "no-sync");
    clap_builder::builder::arg::Arg::long(&v3, &v11, "no-sync");
    v14 = struct32 {
        field_0: &g_40bea0
        field_8: 4
        field_16: &g_415497
        field_24: 7
    };
    v14 = struct32 {
        field_0: &g_40bea0
        field_8: 4
        field_16: &g_415497
        field_24: 7
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v3, &v14);
    clap_builder::builder::arg::Arg::help(&v3, &v11, "do not invoke sync before getting usage info (default)");
    clap_builder::builder::arg::Arg::action(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "output");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "output");
    clap_builder::builder::arg::Arg::value_name(&v6, &v3, "FIELD_LIST");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 1);
    clap_builder::builder::arg::Arg::num_args(&v6, &v3);
    memcpy(&v3, &v6, 584);
    v4 = 128 | v7;
    v5 = *(&v8 as &i32);
    clap_builder::builder::arg::Arg::use_value_delimiter(&v6, &v3, 1);
    memcpy(&v14, "source", 192);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v6, &v14);
    clap_builder::builder::arg::Arg::default_missing_values_os(&v6, &v3);
    v14 = struct96 {
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
    v14 = struct96 {
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
    clap_builder::builder::arg::Arg::default_values(&v3, &v6, &v14);
    v14 = struct48 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.8.llvm.15128465655211971851
        field_8: 6
        field_16: &anon.85076f12318d60a2ab8851d375b85267.14.llvm.15128465655211971851
        field_24: 11
        field_32: &anon.85076f12318d60a2ab8851d375b85267.17.llvm.15128465655211971851
        field_40: 10
    };
    v14 = struct48 {
        field_0: &anon.85076f12318d60a2ab8851d375b85267.8.llvm.15128465655211971851
        field_8: 6
        field_16: &anon.85076f12318d60a2ab8851d375b85267.14.llvm.15128465655211971851
        field_24: 11
        field_32: &anon.85076f12318d60a2ab8851d375b85267.17.llvm.15128465655211971851
        field_40: 10
    };
    clap_builder::builder::arg::Arg::conflicts_with_all(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "portability");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 80);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "portability");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v11, "portability");
    clap_builder::builder::arg::Arg::help(&v11, &v3, "use the POSIX output format");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "sync");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "sync");
    v14 = struct32 {
        field_0: &g_415497
        field_8: 7
        field_16: &g_40bea0
        field_24: 4
    };
    v14 = struct32 {
        field_0: &g_415497
        field_8: 7
        field_16: &g_40bea0
        field_24: 4
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "invoke sync before getting usage info (non-windows only)");
    clap_builder::builder::arg::Arg::action(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new(&v11, "type");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 116);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "type");
    v0 = 2;
    v16 = v2;
    v14 = v0;
    v15 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::value_name(&v11, &v3, "TYPE");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 1);
    clap_builder::builder::arg::Arg::help(&v14, &v3, "limit listing to file systems of type TYPE");
    clap_builder::builder::command::Command::arg(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new(&v6, "print-type");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 84);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "print-type");
    clap_builder::builder::arg::Arg::overrides_with(&v3, &v6, "print-type");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "print file system type");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "exclude-type");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 120);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "exclude-type");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 1);
    clap_builder::builder::arg::Arg::value_parser(&v11, &v3, &v0);
    clap_builder::builder::arg::Arg::value_name(&v3, &v11, "TYPE");
    clap_builder::builder::arg::Arg::use_value_delimiter(&v11, &v3, 1);
    clap_builder::builder::arg::Arg::help(&v3, &v11, "limit listing to file systems not of type TYPE");
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "paths");
    clap_builder::builder::arg::Arg::action(&v3, &v6, 1);
    clap_builder::builder::arg::Arg::value_hint(&v6, &v3, 2);
    clap_builder::builder::command::Command::arg(a0, &v11, &v6);
    return a0;
}
