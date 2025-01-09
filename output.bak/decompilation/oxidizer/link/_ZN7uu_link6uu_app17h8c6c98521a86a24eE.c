fn uu_link::uu_app(a0: &struct712) -> u64 {
    let v0: struct8;  // [bp-0x818]
    let v1: i5696;  // [sp-0x800], Other Possible Types: struct592, struct712
    let v2: i5696;  // [sp-0x538], Other Possible Types: struct437, struct712
    let v3: i64;  // [sp-0x27c]
    let v4: i32;  // [sp-0x274]
    let v5: i4736;  // [sp-0x270], Other Possible Types: struct24, struct592
    let v6: i32;  // [sp-0x28]
    let v7: i32;  // [sp-0x24]
    let v9: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v1 = clap_builder::builder::command::Command::version(&v2);
    v2 = clap_builder::builder::command::Command::about(&v1);
    v5 = uucore::format_usage("{} FILE1 FILE2");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v5);
    memcpy(&v2, &v1, 700);
    v3 = 549755814016 | *((&v1 as &char + 700) as &i64);
    v4 = *((&v1 as &char + 708) as &i32);
    v1 = clap_builder::builder::arg::Arg::new();
    memcpy(&v5, &v1, 584);
    v6 = *((&v1 as &char + 584) as &i32) | 5;
    v7 = *((&v1 as &char + 588) as &i32);
    v1 = clap_builder::builder::arg::Arg::num_args(&v5);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v0 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
