long long uu_basename::uu_app::h0b657963404f564a(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned int v1;  // [sp-0x5b8]
    unsigned int v2;  // [sp-0x5b4]
    char v3;  // [bp-0x5b0]
    char v4;  // [bp-0x368]
    char v5;  // [bp-0x364]
    unsigned long long v6;  // [sp-0x2f4]
    unsigned int v7;  // [sp-0x2ec]
    char v8;  // [bp-0x2e8]
    char v9;  // [bp-0x2c]
    char v10;  // [bp-0x24]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::ha7e74aad005b9b58(&v3, uucore::util_name::h60d842bf27b05e82(), v12);
    clap_builder::builder::command::Command::version::h2ab79dc99314c352(&v8, &v3, v12);
    clap_builder::builder::command::Command::about::hab620b7e1058a585(&v3, &v8);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...", 42);
    clap_builder::builder::command::Command::override_usage::h60cd123b01a36509(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&v8, "multiple", 8);
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&v8, &v0, "multiple", 8);
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&v0, &v8, "support multiple arguments and treat each as a NAME", 51);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&v8, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&v0, &v8, "multiple", 8);
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&v3, "name", 4);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::hd37af2c9a3a8ca5f(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = 516 | *((int *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&v8, "suffix", 6);
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&v8, &v0, "suffix", 6);
    clap_builder::builder::arg::Arg::value_name::h2d3314c9c3f2d083(&v0, &v8, v12);
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&v8, &v0, "remove a trailing SUFFIX; implies -a", 36);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&v0, &v8, "suffix", 6);
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h9173340fd6ca48a3(&v3, "zero", 4);
    clap_builder::builder::arg::Arg::short::h23215daa9b5f01ed(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::hd5c2448c17e12a8a(&v3, &v0, "zero", 4);
    clap_builder::builder::arg::Arg::help::h5fbe82945b5278be(&v0, &v3, "end each output line with NUL, not newlinesrc/uu/basename/src/basename.rs", 42);
    clap_builder::builder::arg::Arg::action::h9ee68bbc1d73bf6b(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hec87f0bde11a11d7(&v0, &v3, "zero", 4);
    clap_builder::builder::command::Command::arg::h97601c6d21b557bf(a0, &v8, &v0);
    return a0;
}
