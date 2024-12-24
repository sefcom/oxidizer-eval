fn uu_rmdir::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v3: i4736;  // [sp-0x270], Other Possible Types: struct592, struct8
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, v5);
    v0 = clap_builder::builder::command::Command::about(&v2);
    v1 = uucore::format_usage("{} [OPTION]... DIRECTORY...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 549755814016 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v2 = clap_builder::builder::arg::Arg::new("ignore-fail-on-non-empty");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "ignore-fail-on-non-empty");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "ignore each failure that is solely because a directory is non-empty");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("parents");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "parents");
    v1 = clap_builder::builder::arg::Arg::help(&v0, &g_41bf8a, 108);
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "output a diagnostic for every directory processed");
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("dirs");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[2056] as i32 | 1;
    v1.588 = (stack_base)[2052] as i32;
    v3 = struct8 {
        field_0: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
