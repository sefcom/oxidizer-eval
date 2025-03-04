fn uu_join::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa58], Other Possible Types: struct24
    let v1: i32;  // [sp-0x810]
    let v2: i32;  // [sp-0x80c]
    let v3: struct592;  // [sp-0x808], Other Possible Types: struct712
    let v4: i32;  // [sp-0x5c0]
    let v5: i32;  // [sp-0x5bc]
    let v6: struct592;  // [sp-0x540], Other Possible Types: struct712, struct437
    let v7: i64;  // [sp-0x284]
    let v8: i32;  // [sp-0x27c]
    let v9: struct592;  // [bp-0x278], Other Possible Types: struct32, struct8
    let v10: i32;  // [sp-0x30]
    let v11: i32;  // [sp-0x2c]
    let v13: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v3 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v3, "For each pair of input lines with identical join fields, write a line to
standard output. The default join field is the first, delimited by blanks.

When `FILE1` or `FILE2` (not both) is `-`, read standard input.");
    v0 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v3 = clap_builder::builder::command::Command::override_usage(&v6, &v0);
    memcpy(&v6, &v3, 700);
    v7 = 549755814016 | *((&v3.field_0 as &char + 700) as &i64);
    v8 = *((&v3.field_0 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("a");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x61);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    v9 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "FILENUM");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "also print unpairable lines from file FILENUM, where
FILENUM is 1 or 2, corresponding to FILE1 or FILE2");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("v");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x76);
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v6);
    v9 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    v6 = clap_builder::builder::arg::Arg::value_parser(&v0, &v9);
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, "FILENUM");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "like -a FILENUM, but suppress joined output lines");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("e");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x65);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "EMPTY");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "replace missing input fields with EMPTY");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("i");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x69);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "ignore differences in case when comparing fields");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("j");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6a);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "equivalent to '-1 FIELD -2 FIELD'");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("o");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6f);
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "obey FORMAT while constructing output line");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("t");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x74);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "CHAR");
    v9 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v9);
    v9 = clap_builder::builder::arg::Arg::help(&v0, "use CHAR as input and output field separator");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("1");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x31);
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "join on this FIELD of file 1");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("2");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x32);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "join on this FIELD of file 2");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("check-order");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "check-order");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "check that the input is correctly sorted, even if all input lines are pairable");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("nocheck-order");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "nocheck-order");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "do not check that the input is correctly sorted");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "header");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "treat the first line in each file as field headers, print them without trying to pair them");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("z");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x7a);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line delimiter is NUL, not newline");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("file1");
    memcpy(&v0, &v6, 584);
    v1 = *((&v6.field_0 as &char + 584) as &i32) | 1;
    v2 = *((&v6.field_0 as &char + 588) as &i32);
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE1");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v6, 0x3);
    memcpy(&v9, &v0, 584);
    v10 = v1 | 4;
    v11 = v2;
    v6 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("file2");
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE2");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    memcpy(&v3, &v0, 584);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
