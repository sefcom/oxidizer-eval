long long uu_sync::uu_app::heb707c7f312af52a(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned long long v1;  // [sp-0x544]
    unsigned int v2;  // [sp-0x53c]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2c]
    char v6;  // [bp-0x24]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h615aa86156ba5dae(&v0, uucore::util_name::h412db5e565a079f3(), v8);
    clap_builder::builder::command::Command::version::h80cbd3d2da60aa40(&v4, &v0, v8);
    clap_builder::builder::command::Command::about::hcb56281575d299b1(&v0, &v4);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::hedb7ad98a8972a27(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((long long *)&v5);
    v2 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::hfae89cfb42f15ee7(&v4, "file-system", 11);
    clap_builder::builder::arg::Arg::short::h4e6d4afbb32c1e5e(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long::h902544fd3213f7c2(&v4, &v3, "file-system", 11);
    clap_builder::builder::arg::Arg::conflicts_with::h3ddf5533679dd2a3(&v3, &v4, "data", 4);
    clap_builder::builder::arg::Arg::help::hf2fa64ba4978cedf(&v4, &v3, "sync the file systems that contain the files (Linux and Windows only)", 69);
    clap_builder::builder::arg::Arg::action::h737839f6357253b3(&v3, &v4, 2);
    clap_builder::builder::command::Command::arg::h278a047f5d9b1ff0(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new::hfae89cfb42f15ee7(&v0, "data", 4);
    clap_builder::builder::arg::Arg::short::h4e6d4afbb32c1e5e(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::long::h902544fd3213f7c2(&v0, &v3, "data", 4);
    clap_builder::builder::arg::Arg::conflicts_with::h3ddf5533679dd2a3(&v3, &v0, "file-system", 11);
    clap_builder::builder::arg::Arg::help::hf2fa64ba4978cedf(&v0, &v3, "sync only file data, no unneeded metadata (Linux only)/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 54);
    clap_builder::builder::arg::Arg::action::h737839f6357253b3(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg::h278a047f5d9b1ff0(&v0, &v4, &v3);
    clap_builder::builder::arg::Arg::new::hfae89cfb42f15ee7(&v4, "filessrc/uu/sync/src/sync.rs", 5);
    clap_builder::builder::arg::Arg::action::h737839f6357253b3(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint::h66d745e6cd871c15(&v4, &v3);
    clap_builder::builder::command::Command::arg::h278a047f5d9b1ff0(a0, &v0, &v4);
    return a0;
}
