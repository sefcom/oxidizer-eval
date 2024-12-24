long long uu_tac::uu_app::hbfed87f2452b1325(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hb00e14e4eb5df007(&v6, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h624a8a8fc10bd80d(&v0, &v6, "0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... [FILE]...Write each file to standard output, last line first.0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 24);
    clap_builder::builder::command::Command::override_usage::ha47ed2c834f75345(&v6, &v0, &v3);
    clap_builder::builder::command::Command::about::h00dff886151f2f63(&v0, &v6, "Write each file to standard output, last line first.0.0.28attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 52);
    memcpy(&v6, &v0, 700);
    v9 = 549755814016 | *((long long *)&v1);
    v10 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::hd38e694990cac472(&v0, "beforeregexseparator", 6);
    clap_builder::builder::arg::Arg::short::h442c7e4cb7b90ee8(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::long::h0a142301c4593b4b(&v0, &v3, "beforeregexseparator", 6);
    clap_builder::builder::arg::Arg::help::hc7301b59250e294d(&v3, &v0, "attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 44);
    clap_builder::builder::arg::Arg::action::h7a3eb918c629e9b0(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::h515e5b12f9ebc215(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new::hd38e694990cac472(&v6, "regexseparator", 5);
    clap_builder::builder::arg::Arg::short::h442c7e4cb7b90ee8(&v3, &v6, 114);
    clap_builder::builder::arg::Arg::long::h0a142301c4593b4b(&v6, &v3, "regexseparator", 5);
    clap_builder::builder::arg::Arg::help::hc7301b59250e294d(&v3, &v6, "interpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    clap_builder::builder::arg::Arg::action::h7a3eb918c629e9b0(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::h515e5b12f9ebc215(&v6, &v0, &v11);
    clap_builder::builder::arg::Arg::new::hd38e694990cac472(&v0, "separator", 9);
    clap_builder::builder::arg::Arg::short::h442c7e4cb7b90ee8(&v3, &v0, 115);
    clap_builder::builder::arg::Arg::long::h0a142301c4593b4b(&v0, &v3, "separator", 9);
    clap_builder::builder::arg::Arg::help::hc7301b59250e294d(&v3, &v0, "use STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    clap_builder::builder::arg::Arg::value_name::h37298ac34ab918c7(&v11, &v3, v13);
    clap_builder::builder::command::Command::arg::h515e5b12f9ebc215(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new::hd38e694990cac472(&v6, "filemode{", 4);
    memcpy(&v3, &v6, 584);
    v4 = *((int *)&v7) | 4;
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::action::h7a3eb918c629e9b0(&v6, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::hd8c0983d65f65575(&v3, &v6, 3);
    clap_builder::builder::command::Command::arg::h515e5b12f9ebc215(a0, &v0, &v3);
    return a0;
}
