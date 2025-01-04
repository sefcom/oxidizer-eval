long long uu_rmdir::uu_app::he176cc9e026e634b(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h729fb2eca598e7e0(&v0, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h4e16bcafc6797686(&v8, &v0, v13);
    clap_builder::builder::command::Command::about::h2590688cd038a4f8(&v0, &v8);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... DIRECTORY...", 27);
    clap_builder::builder::command::Command::override_usage::h984a09963e79e475(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&v8, "ignore-fail-on-non-empty", 24);
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&v5, &v8, "ignore-fail-on-non-empty", 24);
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&v8, &v5, "ignore each failure that is solely because a directory is non-empty", 67);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&v0, "parents", 7);
    clap_builder::builder::arg::Arg::short::h325ab8446f1eb8ba(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&v0, &v5, "parents", 7);
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&v5, &v0, "remove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b a", 108);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&v8, "verbose: removing directory, \n", 7);
    clap_builder::builder::arg::Arg::short::h325ab8446f1eb8ba(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::hab324419c3767ea5(&v8, &v5, "verbose: removing directory, \n", 7);
    clap_builder::builder::arg::Arg::help::h4eedc8ea57112d2e(&v5, &v8, "output a diagnostic for every directory processed", 49);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h966ac186c29780c1(&v0, &g_412dfc, 4);
    clap_builder::builder::arg::Arg::action::ha207a77d808e47c3(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h4ae6db6e08d351be(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    v11 = 2;
    clap_builder::builder::arg::Arg::value_parser::h7936c038b7a39011(&v0, &v5, &v11);
    clap_builder::builder::arg::Arg::value_hint::h0db0af3d90a31669(&v5, &v0);
    clap_builder::builder::command::Command::arg::h5975801d6b308c5c(a0, &v8, &v5);
    return a0;
}
