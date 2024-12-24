long long uu_dircolors::uu_app::h5bd020c09d27db22(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    char v6;  // [bp-0x53c]
    char v7;  // [bp-0x534]
    char v8;  // [bp-0x530]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hdc3dd95f2a158826(&v3, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h78274a7d979207bb(&v8, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h9a08bd32374caaea(&v3, &v8, "Output commands to set the LS_COLORS environment variable.", 58);
    clap_builder::builder::command::Command::after_help::h38a5a6b8ffd2f639(&v8, &v3, "If FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run 'dircolors --print-database'", 218);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]", 21);
    clap_builder::builder::command::Command::override_usage::h3bd9a763ec3a124c(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 584115552392 | *((long long *)&v6);
    v10 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::h1682ef9a8f7693e9(&v3, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::long::hb6b0a0f441478c3d(&v0, &v3, "sh", 2);
    clap_builder::builder::arg::Arg::short::h7c9502bcf0b93a3f(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::visible_alias::h3498341205c91831(&v0, &v3, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::overrides_with::h684ed4d5f4e21f07(&v3, &v0, "c-shell", 7);
    clap_builder::builder::arg::Arg::help::ha9d2ccbc60bcc888(&v0, &v3, "output Bourne shell code to set LS_COLORS", 41);
    clap_builder::builder::arg::Arg::action::he13cbce80bbe1eeb(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2bd02bd13c262097(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h1682ef9a8f7693e9(&v8, "c-shell", 7);
    clap_builder::builder::arg::Arg::long::hb6b0a0f441478c3d(&v0, &v8, "csh", 3);
    clap_builder::builder::arg::Arg::short::h7c9502bcf0b93a3f(&v8, &v0, 99);
    clap_builder::builder::arg::Arg::visible_alias::h3498341205c91831(&v0, &v8, "c-shell", 7);
    clap_builder::builder::arg::Arg::overrides_with::h684ed4d5f4e21f07(&v8, &v0, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::help::ha9d2ccbc60bcc888(&v0, &v8, "output C shell code to set LS_COLORS", 36);
    clap_builder::builder::arg::Arg::action::he13cbce80bbe1eeb(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2bd02bd13c262097(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h1682ef9a8f7693e9(&v3, "print-database", 14);
    clap_builder::builder::arg::Arg::long::hb6b0a0f441478c3d(&v0, &v3, "print-database", 14);
    clap_builder::builder::arg::Arg::short::h7c9502bcf0b93a3f(&v3, &v0, 112);
    clap_builder::builder::arg::Arg::help::ha9d2ccbc60bcc888(&v0, &v3, "print the byte counts", 21);
    clap_builder::builder::arg::Arg::action::he13cbce80bbe1eeb(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2bd02bd13c262097(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h1682ef9a8f7693e9(&v8, "print-ls-colors", 15);
    clap_builder::builder::arg::Arg::long::hb6b0a0f441478c3d(&v0, &v8, "print-ls-colors", 15);
    clap_builder::builder::arg::Arg::help::ha9d2ccbc60bcc888(&v8, &v0, "output fully escaped colors for display", 39);
    clap_builder::builder::arg::Arg::action::he13cbce80bbe1eeb(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h2bd02bd13c262097(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h1682ef9a8f7693e9(&v3, "FILEchar.alz.mpg", 4);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::value_hint::h1bd95cf05d298748(&v3, &v0, 3);
    clap_builder::builder::arg::Arg::action::he13cbce80bbe1eeb(&v0, &v3, 1);
    clap_builder::builder::command::Command::arg::h2bd02bd13c262097(a0, &v8, &v0);
    return a0;
}
