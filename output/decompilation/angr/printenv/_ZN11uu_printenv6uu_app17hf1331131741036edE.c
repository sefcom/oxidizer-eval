long long uu_printenv::uu_app::hf1331131741036ed(unsigned long long a0)
{
    char v0;  // [bp-0xa50]
    unsigned long long v1;  // [sp-0x794]
    unsigned int v2;  // [sp-0x78c]
    char v3;  // [bp-0x788]
    char v4;  // [bp-0x538]
    char v5;  // [bp-0x27c]
    char v6;  // [bp-0x274]
    char v7;  // [bp-0x270]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h756124d03d797937(&v0, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::h2f0c204c3b28853e(&v4, &v0);
    clap_builder::builder::command::Command::about::h6ce0240f9b0c168e(&v0, &v4);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [VARIABLE]...", 28);
    clap_builder::builder::command::Command::override_usage::h89030b7305223480(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((long long *)&v5);
    v2 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h232af3154c6234e3(&v4, &g_4124a8, 4);
    clap_builder::builder::arg::Arg::short::h4b8b75b37ac110d0(&v3, &v4);
    clap_builder::builder::arg::Arg::long::h26f18b50c67386c2(&v4, &v3);
    clap_builder::builder::arg::Arg::help::h457dd636a188a524(&v3, &v4);
    clap_builder::builder::arg::Arg::action::hfac7705830aeadd1(&v7, &v3, 2);
    clap_builder::builder::command::Command::arg::h825aeeae1f3493f2(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h232af3154c6234e3(&v0, "variables", 9);
    clap_builder::builder::arg::Arg::action::hfac7705830aeadd1(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h355828e295e06717(&v0, &v3);
    clap_builder::builder::command::Command::arg::h825aeeae1f3493f2(a0, &v4, &v0);
    return a0;
}
