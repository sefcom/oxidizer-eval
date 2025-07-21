fn uu_hostname::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0x878]
    let v1: u64;  // [bp-0x870]
    let v2: u64;  // [bp-0x868]
    let v3: u64;  // [bp-0x860]
    let v4: u64;  // [bp-0x858]
    let v5: u64;  // [bp-0x850]
    let v6: u64;  // [bp-0x848]
    let v7: u64;  // [bp-0x840]
    let v8: struct16;  // [bp-0x838], Other Possible Types: u128
    let v9: u128;  // [bp-0x838]
    let v10: u64;  // [bp-0x828]
    let v11: u128;  // [bp-0x828]
    let v12: u64;  // [bp-0x820]
    let v13: u64;  // [bp-0x818]
    let v14: u128;  // [bp-0x818]
    let v15: u64;  // [bp-0x810]
    let v16: u128;  // [bp-0x808]
    let v17: u128;  // [bp-0x808]
    let v18: u64;  // [bp-0x800]
    let v19: struct437;  // [bp-0x7f8]
    let v20: u64;  // [bp-0x53c]
    let v21: u32;  // [bp-0x534]
    let v22: u8;  // [bp-0x530]
    let v23: u64;  // [bp-0x274]
    let v24: u32;  // [bp-0x26c]
    let v25: u8;  // [bp-0x268]
    let v28: u64;  // rdx
    let v29: u128;  // xmm0
    let v30: u128;  // xmm1
    let v31: u128;  // xmm2
    let v32: u128;  // xmm0
    let v33: u128;  // xmm1
    let v34: u128;  // xmm2

    v19 = clap_builder::builder::command::Command::new(uucore::util_name(), v28);
    clap_builder::builder::command::Command::version(&v22, &v19, "0.0.28");
    clap_builder::builder::command::Command::about(&v19, &v22, "Display or set the system's host name.");
    uucore::format_usage(&v25, "{} [OPTION]... [HOSTNAME]");
    clap_builder::builder::command::Command::override_usage(&v22, &v19, &v25);
    memcpy(&v19, &v22, 700);
    v20 = 549755814016 | v23;
    v21 = v24;
    clap_builder::builder::arg::Arg::new(&v22, "domain");
    clap_builder::builder::arg::Arg::short(&v25, &v22, 100);
    clap_builder::builder::arg::Arg::long(&v22, &v25, "domain");
    v0 = &g_41d153;
    v1 = 6;
    v2 = &g_41d159;
    v3 = 10;
    v4 = &g_4143e8;
    v5 = 4;
    v6 = &g_41d163;
    v7 = 5;
    v16 = v6;
    v18 = 5;
    v13 = v4;
    v15 = 4;
    v10 = v2;
    v12 = 10;
    v8 = *(&v0 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v25, &v22, &v8);
    clap_builder::builder::arg::Arg::help(&v22, &v25, "Display the name of the DNS domain if possible");
    clap_builder::builder::arg::Arg::action(&v25, &v22);
    clap_builder::builder::command::Command::arg(&v22, &v19, &v25);
    clap_builder::builder::arg::Arg::new(&v19, "ip-address");
    clap_builder::builder::arg::Arg::short(&v25, &v19, 105);
    clap_builder::builder::arg::Arg::long(&v19, &v25, "ip-address");
    v29 = *(&v0 as &i128);
    v30 = *(&v2 as &i128);
    v31 = *(&v4 as &i128);
    v17 = *(&v6 as &i128);
    v14 = v31;
    v11 = v30;
    v8 = v29;
    clap_builder::builder::arg::Arg::overrides_with_all(&v25, &v19, &v8);
    clap_builder::builder::arg::Arg::help(&v19, &v25, "Display the network address(es) of the host");
    clap_builder::builder::arg::Arg::action(&v25, &v19);
    clap_builder::builder::command::Command::arg(&v19, &v22, &v25);
    clap_builder::builder::arg::Arg::new(&v22, "fqdn");
    clap_builder::builder::arg::Arg::short(&v25, &v22, 102);
    clap_builder::builder::arg::Arg::long(&v22, &v25, "fqdn");
    v32 = *(&v0 as &i128);
    v33 = *(&v2 as &i128);
    v34 = *(&v4 as &i128);
    v16 = *(&v6 as &i128);
    v13 = v34;
    v10 = v33;
    v8 = v32;
    clap_builder::builder::arg::Arg::overrides_with_all(&v25, &v22, &v8);
    clap_builder::builder::arg::Arg::help(&v22, &v25, "Display the FQDN (Fully Qualified Domain Name) (default)");
    clap_builder::builder::arg::Arg::action(&v25, &v22);
    clap_builder::builder::command::Command::arg(&v22, &v19, &v25);
    clap_builder::builder::arg::Arg::new(&v19, "short");
    clap_builder::builder::arg::Arg::short(&v25, &v19, 115);
    clap_builder::builder::arg::Arg::long(&v19, &v25, "short");
    clap_builder::builder::arg::Arg::overrides_with_all(&v25, &v19, &v0);
    clap_builder::builder::arg::Arg::help(&v19, &v25, "Display the short hostname (the portion before the first dot) if possible");
    clap_builder::builder::arg::Arg::action(&v25, &v19);
    clap_builder::builder::command::Command::arg(&v19, &v22, &v25);
    clap_builder::builder::arg::Arg::new(&v22, "host");
    v8 = 2;
    v8 = struct16 {
        field_0: v9 & 0xffffffffffffffff0000000000000000 | 2
    };
    clap_builder::builder::arg::Arg::value_parser(&v25, &v22, &v8);
    clap_builder::builder::arg::Arg::value_hint(&v22, &v25, 10);
    clap_builder::builder::command::Command::arg(a0, &v19, &v22);
    return a0;
}
