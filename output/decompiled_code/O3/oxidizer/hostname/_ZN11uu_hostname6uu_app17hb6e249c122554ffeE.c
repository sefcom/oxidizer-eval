fn uu_hostname::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x878]
    let v1: i64;  // [sp-0x870]
    let v2: i64;  // [sp-0x868]
    let v3: i64;  // [sp-0x860]
    let v4: i64;  // [sp-0x858]
    let v5: i64;  // [sp-0x850]
    let v6: i64;  // [sp-0x848]
    let v7: i64;  // [sp-0x840]
    let v8: i128;  // [bp-0x838], Other Possible Types: struct8
    let v9: i128;  // [sp-0x828]
    let v10: i64;  // [sp-0x820]
    let v11: i128;  // [sp-0x818]
    let v12: i64;  // [sp-0x810]
    let v13: i64;  // [sp-0x808]
    let v14: i64;  // [sp-0x800]
    let v15: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v16: i64;  // [sp-0x53c]
    let v17: i32;  // [sp-0x534]
    let v18: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v19: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v21: i64;  // rdx
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v27: i128;  // xmm2

    v15 = clap_builder::builder::command::Command::new(uucore::util_name(), v21);
    v18 = clap_builder::builder::command::Command::version(&v15, "0.0.28");
    v15 = clap_builder::builder::command::Command::about(&v18, "Display or set the system's host name.");
    v19 = uucore::format_usage("{} [OPTION]... [HOSTNAME]");
    v18 = clap_builder::builder::command::Command::override_usage(&v15, &v19);
    memcpy(&v15, &v18, 700);
    v16 = 549755814016 | *((&v18 as &char + 700) as &i64);
    v17 = *((&v18 as &char + 708) as &i32);
    v18 = clap_builder::builder::arg::Arg::new("domain");
    v19 = clap_builder::builder::arg::Arg::short(&v18, 0x64);
    v18 = clap_builder::builder::arg::Arg::long(&v19, "domain");
    v0 = &g_41d153;
    v1 = 6;
    v2 = &g_41d159;
    v3 = 10;
    v4 = &g_4143e8;
    v5 = 4;
    v6 = &g_41d163;
    v7 = 5;
    v13 = v6;
    v14 = v7;
    v11 = v4;
    v12 = v5;
    v9 = v2;
    v10 = v3;
    v8 = v0;
    v19 = clap_builder::builder::arg::Arg::overrides_with_all(&v18, &v8);
    v18 = clap_builder::builder::arg::Arg::help(&v19, "Display the name of the DNS domain if possible");
    v19 = clap_builder::builder::arg::Arg::action(&v18);
    v18 = clap_builder::builder::command::Command::arg(&v15, &v19);
    v15 = clap_builder::builder::arg::Arg::new("ip-address");
    v19 = clap_builder::builder::arg::Arg::short(&v15, 0x69);
    v15 = clap_builder::builder::arg::Arg::long(&v19, "ip-address");
    v22 = v0;
    v23 = v2;
    v24 = v4;
    v13 = v6;
    v11 = v24;
    v9 = v23;
    v8 = v22;
    v19 = clap_builder::builder::arg::Arg::overrides_with_all(&v15, &v8);
    v15 = clap_builder::builder::arg::Arg::help(&v19, "Display the network address(es) of the host");
    v19 = clap_builder::builder::arg::Arg::action(&v15);
    v15 = clap_builder::builder::command::Command::arg(&v18, &v19);
    v18 = clap_builder::builder::arg::Arg::new("fqdn");
    v19 = clap_builder::builder::arg::Arg::short(&v18, 0x66);
    v18 = clap_builder::builder::arg::Arg::long(&v19, "fqdn");
    v25 = v0;
    v26 = v2;
    v27 = v4;
    v13 = v6;
    v11 = v27;
    v9 = v26;
    v8 = v25;
    v19 = clap_builder::builder::arg::Arg::overrides_with_all(&v18, &v8);
    v18 = clap_builder::builder::arg::Arg::help(&v19, "Display the FQDN (Fully Qualified Domain Name) (default)");
    v19 = clap_builder::builder::arg::Arg::action(&v18);
    v18 = clap_builder::builder::command::Command::arg(&v15, &v19);
    v15 = clap_builder::builder::arg::Arg::new("short");
    v19 = clap_builder::builder::arg::Arg::short(&v15, 0x73);
    v15 = clap_builder::builder::arg::Arg::long(&v19, "short");
    v19 = clap_builder::builder::arg::Arg::overrides_with_all(&v15, &v0);
    v15 = clap_builder::builder::arg::Arg::help(&v19, "Display the short hostname (the portion before the first dot) if possible");
    v19 = clap_builder::builder::arg::Arg::action(&v15);
    v15 = clap_builder::builder::command::Command::arg(&v18, &v19);
    v18 = clap_builder::builder::arg::Arg::new("host");
    v8 = struct8 {
        field_0: 2
    };
    v19 = clap_builder::builder::arg::Arg::value_parser(&v18, &v8);
    v18 = clap_builder::builder::arg::Arg::value_hint(&v19, 0xa);
    clap_builder::builder::command::Command::arg(a0, &v15, &v18);
    return a0;
}
