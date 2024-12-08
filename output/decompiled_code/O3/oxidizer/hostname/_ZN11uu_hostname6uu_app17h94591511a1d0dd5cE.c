fn uu_hostname::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
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
    let v11: i64;  // [sp-0x818]
    let v12: i64;  // [sp-0x810]
    let v13: i128;  // [sp-0x808]
    let v14: i64;  // [sp-0x800]
    let v15: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v16: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v17: i192;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v19: i64;  // rdx
    let v20: i128;  // xmm0
    let v21: i128;  // xmm1
    let v22: i128;  // xmm2
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i128;  // xmm2

    v15 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v16 = clap_builder::builder::command::Command::version(&v15, "0.0.28");
    v15 = clap_builder::builder::command::Command::about(&v16, "Display or set the system's host name.");
    v17 = uucore::format_usage("{} [OPTION]... [HOSTNAME]");
    v16 = clap_builder::builder::command::Command::override_usage(&v15, &v17);
    memcpy(&v15, &v16, 700);
    v15.700 = 549755814016 | (stack_base)[628] as i64;
    v15.708 = (stack_base)[620] as i32;
    v16 = clap_builder::builder::arg::Arg::new("domain");
    v17 = clap_builder::builder::arg::Arg::short(&v16, 100);
    v16 = clap_builder::builder::arg::Arg::long(&v17, "domain");
    v0 = &g_41d22b;
    v1 = 6;
    v2 = &g_41d231;
    v3 = 10;
    v4 = &g_4144c4;
    v5 = 4;
    v6 = &g_41d23b;
    v7 = 5;
    v13 = v6;
    v14 = v7;
    v11 = v4;
    v12 = v5;
    v9 = v2;
    v10 = v3;
    v8 = v0;
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v16, &v8);
    v16 = clap_builder::builder::arg::Arg::help(&v17, "Display the name of the DNS domain if possible");
    v17 = clap_builder::builder::arg::Arg::action(&v16);
    v16 = clap_builder::builder::command::Command::arg(&v15, &v17);
    v15 = clap_builder::builder::arg::Arg::new("ip-address");
    v17 = clap_builder::builder::arg::Arg::short(&v15, 105);
    v15 = clap_builder::builder::arg::Arg::long(&v17, "ip-address");
    v20 = v0;
    v21 = v2;
    v22 = v4;
    v13 = v6;
    v11 = v22;
    v9 = v21;
    v8 = v20;
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v15, &v8);
    v15 = clap_builder::builder::arg::Arg::help(&v17, "Display the network address(es) of the host");
    v17 = clap_builder::builder::arg::Arg::action(&v15);
    v15 = clap_builder::builder::command::Command::arg(&v16, &v17);
    v16 = clap_builder::builder::arg::Arg::new("fqdn");
    v17 = clap_builder::builder::arg::Arg::short(&v16, 102);
    v16 = clap_builder::builder::arg::Arg::long(&v17, "fqdn");
    v23 = v0;
    v24 = v2;
    v25 = v4;
    v13 = v6;
    v11 = v25;
    v9 = v24;
    v8 = v23;
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v16, &v8);
    v16 = clap_builder::builder::arg::Arg::help(&v17, "Display the FQDN (Fully Qualified Domain Name) (default)");
    v17 = clap_builder::builder::arg::Arg::action(&v16);
    v16 = clap_builder::builder::command::Command::arg(&v15, &v17);
    v15 = clap_builder::builder::arg::Arg::new("short");
    v17 = clap_builder::builder::arg::Arg::short(&v15, 115);
    v15 = clap_builder::builder::arg::Arg::long(&v17, "short");
    v17 = clap_builder::builder::arg::Arg::overrides_with_all(&v15, &v0);
    v15 = clap_builder::builder::arg::Arg::help(&v17, "Display the short hostname (the portion before the first dot) if possible");
    v17 = clap_builder::builder::arg::Arg::action(&v15);
    v15 = clap_builder::builder::command::Command::arg(&v16, &v17);
    v16 = clap_builder::builder::arg::Arg::new("host");
    v8 = struct8 {
        field_0: 2
    };
    v17 = clap_builder::builder::arg::Arg::value_parser(&v16, &v8);
    v16 = clap_builder::builder::arg::Arg::value_hint(&v17, 10);
    clap_builder::builder::command::Command::arg(a0, &v15, &v16);
    return a0;
}
