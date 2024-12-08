fn uu_mkdir::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct712, struct592
    let v3: struct592;  // [sp-0x268], Other Possible Types: struct8, i4736
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v2, "Create the given DIRECTORY(ies) if they do not exist");
    v1 = uucore::format_usage("{} [OPTION]... DIRECTORY...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 549755814016 | (stack_base)[628] as i64;
    v0.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("mode");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 109);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "mode");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "set file mode (not implemented on windows)");
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("parents");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "parents");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "make parent directories as needed");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "parents");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "print a message for each printed directory");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("dirs");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[0x800] as i32 | 1;
    v1.588 = (stack_base)[2044] as i32;
    v3 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 4);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
