fn uu_split::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xab0]
    let v1: u64;  // [bp-0xaa8]
    let v2: u64;  // [bp-0xaa0]
    let v3: u64;  // [bp-0xa98]
    let v4: u64;  // [bp-0xa90]
    let v5: u64;  // [bp-0xa88]
    let v6: u64;  // [bp-0xa80]
    let v7: u64;  // [bp-0xa78]
    let v8: void*;  // [bp-0xa70]
    let v9: u64;  // [bp-0xa68]
    let v10: u8;  // [bp-0xa60]
    let v11: u8;  // [bp-0xa58]
    let v12: u32;  // [bp-0x810]
    let v13: u32;  // [bp-0x80c]
    let v14: struct437;  // [bp-0x808]
    let v15: u32;  // [bp-0x5c0]
    let v16: u32;  // [bp-0x5bc]
    let v17: u64;  // [bp-0x54c]
    let v18: u32;  // [bp-0x544]
    let v19: u8;  // [bp-0x540]
    let v20: u32;  // [bp-0x2f8]
    let v21: u32;  // [bp-0x2f4]
    let v22: u64;  // [bp-0x284]
    let v23: u32;  // [bp-0x27c]
    let v24: u128;  // [bp-0x278]
    let v25: u128;  // [bp-0x278]
    let v26: u128;  // [bp-0x278]
    let v27: u128;  // [bp-0x268]
    let v28: u128;  // [bp-0x268]
    let v29: u64;  // [bp-0x260]
    let v30: u128;  // [bp-0x258]
    let v31: u128;  // [bp-0x258]
    let v32: u64;  // [bp-0x250]
    let v33: u128;  // [bp-0x248]
    let v34: u128;  // [bp-0x248]
    let v35: u64;  // [bp-0x240]
    let v38: u64;  // rdx
    let v39: u128;  // xmm0
    let v40: u128;  // xmm1
    let v41: u128;  // xmm2
    let v42: u128;  // xmm0
    let v43: u128;  // xmm1
    let v44: u128;  // xmm2

    v14 = clap_builder::builder::command::Command::new(uucore::util_name(), v38);
    clap_builder::builder::command::Command::version(&v19, &v14, "0.0.28");
    clap_builder::builder::command::Command::about(&v14, &v19, "Create output files containing consecutive or interleaved sections of input");
    clap_builder::builder::command::Command::after_help(&v19, &v14, "Output fixed-size pieces of INPUT to PREFIXaa, PREFIXab, ...; default size is 1000, and default PREFIX is 'x'. With no INPUT, or when INPUT is -, read standard input.\n\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\nCHUNKS may be:\n\n- N       split into N files based on size of input\n- K/N     output Kth of N to stdout\n- l/N     split into N files without splitting lines/records\n- l/K/N   output Kth of N to stdout without splitting lines/records\n- r/N     like 'l' but use round robin distribution\n- r/K/N   likewise but only output Kth of N to stdout");
    uucore::format_usage(&v11, "{} [OPTION]... [INPUT [PREFIX]]");
    clap_builder::builder::command::Command::override_usage(&v14, &v19, &v11);
    memcpy(&v19, &v14, 700);
    v22 = 549755814016 | v17;
    v23 = v18;
    clap_builder::builder::arg::Arg::new(&v14, "bytes");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 98);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "bytes");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    clap_builder::builder::arg::Arg::value_name(&v14, &v11, "SIZE");
    clap_builder::builder::arg::Arg::help(&v11, &v14, "put SIZE bytes per output file");
    clap_builder::builder::command::Command::arg(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new(&v19, "line-bytes");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 67);
    clap_builder::builder::arg::Arg::long(&v19, &v11, "line-bytes");
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name(&v19, &v11, "SIZE");
    clap_builder::builder::arg::Arg::help(&v11, &v19, "put at most SIZE bytes of lines per output file");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "lines");
    clap_builder::builder::arg::Arg::short(&v11, &v14, 108);
    clap_builder::builder::arg::Arg::long(&v14, &v11, "lines");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    clap_builder::builder::arg::Arg::value_name(&v14, &v11, "NUMBER");
    clap_builder::builder::arg::Arg::default_value(&v11, &v14, "1000");
    clap_builder::builder::arg::Arg::help(&v24, &v11, "put NUMBER lines/records per output file");
    clap_builder::builder::command::Command::arg(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new(&v19, "number");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 110);
    clap_builder::builder::arg::Arg::long(&v19, &v11, "number");
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name(&v19, &v11, "CHUNKS");
    clap_builder::builder::arg::Arg::help(&v11, &v19, "generate CHUNKS output files; see explanation below");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "additional-suffix");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "additional-suffix");
    memcpy(&v14, &v11, 584);
    v15 = v12 | 32;
    v16 = v13;
    clap_builder::builder::arg::Arg::value_name(&v11, &v14, "SUFFIX");
    clap_builder::builder::arg::Arg::default_value(&v14, &v11, 1, 0);
    clap_builder::builder::arg::Arg::help(&v11, &v14, "additional SUFFIX to append to output file names");
    clap_builder::builder::command::Command::arg(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new(&v19, "filter");
    clap_builder::builder::arg::Arg::long(&v11, &v19, "filter");
    memcpy(&v19, &v11, 584);
    v20 = v12 | 32;
    v21 = v13;
    clap_builder::builder::arg::Arg::value_name(&v11, &v19, "COMMAND");
    clap_builder::builder::arg::Arg::value_hint(&v19, &v11, 6);
    clap_builder::builder::arg::Arg::help(&v11, &v19, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "elide-empty-files");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "elide-empty-files");
    clap_builder::builder::arg::Arg::short(&v14, &v11, 101);
    clap_builder::builder::arg::Arg::help(&v11, &v14, "do not generate empty output files with '-n'");
    clap_builder::builder::arg::Arg::action(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new(&v19, "-d");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 100);
    clap_builder::builder::arg::Arg::action(&v19, &v11, 2);
    v0 = &anon.94f0aa2b13bdb41c7ee8957331b484de.18.llvm.15137177309397333750;
    v1 = 16;
    v2 = &anon.94f0aa2b13bdb41c7ee8957331b484de.19.llvm.15137177309397333750;
    v3 = 2;
    v4 = &anon.94f0aa2b13bdb41c7ee8957331b484de.20.llvm.15137177309397333750;
    v5 = 12;
    v6 = &anon.94f0aa2b13bdb41c7ee8957331b484de.21.llvm.15137177309397333750;
    v7 = 2;
    v33 = v6;
    v35 = 2;
    v30 = v4;
    v32 = 12;
    v27 = v2;
    v29 = 2;
    v24 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::help(&v24, &v11, "use numeric suffixes starting at 0, not alphabetic");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v24);
    clap_builder::builder::arg::Arg::new(&v14, "numeric-suffixes");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "numeric-suffixes");
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v26 = struct24 {
        field_0: v8
        field_8: 1
        field_16: *(&v10 as &i64)
    };
    clap_builder::builder::arg::Arg::num_args(&v11, &v14, &v26);
    v39 = *(&v0 as &i128);
    v40 = *(&v2 as &i128);
    v41 = *(&v4 as &i128);
    v34 = *(&v6 as &i128);
    v31 = v41;
    v28 = v40;
    v25 = v39;
    clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v11, &v26);
    clap_builder::builder::arg::Arg::value_name(&v11, &v14, "FROM");
    clap_builder::builder::arg::Arg::help(&v26, &v11, "same as -d, but allow setting the start value");
    clap_builder::builder::command::Command::arg(&v14, &v19, &v26);
    clap_builder::builder::arg::Arg::new(&v19, "-x");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 120);
    clap_builder::builder::arg::Arg::action(&v19, &v11, 2);
    v42 = *(&v0 as &i128);
    v43 = *(&v2 as &i128);
    v44 = *(&v4 as &i128);
    v33 = *(&v6 as &i128);
    v30 = v44;
    v27 = v43;
    v26 = v42;
    clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v19, &v26);
    clap_builder::builder::arg::Arg::help(&v26, &v11, "use hex suffixes starting at 0, not alphabetic");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v26);
    clap_builder::builder::arg::Arg::new(&v14, "hex-suffixes");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "hex-suffixes");
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    clap_builder::builder::arg::Arg::num_args(&v11, &v14, &v8);
    clap_builder::builder::arg::Arg::overrides_with_all(&v14, &v11, &v0);
    clap_builder::builder::arg::Arg::value_name(&v11, &v14, "FROM");
    clap_builder::builder::arg::Arg::help(&v26, &v11, "same as -x, but allow setting the start value");
    clap_builder::builder::command::Command::arg(&v14, &v19, &v26);
    clap_builder::builder::arg::Arg::new(&v19, "suffix-length");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 97);
    clap_builder::builder::arg::Arg::long(&v19, &v11, "suffix-length");
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name(&v19, &v11, "N");
    clap_builder::builder::arg::Arg::help(&v11, &v19, "generate suffixes of length N (default 2)");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new(&v14, "verbose");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "verbose");
    clap_builder::builder::arg::Arg::help(&v14, &v11, "print a diagnostic just before each output file is opened");
    clap_builder::builder::arg::Arg::action(&v11, &v14, 2);
    clap_builder::builder::command::Command::arg(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new(&v19, "separator");
    clap_builder::builder::arg::Arg::short(&v11, &v19, 116);
    clap_builder::builder::arg::Arg::long(&v19, &v11, "separator");
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name(&v19, &v11, "SEP");
    clap_builder::builder::arg::Arg::action(&v11, &v19, 1);
    clap_builder::builder::arg::Arg::help(&v26, &v11, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL character");
    clap_builder::builder::command::Command::arg(&v19, &v14, &v26);
    clap_builder::builder::arg::Arg::new(&v14, "-io-blksize");
    clap_builder::builder::arg::Arg::long(&v11, &v14, "io-blksize");
    clap_builder::builder::arg::Arg::alias(&v14, &v11, "-io-blksize");
    memcpy(&v11, &v14, 584);
    v12 = v15 | 4;
    v13 = v16;
    clap_builder::builder::command::Command::arg(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new(&v19, "input");
    clap_builder::builder::arg::Arg::default_value(&v11, &v19, "-");
    clap_builder::builder::arg::Arg::value_hint(&v26, &v11, 3);
    clap_builder::builder::command::Command::arg(&v19, &v14, &v26);
    clap_builder::builder::arg::Arg::new(&v14, "prefix");
    clap_builder::builder::arg::Arg::default_value(&v11, &v14, "x");
    clap_builder::builder::command::Command::arg(a0, &v19, &v11);
    return a0;
}
