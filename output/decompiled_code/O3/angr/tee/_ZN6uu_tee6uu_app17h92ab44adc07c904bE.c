long long uu_tee::uu_app::h92ab44adc07c904b(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xb38]
    int v1;  // [bp-0xb28], Other Possible Types: void*, char
    unsigned long long v2;  // [sp-0xb20]
    int v3;  // [sp-0xb18], Other Possible Types: void*
    unsigned long long v4;  // [sp-0xb10]
    int v5;  // [sp-0xb08]
    int v6;  // [sp-0xaf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xaf0]
    unsigned long long v8;  // [bp-0xae8], Other Possible Types: char
    int v9;  // [sp-0xae0]
    int v10;  // [sp-0xad0]
    int v11;  // [sp-0xac0]
    int v12;  // [sp-0xab0]
    unsigned long long v13;  // [sp-0xaa0]
    int v14;  // [sp-0xa98]
    int v15;  // [sp-0xa88]
    int v16;  // [sp-0xa78]
    int v17;  // [sp-0xa68]
    unsigned long long v18;  // [sp-0xa58]
    int v19;  // [sp-0xa50]
    int v20;  // [sp-0xa40]
    int v21;  // [sp-0xa30]
    int v22;  // [sp-0xa20]
    unsigned long long v23;  // [sp-0xa10]
    unsigned int v24;  // [sp-0x8e0]
    unsigned int v25;  // [sp-0x8dc]
    unsigned long long v26;  // [sp-0x86c]
    unsigned int v27;  // [sp-0x864]
    char v28;  // [bp-0x858]
    char v29;  // [bp-0x848]
    char v30;  // [bp-0x838]
    char v31;  // [bp-0x828]
    char v32;  // [bp-0x818]
    char v33;  // [bp-0x810]
    char v34;  // [bp-0x800]
    char v35;  // [bp-0x7f0]
    char v36;  // [bp-0x7e0]
    char v37;  // [bp-0x7d0]
    char v38;  // [bp-0x7c8]
    char v39;  // [bp-0x7b8]
    char v40;  // [bp-0x7a8]
    char v41;  // [bp-0x798]
    char v42;  // [bp-0x788]
    char v43;  // [bp-0x780]
    char v44;  // [bp-0x538]
    char v45;  // [bp-0x534]
    char v46;  // [bp-0x530]
    char v47;  // [bp-0x274]
    char v48;  // [bp-0x26c]
    void* v49;  // [bp-0x268], Other Possible Types: char
    unsigned long long v50;  // [sp-0x260]
    char v51;  // [sp-0x258]
    char v52;  // [bp-0x248]
    char v53;  // [bp-0x238]
    char v54;  // [bp-0x228]
    unsigned long long v56;  // rdx
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm3

    clap_builder::builder::command::Command::new::h7b4a5a15564a61f7(&v46, uucore::util_name::h412db5e565a079f3(), v56);
    clap_builder::builder::command::Command::version::h1a02a2f7ae96b05f(&v1, &v46, "0.0.28", 6);
    clap_builder::builder::command::Command::about::had1c8430d3000996(&v46, &v1, "Copy standard input to each FILE, and also to standard output.", 62);
    uucore::format_usage::h00b69bae12d8ac9c(&v43, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h21a87a05b6c56c9a(&v1, &v46, &v43);
    clap_builder::builder::command::Command::after_help::h59d5ed5e8247ca2f(&v46, &v1, "If a FILE is -, it refers to a file named - .", 45);
    memcpy(&v1, &v46, 700);
    v26 = 1126449662918784 | *((long long *)&v47);
    v27 = *((int *)&v48);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v46, "--help", 6);
    clap_builder::builder::arg::Arg::short::h5bd97b1fc615a298(&v43, &v46, 104);
    clap_builder::builder::arg::Arg::long::h81eb98f80bc6f273(&v46, &v43, "help", 4);
    clap_builder::builder::arg::Arg::help::hb66e92f741ef991f(&v43, &v46, "Print help", 10);
    clap_builder::builder::arg::Arg::action::h5ec3232674711d94(&v49, &v43, 7);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(&v46, &v1, &v49);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v1, "append", 6);
    clap_builder::builder::arg::Arg::long::h81eb98f80bc6f273(&v43, &v1, "append", 6);
    clap_builder::builder::arg::Arg::short::h5bd97b1fc615a298(&v1, &v43, 97);
    clap_builder::builder::arg::Arg::help::hb66e92f741ef991f(&v43, &v1, "append to the given FILEs, do not overwrite", 43);
    clap_builder::builder::arg::Arg::action::h5ec3232674711d94(&v49, &v43, 2);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(&v1, &v46, &v49);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v46, "ignore-interrupts", 17);
    clap_builder::builder::arg::Arg::long::h81eb98f80bc6f273(&v43, &v46, "ignore-interrupts", 17);
    clap_builder::builder::arg::Arg::short::h5bd97b1fc615a298(&v46, &v43, 105);
    clap_builder::builder::arg::Arg::help::hb66e92f741ef991f(&v43, &v46, "ignore interrupt signals (ignored on non-Unix platforms)", 56);
    clap_builder::builder::arg::Arg::action::h5ec3232674711d94(&v49, &v43, 2);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(&v46, &v1, &v49);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v1, "filei128", 4);
    clap_builder::builder::arg::Arg::action::h5ec3232674711d94(&v43, &v1, 1);
    clap_builder::builder::arg::Arg::value_hint::h1476be3dd7a6a7a8(&v49, &v43, 3);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(&v1, &v46, &v49);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v46, "ignore-pipe-errors", 18);
    clap_builder::builder::arg::Arg::short::h5bd97b1fc615a298(&v43, &v46, 112);
    clap_builder::builder::arg::Arg::help::hb66e92f741ef991f(&v46, &v43, "set write error behavior (ignored on non-Unix platforms)", 56);
    clap_builder::builder::arg::Arg::action::h5ec3232674711d94(&v43, &v46, 2);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(&v46, &v1, &v43);
    clap_builder::builder::arg::Arg::new::hd54e9cfebda1f305(&v1, "output-error", 12);
    clap_builder::builder::arg::Arg::long::h81eb98f80bc6f273(&v43, &v1, "output-error", 12);
    memcpy(&v1, &v43, 584);
    v24 = 128 | *((int *)&v44);
    v25 = *((int *)&v45);
    v49 = 0;
    v50 = 1;
    v51 = 0;
    clap_builder::builder::arg::Arg::num_args::h456c2ecb53fd9884(&v43, &v1, &v49);
    v6 = &g_41459c;
    v7 = 4;
    v4 = 0x8000000000000000;
    *((int128_t *)&v5) = *((int128_t *)&v0);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::hf630c0bbbade2984(&v28, &v1, "produce warnings for errors writing to any output", 49);
    v6 = "warn-nopipe";
    v7 = 11;
    v4 = 0x8000000000000000;
    *((int128_t *)&v5) = *((int128_t *)&v0);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::hf630c0bbbade2984(&v33, &v1, "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)", 84);
    v6 = "exit";
    v7 = 4;
    v4 = 0x8000000000000000;
    *((int128_t *)&v5) = *((int128_t *)&v0);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::hf630c0bbbade2984(&v38, &v1, "exit on write errors to any output", 34);
    v6 = "exit-nopipe";
    v7 = 11;
    v4 = 0x8000000000000000;
    *((int128_t *)&v5) = *((int128_t *)&v0);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::hf630c0bbbade2984(&v49, &v1, "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)", 102);
    v57 = *((int128_t *)&v29);
    v58 = *((int128_t *)&v30);
    v59 = *((int128_t *)&v31);
    *((int128_t *)&v1) = *((int128_t *)&v28);
    v3 = v57;
    v5 = v58;
    v6 = v59;
    v8 = *((long long *)&v32);
    *((int128_t *)&v9) = *((int128_t *)&v33);
    *((int128_t *)&v10) = *((int128_t *)&v34);
    *((int128_t *)&v11) = *((int128_t *)&v35);
    *((int128_t *)&v12) = *((int128_t *)&v36);
    v13 = *((long long *)&v37);
    v18 = *((long long *)&v42);
    *((int128_t *)&v17) = *((int128_t *)&v41);
    *((int128_t *)&v16) = *((int128_t *)&v40);
    *((int128_t *)&v15) = *((int128_t *)&v39);
    *((int128_t *)&v14) = *((int128_t *)&v38);
    v23 = *((long long *)&v54);
    *((int128_t *)&v22) = *((int128_t *)&v53);
    *((int128_t *)&v21) = *((int128_t *)&v52);
    *((int128_t *)&v20) = *((int128_t *)&v51);
    *((int128_t *)&v19) = *((int128_t *)&v49);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc7c8adc8224f4743(&v49, &v1);
    clap_builder::builder::arg::Arg::value_parser::hea57fc7089184578(&v1, &v43, &v49);
    clap_builder::builder::arg::Arg::help::hb66e92f741ef991f(&v43, &v1, "set write error behavior", 24);
    clap_builder::builder::arg::Arg::conflicts_with::ha1227ccef041a968(&v1, &v43, "ignore-pipe-errors", 18);
    clap_builder::builder::command::Command::arg::h4175f17e0e22ef18(a0, &v46, &v1);
    return a0;
}
