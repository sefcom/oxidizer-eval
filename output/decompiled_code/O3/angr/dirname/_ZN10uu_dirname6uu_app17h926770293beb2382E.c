long long uu_dirname::uu_app::h926770293beb2382(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    char v1;  // [bp-0x808]
    char v2;  // [bp-0x804]
    unsigned long long v3;  // [sp-0x794]
    unsigned int v4;  // [sp-0x78c]
    char v5;  // [bp-0x788]
    unsigned int v6;  // [sp-0x540]
    unsigned int v7;  // [sp-0x53c]
    char v8;  // [bp-0x538]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x274]
    char v11;  // [bp-0x270]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h7a1e0245983ad112(&v0, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::about::he0eaab5b5bbde98b(&v8, &v0);
    clap_builder::builder::command::Command::version::h4f4df01081408fd1(&v0, &v8, v13);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION] NAME...", 19);
    clap_builder::builder::command::Command::override_usage::h6759173ccc409b93(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h5cc60aad7d88b78b(&v8, "zero", 4);
    clap_builder::builder::arg::Arg::long::hb5e3c8ef475a86a4(&v5, &v8, v13);
    clap_builder::builder::arg::Arg::short::h6f221a36d897b320(&v8, &v5);
    clap_builder::builder::arg::Arg::help::hcc509ed0c580c87f(&v5, &v8);
    clap_builder::builder::arg::Arg::action::h46cd5c3f225b638a(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h8c93b809a6593c53(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h5cc60aad7d88b78b(&v0, "dir/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 3);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h46cd5c3f225b638a(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint::h3f3b95ca1d616067(&v5, &v0);
    clap_builder::builder::command::Command::arg::h8c93b809a6593c53(a0, &v8, &v5);
    return a0;
}
