long long uu_rmdir::uu_app::h269103f86144445d(unsigned long long a0, unsigned long a1, unsigned long a2)
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
    char v11;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h7d384624761e45ea(&v0, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h6ac97474f96a9212(&v8, &v0, v13);
    clap_builder::builder::command::Command::about::h01061018e31a135e(&v0, &v8);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... DIRECTORY...", 27);
    clap_builder::builder::command::Command::override_usage::h46e7e93d639369d1(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h09b5f5ebb86e3740(&v8, "ignore-fail-on-non-empty", 24);
    clap_builder::builder::arg::Arg::long::h77c9462c65af01d1(&v5, &v8, "ignore-fail-on-non-empty", 24);
    clap_builder::builder::arg::Arg::help::h332178d3b69a2e40(&v8, &v5, "ignore each failure that is solely because a directory is non-empty", 67);
    clap_builder::builder::arg::Arg::action::h5adef34606678c0c(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h01bf9a01070adc03(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h09b5f5ebb86e3740(&v0, "parents", 7);
    clap_builder::builder::arg::Arg::short::hd580b48e2bd151f4(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long::h77c9462c65af01d1(&v0, &v5, "parents", 7);
    clap_builder::builder::arg::Arg::help::h332178d3b69a2e40(&v5, &v0, "remove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b a", 108);
    clap_builder::builder::arg::Arg::action::h5adef34606678c0c(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h01bf9a01070adc03(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h09b5f5ebb86e3740(&v8, "verbose: removing directory, \n", 7);
    clap_builder::builder::arg::Arg::short::hd580b48e2bd151f4(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::h77c9462c65af01d1(&v8, &v5, "verbose: removing directory, \n", 7);
    clap_builder::builder::arg::Arg::help::h332178d3b69a2e40(&v5, &v8, "output a diagnostic for every directory processed/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 49);
    clap_builder::builder::arg::Arg::action::h5adef34606678c0c(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h01bf9a01070adc03(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h09b5f5ebb86e3740(&v0, &g_412efc, 4);
    clap_builder::builder::arg::Arg::action::h5adef34606678c0c(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h439bf4a7f1e68680(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc829b57992e56bc0(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint::h1514d4f4751836f8(&v5, &v0);
    clap_builder::builder::command::Command::arg::h01bf9a01070adc03(a0, &v8, &v5);
    return a0;
}
