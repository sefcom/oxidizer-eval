long long uu_tac::uu_app::h578904e159ae3f9f(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x78c]
    char v2;  // [bp-0x784]
    char v3;  // [bp-0x780]
    unsigned int v4;  // [sp-0x538]
    unsigned int v5;  // [sp-0x534]
    char v6;  // [bp-0x530]
    char v7;  // [bp-0x2e8]
    char v8;  // [bp-0x2e4]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h23398bef088cfbaf(&v6, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::ha59cf6e08d71e0f9(&v0, &v6, "0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [FILE]...Write each file to standard output, last line first.0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 24);
    clap_builder::builder::command::Command::override_usage::h26239a61e5e501ea(&v6, &v0, &v3);
    clap_builder::builder::command::Command::about::he1a280a914cac709(&v0, &v6, "Write each file to standard output, last line first.0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 52);
    memcpy(&v6, &v0, 700);
    v9 = 549755814016 | *((long long *)&v1);
    v10 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&v0, "beforeregexseparator", 6);
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&v0, &v3, "beforeregexseparator", 6);
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&v3, &v0, "attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 44);
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&v6, "regexseparator", 5);
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&v3, &v6, 114);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&v6, &v3, "regexseparator", 5);
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&v3, &v6, "interpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&v6, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&v0, "separator", 9);
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&v3, &v0, 115);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&v0, &v3, "separator", 9);
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&v3, &v0, "use STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    clap_builder::builder::arg::Arg::value_name::ha4f3f4b83ea98725(&v11, &v3);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&v6, "filemode{", 4);
    memcpy(&v3, &v6, 584);
    v4 = *((int *)&v7) | 4;
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&v6, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::h3cf408ab9ed62d11(&v3, &v6, 3);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(a0, &v0, &v3);
    return a0;
}
