long long uu_head::uu_app::h3a0d0603aeae9cb6(unsigned long long a0)
{
    char v0;  // [bp-0xa50]
    unsigned int v1;  // [sp-0x808]
    unsigned int v2;  // [sp-0x804]
    char v3;  // [bp-0x800]
    unsigned long long v4;  // [sp-0x544]
    unsigned int v5;  // [sp-0x53c]
    char v6;  // [bp-0x538]
    char v7;  // [bp-0x2f0]
    char v8;  // [bp-0x2ec]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x274]
    unsigned long v11;  // [sp-0x270]
    unsigned long long v12;  // [sp-0x268]
    unsigned long long v13;  // [sp-0x260]
    unsigned long long v14;  // [sp-0x258]
    unsigned int v15;  // [sp-0x28]
    unsigned int v16;  // [sp-0x24]
    unsigned long long v18;  // rdx

    clap_builder::builder::command::Command::new::h92d2f05e153a1c13(&v3, uucore::util_name::h60d842bf27b05e82(), v18);
    clap_builder::builder::command::Command::version::hd889f9a77ef45556(&v6, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h0758d50f0a7c01fb(&v3, &v6, "Print the first 10 lines of each `FILE` to standard output.\nWith more than one `FILE`, precede each with a header giving the file name.\nWith no `FILE`, or when `FILE` is `-`, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.", 265);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [FLAG]... [FILE]...", 22);
    clap_builder::builder::command::Command::override_usage::h6fbe14a44972d743(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((long long *)&v9);
    v5 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v6, "BYTES", 5);
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&v0, &v6, 99);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v6, &v0, "bytes", 5);
    clap_builder::builder::arg::Arg::value_name::h969f407953d1ea5a(&v0, &v6);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&v6, &v0, "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each file", 107);
    v11 = "BYTES";
    v12 = 5;
    v13 = "LINES";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&v0, &v6, &v11);
    memcpy(&v11, &v0, 584);
    v15 = v1 | 32;
    v16 = v2;
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v3, "LINES", 5);
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v3, &v0, "lines", 5);
    clap_builder::builder::arg::Arg::value_name::h969f407953d1ea5a(&v0, &v3);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&v3, &v0, "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each file", 118);
    v11 = "LINES";
    v12 = 5;
    v13 = "BYTES";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&v0, &v3, &v11);
    memcpy(&v11, &v0, 584);
    v15 = v1 | 32;
    v16 = v2;
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v6, "QUIET", 5);
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&v0, &v6, 113);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v6, &v0, "quiet", 5);
    clap_builder::builder::arg::Arg::visible_alias::h090d3a09074674d5(&v0, &v6, "silent", 6);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&v6, &v0, "never print headers giving file names", 37);
    v11 = "VERBOSE";
    v12 = 7;
    v13 = "QUIET";
    v14 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v3, "VERBOSE", 7);
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&v0, &v3, 118);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v3, &v0, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&v0, &v3, "always print headers giving file names", 38);
    v11 = "QUIET";
    v12 = 5;
    v13 = "VERBOSE";
    v14 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h79905db2ba7272b2(&v3, &v0, &v11);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v6, "-PRESUME-INPUT-PIPE", 19);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v0, &v6, "presume-input-pipe", 18);
    clap_builder::builder::arg::Arg::alias::h74bee99b7cf05cc8(&v6, &v0, "-presume-input-pipe", 19);
    memcpy(&v0, &v6, 584);
    v1 = *((int *)&v7) | 4;
    v2 = *((int *)&v8);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v3, "ZEROu128", 4);
    clap_builder::builder::arg::Arg::short::hf9d7039566942140(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::h63177cb4cc0e3da3(&v3, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h4492d3acb8148a98(&v0, &v3, "line delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 34);
    clap_builder::builder::arg::Arg::overrides_with::h3dbbfa0259380c5a(&v3, &v0, "ZEROu128", 4);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::h141bffb01021e0ba(&v6, "FILE", 4);
    clap_builder::builder::arg::Arg::action::hae44a49fe036f8a4(&v0, &v6, 1);
    clap_builder::builder::arg::Arg::value_hint::h445744d0bc011d63(&v6, &v0, 3);
    clap_builder::builder::command::Command::arg::h9e3dea01d7b0e9e5(a0, &v3, &v6);
    return a0;
}
