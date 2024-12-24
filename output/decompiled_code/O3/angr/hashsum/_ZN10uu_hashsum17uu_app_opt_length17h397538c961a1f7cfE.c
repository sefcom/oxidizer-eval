long long uu_hashsum::uu_app_opt_length::h397538c961a1f7cf(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [sp-0x790]
    unsigned long long v1;  // [sp-0x788]
    unsigned long long v2;  // [sp-0x780]
    char v3;  // [bp-0x778]
    char v4;  // [bp-0x528]
    char v5;  // [bp-0x2d8]

    memcpy(&v5, a1, 712);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v4, &v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    v0 = 4;
    v1 = ::0x5d9e30::alloc::boxed::Box$LT$T$GT$::new::h3734692b16b4c3e3();
    v2 = &g_73fbf0;
    clap_builder::builder::arg::Arg::value_parser::h3d0c4d4ea3e7ab67(&v3, &v4, &v0);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v4, &v3, 108);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v3, &v4, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work w", 99);
    clap_builder::builder::arg::Arg::overrides_with::hfa21c40e43152d3e(&v4, &v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v3, &v4, 0);
    return clap_builder::builder::command::Command::arg::h7218bb30983cd776(a0, &v5, &v3);
}
