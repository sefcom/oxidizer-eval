fn uu_tsort::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0x7f8]
    let v1: u32;  // [bp-0x5b0]
    let v2: u32;  // [bp-0x5ac]
    let v3: u64;  // [bp-0x53c]
    let v4: u32;  // [bp-0x534]
    let v5: u8;  // [bp-0x530]
    let v6: u32;  // [bp-0x2e8]
    let v7: u32;  // [bp-0x2e4]
    let v8: struct437;  // [bp-0x2e0]
    let v9: u64;  // [bp-0x24]
    let v10: u32;  // [bp-0x1c]
    let v13: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    clap_builder::builder::command::Command::version(&v0, &v8, "0.0.28");
    uucore::format_usage(&v5, "{} [OPTIONS] FILE");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about(&v0, &v8, "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead.");
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    clap_builder::builder::arg::Arg::new(&v0, "file");
    clap_builder::builder::arg::Arg::default_value(&v5, &v0);
    memcpy(&v0, &v5, 584);
    v1 = v6 | 4;
    v2 = v7;
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return a0;
}
