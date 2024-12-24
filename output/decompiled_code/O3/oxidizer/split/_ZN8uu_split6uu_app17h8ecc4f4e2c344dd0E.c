fn uu_split::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
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
    let v12: i3496;  // [sp-0x808], Other Possible Types: struct592, struct712, struct437
    let v13: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712
    let v14: i4736;  // [sp-0x278], Other Possible Types: struct592
    let v15: i128;  // [bp-0x268]
    let v16: i128;  // [bp-0x258]
    let v17: i128;  // [bp-0x248]
    let v19: i64;  // rdx
    let v20: i128;  // xmm0
    let v21: i128;  // xmm1
    let v22: i128;  // xmm2
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i128;  // xmm2

    v12 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v13 = clap_builder::builder::command::Command::version(&v12, "0.0.28");
    v12 = clap_builder::builder::command::Command::about(&v13, "Create output files containing consecutive or interleaved sections of input");
    v13 = clap_builder::builder::command::Command::after_help(&v12, &g_4213c1, 721);
    v11 = uucore::format_usage("{} [OPTION]... [INPUT [PREFIX]]");
    v12 = clap_builder::builder::command::Command::override_usage(&v13, &v11);
    memcpy(&v13, &v12, 700);
    v13.700 = 549755814016 | (stack_base)[1356] as i64;
    v13.708 = (stack_base)[1348] as i32;
    v12 = clap_builder::builder::arg::Arg::new("bytes");
    v11 = clap_builder::builder::arg::Arg::short(&v12, 98);
    v12 = clap_builder::builder::arg::Arg::long(&v11, "bytes");
    memcpy(&v11, &v12, 584);
    v11.584 = v12.584 | 32;
    v11.588 = v12.588;
    v12 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v11 = clap_builder::builder::arg::Arg::help(&v12, "put SIZE bytes per output file");
    v12 = clap_builder::builder::command::Command::arg(&v13, &v11);
    v13 = clap_builder::builder::arg::Arg::new("line-bytes");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 67);
    v13 = clap_builder::builder::arg::Arg::long(&v11, "line-bytes");
    memcpy(&v11, &v13, 584);
    v11.584 = v13.584 | 32;
    v11.588 = v13.588;
    v13 = clap_builder::builder::arg::Arg::value_name(&v11, "SIZE");
    v11 = clap_builder::builder::arg::Arg::help(&v13, "put at most SIZE bytes of lines per output file");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v11);
    v12 = clap_builder::builder::arg::Arg::new("lines");
    v11 = clap_builder::builder::arg::Arg::short(&v12, 108);
    v12 = clap_builder::builder::arg::Arg::long(&v11, "lines");
    memcpy(&v11, &v12, 584);
    v11.584 = v12.584 | 32;
    v11.588 = v12.588;
    v12 = clap_builder::builder::arg::Arg::value_name(&v11, "NUMBER");
    v11 = clap_builder::builder::arg::Arg::default_value(&v12, "1000");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "put NUMBER lines/records per output file");
    v12 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("number");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 110);
    v13 = clap_builder::builder::arg::Arg::long(&v11, "number");
    memcpy(&v11, &v13, 584);
    v11.584 = v13.584 | 32;
    v11.588 = v13.588;
    v13 = clap_builder::builder::arg::Arg::value_name(&v11, "CHUNKS");
    v11 = clap_builder::builder::arg::Arg::help(&v13, "generate CHUNKS output files; see explanation below");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v11);
    v12 = clap_builder::builder::arg::Arg::new("additional-suffix");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "additional-suffix");
    memcpy(&v12, &v11, 584);
    v12.584 = v11.584 | 32;
    v12.588 = v11.588;
    v11 = clap_builder::builder::arg::Arg::value_name(&v12, "SUFFIX");
    v12 = clap_builder::builder::arg::Arg::default_value(&v11, 1, 0);
    v11 = clap_builder::builder::arg::Arg::help(&v12, "additional SUFFIX to append to output file names");
    v12 = clap_builder::builder::command::Command::arg(&v13, &v11);
    v13 = clap_builder::builder::arg::Arg::new("filter");
    v11 = clap_builder::builder::arg::Arg::long(&v13, "filter");
    memcpy(&v13, &v11, 584);
    v13.584 = v11.584 | 32;
    v13.588 = v11.588;
    v11 = clap_builder::builder::arg::Arg::value_name(&v13, "COMMAND");
    v13 = clap_builder::builder::arg::Arg::value_hint(&v11, 6);
    v11 = clap_builder::builder::arg::Arg::help(&v13, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v11);
    v12 = clap_builder::builder::arg::Arg::new("elide-empty-files");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "elide-empty-files");
    v12 = clap_builder::builder::arg::Arg::short(&v11, 101);
    v11 = clap_builder::builder::arg::Arg::help(&v12, "do not generate empty output files with '-n'");
    v14 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v12 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("-d");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 100);
    v13 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v0 = &anon.9d13e420ba7f79f1a423f69e627c1176.18.llvm.7226783020046524460;
    v1 = 16;
    v2 = &anon.9d13e420ba7f79f1a423f69e627c1176.19.llvm.7226783020046524460;
    v3 = 2;
    v4 = &anon.9d13e420ba7f79f1a423f69e627c1176.20.llvm.7226783020046524460;
    v5 = 12;
    v6 = &anon.9d13e420ba7f79f1a423f69e627c1176.21.llvm.7226783020046524460;
    v7 = 2;
    v14.48 = vvar_889{stack -2688};
    v14.56 = vvar_890{stack -2680};
    v14.32 = vvar_887{stack -2704};
    v14.40 = vvar_888{stack -2696};
    v14.16 = vvar_885{stack -2720};
    v14.24 = vvar_886{stack -2712};
    v14 = v0;
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v13, &v14);
    v14 = clap_builder::builder::arg::Arg::help(&v11, "use numeric suffixes starting at 0, not alphabetic");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v14);
    v12 = clap_builder::builder::arg::Arg::new("numeric-suffixes");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "numeric-suffixes");
    memcpy(&v12, &v11, 584);
    v12.584 = 128 | v11.584;
    v12.588 = v11.588;
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v14.16 = (stack_base)[2656] as i64;
    v14 = v8;
    v14.8 = vvar_906{stack -2664};
    v11 = clap_builder::builder::arg::Arg::num_args(&v12, &v14);
    v20 = v0;
    v21 = v2;
    v22 = v4;
    v17 = v6;
    v16 = v22;
    v15 = v21;
    v14 = v20;
    v12 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v14);
    v11 = clap_builder::builder::arg::Arg::value_name(&v12, "FROM");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "same as -d, but allow setting the start value");
    v12 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("-x");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 120);
    v13 = clap_builder::builder::arg::Arg::action(&v11, 2);
    v23 = v0;
    v24 = v2;
    v25 = v4;
    v17 = v6;
    v16 = v25;
    v15 = v24;
    v14 = v23;
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v13, &v14);
    v14 = clap_builder::builder::arg::Arg::help(&v11, "use hex suffixes starting at 0, not alphabetic");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v14);
    v12 = clap_builder::builder::arg::Arg::new("hex-suffixes");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "hex-suffixes");
    memcpy(&v12, &v11, 584);
    v12.584 = 128 | v11.584;
    v12.588 = v11.588;
    v11 = clap_builder::builder::arg::Arg::num_args(&v12, &v8);
    v12 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v0);
    v11 = clap_builder::builder::arg::Arg::value_name(&v12, "FROM");
    v14 = clap_builder::builder::arg::Arg::help(&v11, "same as -x, but allow setting the start value");
    v12 = clap_builder::builder::command::Command::arg(&v13, &v14);
    v13 = clap_builder::builder::arg::Arg::new("suffix-length");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 97);
    v13 = clap_builder::builder::arg::Arg::long(&v11, "suffix-length");
    memcpy(&v11, &v13, 584);
    v11.584 = v13.584 | 32;
    v11.588 = v13.588;
    v13 = clap_builder::builder::arg::Arg::value_name(&v11, "N");
    v11 = clap_builder::builder::arg::Arg::help(&v13, "generate suffixes of length N (default 2)");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v11);
    v12 = clap_builder::builder::arg::Arg::new("verbose");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "verbose");
    v12 = clap_builder::builder::arg::Arg::help(&v11, "print a diagnostic just before each output file is opened");
    v11 = clap_builder::builder::arg::Arg::action(&v12, 2);
    v12 = clap_builder::builder::command::Command::arg(&v13, &v11);
    v13 = clap_builder::builder::arg::Arg::new("separator");
    v11 = clap_builder::builder::arg::Arg::short(&v13, 116);
    v13 = clap_builder::builder::arg::Arg::long(&v11, "separator");
    memcpy(&v11, &v13, 584);
    v11.584 = v13.584 | 32;
    v11.588 = v13.588;
    v13 = clap_builder::builder::arg::Arg::value_name(&v11, "SEP");
    v11 = clap_builder::builder::arg::Arg::action(&v13, 1);
    v14 = clap_builder::builder::arg::Arg::help(&v11, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL character");
    v13 = clap_builder::builder::command::Command::arg(&v12, &v14);
    v12 = clap_builder::builder::arg::Arg::new("-io-blksize");
    v11 = clap_builder::builder::arg::Arg::long(&v12, "io-blksize");
    v12 = clap_builder::builder::arg::Arg::alias(&v11, "-io-blksize");
    memcpy(&v11, &v12, 584);
    v11.584 = v12.584 | 4;
    v11.588 = v12.588;
    v12 = clap_builder::builder::command::Command::arg(&v13, &v11);
    v13 = clap_builder::builder::arg::Arg::new("input");
    v11 = clap_builder::builder::arg::Arg::default_value(&v13, "-");
    v14 = clap_builder::builder::arg::Arg::value_hint(&v11, 3);
    v13 = clap_builder::builder::command::Command::arg(&v12, &v14);
    v12 = clap_builder::builder::arg::Arg::new("prefix");
    v11 = clap_builder::builder::arg::Arg::default_value(&v12, "x");
    clap_builder::builder::command::Command::arg(a0, &v13, &v11);
    return a0;
}
