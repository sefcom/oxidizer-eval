long long uu_hashsum::uu_app_opt_bits::h1604bb86d678b504(unsigned long long a0, void* a1)
{
    char v0;  // [bp-0x770]
    char v1;  // [bp-0x520]
    char v2;  // [bp-0x2d0]

    memcpy(&v2, a1, 712);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v0, "bits", 4);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "bits", 4);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for the output sizework with SHAKE256 using BITS for the output sizesh", 43);
    clap_builder::builder::arg::Arg::value_name::h91d0b43819df8b7b(&v1, &v0, &g_468ec8);
    clap_builder::builder::arg::Arg::value_parser::h06bfe84f71006afc(&v0, &v1);
    return clap_builder::builder::command::Command::arg::h001132be747f46b6(a0, &v2, &v0);
}
