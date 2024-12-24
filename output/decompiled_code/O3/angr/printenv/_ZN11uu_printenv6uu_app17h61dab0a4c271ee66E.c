long long uu_printenv::uu_app::h61dab0a4c271ee66(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h1fd1adeb7193b689(&v0, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::h4837e0406f52f0b9(&v4, &v0, v9);
    clap_builder::builder::command::Command::about::h71aaa782483e1d9d(&v0, &v4);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... [VARIABLE]...", 28);
    clap_builder::builder::command::Command::override_usage::hbe27ed25e7ea1c85(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((long long *)&v5);
    v2 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h268a09bb6bec288b(&v4, &g_412558, 4);
    clap_builder::builder::arg::Arg::short::h66966e838212134e(&v3, &v4);
    clap_builder::builder::arg::Arg::long::hf0b596c7f5f6d860(&v4, &v3, v9);
    clap_builder::builder::arg::Arg::help::h5e819532a3d1cf13(&v3, &v4);
    clap_builder::builder::arg::Arg::action::h0b622439d2516add(&v7, &v3, 2);
    clap_builder::builder::command::Command::arg::h627522257835aa17(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h268a09bb6bec288b(&v0, "variables", 9);
    clap_builder::builder::arg::Arg::action::h0b622439d2516add(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h1622b4696c030ff2(&v0, &v3);
    clap_builder::builder::command::Command::arg::h627522257835aa17(a0, &v4, &v0);
    return a0;
}
