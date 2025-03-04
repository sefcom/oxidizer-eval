fn uu_rmdir::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa50], Other Possible Types: struct712, struct437
    let v1: i64;  // [sp-0x794]
    let v2: i32;  // [sp-0x78c]
    let v3: struct592;  // [sp-0x788], Other Possible Types: struct24
    let v4: i32;  // [sp-0x540]
    let v5: i32;  // [sp-0x53c]
    let v6: struct712;  // [sp-0x538], Other Possible Types: struct592
    let v7: struct592;  // [sp-0x270], Other Possible Types: struct8
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v6);
    v3 = uucore::format_usage("{} [OPTION]... DIRECTORY...");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 549755814016 | *((&v6.field_0 as &char + 700) as &i64);
    v2 = *((&v6.field_0 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("ignore-fail-on-non-empty");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "ignore-fail-on-non-empty");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "ignore each failure that is solely because a directory is non-empty");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("parents");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x70);
    v0 = clap_builder::builder::arg::Arg::long(&v3, "parents");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "remove DIRECTORY and its ancestors; e.g.,
                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b a");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("verbose");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x76);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "verbose");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "output a diagnostic for every directory processed");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("dirs");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    memcpy(&v3, &v0, 584);
    v4 = *((&v0.field_0 as &char + 584) as &i32) | 1;
    v5 = *((&v0.field_0 as &char + 588) as &i32);
    v7 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
