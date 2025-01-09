fn uu_split::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xab0]
    let v1: i64;  // [sp-0xaa8]
    let v2: i64;  // [sp-0xaa0]
    let v3: i64;  // [sp-0xa98]
    let v4: i64;  // [sp-0xa90]
    let v5: i64;  // [sp-0xa88]
    let v6: i64;  // [sp-0xa80]
    let v7: i64;  // [sp-0xa78]
    let v8: i64;  // [sp-0xa70]
    let v9: i64;  // [sp-0xa68]
    let v10: i8;  // [sp-0xa60]
    let v11: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct24
    let v12: i32;  // [sp-0x810]
    let v13: i32;  // [sp-0x80c]
    let v14: i4736;  // [sp-0x808], Other Possible Types: struct592, struct712, struct437
    let v15: i32;  // [sp-0x5c0]
    let v16: i32;  // [sp-0x5bc]
    let v17: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v18: i32;  // [sp-0x2f8]
    let v19: i32;  // [sp-0x2f4]
    let v20: i64;  // [sp-0x284]
    let v21: i32;  // [sp-0x27c]
    let v22: i4736;  // [sp-0x278], Other Possible Types: struct592
    let v23: i64;  // [sp-0x270]
    let v24: i64;  // [sp-0x268]
    let v25: i64;  // [sp-0x260]
    let v26: i128;  // [sp-0x258]
    let v27: i64;  // [sp-0x250]
    let v28: i128;  // [sp-0x248]
    let v29: i64;  // [sp-0x240]
    let v31: i64;  // rdx
    let v32: i128;  // xmm0
    let v33: i128;  // xmm1
    let v34: i128;  // xmm2
    let v35: i128;  // xmm0
    let v36: i128;  // xmm1
    let v37: i128;  // xmm2

    v14 = clap_builder::builder::command::Command::new(uucore::util_name(), v31);
    v17 = clap_builder::builder::command::Command::version(&v14, "0.0.28");
    v14 = clap_builder::builder::command::Command::about(&v17, "Create output files containing consecutive or interleaved sections of input");
    v17 = clap_builder::builder::command::Command::after_help(&v14, "Output fixed-size pieces of INPUT to PREFIXaa, PREFIXab, ...; default size is 1000, and default PREFIX is 'x'. With no INPUT, or when INPUT is -, read standard input.\n\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\nCHUNKS may be:\n\n- N       split into N files based on size of input\n- K/N     output Kth of N to stdout\n- l/N     split into N files without splitting lines/records\n- l/K/N   output Kth of N to stdout without splitting lines/records\n- r/N     like 'l' but use round robin distribution\n- r/K/N   likewise but only output Kth of N to stdout");
    v11 = uucore::format_usage("{} [OPTION]... [INPUT [PREFIX]]");
    v14 = clap_builder::builder::command::Command::override_usage(&v17, &v11);
    memcpy(&v17, &v14, 700);
    v20 = 549755814016 | *((&v14 as &char + 700) as &i64);
    v21 = *((&v14 as &char + 708) as &i32);
    v14 = clap_builder::builder::arg::Arg::new("bytes");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x62);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "bytes");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    v14 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v11 = clap_builder::builder::arg::Arg::help(&v14, "put SIZE bytes per output file");
    v14 = clap_builder::builder::command::Command::arg(&v17, &v11);
    v17 = clap_builder::builder::arg::Arg::new("line-bytes");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x43);
    v17 = clap_builder::builder::arg::Arg::long(&v11, "line-bytes");
    memcpy(&v11, &v17, 584);
    v12 = v18 | 32;
    v13 = v19;
    v17 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v11 = clap_builder::builder::arg::Arg::help(&v17, "put at most SIZE bytes of lines per output file");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("lines");
    v11 = clap_builder::builder::arg::Arg::short(&v14, 0x6c);
    v14 = clap_builder::builder::arg::Arg::long(&v11, "lines");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    v14 = clap_builder::builder::arg::Arg::value_name(&v11, "NUMBER");
    v11 = clap_builder::builder::arg::Arg::default_value(&v14, "1000");
    v22 = clap_builder::builder::arg::Arg::help(&v11, "put NUMBER lines/records per output file");
    v14 = clap_builder::builder::command::Command::arg(&v17, &v22);
    v17 = clap_builder::builder::arg::Arg::new("number");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x6e);
    v17 = clap_builder::builder::arg::Arg::long(&v11, "number");
    memcpy(&v11, &v17, 584);
    v12 = v18 | 32;
    v13 = v19;
    v17 = clap_builder::builder::arg::Arg::value_name(&v11, "CHUNKS");
    v11 = clap_builder::builder::arg::Arg::help(&v17, "generate CHUNKS output files; see explanation below");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("additional-suffix");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "additional-suffix");
    memcpy(&v14, &v11, 584);
    v15 = v12 | 32;
    v16 = v13;
    v11 = clap_builder::builder::arg::Arg::value_name(&v14, "SUFFIX");
    v14 = clap_builder::builder::arg::Arg::default_value(&v11, 0x1, 0);
    v11 = clap_builder::builder::arg::Arg::help(&v14, "additional SUFFIX to append to output file names");
    v14 = clap_builder::builder::command::Command::arg(&v17, &v11);
    v17 = clap_builder::builder::arg::Arg::new("filter");
    v11 = clap_builder::builder::arg::Arg::long(&v17, "filter");
    memcpy(&v17, &v11, 584);
    v18 = v12 | 32;
    v19 = v13;
    v11 = clap_builder::builder::arg::Arg::value_name(&v17, "COMMAND");
    v17 = clap_builder::builder::arg::Arg::value_hint(&v11, 0x6);
    v11 = clap_builder::builder::arg::Arg::help(&v17, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "elide-empty-files");
    v14 = clap_builder::builder::arg::Arg::short(&v11, 0x65);
    v11 = clap_builder::builder::arg::Arg::help(&v14, "do not generate empty output files with '-n'");
    v22 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v17, &v22);
    v17 = clap_builder::builder::arg::Arg::new("-d");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x64);
    v17 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v0 = &anon.94f0aa2b13bdb41c7ee8957331b484de.18.llvm.15137177309397333750;
    v1 = 16;
    v2 = &anon.94f0aa2b13bdb41c7ee8957331b484de.19.llvm.15137177309397333750;
    v3 = 2;
    v4 = &anon.94f0aa2b13bdb41c7ee8957331b484de.20.llvm.15137177309397333750;
    v5 = 12;
    v6 = &anon.94f0aa2b13bdb41c7ee8957331b484de.21.llvm.15137177309397333750;
    v7 = 2;
    v28 = v6;
    v29 = v7;
    v26 = v4;
    v27 = v5;
    v24 = v2;
    v25 = v3;
    v22 = v0;
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v17, &v22);
    v22 = clap_builder::builder::arg::Arg::help(&v11, "use numeric suffixes starting at 0, not alphabetic");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v22);
    v14 = clap_builder::builder::arg::Arg::new("numeric-suffixes");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "numeric-suffixes");
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v24 = v10;
    v22 = v8;
    v23 = v9;
    v11 = clap_builder::builder::arg::Arg::num_args(&v14, &v22);
    v32 = v0;
    v33 = v2;
    v34 = v4;
    v28 = v6;
    v26 = v34;
    v24 = v33;
    v22 = v32;
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v22);
    v11 = clap_builder::builder::arg::Arg::value_name(&v14, "FROM");
    v22 = clap_builder::builder::arg::Arg::help(&v11, "same as -d, but allow setting the start value");
    v14 = clap_builder::builder::command::Command::arg(&v17, &v22);
    v17 = clap_builder::builder::arg::Arg::new("-x");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x78);
    v17 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v35 = v0;
    v36 = v2;
    v37 = v4;
    v28 = v6;
    v26 = v37;
    v24 = v36;
    v22 = v35;
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v17, &v22);
    v22 = clap_builder::builder::arg::Arg::help(&v11, "use hex suffixes starting at 0, not alphabetic");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v22);
    v14 = clap_builder::builder::arg::Arg::new("hex-suffixes");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "hex-suffixes");
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    v11 = clap_builder::builder::arg::Arg::num_args(&v14, &v8);
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::value_name(&v14, "FROM");
    v22 = clap_builder::builder::arg::Arg::help(&v11, "same as -x, but allow setting the start value");
    v14 = clap_builder::builder::command::Command::arg(&v17, &v22);
    v17 = clap_builder::builder::arg::Arg::new("suffix-length");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x61);
    v17 = clap_builder::builder::arg::Arg::long(&v11, "suffix-length");
    memcpy(&v11, &v17, 584);
    v12 = v18 | 32;
    v13 = v19;
    v17 = clap_builder::builder::arg::Arg::value_name(&v11, "N");
    v11 = clap_builder::builder::arg::Arg::help(&v17, "generate suffixes of length N (default 2)");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v11);
    v14 = clap_builder::builder::arg::Arg::new("verbose");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "verbose");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "print a diagnostic just before each output file is opened");
    v11 = clap_builder::builder::arg::Arg::action(&v14, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v17, &v11);
    v17 = clap_builder::builder::arg::Arg::new("separator");
    v11 = clap_builder::builder::arg::Arg::short(&v17, 0x74);
    v17 = clap_builder::builder::arg::Arg::long(&v11, "separator");
    memcpy(&v11, &v17, 584);
    v12 = v18 | 32;
    v13 = v19;
    v17 = clap_builder::builder::arg::Arg::value_name(&v11, "SEP");
    v11 = clap_builder::builder::arg::Arg::action(&v17, 0x1);
    v22 = clap_builder::builder::arg::Arg::help(&v11, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL character");
    v17 = clap_builder::builder::command::Command::arg(&v14, &v22);
    v14 = clap_builder::builder::arg::Arg::new("-io-blksize");
    v11 = clap_builder::builder::arg::Arg::long(&v14, "io-blksize");
    v14 = clap_builder::builder::arg::Arg::alias(&v11, "-io-blksize");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 4;
    v13 = v16;
    v14 = clap_builder::builder::command::Command::arg(&v17, &v11);
    v17 = clap_builder::builder::arg::Arg::new("input");
    v11 = clap_builder::builder::arg::Arg::default_value(&v17, "-");
    v22 = clap_builder::builder::arg::Arg::value_hint(&v11, 0x3);
    v17 = clap_builder::builder::command::Command::arg(&v14, &v22);
    v14 = clap_builder::builder::arg::Arg::new("prefix");
    v11 = clap_builder::builder::arg::Arg::default_value(&v14, "x");
    clap_builder::builder::command::Command::arg(a0, &v17, &v11);
    return a0;
}
