long long uu_hashsum::uu_app_b3sum_opts::h6d29bf312f544a29(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x778]
    char v1;  // [bp-0x528]
    char v2;  // [bp-0x2d8]

    memcpy(&v2, a1, 712);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v0, "no-namescapacitys", 8);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "no-namescapacitys", 8);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for", 67);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v1, &v0, 2);
    return clap_builder::builder::command::Command::arg::h001132be747f46b6(a0, &v2, &v1);
}
