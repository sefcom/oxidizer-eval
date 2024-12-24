long long uu_rm::uu_app::h035066bf1263c8f0(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa58]
    char v1;  // [bp-0x810]
    char v2;  // [bp-0x80c]
    unsigned long long v3;  // [sp-0x79c]
    unsigned int v4;  // [sp-0x794]
    char v5;  // [bp-0x790]
    unsigned int v6;  // [sp-0x548]
    unsigned int v7;  // [sp-0x544]
    char v8;  // [bp-0x540]
    char v9;  // [bp-0x2f8]
    char v10;  // [bp-0x2f4]
    char v11;  // [bp-0x284]
    char v12;  // [bp-0x27c]
    void* v13;  // [bp-0x278], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [sp-0x270]
    char v15;  // [bp-0x268], Other Possible Types: unsigned long
    unsigned long long v16;  // [sp-0x260]
    unsigned long long v18;  // rdx

    clap_builder::builder::command::Command::new::hfe460986e227dfa3(&v0, uucore::util_name::h412db5e565a079f3(), v18);
    clap_builder::builder::command::Command::version::h9a04a5c1d1f989e1(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::ha2f39a483bdcbb60(&v0, &v8, "Remove (unlink) the FILE(s)", 27);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::hcfe9ee057382f5fd(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v11);
    v4 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "force", 5);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v8, &v5, "force", 5);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v5, &v8, "ignore nonexistent files and arguments, never prompt", 52);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "prompt", 6);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v0, &v5, "prompt before every removal", 27);
    v13 = "prompt-more";
    v14 = 11;
    v15 = "interactive";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h5a32f7cef2b62c1a(&v5, &v0, &v13);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "prompt-more", 11);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v8, 73);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v8, &v5, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes", 161);
    v13 = "prompt";
    v14 = 6;
    v15 = "interactive";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h5a32f7cef2b62c1a(&v5, &v8, &v13);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "interactive", 11);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v0, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v0, &v5, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always", 88);
    clap_builder::builder::arg::Arg::value_name::h2cd6173a2089587c(&v5, &v0, v18);
    v13 = 0;
    v14 = 1;
    v15 = 0;
    clap_builder::builder::arg::Arg::num_args::h4aa1ef31e20d7525(&v0, &v5, &v13);
    memcpy(&v5, &v0, 584);
    v6 = 128 | *((int *)&v1);
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::default_missing_value::h81503e771d1e9d4c(&v0, &v5, v18);
    v13 = "prompt";
    v14 = 6;
    v15 = "prompt-more";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h5a32f7cef2b62c1a(&v5, &v0, &v13);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "one-file-system", 15);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v8, "one-file-system", 15);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v8, &v5, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)", 163);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "no-preserve-rootconnection reset", 16);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v0, "no-preserve-rootconnection reset", 16);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v0, &v5, "do not treat '/' specially", 26);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "preserve-root", 13);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v8, "preserve-root", 13);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v8, &v5, "do not remove '/' (default)", 27);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "recursive", 9);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::visible_short_alias::h2de5bc876bc1681c(&v0, &v5, 82);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v0, "recursive", 9);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v0, &v5, "remove directories and their contents recursively", 49);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "dir", 3);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v8, 100);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v8, &v5, "dir", 3);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v5, &v8, "remove empty directories", 24);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "verbose", 7);
    clap_builder::builder::arg::Arg::short::he05b59761a1baeff(&v5, &v0, 118);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v0, &v5, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h25092f1436f229c7(&v5, &v0, "explain what is being done", 26);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v8, "-presume-input-tty", 18);
    clap_builder::builder::arg::Arg::long::h4b1165bb8476e585(&v5, &v8, "presume-input-tty: cannot remove : No such file or directory\n: Permission denied\n\nsrc/uu/rm/src/rm.rsrecursing in : Is a directory\ncould not remove directory : Directory not empty\nremoved directory remove symbolic link ? remove regular empty file remove file remove write-protected regular empty file remove write-protected regular file remove write-protected directory remove directory descend into directory ", 17);
    clap_builder::builder::arg::Arg::alias::h3e031fb2ac7859e3(&v8, &v5, "-presume-input-tty", 18);
    memcpy(&v5, &v8, 584);
    v6 = *((int *)&v9) | 4;
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::hc446613b175223f4(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::hcbb893b192ca1738(&v5, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2f39ce7b34e7e869(&v0, &v5, &v13);
    clap_builder::builder::arg::Arg::num_args::h27368cd66d8c72fb(&v5, &v0);
    clap_builder::builder::arg::Arg::value_hint::h29f1ec64f0b66b0a(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::h2889e9dad65ea88e(a0, &v8, &v0);
    return a0;
}
