long long uu_hashsum::uu_app_opt_length::hd534d2f952470bb5(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [sp-0x790]
    unsigned long long v1;  // [sp-0x788]
    unsigned long long v2;  // [sp-0x780]
    char v3;  // [bp-0x778]
    char v4;  // [bp-0x528]
    char v5;  // [bp-0x2d8]

    memcpy(&v5, a1, 712);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v4, &v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    v0 = 4;
    v1 = ::0x5d9a70::alloc::boxed::Box$LT$T$GT$::new::h335045434651419a();
    v2 = &g_73ec80;
    clap_builder::builder::arg::Arg::value_parser::he5d3a65a49706acc(&v3, &v4, &v0);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v4, &v3, 108);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v3, &v4, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work w", 99);
    clap_builder::builder::arg::Arg::overrides_with::hcce032071395fcec(&v4, &v3, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3", 6);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v3, &v4, 0);
    return clap_builder::builder::command::Command::arg::h001132be747f46b6(a0, &v5, &v3);
}
