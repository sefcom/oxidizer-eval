long long uu_rm::uu_app::h97a746416a9c921d(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::hb09e5080166a2e6c(&v0, uucore::util_name::h60d842bf27b05e82(), v18);
    clap_builder::builder::command::Command::version::he768c891b31ea1fd(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hb9e2e17e43472c68(&v0, &v8, "Remove (unlink) the FILE(s)", 27);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::hc61ed0e30208189e(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v11);
    v4 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "force", 5);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v8, &v5, "force", 5);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v5, &v8, "ignore nonexistent files and arguments, never prompt", 52);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "prompt", 6);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v0, &v5, "prompt before every removal", 27);
    v13 = "prompt-more";
    v14 = 11;
    v15 = "interactive";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&v5, &v0, &v13);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "prompt-more", 11);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v8, 73);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v8, &v5, "prompt once before removing more than three files, or when removing recursively. Less intrusive than -i, while still giving some protection against most mistakes", 161);
    v13 = "prompt";
    v14 = 6;
    v15 = "interactive";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&v5, &v8, &v13);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "interactive", 11);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v0, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v0, &v5, "prompt according to WHEN: never, once (-I), or always (-i). Without WHEN, prompts always", 88);
    clap_builder::builder::arg::Arg::value_name::he884a034805b20c7(&v5, &v0);
    v13 = 0;
    v14 = 1;
    v15 = 0;
    clap_builder::builder::arg::Arg::num_args::hb1ba2bcb33ab4c06(&v0, &v5, &v13);
    memcpy(&v5, &v0, 584);
    v6 = 128 | *((int *)&v1);
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::default_missing_value::hce20ad361582aab4(&v0, &v5);
    v13 = "prompt";
    v14 = 6;
    v15 = "prompt-more";
    v16 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&v5, &v0, &v13);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "one-file-system", 15);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v8, "one-file-system", 15);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v8, &v5, "when removing a hierarchy recursively, skip any directory that is on a file system different from that of the corresponding command line argument (NOT IMPLEMENTED)", 163);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "no-preserve-rootconnection reset", 16);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v0, "no-preserve-rootconnection reset", 16);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v0, &v5, "do not treat '/' specially", 26);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "preserve-root", 13);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v8, "preserve-root", 13);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v8, &v5, "do not remove '/' (default)", 27);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "recursive", 9);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::visible_short_alias::h6acab0547122913a(&v0, &v5, 82);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v0, "recursive", 9);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v0, &v5, "remove directories and their contents recursively", 49);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "dir", 3);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v8, 100);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v8, &v5, "dir", 3);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v5, &v8, "remove empty directories", 24);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "verbose", 7);
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&v5, &v0, 118);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v0, &v5, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&v5, &v0, "explain what is being done", 26);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v8, "-presume-input-tty", 18);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&v5, &v8, "presume-input-tty: cannot remove : No such file or directory\n: Permission denied\n\nrecursing in could not remove directory : Is a directory\nsrc/uu/rm/src/rm.rsremoved directory : Directory not empty\nremove symbolic link ? remove regular empty file remove file remove write-protected regular empty file remove write-protected regular file remove write-protected directory remove directory descend into directory ", 17);
    clap_builder::builder::arg::Arg::alias::h50a51483130f7d11(&v8, &v5, "-presume-input-tty", 18);
    memcpy(&v5, &v8, 584);
    v6 = *((int *)&v9) | 4;
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&v5, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::hb9d8700438cc2377(&v0, &v5, &v13);
    clap_builder::builder::arg::Arg::num_args::h746b8778ba3b0804(&v5, &v0);
    clap_builder::builder::arg::Arg::value_hint::h99962af29f80430a(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(a0, &v8, &v0);
    return a0;
}
