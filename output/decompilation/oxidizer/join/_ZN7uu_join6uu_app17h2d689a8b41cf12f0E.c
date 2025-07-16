fn uu_join::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa58]
    let v1: u32;  // [bp-0x810]
    let v2: u32;  // [bp-0x80c]
    let v3: u8;  // [bp-0x808]
    let v4: u32;  // [bp-0x5c0]
    let v5: u32;  // [bp-0x5bc]
    let v6: u64;  // [bp-0x54c]
    let v7: u32;  // [bp-0x544]
    let v8: struct437;  // [bp-0x540]
    let v9: u32;  // [bp-0x2f8]
    let v10: i8;  // [bp-0x2f4]
    let v11: u64;  // [bp-0x284]
    let v12: u32;  // [bp-0x27c]
    let v13: u64;  // [bp-0x278]
    let v14: u32;  // [bp-0x30]
    let v15: u32;  // [bp-0x2c]
    let v18: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.");
    uucore::format_usage(&v0, "{} [OPTION]... FILE1 FILE2");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "a");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 97);
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v3);
    v13 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    clap_builder::builder::arg::Arg::value_parser(&v3, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "FILENUM");
    clap_builder::builder::arg::Arg::help(&v13, &v0, "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "v");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::action(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v8);
    v13 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    clap_builder::builder::arg::Arg::value_parser(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "FILENUM");
    clap_builder::builder::arg::Arg::help(&v13, &v0, "like -a FILENUM, but suppress joined output lines");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "e");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 101);
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "EMPTY");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "replace missing input fields with EMPTY");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "i");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "ignore-case");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "ignore differences in case when comparing fields");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "j");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 106);
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FIELD");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "equivalent to '-1 FIELD -2 FIELD'");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "o");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "FORMAT");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "obey FORMAT while constructing output line");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "t");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 116);
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "CHAR");
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v13);
    clap_builder::builder::arg::Arg::help(&v13, &v0, "use CHAR as input and output field separator");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "1");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 49);
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "FIELD");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "join on this FIELD of file 1");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "2");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 50);
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FIELD");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "join on this FIELD of file 2");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "check-order");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "check-order");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "check that the input is correctly sorted, even if all input lines are pairable");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "nocheck-order");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "nocheck-order");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "do not check that the input is correctly sorted");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "header");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "header");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "treat the first line in each file as field headers, print them without trying to pair them");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "z");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "file1");
    memcpy(&v0, &v8, 584);
    v1 = v9 | 1;
    v2 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "FILE1");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v8, 3);
    memcpy(&v13, &v0, 584);
    v14 = v1 | 4;
    v15 = v2;
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "file2");
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = v5;
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FILE2");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 3);
    memcpy(&v3, &v0, 584);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
