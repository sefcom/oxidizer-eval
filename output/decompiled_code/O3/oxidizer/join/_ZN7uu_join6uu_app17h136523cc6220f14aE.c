fn uu_join::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa58], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x808], Other Possible Types: struct592, struct712
    let v2: i5696;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v3: i4736;  // [bp-0x278], Other Possible Types: struct592, struct32, struct8
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v1, &g_414a22, 212);
    v0 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814016 | (stack_base)[1356] as i64;
    v2.708 = (stack_base)[1348] as i32;
    v1 = clap_builder::builder::arg::Arg::new("a");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 97);
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1, v5);
    v3 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "FILENUM");
    v3 = clap_builder::builder::arg::Arg::help(&v0, &g_414b17, 103);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("v");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v2, v5);
    v3 = struct32 {
        field_0: &g_4149f7
        field_8: 1
        field_16: &g_4149f8
        field_24: 1
    };
    v2 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, "FILENUM");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "like -a FILENUM, but suppress joined output lines");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("e");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 101);
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "EMPTY");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "replace missing input fields with EMPTY");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("i");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "ignore differences in case when comparing fields");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("j");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 106);
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "equivalent to '-1 FIELD -2 FIELD'");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("o");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 111);
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "obey FORMAT while constructing output line");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("t");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 116);
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "CHAR");
    v3 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "use CHAR as input and output field separator");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("1");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 49);
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "join on this FIELD of file 1");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("2");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 50);
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FIELD");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "join on this FIELD of file 2");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("check-order");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "check-order");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "check that the input is correctly sorted, even if all input lines are pairable");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("nocheck-order");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "nocheck-order");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "do not check that the input is correctly sorted");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "header");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "treat the first line in each file as field headers, print them without trying to pair them");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("z");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "line delimiter is NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file1");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[760] as i32 | 1;
    v0.588 = (stack_base)[756] as i32;
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE1");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v2, 3);
    memcpy(&v3, &v0, 584);
    v3.584 = v0.584 | 4;
    v3.588 = v0.588;
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("file2");
    memcpy(&v0, &v1, 584);
    v0.584 = v1.584 | 1;
    v0.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE2");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    memcpy(&v1, &v0, 584);
    v1.584 = v0.584 | 4;
    v1.588 = v0.588;
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
