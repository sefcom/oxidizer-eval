fn uu_tr::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: i32;  // [sp-0x274]
    let v4: i64;  // [sp-0x270]
    let v5: struct592;  // [sp-0x268], Other Possible Types: i4736, struct8
    let v7: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v1 = clap_builder::builder::command::Command::version(&v2);
    v2 = clap_builder::builder::command::Command::about(&v1);
    v0 = uucore::format_usage("{} [OPTION]... SET1 [SET2]");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    memcpy(&v2, &v1, 700);
    v3 = 160 | *((&v1 as &char + 700) as &i32);
    v4 = 128 | *((&v1 as &char + 704) as &i64);
    v1 = clap_builder::builder::arg::Arg::new("complement");
    v0 = clap_builder::builder::arg::Arg::visible_short_alias(&v1, 0x43);
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x63);
    v0 = clap_builder::builder::arg::Arg::long(&v1, "complement");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use the complement of SET1");
    v0 = clap_builder::builder::arg::Arg::action(&v1);
    v5 = clap_builder::builder::arg::Arg::overrides_with(&v0, "complement");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("delete");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 0x64);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "delete");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "delete characters in SET1, do not translate");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "delete");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("squeeze-repeats");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "squeeze-repeats");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character");
    v1 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v1, "squeeze-repeats");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("truncate-set1");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "truncate-set1");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "first truncate SET1 to length of SET2");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v2, "truncate-set1");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("sets");
    v0 = clap_builder::builder::arg::Arg::num_args(&v1);
    v5 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v5);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
