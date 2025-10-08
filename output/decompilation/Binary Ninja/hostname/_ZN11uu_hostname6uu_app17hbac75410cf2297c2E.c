
  int64_t uu_hostname::uu_app::hbac75410cf2297c2(int64_t arg1)

{
    void var_840;
    clap_builder::builder::command::Command::new::hc325de5984117be7(&var_840, 
        uucore::util_name::h074417a1e6395129());
    void var_2f8;
    clap_builder::builder::command::Command::version::h62e7302f22f51a46(&var_2f8, &var_840);
    clap_builder::builder::command::Command::about::h2ddc4d412944c7c8(&var_840, &var_2f8);
    void var_578;
    uucore::format_usage::he053403a896311ed(&var_578, "{} [OPTION]... [HOSTNAME]Display…", 0x19);
    clap_builder::builder::command::Command::override_usage::h51f810bd2c042f7a(&var_2f8, &var_840, 
        &var_578);
    memcpy(&var_840, &var_2f8, 0x2bc);
    int64_t var_3c;
    int64_t var_584 = 0x8000000080 | var_3c;
    int32_t var_34;
    int32_t var_57c = var_34;
    clap_builder::builder::arg::Arg::new::had866788d0e1e168(&var_2f8, 
        "domainip-addressshort(uutils cor…");
    clap_builder::builder::arg::Arg::short::h5cd12524fbf0ad75(&var_578, &var_2f8, 0x64);
    clap_builder::builder::arg::Arg::long::hc870666ef06e1aa2(&var_2f8, &var_578, 
        "domainip-addressshort(uutils cor…");
    char const* const var_888 = "domainip-addressshort(uutils cor…";
    int64_t var_880 = 6;
    char const* const var_878 = "ip-addressshort(uutils coreutils…";
    int64_t var_870 = 0xa;
    char const* const var_868 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    int64_t var_860 = 4;
    char const* const var_858 = "short(uutils coreutils) 0.0.30Di…";
    int64_t var_850 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h7fed314d5946addb(&var_578, &var_2f8, 
        &var_888);
    clap_builder::builder::arg::Arg::help::hb2dd650e16f5a768(&var_2f8, &var_578, 
        "Display the name of the DNS doma…", 0x2e);
    clap_builder::builder::arg::Arg::action::hd67184c060da1a9d(&var_578, &var_2f8);
    clap_builder::builder::command::Command::arg::h34a316cb67597042(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::had866788d0e1e168(&var_840, 
        "ip-addressshort(uutils coreutils…");
    clap_builder::builder::arg::Arg::short::h5cd12524fbf0ad75(&var_578, &var_840, 0x69);
    clap_builder::builder::arg::Arg::long::hc870666ef06e1aa2(&var_840, &var_578, 
        "ip-addressshort(uutils coreutils…");
    var_888 = "domainip-addressshort(uutils cor…";
    int64_t var_880_1 = 6;
    char const* const var_878_1 = "ip-addressshort(uutils coreutils…";
    int64_t var_870_1 = 0xa;
    char const* const var_868_1 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    int64_t var_860_1 = 4;
    char const* const var_858_1 = "short(uutils coreutils) 0.0.30Di…";
    int64_t var_850_1 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h7fed314d5946addb(&var_578, &var_840, 
        &var_888);
    clap_builder::builder::arg::Arg::help::hb2dd650e16f5a768(&var_840, &var_578, 
        "Display the network address(es) …", 0x2b);
    clap_builder::builder::arg::Arg::action::hd67184c060da1a9d(&var_578, &var_840);
    clap_builder::builder::command::Command::arg::h34a316cb67597042(&var_840, &var_2f8, &var_578);
    clap_builder::builder::arg::Arg::new::had866788d0e1e168(&var_2f8, 
        "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::short::h5cd12524fbf0ad75(&var_578, &var_2f8, 0x66);
    clap_builder::builder::arg::Arg::long::hc870666ef06e1aa2(&var_2f8, &var_578, 
        "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…");
    var_888 = "domainip-addressshort(uutils cor…";
    int64_t var_880_2 = 6;
    char const* const var_878_2 = "ip-addressshort(uutils coreutils…";
    int64_t var_870_2 = 0xa;
    char const* const var_868_2 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    int64_t var_860_2 = 4;
    char const* const var_858_2 = "short(uutils coreutils) 0.0.30Di…";
    int64_t var_850_2 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h7fed314d5946addb(&var_578, &var_2f8, 
        &var_888);
    clap_builder::builder::arg::Arg::help::hb2dd650e16f5a768(&var_2f8, &var_578, 
        "Display the FQDN (Fully Qualifie…", 0x38);
    clap_builder::builder::arg::Arg::action::hd67184c060da1a9d(&var_578, &var_2f8);
    clap_builder::builder::command::Command::arg::h34a316cb67597042(&var_2f8, &var_840, &var_578);
    clap_builder::builder::arg::Arg::new::had866788d0e1e168(&var_840, 
        "short(uutils coreutils) 0.0.30Di…");
    clap_builder::builder::arg::Arg::short::h5cd12524fbf0ad75(&var_578, &var_840, 0x73);
    clap_builder::builder::arg::Arg::long::hc870666ef06e1aa2(&var_840, &var_578, 
        "short(uutils coreutils) 0.0.30Di…");
    var_888 = "domainip-addressshort(uutils cor…";
    int64_t var_880_3 = 6;
    char const* const var_878_3 = "ip-addressshort(uutils coreutils…";
    int64_t var_870_3 = 0xa;
    char const* const var_868_3 = "fqdn -> \x1b[2mAnsi -- \x1b[8mhe…";
    int64_t var_860_3 = 4;
    char const* const var_858_3 = "short(uutils coreutils) 0.0.30Di…";
    int64_t var_850_3 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h7fed314d5946addb(&var_578, &var_840, 
        &var_888);
    clap_builder::builder::arg::Arg::help::hb2dd650e16f5a768(&var_840, &var_578, 
        "Display the short hostname (the …", 0x49);
    clap_builder::builder::arg::Arg::action::hd67184c060da1a9d(&var_578, &var_840);
    clap_builder::builder::command::Command::arg::h34a316cb67597042(&var_840, &var_2f8, &var_578);
    clap_builder::builder::arg::Arg::new::had866788d0e1e168(&var_2f8, &data_418294[0xc]);
    var_888 = 2;
    clap_builder::builder::arg::Arg::value_parser::h492cc0e9ed69fc00(&var_578, &var_2f8, &var_888);
    clap_builder::builder::arg::Arg::value_hint::h1b62cfc3855c9ad3(&var_2f8, &var_578);
    clap_builder::builder::command::Command::arg::h34a316cb67597042(arg1, &var_840, &var_2f8);
    return arg1;
}
