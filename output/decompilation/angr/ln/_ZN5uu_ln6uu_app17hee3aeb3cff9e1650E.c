long long uu_ln::uu_app::hee3aeb3cff9e1650(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    unsigned long long v3;  // [sp-0x78c]
    unsigned int v4;  // [sp-0x784]
    char v5;  // [bp-0x780]
    unsigned int v6;  // [sp-0x538]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hd201f2ff4bdbb22a(&v0, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::hd279b53c2e81648e(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h14285ec20af23239(&v0, &v8, "Make links between files.", 25);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...", 131);
    clap_builder::builder::command::Command::override_usage::he3739cf08eae10bc(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&v5);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v5);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&v5);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v8, "force", 5);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v8, &v5, "force", 5);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v8, "remove existing destination files", 33);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "interactive", 11);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v0, &v5, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v0, "prompt whether to remove existing destination files", 51);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v8, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v8, 110);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v8, &v5, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v8, "treat LINK_NAME as a normal file if it is a symbolic link to a directory", 72);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "logical", 7);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v0, 76);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v0, &v5, "logical", 7);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v0, "follow TARGETs that are symbolic links", 38);
    clap_builder::builder::arg::Arg::overrides_with::h1a9833f1653364a1(&v0, &v5, "physical", 8);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v8, "physical", 8);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v8, &v5, "physical", 8);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v8, "make hard links directly to symbolic links", 42);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "symbolic", 8);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v0, "make symbolic links instead of hard links", 41);
    clap_builder::builder::arg::Arg::overrides_with::h1a9833f1653364a1(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v5);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&v5);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v0, 116);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v0, &v5, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v0, "specify the DIRECTORY in which to create the links", 50);
    clap_builder::builder::arg::Arg::value_name::h7782d995d3e96a9f(&v0, &v5);
    clap_builder::builder::arg::Arg::value_hint::h5cae060624e20492(&v5, &v0, 4);
    clap_builder::builder::arg::Arg::conflicts_with::hfdefdbf6c576ef27(&v11, &v5, "no-target-directory", 19);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v8, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v8, 84);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v8, &v5, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v8, "treat LINK_NAME as a normal file always", 39);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "relative\n       ", 8);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v0, &v5, "relative\n       ", 8);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v0, "create symbolic links relative to link location", 47);
    clap_builder::builder::arg::Arg::requires::h1d27d71543f2d819(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v8, "verbose", 7);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&v8, &v5, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&v5, &v8, "print name of each linked file", 30);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::h5cae060624e20492(&v0, &v5, 2);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::num_args::h1ca3ae445e0bf9b1(&v0, &v5);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(a0, &v8, &v0);
    return a0;
}
