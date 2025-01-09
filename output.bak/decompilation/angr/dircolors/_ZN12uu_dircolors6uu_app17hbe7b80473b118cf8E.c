long long uu_dircolors::uu_app::hbe7b80473b118cf8(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::hc413131adf548d44(&v3, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h5ff63027270245bf(&v8, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h866a96b16dab5d72(&v3, &v8, "Output commands to set the LS_COLORS environment variable.", 58);
    clap_builder::builder::command::Command::after_help::h96074ec3991e2264(&v8, &v3, "If FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run 'dircolors --print-database'", 218);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]", 21);
    clap_builder::builder::command::Command::override_usage::hb122e13d78447662(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 584115552392 | *((long long *)&v6);
    v10 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&v3, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&v0, &v3, "sh", 2);
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::visible_alias::he5413a367265731b(&v0, &v3, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::overrides_with::ha0a57baf4ae7fa8c(&v3, &v0, "c-shell", 7);
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&v0, &v3, "output Bourne shell code to set LS_COLORS", 41);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&v8, "c-shell", 7);
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&v0, &v8, "csh", 3);
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&v8, &v0, 99);
    clap_builder::builder::arg::Arg::visible_alias::he5413a367265731b(&v0, &v8, "c-shell", 7);
    clap_builder::builder::arg::Arg::overrides_with::ha0a57baf4ae7fa8c(&v8, &v0, "bourne-shell", 12);
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&v0, &v8, "output C shell code to set LS_COLORS", 36);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&v3, "print-database", 14);
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&v0, &v3, "print-database", 14);
    clap_builder::builder::arg::Arg::short::h676949669a886c88(&v3, &v0, 112);
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&v0, &v3, "print the byte counts", 21);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&v8, "print-ls-colors", 15);
    clap_builder::builder::arg::Arg::long::h02fb4b2ff0fbb7cb(&v0, &v8, "print-ls-colors", 15);
    clap_builder::builder::arg::Arg::help::hf3c8b9ab68958e22(&v8, &v0, "output fully escaped colors for display", 39);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h5cc6663049b9c3ab(&v3, "FILEchar.alz.mpg", 4);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::value_hint::he7281a51f1d9db5c(&v3, &v0, 3);
    clap_builder::builder::arg::Arg::action::hf95560f8ff1a11a5(&v0, &v3, 1);
    clap_builder::builder::command::Command::arg::h23cb92d12dea2cd3(a0, &v8, &v0);
    return a0;
}
