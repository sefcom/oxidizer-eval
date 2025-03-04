long long uu_df::uu_app::h9c55c0d492ce5ccf(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xa70]
    char v1;  // [bp-0xa68]
    char v2;  // [bp-0xa60]
    char v3;  // [bp-0xa58]
    unsigned int v4;  // [sp-0x810]
    unsigned int v5;  // [sp-0x80c]
    char v6;  // [bp-0x808]
    char v7;  // [bp-0x5c0]
    char v8;  // [bp-0x5bc]
    char v9;  // [bp-0x54c]
    char v10;  // [bp-0x544]
    char v11;  // [bp-0x540]
    unsigned long long v12;  // [sp-0x284]
    unsigned int v13;  // [sp-0x27c]
    unsigned long v14;  // [sp-0x278]
    unsigned long long v15;  // [sp-0x270]
    unsigned long long v16;  // [sp-0x268]
    unsigned long long v17;  // [sp-0x260]
    unsigned long long v18;  // [sp-0x258]
    unsigned long long v19;  // [sp-0x250]
    unsigned long long v20;  // [sp-0x248]
    unsigned long long v21;  // [sp-0x240]
    unsigned long long v22;  // [sp-0x238]
    unsigned long long v23;  // [sp-0x230]
    unsigned long long v24;  // [sp-0x228]
    unsigned long long v25;  // [sp-0x220]
    unsigned long long v27;  // rdx

    clap_builder::builder::command::Command::new::hf9f63144fbfb0a23(&v6, uucore::util_name::h60d842bf27b05e82(), v27);
    clap_builder::builder::command::Command::version::h433c3bafd0e1d510(&v11, &v6, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h1f82c2980799f3bc(&v6, &v11, "Show information about the file system on which each FILE resides,\nor all file systems by default.", 98);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h663950d4e1f8e73e(&v11, &v6, &v3);
    clap_builder::builder::command::Command::after_help::h99a974dc1edcf639(&v6, &v11, "Display values are in units of the first available SIZE from --block-size,\nand the DF_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).\nUnits are K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB,... (powers\nof 1000).", 372);
    memcpy(&v11, &v6, 700);
    v12 = 1126449662918784 | *((long long *)&v9);
    v13 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "help", 4);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v3, &v6, "help", 4);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v6, &v3, "Print help information.", 23);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 5);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "all", 3);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 97);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v11, &v3, "all", 3);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v3, &v11, "all", 3);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v11, &v3, "include dummy file systems", 26);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "blocksize", 9);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v6, 66);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v6, &v3, "block-size", 10);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&v3, &v6, &g_40bde0, 4);
    v14 = "kilo";
    v15 = 4;
    v16 = "blocksize";
    v17 = 9;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v6, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytes", 92);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "total", 5);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v3, &v11, "total", 5);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v11, &v3, "total", 5);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v11, "produce a grand total", 21);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "human-readable-binary", 21);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v6, 104);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v6, &v3, "human-readable", 14);
    v14 = "human-readable-decimal";
    v15 = 22;
    v16 = "human-readable-binary";
    v17 = 21;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v3, &v6, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v6, &v3, "print sizes in human readable format (e.g., 1K 234M 2G)", 55);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "human-readable-decimal", 22);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 72);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v11, &v3, "si", 2);
    v14 = "human-readable-binary";
    v15 = 21;
    v16 = "human-readable-decimal";
    v17 = 22;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v11, &v3, "likewise, but use powers of 1000 not 1024", 41);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "inodes", 6);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v6, 105);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v6, &v3, "inodes", 6);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v3, &v6, "inodes", 6);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v6, &v3, "list inode information instead of block usage", 45);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "kilo", 4);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 107);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v11, &v3, "like --block-size=1K", 20);
    v14 = "blocksize";
    v15 = 9;
    v16 = "kilo";
    v17 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "local", 5);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v6, 108);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v6, &v3, "local", 5);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v3, &v6, "local", 5);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v6, &v3, "limit listing to local file systems", 35);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "no-sync", 7);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v3, &v11, "no-sync", 7);
    v14 = "sync";
    v15 = 4;
    v16 = "no-sync";
    v17 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v11, &v3, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v11, "do not invoke sync before getting usage info (default)", 54);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "output", 6);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v3, &v6, "output", 6);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&v6, &v3, "FIELD_LIST", 10);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 1);
    clap_builder::builder::arg::Arg::num_args::h0b90fac76e4044d0(&v6, &v3);
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((int *)&v7);
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&v6, &v3, 1);
    memcpy(&v14, &_ZN5uu_df17OUTPUT_FIELD_LIST17hf9e7b203e7f2b732E, 192);
    clap_builder::builder::arg::Arg::value_parser::h953ef26054197563(&v3, &v6, &v14);
    clap_builder::builder::arg::Arg::default_missing_values_os::h44fe623f40d4145a(&v6, &v3);
    v14 = "sourcefstypeitotaliusediavailipcent";
    v15 = 6;
    v16 = "size";
    v17 = 4;
    v18 = "used";
    v19 = 4;
    v20 = "avail";
    v21 = 5;
    v22 = "pcent";
    v23 = 5;
    v24 = "target--block-size argument  too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded\nsrc/uu/df/src/df.rs";
    v25 = 6;
    clap_builder::builder::arg::Arg::default_values::hf43cac1176b844ae(&v3, &v6, &v14);
    v14 = "inodes";
    v15 = 6;
    v16 = "portability";
    v17 = 11;
    v18 = "print-type";
    v19 = 10;
    clap_builder::builder::arg::Arg::conflicts_with_all::h9bfee90e28349fa4(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v6, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.", 90);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "portability", 11);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 80);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v11, &v3, "portability", 11);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v3, &v11, "portability", 11);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v11, &v3, "use the POSIX output format", 27);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "sync", 4);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v3, &v6, "sync", 4);
    v14 = "no-sync";
    v15 = 7;
    v16 = "sync";
    v17 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::he7b8c9aeaa314d52(&v6, &v3, &v14);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v6, "invoke sync before getting usage info (non-windows only)", 56);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v14, &v3, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "type", 4);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 116);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v11, &v3, "type", 4);
    v0 = 2;
    v16 = *((long long *)&v2);
    v14 = v0;
    v15 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h8c4087523b35a77e(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&v11, &v3, "TYPE", 4);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v11, 1);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v14, &v3, "limit listing to file systems of type TYPE", 42);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "print-type", 10);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v6, 84);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v6, &v3, "print-type", 10);
    clap_builder::builder::arg::Arg::overrides_with::hfc2e99d4ec01287c(&v3, &v6, "print-type", 10);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v6, &v3, "print file system type", 22);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v11, "exclude-type", 12);
    clap_builder::builder::arg::Arg::short::h1873fd1038563313(&v3, &v11, 120);
    clap_builder::builder::arg::Arg::long::hb8b2abea78898cd2(&v11, &v3, "exclude-type", 12);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v11, 1);
    clap_builder::builder::arg::Arg::value_parser::h8c4087523b35a77e(&v11, &v3, &v0);
    clap_builder::builder::arg::Arg::value_name::h729e66034ac3006a(&v3, &v11, "TYPE", 4);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&v11, &v3, 1);
    clap_builder::builder::arg::Arg::help::ha925c0a82e079b1b(&v3, &v11, "limit listing to file systems not of type TYPE", 46);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::he0054de27113c6fe(&v6, "paths", 5);
    clap_builder::builder::arg::Arg::action::ha9382f4dee4ded52(&v3, &v6, 1);
    clap_builder::builder::arg::Arg::value_hint::h43328907032c1537(&v6, &v3, 2);
    clap_builder::builder::command::Command::arg::he4c265f688bf2bb6(a0, &v11, &v6);
    return a0;
}
