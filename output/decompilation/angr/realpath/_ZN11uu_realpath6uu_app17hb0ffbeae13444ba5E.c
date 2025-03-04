long long uu_realpath::uu_app::hb0ffbeae13444ba5(unsigned long long a0)
{
    char v0;  // [bp-0xa50]
    unsigned int v1;  // [sp-0x808]
    unsigned int v2;  // [sp-0x804]
    unsigned long long v3;  // [sp-0x794]
    unsigned int v4;  // [sp-0x78c]
    char v5;  // [bp-0x788]
    char v6;  // [bp-0x540]
    char v7;  // [bp-0x53c]
    char v8;  // [bp-0x538]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x274]
    char v11;  // [bp-0x270], Other Possible Types: unsigned long
    unsigned long long v12;  // [sp-0x268]
    unsigned long long v13;  // [sp-0x260]
    unsigned long long v14;  // [sp-0x258]
    unsigned long long v16;  // rdx

    clap_builder::builder::command::Command::new::h84d7059bcc77226c(&v0, uucore::util_name::h60d842bf27b05e82(), v16);
    clap_builder::builder::command::Command::version::hff33f7b38d12333f(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hc7d8fe242993619b(&v0, &v8, "Print the resolved path", 23);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::hcc99de9d6052085d(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v8, "quiet", 5);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v8, 113);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v8, &v5, "quiet", 5);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v5, &v8, "Do not print warnings for invalid paths", 39);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v0, "strip", 5);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v0, &v5, "strip", 5);
    clap_builder::builder::arg::Arg::visible_alias::h75123c17be531ca5(&v5, &v0, "no-symlinks", 11);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v0, &v5, "Only strip '.' and '..' components, but don't resolve symbolic links", 68);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v8, &g_414958, 4);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v8, 122);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v8, &v5, &g_414958, 4);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v5, &v8, "Separate output filenames with \\0 rather than newline", 53);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v0, "logical", 7);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v0, 76);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v0, &v5, "logical", 7);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v5, &v0, "resolve '..' components before symlinks", 39);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v8, "physical", 8);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v8, &v5, "physical", 8);
    v11 = "strip";
    v12 = 5;
    v13 = "logical";
    v14 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h59dc2e0b13378d5b(&v5, &v8, &v11);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v8, &v5, "resolve symlinks as encountered (default)", 41);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v0, "canonicalize-existing", 21);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v0, 101);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v0, &v5, "canonicalize-existing", 21);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v5, &v0, "canonicalize by following every symlink in every component of the given name recursively, all components must exist", 115);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v8, "canonicalize-missing", 20);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v8, &v5, "canonicalize-missing", 20);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v5, &v8, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence", 134);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v0, "relative-to", 11);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v5, &v0, "relative-to", 11);
    clap_builder::builder::arg::Arg::value_name::hc405a264fb9ab443(&v0, &v5);
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&v5, &v0);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v11, &v5, "print the resolved path relative to DIR", 39);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v8, "relative-base", 13);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&v5, &v8, "relative-base", 13);
    clap_builder::builder::arg::Arg::value_name::hc405a264fb9ab443(&v8, &v5);
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&v5, &v8);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&v11, &v5, "print absolute paths unless paths below DIR", 43);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&v5, &v0, 1);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 1;
    v2 = *((int *)&v7);
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&v5, &v0);
    clap_builder::builder::arg::Arg::value_hint::h9a6c1b3f12da1918(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(a0, &v8, &v0);
    return a0;
}
