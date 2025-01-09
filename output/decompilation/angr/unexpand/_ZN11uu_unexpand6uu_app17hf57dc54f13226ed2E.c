long long uu_unexpand::uu_app::hf57dc54f13226ed2(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h28dd3cfb9d9488ae(&v8, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h355bf77e2495619c(&v0, &v8, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::hf2f0e350a24f1370(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about::h00cbd4c2b3a59d68(&v0, &v8, "Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.", 126);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | *((long long *)&v3);
    v10 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&v0, "filei128", 4);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint::h8dcf2e063716e891(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&v8, "all", 3);
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&v5, &v8, 97);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&v8, &v5, "all", 3);
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&v5, &v8, "convert all blanks, instead of just initial blanks", 50);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&v0, "first-only", 10);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&v5, &v0, "first-only", 10);
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&v0, &v5, "convert only leading sequences of blanks (overrides -a)", 55);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&v8, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&v5, &v8, 116);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&v8, &v5, "tabsAuto", 4);
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&v5, &v8, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)", 99);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&v8, &v5, 1);
    clap_builder::builder::arg::Arg::value_name::h980cba47b642b4d6(&v5, &v8);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&v0, "no-utf8", 7);
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&v5, &v0, 85);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&v0, &v5, "no-utf8", 7);
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&v5, &v0, "interpret input file as 8-bit ASCII rather than UTF-8: \n", 53);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(a0, &v8, &v0);
    return a0;
}
