long long uu_sum::uu_app::h93b3d0654cdaf3da(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x7f8]
    unsigned int v1;  // [sp-0x5b0]
    unsigned int v2;  // [sp-0x5ac]
    char v3;  // [bp-0x53c]
    char v4;  // [bp-0x534]
    char v5;  // [bp-0x530]
    char v6;  // [bp-0x2e8]
    char v7;  // [bp-0x2e4]
    char v8;  // [bp-0x2e0]
    unsigned long long v9;  // [sp-0x24]
    unsigned int v10;  // [sp-0x1c]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::h9c27619713186f56(&v8, uucore::util_name::h412db5e565a079f3(), v12);
    clap_builder::builder::command::Command::version::h61cbb45cc95e5b49(&v0, &v8, "0.0.28", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h71e4e2ae331d5a5f(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::hb4ca0a98023deb61(&v0, &v8, "Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input.", 95);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h3646c50d732e493b(&v0, "filei128", 4);
    clap_builder::builder::arg::Arg::action::h6d9f8a1f72e9c166(&v5, &v0, 1);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 4;
    v2 = *((int *)&v7);
    clap_builder::builder::arg::Arg::value_hint::h5c061c350b04ef71(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::hddaea411a92cd294(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h3646c50d732e493b(&v8, "r/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 1);
    clap_builder::builder::arg::Arg::short::h6bd1be2ba259413d(&v5, &v8, 114);
    clap_builder::builder::arg::Arg::help::h4938d9d70d491a96(&v8, &v5, "use the BSD sum algorithm, use 1K blocks (default)", 50);
    clap_builder::builder::arg::Arg::action::h6d9f8a1f72e9c166(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hddaea411a92cd294(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h3646c50d732e493b(&v0, "sysv", 4);
    clap_builder::builder::arg::Arg::short::h6bd1be2ba259413d(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::h9245c6841714bb36(&v0, &v5, v12);
    clap_builder::builder::arg::Arg::help::h4938d9d70d491a96(&v5, &v0, "use System V sum algorithm, use 512 bytes blocks", 48);
    clap_builder::builder::arg::Arg::action::h6d9f8a1f72e9c166(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::hddaea411a92cd294(a0, &v8, &v0);
    return a0;
}
