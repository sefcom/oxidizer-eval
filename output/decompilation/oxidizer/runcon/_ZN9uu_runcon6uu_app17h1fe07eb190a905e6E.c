fn uu_runcon::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v2: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v3: struct712;  // [bp-0x830]
    let v4: struct712;  // [bp-0x830]
    let v5: u64;  // [bp-0x574]
    let v6: u32;  // [bp-0x56c]
    let v7: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v8: u64;  // [bp-0x2ac]
    let v9: u32;  // [bp-0x2a4]
    let v10: struct640;  // [bp-0x2a0]
    let v13: u64;  // rdx
    let v14: u64;  // rcx

    v7 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v3 = clap_builder::builder::command::Command::version(&v7);
    v7 = clap_builder::builder::command::Command::about(&v3);
    v4 = clap_builder::builder::command::Command::after_help(&v7);
    v1 = uucore::format_usage("{} CONTEXT COMMAND [ARG...]\n{} [-c] [-u USER] [-r ROLE] [-t TYPE] [-l RANGE] COMMAND [ARG...]");
    v7 = clap_builder::builder::command::Command::override_usage(&v4, &v1);
    memcpy(&v4, &v7, 700);
    v5 = 549755814016 | v8;
    v6 = v9;
    v7 = clap_builder::builder::arg::Arg::new("compute");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 99);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "compute");
    v1 = clap_builder::builder::arg::Arg::help(&v7, "Compute process transition context before modifying.");
    v10 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v7 = clap_builder::builder::command::Command::arg(&v4, &v10);
    v2 = clap_builder::builder::arg::Arg::new("user");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 117);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "user");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "USER");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Set user USER in the target security context.");
    v0 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v7 = clap_builder::builder::arg::Arg::new("role");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 114);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "role");
    v1 = clap_builder::builder::arg::Arg::value_name(&v7, "ROLE");
    v7 = clap_builder::builder::arg::Arg::help(&v1, "Set role ROLE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v7, &v0);
    v7 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("type");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 116);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "type");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "TYPE");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "Set type TYPE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v0);
    v2 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v7 = clap_builder::builder::arg::Arg::new("range");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 108);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "range");
    v1 = clap_builder::builder::arg::Arg::value_name(&v7, "RANGE");
    v7 = clap_builder::builder::arg::Arg::help(&v1, "Set range RANGE in the target security context.");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v7, &v0);
    v7 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("ARG");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2);
    v2 = clap_builder::builder::command::Command::arg(&v7, &v1);
    memcpy(a0, &v2, 700);
    v14 = *((&v5 as &char + 4) as &i64);
    *((a0 + 700) as &i32) = v5 as i32 | 32;
    *((a0 + 704) as &u64) = v14;
    return;
}
