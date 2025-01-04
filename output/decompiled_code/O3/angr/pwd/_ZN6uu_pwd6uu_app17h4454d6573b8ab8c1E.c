long long uu_pwd::uu_app::h4454d6573b8ab8c1(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned long long v1;  // [sp-0x78c]
    unsigned int v2;  // [sp-0x784]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x4c4]
    char v5;  // [bp-0x4bc]
    char v6;  // [bp-0x4b8]
    char v7;  // [bp-0x268]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h4db4874b3d8a8e03(&v0, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::hd81a191cd3852812(&v3, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h2a616f008716511a(&v0, &v3, "Display the full filename of the current working directory.", 59);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hc7ce4cdbf0739487(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h9a2c8fb07ae21ef0(&v3, "logical", 7);
    clap_builder::builder::arg::Arg::short::ha1a52b1a12f316bd(&v6, &v3, 76);
    clap_builder::builder::arg::Arg::long::h0f58ade3dc6edfdc(&v3, &v6, "logical", 7);
    clap_builder::builder::arg::Arg::help::hcb45fc58d41bd583(&v6, &v3, "use PWD from environment, even if it contains symlinks", 54);
    clap_builder::builder::arg::Arg::action::h245ce03bcb8e7ef2(&v7, &v6);
    clap_builder::builder::command::Command::arg::h75d695ccf32429d8(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new::h9a2c8fb07ae21ef0(&v0, "physicalNotFoundTimedOut", 8);
    clap_builder::builder::arg::Arg::short::ha1a52b1a12f316bd(&v6, &v0, 80);
    clap_builder::builder::arg::Arg::long::h0f58ade3dc6edfdc(&v0, &v6, "physicalNotFoundTimedOut", 8);
    clap_builder::builder::arg::Arg::overrides_with::h8ab3139c02792904(&v6, &v0, "logical", 7);
    clap_builder::builder::arg::Arg::help::hcb45fc58d41bd583(&v0, &v6, "avoid all symlinks", 18);
    clap_builder::builder::arg::Arg::action::h245ce03bcb8e7ef2(&v6, &v0);
    clap_builder::builder::command::Command::arg::h75d695ccf32429d8(a0, &v3, &v6);
    return a0;
}
