fn uu_comm::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i32;  // [sp-0x540]
    let v3: i32;  // [sp-0x53c]
    let v4: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v5: struct592;  // [sp-0x270], Other Possible Types: i4736
    let v7: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v4, &g_41c622, 284);
    v1 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v4, 700);
    v0.700 = 584115552392 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v4 = clap_builder::builder::arg::Arg::new("1");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 49);
    v4 = clap_builder::builder::arg::Arg::help(&v1, "suppress column 1 (lines unique to FILE1)");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("2");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 50);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "suppress column 2 (lines unique to FILE2)");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("3");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 51);
    v4 = clap_builder::builder::arg::Arg::help(&v1, "suppress column 3 (lines that appear in both files)");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "output-delimiter");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "separate columns with STR");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, v7);
    v0 = clap_builder::builder::arg::Arg::default_value(&v1, v7);
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[2056] as i32 | 32;
    v1.588 = (stack_base)[2052] as i32;
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    memcpy(&v1, &v0, 584);
    v2 = 0x400 | *((&v0 as &char + 584) as &i32);
    v3 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "zero-terminated");
    v4 = clap_builder::builder::arg::Arg::short(&v1, 122);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v4, "zero-terminated");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "line delimiter is NUL, not newline");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("FILE1");
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[2056] as i32 | 1;
    v1.588 = (stack_base)[2052] as i32;
    v5 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("FILE2");
    memcpy(&v1, &v4, 584);
    v1.584 = (stack_base)[752] as i32 | 1;
    v1.588 = (stack_base)[748] as i32;
    v5 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("total");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "total");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "output a summary");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
