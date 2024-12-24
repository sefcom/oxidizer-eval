fn uu_link::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct8;  // [bp-0x818]
    let v1: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712
    let v2: i3496;  // [sp-0x538], Other Possible Types: struct437, struct712
    let v3: i4736;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x28]
    let v5: i32;  // [sp-0x24]
    let v7: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v1 = clap_builder::builder::command::Command::version(&v2, v7);
    v2 = clap_builder::builder::command::Command::about(&v1);
    v3 = uucore::format_usage("{} FILE1 FILE2");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v3);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814016 | (stack_base)[1348] as i64;
    v2.708 = (stack_base)[1340] as i32;
    v1 = clap_builder::builder::arg::Arg::new();
    memcpy(&v3, &v1, 584);
    v4 = *((&v1 as &char + 584) as &i32) | 5;
    v5 = *((&v1 as &char + 588) as &i32);
    v1 = clap_builder::builder::arg::Arg::num_args(&v3);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v0 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
