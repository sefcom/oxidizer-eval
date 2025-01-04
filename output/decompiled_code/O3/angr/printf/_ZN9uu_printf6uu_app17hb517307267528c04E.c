long long uu_printf::uu_app::hb517307267528c04(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hb929ef207e30f73b(&v0, uucore::util_name::h60d842bf27b05e82(), v9);
    memcpy(&v4, &v0, 700);
    v5 = *((int *)&v1) | 2;
    v6 = *((long long *)&v2);
    clap_builder::builder::command::Command::version::h4a1a2c1f13d79a9f(&v0, &v4, v9);
    clap_builder::builder::command::Command::about::h816a3bedc6d880bd(&v4, &v0);
    clap_builder::builder::command::Command::after_help::h48bb6db18ae6c072(&v0, &v4);
    uucore::format_usage::h76fcb2d15fbabc58(&v7, "{} FORMAT [ARGUMENT]...\n{} OPTIONPrint help informationversionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 33);
    clap_builder::builder::command::Command::override_usage::hdc0c293549a5ea36(&v4, &v0, &v7);
    memcpy(&v0, &v4, 700);
    v1 = 0x14000000140000 | *((long long *)&v5);
    v3 = *((int *)((char *)&v6 + 4));
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&v4, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h4bf6946a41ac2d48(&v7, &v4, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::hd2e95c0038444722(&v4, &v7, "Print help informationversionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 22);
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&v7, &v4, 5);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&v0, "versionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 7);
    clap_builder::builder::arg::Arg::long::h4bf6946a41ac2d48(&v7, &v0, "versionPrint version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 7);
    clap_builder::builder::arg::Arg::help::hd2e95c0038444722(&v0, &v7, "Print version informationFORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 25);
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&v7, &v0, 8);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&v0, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&v7, "FORMAT/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs\n", 6);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&v0, "ARGUMENT", 8);
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&v7, &v0, 1);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(a0, &v4, &v7);
    return a0;
}
