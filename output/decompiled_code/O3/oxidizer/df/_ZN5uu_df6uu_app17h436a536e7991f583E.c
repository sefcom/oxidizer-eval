fn uu_df::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa70]
    let v1: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x808], Other Possible Types: struct592, struct712, struct437
    let v3: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v4: i4736;  // [bp-0x278], Other Possible Types: struct32, struct592, struct96, struct48
    let v6: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v3 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v3, &g_415556, 98);
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v2, &v1);
    v2 = clap_builder::builder::command::Command::after_help(&v3, &g_4155d0, 372);
    memcpy(&v3, &v2, 700);
    v3.700 = 1126449662918784 | (stack_base)[1356] as i64;
    v3.708 = (stack_base)[1348] as i32;
    v2 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "help");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 5);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 97);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v3, "all");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "include dummy file systems");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("blocksize");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 66);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "block-size");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "SIZE");
    v4 = struct32 {
        field_0: &g_40bdd8
        field_8: 4
        field_16: &anon.d0aa707d31221ef2de9c7eacd624d861.4.llvm.8056882245875770237
        field_24: 9
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytes");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("total");
    v1 = clap_builder::builder::arg::Arg::long(&v3, "total");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v1, "total");
    v1 = clap_builder::builder::arg::Arg::help(&v3, "produce a grand total");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("human-readable-binary");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 104);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "human-readable");
    v4 = struct32 {
        field_0: &g_4153f6
        field_8: 22
        field_16: &g_4153e1
        field_24: 21
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "print sizes in human readable format (e.g., 1K 234M 2G)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("human-readable-decimal");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 72);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "si");
    v4 = struct32 {
        field_0: &g_4153e1
        field_8: 21
        field_16: &g_4153f6
        field_24: 22
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "likewise, but use powers of 1000 not 1024");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("inodes");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "inodes");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2, "inodes");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "list inode information instead of block usage");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("kilo");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 107);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "like --block-size=1K");
    v4 = struct32 {
        field_0: &anon.d0aa707d31221ef2de9c7eacd624d861.4.llvm.8056882245875770237
        field_8: 9
        field_16: &g_40bdd8
        field_24: 4
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v4);
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("local");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 108);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "local");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2, "local");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "limit listing to local file systems");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("no-sync");
    v1 = clap_builder::builder::arg::Arg::long(&v3, "no-sync");
    v4 = struct32 {
        field_0: &g_40be20
        field_8: 4
        field_16: &g_415417
        field_24: 7
    };
    v3 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::help(&v3, "do not invoke sync before getting usage info (default)");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("output");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "output");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, "FIELD_LIST");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v2, 584);
    v1.584 = 128 | (stack_base)[1472] as i32;
    v1.588 = (stack_base)[1468] as i32;
    v2 = clap_builder::builder::arg::Arg::use_value_delimiter(&v1, 1);
    memcpy(&v4, "source", 192);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::default_missing_values_os(&v1);
    v4 = struct96 {
        field_0: &g_41544a
        field_8: 6
        field_16: &g_40be48
        field_24: 4
        field_32: &g_40be5c
        field_40: 4
        field_48: &g_41546d
        field_56: 5
        field_64: &g_415472
        field_72: 5
        field_80: &g_415477
        field_88: 6
    };
    v1 = clap_builder::builder::arg::Arg::default_values(&v2, &v4);
    v4 = struct48 {
        field_0: &anon.d0aa707d31221ef2de9c7eacd624d861.8.llvm.8056882245875770237
        field_8: 6
        field_16: &anon.d0aa707d31221ef2de9c7eacd624d861.14.llvm.8056882245875770237
        field_24: 11
        field_32: &anon.d0aa707d31221ef2de9c7eacd624d861.17.llvm.8056882245875770237
        field_40: 10
    };
    v2 = clap_builder::builder::arg::Arg::conflicts_with_all(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("portability");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 80);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "portability");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v3, "portability");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "use the POSIX output format");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("sync");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "sync");
    v4 = struct32 {
        field_0: &g_415417
        field_8: 7
        field_16: &g_40be20
        field_24: 4
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v4);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "invoke sync before getting usage info (non-windows only)");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("type");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "type");
    v0 = 2;
    v4.16 = (stack_base)[2656] as i64;
    v4 = v0;
    v4.8 = (stack_base)[2664] as i64;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::value_name(&v1, "TYPE");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v4 = clap_builder::builder::arg::Arg::help(&v1, "limit listing to file systems of type TYPE");
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("print-type");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 84);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "print-type");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2, "print-type");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "print file system type");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("exclude-type");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 120);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "exclude-type");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_name(&v3, "TYPE");
    v3 = clap_builder::builder::arg::Arg::use_value_delimiter(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::help(&v3, "limit listing to file systems not of type TYPE");
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("paths");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    clap_builder::builder::command::Command::arg(a0, &v3, &v2);
    return a0;
}
