long long uu_hostname::uu_app::h94591511a1d0dd5c(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h2a9028c1fbf97592(&v15, uucore::util_name::h412db5e565a079f3(), v23);
    clap_builder::builder::command::Command::version::h23f055f178e76c9c(&v18, &v15, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h97de012983a1e343(&v15, &v18, "Display or set the system's host name.", 38);
    uucore::format_usage::h00b69bae12d8ac9c(&v21, "{} [OPTION]... [HOSTNAME]", 25);
    clap_builder::builder::command::Command::override_usage::h374dbb2307165d60(&v18, &v15, &v21);
    memcpy(&v15, &v18, 700);
    v16 = 549755814016 | *((long long *)&v19);
    v17 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::he23b93343651312f(&v18, "domain", 6);
    clap_builder::builder::arg::Arg::short::h81ffce7fc8a2cea9(&v21, &v18, 100);
    clap_builder::builder::arg::Arg::long::h353302d796c68f7b(&v18, &v21, "domain", 6);
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
    clap_builder::builder::arg::Arg::overrides_with_all::he757603092e1fa49(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::help::h93c7b96b94446558(&v18, &v21, "Display the name of the DNS domain if possible", 46);
    clap_builder::builder::arg::Arg::action::h876916e1176ae5f6(&v21, &v18);
    clap_builder::builder::command::Command::arg::h260664a2cb0172d7(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::new::he23b93343651312f(&v15, "ip-address", 10);
    clap_builder::builder::arg::Arg::short::h81ffce7fc8a2cea9(&v21, &v15, 105);
    clap_builder::builder::arg::Arg::long::h353302d796c68f7b(&v15, &v21, "ip-address", 10);
    v24 = *((int128_t *)&v0);
    v25 = *((int128_t *)&v2);
    v26 = *((int128_t *)&v4);
    *((int128_t *)&v13) = *((int128_t *)&v6);
    v11 = v26;
    v9 = v25;
    v8 = v24;
    clap_builder::builder::arg::Arg::overrides_with_all::he757603092e1fa49(&v21, &v15, &v8);
    clap_builder::builder::arg::Arg::help::h93c7b96b94446558(&v15, &v21, "Display the network address(es) of the host", 43);
    clap_builder::builder::arg::Arg::action::h876916e1176ae5f6(&v21, &v15);
    clap_builder::builder::command::Command::arg::h260664a2cb0172d7(&v15, &v18, &v21);
    clap_builder::builder::arg::Arg::new::he23b93343651312f(&v18, "fqdn", 4);
    clap_builder::builder::arg::Arg::short::h81ffce7fc8a2cea9(&v21, &v18, 102);
    clap_builder::builder::arg::Arg::long::h353302d796c68f7b(&v18, &v21, "fqdn", 4);
    v27 = *((int128_t *)&v0);
    v28 = *((int128_t *)&v2);
    v29 = *((int128_t *)&v4);
    *((int128_t *)&v13) = *((int128_t *)&v6);
    v11 = v29;
    v9 = v28;
    v8 = v27;
    clap_builder::builder::arg::Arg::overrides_with_all::he757603092e1fa49(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::help::h93c7b96b94446558(&v18, &v21, "Display the FQDN (Fully Qualified Domain Name) (default)", 56);
    clap_builder::builder::arg::Arg::action::h876916e1176ae5f6(&v21, &v18);
    clap_builder::builder::command::Command::arg::h260664a2cb0172d7(&v18, &v15, &v21);
    clap_builder::builder::arg::Arg::new::he23b93343651312f(&v15, "short", 5);
    clap_builder::builder::arg::Arg::short::h81ffce7fc8a2cea9(&v21, &v15, 115);
    clap_builder::builder::arg::Arg::long::h353302d796c68f7b(&v15, &v21, "short", 5);
    clap_builder::builder::arg::Arg::overrides_with_all::he757603092e1fa49(&v21, &v15, &v0);
    clap_builder::builder::arg::Arg::help::h93c7b96b94446558(&v15, &v21, "Display the short hostname (the portion before the first dot) if possiblesrc/uu/hostname/src/hostname.rs\n", 73);
    clap_builder::builder::arg::Arg::action::h876916e1176ae5f6(&v21, &v15);
    clap_builder::builder::command::Command::arg::h260664a2cb0172d7(&v15, &v18, &v21);
    clap_builder::builder::arg::Arg::new::he23b93343651312f(&v18, "host", 4);
    v8 = 2;
    clap_builder::builder::arg::Arg::value_parser::h10c546c8a81956e8(&v21, &v18, &v8);
    clap_builder::builder::arg::Arg::value_hint::h3b97e7a193a0647d(&v18, &v21, 10);
    clap_builder::builder::command::Command::arg::h260664a2cb0172d7(a0, &v15, &v18);
    return a0;
}
