long long uu_pwd::uu_app::hdbe99ceb54e893f3(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h1b5d860e1729ce49(&v0, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::he293bfd53e2044c1(&v3, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hd08af210662917ad(&v0, &v3, "Display the full filename of the current working directory.", 59);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h9e77c4f7efaa2d2d(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::hc54b458b1b8575b5(&v3, "logical", 7);
    clap_builder::builder::arg::Arg::short::ha6c1e822b64a5c51(&v6, &v3, 76);
    clap_builder::builder::arg::Arg::long::h8cb837289964f998(&v3, &v6, "logical", 7);
    clap_builder::builder::arg::Arg::help::h10d28eb40f046056(&v6, &v3, "use PWD from environment, even if it contains symlinks", 54);
    clap_builder::builder::arg::Arg::action::h926f6ba9aae8f624(&v7, &v6);
    clap_builder::builder::command::Command::arg::h9f52e48c77916e26(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new::hc54b458b1b8575b5(&v0, "physicalNotFoundTimedOut", 8);
    clap_builder::builder::arg::Arg::short::ha6c1e822b64a5c51(&v6, &v0, 80);
    clap_builder::builder::arg::Arg::long::h8cb837289964f998(&v0, &v6, "physicalNotFoundTimedOut", 8);
    clap_builder::builder::arg::Arg::overrides_with::h3517860d84ae1db5(&v6, &v0, "logical", 7);
    clap_builder::builder::arg::Arg::help::h10d28eb40f046056(&v0, &v6, "avoid all symlinks/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 18);
    clap_builder::builder::arg::Arg::action::h926f6ba9aae8f624(&v6, &v0);
    clap_builder::builder::command::Command::arg::h9f52e48c77916e26(a0, &v3, &v6);
    return a0;
}
