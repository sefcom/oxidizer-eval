fn uu_tr::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592, struct8
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, v5);
    v2 = clap_builder::builder::command::Command::about(&v1);
    v0 = uucore::format_usage("{} [OPTION]... SET1 [SET2]");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814048 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("complement");
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v1, 67);
    v1 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "complement");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use the complement of SET1");
    v0 = clap_builder::builder::arg::Arg::action(&v1);
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "complement");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("delete");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 100);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "delete");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "delete characters in SET1, do not translate");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "delete");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("squeeze-repeats");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "squeeze-repeats");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "squeeze-repeats");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("truncate-set1");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "truncate-set1");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 116);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "first truncate SET1 to length of SET2");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "truncate-set1");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("sets");
    v0 = clap_builder::builder::arg::Arg::num_args(&v1);
    v3 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
