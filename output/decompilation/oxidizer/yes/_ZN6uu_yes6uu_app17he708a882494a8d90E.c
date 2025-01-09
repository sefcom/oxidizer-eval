fn uu_yes::uu_app(a0: &struct712) -> u64 {
    let v0: i3504;  // [sp-0xa48], Other Possible Types: struct712, struct437, struct592
    let v1: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x530], Other Possible Types: struct712
    let v3: struct8;  // [bp-0x268], Other Possible Types: i4736, struct592
    let v5: i64;  // rdx
    let v6: i32;  // ecx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v2, "Repeatedly display a line with STRING (or 'y')");
    v1 = uucore::format_usage("{} [STRING]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("STRING");
    v3 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v0, &v3);
    v3 = clap_builder::builder::arg::Arg::action(&v1);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v3);
    memcpy(a0, &v0, 700);
    v6 = *((&v0 as &char + 708) as &i32);
    *((a0 + 700) as &i64) = 549755814016 | *((&v0 as &char + 700) as &i64);
    *((a0 + 708) as &i32) = v6;
    return a0;
}
