long long uu_printf::uu_app::h3312da031e5ff129(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    char v1;  // [bp-0x544], Other Possible Types: unsigned long long
    char v2;  // [bp-0x540]
    unsigned int v3;  // [sp-0x53c]
    char v4;  // [bp-0x538]
    unsigned int v5;  // [sp-0x27c]
    unsigned long long v6;  // [sp-0x278]
    char v7;  // [bp-0x270]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h90a1cae54a4c61bd(&v0, uucore::util_name::h412db5e565a079f3(), v9);
    memcpy(&v4, &v0, 700);
    v5 = *((int *)&v1) | 2;
    v6 = *((long long *)&v2);
    clap_builder::builder::command::Command::version::h06ab7b8d02c26d07(&v0, &v4, v9);
    clap_builder::builder::command::Command::about::h1fea0f557e8e85db(&v4, &v0);
    clap_builder::builder::command::Command::after_help::hacf1d38c717a70b1(&v0, &v4);
    uucore::format_usage::h00b69bae12d8ac9c(&v7, "{} FORMAT [ARGUMENT]...\n{} OPTIONPrint help informationversionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 33);
    clap_builder::builder::command::Command::override_usage::h834eca0072657699(&v4, &v0, &v7);
    memcpy(&v0, &v4, 700);
    v1 = 0x14000000140000 | *((long long *)&v5);
    v3 = *((int *)((char *)&v6 + 4));
    clap_builder::builder::arg::Arg::new::h6378d2b0a7c5476f(&v4, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::hc010ecca00bb9c12(&v7, &v4, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::h3bcc0549689518e8(&v4, &v7, "Print help informationversionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 22);
    clap_builder::builder::arg::Arg::action::h7b129490c5e6a8d4(&v7, &v4, 5);
    clap_builder::builder::command::Command::arg::h9460e64f23164bf3(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h6378d2b0a7c5476f(&v0, "versionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 7);
    clap_builder::builder::arg::Arg::long::hc010ecca00bb9c12(&v7, &v0, "versionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 7);
    clap_builder::builder::arg::Arg::help::h3bcc0549689518e8(&v0, &v7, "Print version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 25);
    clap_builder::builder::arg::Arg::action::h7b129490c5e6a8d4(&v7, &v0, 8);
    clap_builder::builder::command::Command::arg::h9460e64f23164bf3(&v0, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h6378d2b0a7c5476f(&v7, "FORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 6);
    clap_builder::builder::command::Command::arg::h9460e64f23164bf3(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h6378d2b0a7c5476f(&v0, "ARGUMENTEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTO", 8);
    clap_builder::builder::arg::Arg::action::h7b129490c5e6a8d4(&v7, &v0, 1);
    clap_builder::builder::command::Command::arg::h9460e64f23164bf3(a0, &v4, &v7);
    return a0;
}
