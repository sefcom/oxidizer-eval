fn uu_hostname::uu_app(a0: i64) -> u64 {
    let v0: struct64;  // [bp-0x888], Other Possible Types: u64
    let v1: u64;  // [bp-0x848]
    let v2: struct437;  // [bp-0x840], Other Possible Types: struct712, struct640
    let v3: u64;  // [bp-0x584]
    let v4: u32;  // [bp-0x57c]
    let v5: struct24;  // [bp-0x578], Other Possible Types: struct640
    let v6: struct712;  // [bp-0x2f8], Other Possible Types: struct640
    let v7: struct712;  // [bp-0x2f8]
    let v8: u64;  // [bp-0x3c]
    let v11: u64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v6 = clap_builder::builder::command::Command::version(&v2);
    v2 = clap_builder::builder::command::Command::about(&v6);
    v5 = uucore::format_usage("{} [OPTION]... [HOSTNAME]");
    v7 = clap_builder::builder::command::Command::override_usage(&v2, &v5);
    memcpy(&v2, &v7, 700);
    v3 = 549755814016 | v8;
    v4 = v8;
    v6 = clap_builder::builder::arg::Arg::new("domain");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 100);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "domain");
    v0 = struct64 {
        field_0: "domain"
        field_16: "ip-address"
        field_32: "fqdn"
        field_48: "short"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::help(&v5, "Display the name of the DNS domain if possible");
    v5 = clap_builder::builder::arg::Arg::action(&v6);
    v6 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("ip-address");
    v5 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v5, "ip-address");
    v0 = struct64 {
        field_0: "domain"
        field_16: "ip-address"
        field_32: "fqdn"
        field_48: "short"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::help(&v5, "Display the network address(es) of the host");
    v5 = clap_builder::builder::arg::Arg::action(&v2);
    v2 = clap_builder::builder::command::Command::arg(&v6, &v5);
    v6 = clap_builder::builder::arg::Arg::new("fqdn");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 102);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "fqdn");
    v0 = struct64 {
        field_0: "domain"
        field_16: "ip-address"
        field_32: "fqdn"
        field_48: "short"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::help(&v5, "Display the FQDN (Fully Qualified Domain Name) (default)");
    v5 = clap_builder::builder::arg::Arg::action(&v6);
    v6 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("short");
    v5 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v5, "short");
    v0 = struct64 {
        field_0: "domain"
        field_16: "ip-address"
        field_32: "fqdn"
        field_48: "short"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::help(&v5, "Display the short hostname (the portion before the first dot) if possible");
    v5 = clap_builder::builder::arg::Arg::action(&v2);
    v2 = clap_builder::builder::command::Command::arg(&v6, &v5);
    v6 = clap_builder::builder::arg::Arg::new("host");
    v0 = 2;
    v5 = clap_builder::builder::arg::Arg::value_parser(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v5);
    clap_builder::builder::command::Command::arg(v1, &v2, &v6);
    return a0;
}
