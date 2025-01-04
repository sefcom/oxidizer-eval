long long uu_dirname::uu_app::ha975dcebe50fa881(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hb046f67712759821(&v0, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::about::h720b423c651aed08(&v8, &v0);
    clap_builder::builder::command::Command::version::h69e0937e50c79d67(&v0, &v8, v13);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION] NAME...", 19);
    clap_builder::builder::command::Command::override_usage::h0d65f62476436467(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hfb3207caa17ab004(&v8, "zero", 4);
    clap_builder::builder::arg::Arg::long::h9ce92573d619fb83(&v5, &v8, v13);
    clap_builder::builder::arg::Arg::short::hf6a78be7edbf3fcd(&v8, &v5);
    clap_builder::builder::arg::Arg::help::h13a2fa72baf7454d(&v5, &v8);
    clap_builder::builder::arg::Arg::action::h9f538c7666116176(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc7633f806f6cf228(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hfb3207caa17ab004(&v0, "dir", 3);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h9f538c7666116176(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint::h29d5c69655c28734(&v5, &v0);
    clap_builder::builder::command::Command::arg::hc7633f806f6cf228(a0, &v8, &v5);
    return a0;
}
