long long uu_hostname::uu_app::hb6e249c122554ffe(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x878], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x870]
    unsigned long v2;  // [sp-0x868], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x860]
    unsigned long v4;  // [sp-0x858], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x850]
    unsigned long v6;  // [sp-0x848], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x840]
    int v8;  // [bp-0x838], Other Possible Types: unsigned long long
    int v9;  // [sp-0x828], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x820]
    int v11;  // [sp-0x818], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x810]
    int v13;  // [sp-0x808], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x800]
    char v15;  // [bp-0x7f8]
    unsigned long long v16;  // [sp-0x53c]
    unsigned int v17;  // [sp-0x534]
    char v18;  // [bp-0x530]
    char v19;  // [bp-0x274]
    char v20;  // [bp-0x26c]
    char v21;  // [bp-0x268]
    unsigned long long v23;  // rdx
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // xmm2

    clap_builder::builder::command::Command::new::hb139fd9343407bd7(&v15, uucore::util_name::h60d842bf27b05e82(), v23);
    clap_builder::builder::command::Command::version::hff495f94e3e0025a(&v18, &v15, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h43dcb4d052bb4fe4(&v15, &v18, "Display or set the system's host name.", 38);
    uucore::format_usage::h76fcb2d15fbabc58(&v21, "{} [OPTION]... [HOSTNAME]", 25);
    clap_builder::builder::command::Command::override_usage::h53f06f4b08c7f7b6(&v18, &v15, &v21);
    memcpy(&v15, &v18, 700);
    v16 = 549755814016 | *((long long *)&v19);
    v17 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&v18, "domain", 6);
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&v21, &v18, 100);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&v18, &v21, "domain", 6);
    v0 = "domain";
    v1 = 6;
    v2 = "ip-address";
    v3 = 10;
    v4 = "fqdn";
    v5 = 4;
    v6 = "short";
    v7 = 5;
    v13 = v6;
    v14 = v7;
    v11 = v4;
    v12 = v5;
    v9 = v2;
    v10 = v3;
    *((int128_t *)&v8) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&v18, &v21, "Display the name of the DNS domain if possible", 46);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&v21, &v18);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&v15, "ip-address", 10);
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&v21, &v15, 105);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&v15, &v21, "ip-address", 10);
    v24 = *((int128_t *)&v0);
    v25 = *((int128_t *)&v2);
    v26 = *((int128_t *)&v4);
    *((int128_t *)&v13) = *((int128_t *)&v6);
    v11 = v26;
    v9 = v25;
    v8 = v24;
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&v21, &v15, &v8);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&v15, &v21, "Display the network address(es) of the host", 43);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&v21, &v15);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&v15, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&v18, "fqdn", 4);
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&v21, &v18, 102);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&v18, &v21, "fqdn", 4);
    v27 = *((int128_t *)&v0);
    v28 = *((int128_t *)&v2);
    v29 = *((int128_t *)&v4);
    *((int128_t *)&v13) = *((int128_t *)&v6);
    v11 = v29;
    v9 = v28;
    v8 = v27;
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&v18, &v21, "Display the FQDN (Fully Qualified Domain Name) (default)", 56);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&v21, &v18);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&v15, "short", 5);
    clap_builder::builder::arg::Arg::short::hf93463845ba76758(&v21, &v15, 115);
    clap_builder::builder::arg::Arg::long::h7bd2c59b08dee21f(&v15, &v21, "short", 5);
    clap_builder::builder::arg::Arg::overrides_with_all::hce02e38c968d4dfe(&v21, &v15, &v0);
    clap_builder::builder::arg::Arg::help::hb1a759973735fbf5(&v15, &v21, "Display the short hostname (the portion before the first dot) if possible", 73);
    clap_builder::builder::arg::Arg::action::he4f9f129db73dc7e(&v21, &v15);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(&v15, &v18, &v21);
    clap_builder::builder::arg::Arg::new::h8a0253a43e6cd8df(&v18, "host", 4);
    v8 = 2;
    clap_builder::builder::arg::Arg::value_parser::h416a268b4c9bffcb(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::value_hint::h058a03a9ff0f6c99(&v18, &v21, 10);
    clap_builder::builder::command::Command::arg::had519225845c2ee5(a0, &v15, &v18);
    return a0;
}
