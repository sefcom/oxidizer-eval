long long uu_unexpand::uu_app::hfd1efad593479d9e(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    char v3;  // [bp-0x78c]
    char v4;  // [bp-0x784]
    char v5;  // [bp-0x780]
    unsigned int v6;  // [sp-0x538]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h5693c86fc0bebfab(&v8, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h992e68812d0654dc(&v0, &v8, "0.0.28", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hd502b19d37e67650(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::h0a16924022846804(&v0, &v8, "Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.", 126);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h5e5ba1e6f81d25ef(&v0, "filei128", 4);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::hc6a59b825a3ac6e9(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint::h7cf155a394ec795b(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::h1370987e6d949b94(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h5e5ba1e6f81d25ef(&v8, "all", 3);
    clap_builder::builder::arg::Arg::short::hb7ce958fd462dbc4(&v5, &v8, 97);
    clap_builder::builder::arg::Arg::long::h2dc386e469d4234b(&v8, &v5, "all", 3);
    clap_builder::builder::arg::Arg::help::h55cda7e9b620c787(&v5, &v8, "convert all blanks, instead of just initial blanks", 50);
    clap_builder::builder::arg::Arg::action::hc6a59b825a3ac6e9(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h1370987e6d949b94(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h5e5ba1e6f81d25ef(&v0, "first-only", 10);
    clap_builder::builder::arg::Arg::long::h2dc386e469d4234b(&v5, &v0, "first-only", 10);
    clap_builder::builder::arg::Arg::help::h55cda7e9b620c787(&v0, &v5, "convert only leading sequences of blanks (overrides -a)", 55);
    clap_builder::builder::arg::Arg::action::hc6a59b825a3ac6e9(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h1370987e6d949b94(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h5e5ba1e6f81d25ef(&v8, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::short::hb7ce958fd462dbc4(&v5, &v8, 116);
    clap_builder::builder::arg::Arg::long::h2dc386e469d4234b(&v8, &v5, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::help::h55cda7e9b620c787(&v5, &v8, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)", 99);
    clap_builder::builder::arg::Arg::action::hc6a59b825a3ac6e9(&v8, &v5, 1);
    clap_builder::builder::arg::Arg::value_name::h98270437ca62c341(&v5, &v8, v13);
    clap_builder::builder::command::Command::arg::h1370987e6d949b94(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h5e5ba1e6f81d25ef(&v0, "no-utf8", 7);
    clap_builder::builder::arg::Arg::short::hb7ce958fd462dbc4(&v5, &v0, 85);
    clap_builder::builder::arg::Arg::long::h2dc386e469d4234b(&v0, &v5, "no-utf8", 7);
    clap_builder::builder::arg::Arg::help::h55cda7e9b620c787(&v5, &v0, "interpret input file as 8-bit ASCII rather than UTF-8", 53);
    clap_builder::builder::arg::Arg::action::hc6a59b825a3ac6e9(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::h1370987e6d949b94(a0, &v8, &v0);
    return a0;
}
