fn uu_mkdir::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x78c]
    let v2: i32;  // [sp-0x784]
    let v3: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x538]
    let v5: i32;  // [sp-0x534]
    let v6: i5696;  // [sp-0x530], Other Possible Types: struct712, struct592
    let v7: struct592;  // [sp-0x268], Other Possible Types: struct8, i4736
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Create the given DIRECTORY(ies) if they do not exist");
    v3 = uucore::format_usage("{} [OPTION]... DIRECTORY...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v2 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("mode");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x6d);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "mode");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "set file mode (not implemented on windows)");
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("parents");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x70);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "parents");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "make parent directories as needed");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "parents");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("verbose");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x76);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "verbose");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "print a message for each printed directory");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("dirs");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    memcpy(&v3, &v0, 584);
    v4 = *((&v0 as &char + 584) as &i32) | 1;
    v5 = *((&v0 as &char + 588) as &i32);
    v7 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x4);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
