fn uu_tr::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u8;  // [bp-0x7f8]
    let v2: u32;  // [bp-0x53c]
    let v3: u64;  // [bp-0x538]
    let v4: struct437;  // [bp-0x530]
    let v5: u32;  // [bp-0x274]
    let v6: u64;  // [bp-0x270]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v1, &v4);
    clap_builder::builder::command::Command::about(&v4, &v1);
    uucore::format_usage(&v0, "{} [OPTION]... SET1 [SET2]");
    clap_builder::builder::command::Command::override_usage(&v1, &v4, &v0);
    memcpy(&v4, &v1, 700);
    v5 = 160 | v2;
    v6 = 128 | v3;
    clap_builder::builder::arg::Arg::new(&v1, "complement");
    clap_builder::builder::arg::Arg::visible_short_alias(&v0, &v1, 67);
    clap_builder::builder::arg::Arg::short(&v1, &v0, 99);
    clap_builder::builder::arg::Arg::long(&v0, &v1, "complement");
    clap_builder::builder::arg::Arg::help(&v1, &v0, "use the complement of SET1");
    clap_builder::builder::arg::Arg::action(&v0, &v1);
    clap_builder::builder::arg::Arg::overrides_with(&v7, &v0, "complement");
    clap_builder::builder::command::Command::arg(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new(&v4, "delete");
    clap_builder::builder::arg::Arg::short(&v0, &v4, 100);
    clap_builder::builder::arg::Arg::long(&v4, &v0, "delete");
    clap_builder::builder::arg::Arg::help(&v0, &v4, "delete characters in SET1, do not translate");
    clap_builder::builder::arg::Arg::action(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v4, "delete");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new(&v1, "squeeze-repeats");
    clap_builder::builder::arg::Arg::long(&v0, &v1, "squeeze-repeats");
    clap_builder::builder::arg::Arg::short(&v1, &v0, 115);
    clap_builder::builder::arg::Arg::help(&v0, &v1, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character");
    clap_builder::builder::arg::Arg::action(&v1, &v0);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v1, "squeeze-repeats");
    clap_builder::builder::command::Command::arg(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new(&v4, "truncate-set1");
    clap_builder::builder::arg::Arg::long(&v0, &v4, "truncate-set1");
    clap_builder::builder::arg::Arg::short(&v4, &v0, 116);
    clap_builder::builder::arg::Arg::help(&v0, &v4, "first truncate SET1 to length of SET2");
    clap_builder::builder::arg::Arg::action(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with(&v0, &v4, "truncate-set1");
    clap_builder::builder::command::Command::arg(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new(&v1, "sets");
    clap_builder::builder::arg::Arg::num_args(&v0, &v1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v1, &v0, &v7);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
