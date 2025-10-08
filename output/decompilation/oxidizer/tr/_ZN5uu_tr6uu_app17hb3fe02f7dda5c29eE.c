fn uu_tr::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: u32;  // [bp-0x574]
    let v3: u64;  // [bp-0x570]
    let v4: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v5: u32;  // [bp-0x2ac]
    let v6: u64;  // [bp-0x2a8]
    let v7: struct640;  // [bp-0x2a0], Other Possible Types: u64
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v0 = uucore::format_usage("{} [OPTION]... SET1 [SET2]");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 160 | v5;
    v3 = 128 | v6;
    v4 = clap_builder::builder::arg::Arg::new("complement");
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v4);
    v4 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "complement");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "use the complement of SET1");
    v0 = clap_builder::builder::arg::Arg::action(&v4);
    v7 = clap_builder::builder::arg::Arg::overrides_with(&v0, "complement");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("delete");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 100);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "delete");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "delete characters in SET1, do not translate");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "delete");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("squeeze-repeats");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "squeeze-repeats");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v4, "squeeze-repeats");
    v4 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("truncate-set1");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "truncate-set1");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 116);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "first truncate SET1 to length of SET2");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "truncate-set1");
    v1 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("sets");
    v0 = clap_builder::builder::arg::Arg::num_args(&v4);
    v7 = 2;
    v4 = clap_builder::builder::arg::Arg::value_parser(&v0, &v7);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return;
}
