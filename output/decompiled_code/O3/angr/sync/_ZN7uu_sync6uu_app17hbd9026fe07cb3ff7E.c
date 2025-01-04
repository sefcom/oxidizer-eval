long long uu_sync::uu_app::hbd9026fe07cb3ff7(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned long long v1;  // [sp-0x544]
    unsigned int v2;  // [sp-0x53c]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2c]
    char v6;  // [bp-0x24]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h226173cf9d4ce7e8(&v0, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::hffedbca79457cd14(&v4, &v0, v8);
    clap_builder::builder::command::Command::about::he90c750c85b3f794(&v0, &v4);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::hcd8e6c38bcf1184c(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((long long *)&v5);
    v2 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&v4, "file-system", 11);
    clap_builder::builder::arg::Arg::short::h816c192d055b63c9(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long::hceb55469d3fe56ee(&v4, &v3, "file-system", 11);
    clap_builder::builder::arg::Arg::conflicts_with::h65b70541f207a135(&v3, &v4, "data", 4);
    clap_builder::builder::arg::Arg::help::h493d35bbedfd13ea(&v4, &v3, "sync the file systems that contain the files (Linux and Windows only)", 69);
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&v3, &v4, 2);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&v0, "data", 4);
    clap_builder::builder::arg::Arg::short::h816c192d055b63c9(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::long::hceb55469d3fe56ee(&v0, &v3, "data", 4);
    clap_builder::builder::arg::Arg::conflicts_with::h65b70541f207a135(&v3, &v0, "file-system", 11);
    clap_builder::builder::arg::Arg::help::h493d35bbedfd13ea(&v0, &v3, "sync only file data, no unneeded metadata (Linux only)", 54);
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&v4, "filessrc/uu/sync/src/sync.rs", 5);
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint::h5e4863be2b9d894e(&v4, &v3);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(a0, &v0, &v4);
    return a0;
}
