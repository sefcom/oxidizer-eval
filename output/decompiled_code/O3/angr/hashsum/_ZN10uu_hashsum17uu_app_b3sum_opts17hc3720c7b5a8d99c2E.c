long long uu_hashsum::uu_app_b3sum_opts::hc3720c7b5a8d99c2(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x778]
    char v1;  // [bp-0x528]
    char v2;  // [bp-0x2d8]

    memcpy(&v2, a1, 712);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v0, "no-namescapacitys", 8);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v1, &v0, "no-namescapacitys", 8);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v1, "Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for", 67);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v1, &v0, 2);
    return clap_builder::builder::command::Command::arg::h7218bb30983cd776(a0, &v2, &v1);
}
