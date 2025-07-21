fn uu_rmdir::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: i8;  // [bp-0x804]
    let v3: u64;  // [bp-0x794]
    let v4: u32;  // [bp-0x78c]
    let v5: u8;  // [bp-0x788]
    let v6: u32;  // [bp-0x540]
    let v7: u32;  // [bp-0x53c]
    let v8: u8;  // [bp-0x538]
    let v9: u64;  // [bp-0x27c]
    let v10: u32;  // [bp-0x274]
    let v11: u64;  // [bp-0x270]
    let v14: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v0);
    clap_builder::builder::command::Command::about(&v0, &v8);
    uucore::format_usage(&v5, "{} [OPTION]... DIRECTORY...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "ignore-fail-on-non-empty");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "ignore-fail-on-non-empty");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "ignore each failure that is solely because a directory is non-empty");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "parents");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "parents");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "remove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b a");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "verbose");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "verbose");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "output a diagnostic for every directory processed");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "dirs");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = v1 | 1;
    v7 = *(&v2 as &i32);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return a0;
}
