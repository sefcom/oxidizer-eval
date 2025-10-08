fn uu_join::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab8], Other Possible Types: struct640
    let v1: u32;  // [bp-0x840]
    let v2: u32;  // [bp-0x83c]
    let v3: struct712;  // [bp-0x838], Other Possible Types: struct640
    let v4: u32;  // [bp-0x5c0]
    let v5: u32;  // [bp-0x5bc]
    let v6: u64;  // [bp-0x57c]
    let v7: u32;  // [bp-0x574]
    let v8: struct437;  // [bp-0x570], Other Possible Types: struct712, struct640
    let v9: struct712;  // [bp-0x570]
    let v10: struct640;  // [bp-0x570]
    let v11: u32;  // [bp-0x2f8]
    let v12: u64;  // [bp-0x2b4]
    let v13: u32;  // [bp-0x2ac]
    let v14: struct32;  // [bp-0x2a8], Other Possible Types: struct640, u64
    let v15: u32;  // [bp-0x30]
    let v16: u32;  // [bp-0x2c]
    let v19: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v3 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v3 = clap_builder::builder::command::Command::override_usage(&v8, &v0);
    memcpy(&v8, &v3, 700);
    v12 = 549755814016 | v6;
    v13 = v7;
    v3 = clap_builder::builder::arg::Arg::new("a");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 97);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    v14 = struct32 {
        field_0: "1"
        field_16: "2"
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v14);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "FILENUM");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("v");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 118);
    v8 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v8);
    v14 = struct32 {
        field_0: "1"
        field_16: "2"
    };
    v8 = clap_builder::builder::arg::Arg::value_parser(&v0, &v14);
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "FILENUM");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "like -a FILENUM, but suppress joined output lines");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("e");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 101);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "EMPTY");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "replace missing input fields with EMPTY");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("i");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 105);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "ignore differences in case when comparing fields");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("j");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 106);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "equivalent to '-1 FIELD -2 FIELD'");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("o");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 111);
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "obey FORMAT while constructing output line");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("t");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "CHAR");
    v14 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v14);
    v14 = clap_builder::builder::arg::Arg::help(&v0, "use CHAR as input and output field separator");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("1");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 49);
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "join on this FIELD of file 1");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("2");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 50);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "join on this FIELD of file 2");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("check-order");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "check-order");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "check that the input is correctly sorted, even if all input lines are pairable");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("nocheck-order");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "nocheck-order");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "do not check that the input is correctly sorted");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "header");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "treat the first line in each file as field headers, print them without trying to pair them");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("z");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 122);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line delimiter is NUL, not newline");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v10 = clap_builder::builder::arg::Arg::new("file1");
    memcpy(&v0, &v10, 632);
    v1 = v11 | 1;
    v2 = v11;
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE1");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v8);
    memcpy(&v14, &v0, 632);
    v15 = v1 | 4;
    v16 = v2;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("file2");
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE2");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
