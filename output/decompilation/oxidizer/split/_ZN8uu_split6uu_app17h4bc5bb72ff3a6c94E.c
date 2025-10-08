fn uu_split::uu_app(a0: i64) -> u64 {
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v2: u32;  // [bp-0x848]
    let v3: u32;  // [bp-0x844]
    let v4: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v5: u32;  // [bp-0x5c8]
    let v6: u32;  // [bp-0x5c4]
    let v7: u64;  // [bp-0x584]
    let v8: u32;  // [bp-0x57c]
    let v9: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v10: u32;  // [bp-0x300]
    let v11: u32;  // [bp-0x2fc]
    let v12: u64;  // [bp-0x2bc]
    let v13: u32;  // [bp-0x2b4]
    let v14: struct64;  // [bp-0x2b0], Other Possible Types: struct640
    let v17: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v17);
    v9 = clap_builder::builder::command::Command::version(&v4);
    v4 = clap_builder::builder::command::Command::about(&v9);
    v9 = clap_builder::builder::command::Command::after_help(&v4);
    v1 = uucore::format_usage("{} [OPTION]... [INPUT [PREFIX]]");
    v4 = clap_builder::builder::command::Command::override_usage(&v9, &v1);
    memcpy(&v9, &v4, 700);
    v12 = 549755814016 | v7;
    v13 = v8;
    v4 = clap_builder::builder::arg::Arg::new("bytes");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 98);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "bytes");
    memcpy(&v1, &v4, 632);
    v2 = v5 | 32;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::value_name(&v1, "SIZE");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "put SIZE bytes per output file");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("line-bytes");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 67);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "line-bytes");
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9 = clap_builder::builder::arg::Arg::value_name(&v1, "SIZE");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "put at most SIZE bytes of lines per output file");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("lines");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 108);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "lines");
    memcpy(&v1, &v4, 632);
    v2 = v5 | 32;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::value_name(&v1, "NUMBER");
    v1 = clap_builder::builder::arg::Arg::default_value(&v4, "1000");
    v14 = clap_builder::builder::arg::Arg::help(&v1, "put NUMBER lines/records per output file");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("number");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 110);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "number");
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9 = clap_builder::builder::arg::Arg::value_name(&v1, "CHUNKS");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "generate CHUNKS output files; see explanation below");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("additional-suffix");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "additional-suffix");
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "SUFFIX");
    v4 = clap_builder::builder::arg::Arg::default_value(&v1, 1, 0);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "additional SUFFIX to append to output file names");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("filter");
    v1 = clap_builder::builder::arg::Arg::long(&v9, "filter");
    memcpy(&v9, &v1, 632);
    v10 = v2 | 32;
    v11 = v3;
    v1 = clap_builder::builder::arg::Arg::value_name(&v9, "COMMAND");
    v9 = clap_builder::builder::arg::Arg::value_hint(&v1, 6);
    v1 = clap_builder::builder::arg::Arg::help(&v9, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "elide-empty-files");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "do not generate empty output files with '-n'");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("-d");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 100);
    v9 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v14 = struct64 {
        field_0: "numeric-suffixes"
        field_16: "-d"
        field_32: "hex-suffixes"
        field_48: "-x"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v9, &v14);
    v14 = clap_builder::builder::arg::Arg::help(&v1, "use numeric suffixes starting at 0, not alphabetic");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("numeric-suffixes");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "numeric-suffixes");
    memcpy(&v4, &v1, 632);
    v5 = 128 | v2;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::num_args(&v4, None, 1);
    v14 = struct64 {
        field_0: "numeric-suffixes"
        field_16: "-d"
        field_32: "hex-suffixes"
        field_48: "-x"
    };
    v4 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "FROM");
    v14 = clap_builder::builder::arg::Arg::help(&v1, "same as -d, but allow setting the start value");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("-x");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 120);
    v9 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v14 = struct64 {
        field_0: "numeric-suffixes"
        field_16: "-d"
        field_32: "hex-suffixes"
        field_48: "-x"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v9, &v14);
    v14 = clap_builder::builder::arg::Arg::help(&v1, "use hex suffixes starting at 0, not alphabetic");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("hex-suffixes");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "hex-suffixes");
    memcpy(&v4, &v1, 632);
    v5 = 128 | v2;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::num_args(&v4, None, 1);
    v14 = struct64 {
        field_0: "numeric-suffixes"
        field_16: "-d"
        field_32: "hex-suffixes"
        field_48: "-x"
    };
    v4 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v14);
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "FROM");
    v14 = clap_builder::builder::arg::Arg::help(&v1, "same as -x, but allow setting the start value");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("suffix-length");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 97);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "suffix-length");
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9 = clap_builder::builder::arg::Arg::value_name(&v1, "N");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "generate suffixes of length N (default 2)");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "verbose");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "print a diagnostic just before each output file is opened");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("separator");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 116);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "separator");
    memcpy(&v1, &v9, 632);
    v2 = v10 | 32;
    v3 = v11;
    v9 = clap_builder::builder::arg::Arg::value_name(&v1, "SEP");
    v1 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v14 = clap_builder::builder::arg::Arg::help(&v1, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL character");
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("-io-blksize");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "io-blksize");
    v4 = clap_builder::builder::arg::Arg::alias(&v1);
    memcpy(&v1, &v4, 632);
    v2 = v5 | 4;
    v3 = v6;
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("input");
    v1 = clap_builder::builder::arg::Arg::default_value(&v9, "-");
    v14 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("prefix");
    v1 = clap_builder::builder::arg::Arg::default_value(&v4, "x");
    clap_builder::builder::command::Command::arg(v0, &v9, &v1);
    return a0;
}
