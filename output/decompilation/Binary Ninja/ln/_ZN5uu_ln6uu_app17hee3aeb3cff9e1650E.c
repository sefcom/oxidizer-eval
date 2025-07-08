
  int64_t uu_ln::uu_app::hee3aeb3cff9e1650(int64_t arg1)

{
    void var_a48;
    clap_builder::builder::command::Command::new::hd201f2ff4bdbb22a(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::hd279b53c2e81648e(&var_530, &var_a48, 
        "0.0.28Make links between files.{…");
    clap_builder::builder::command::Command::about::h14285ec20af23239(&var_a48, &var_530, 
        "Make links between files.{} [OPT…", 0x19);
    void var_780;
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [-T] TARGET LINK_…", 0x83);
    clap_builder::builder::command::Command::override_usage::he3739cf08eae10bc(&var_530, &var_a48, 
        &var_780);
    memcpy(&var_a48, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_78c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_784 = var_26c;
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&var_780);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_780);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&var_780);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_530, 
        "forceremove existing destination…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_530, 0x66);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_530, &var_780, 
        "forceremove existing destination…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_530, 
        "remove existing destination file…", 0x21);
    void var_268;
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, 
        "interactiveprompt whether to rem…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_a48, 0x69);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_a48, &var_780, 
        "interactiveprompt whether to rem…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_a48, 
        "prompt whether to remove existin…", 0x33);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_530, 
        "no-dereferencetreat LINK_NAME as…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_530, 0x6e);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_530, &var_780, 
        "no-dereferencetreat LINK_NAME as…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_530, 
        "treat LINK_NAME as a normal file…", 0x48);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, 
        "logicalfollow TARGETs that are s…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_a48, 0x4c);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_a48, &var_780, 
        "logicalfollow TARGETs that are s…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_a48, 
        "follow TARGETs that are symbolic…", 0x26);
    clap_builder::builder::arg::Arg::overrides_with::h1a9833f1653364a1(&var_a48, &var_780, 
        &data_415cb0[0x18]);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_780, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_530, &data_415cb0[0x18]);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_530, 0x50);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_530, &var_780, 
        &data_415cb0[0x18]);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_530, 
        "make hard links directly to symb…", 0x2a);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, "symbolicEALREADYDeadlock");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_a48, &var_780, 
        "symbolicEALREADYDeadlock");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_a48, 
        "make symbolic links instead of h…", 0x29);
    clap_builder::builder::arg::Arg::overrides_with::h1a9833f1653364a1(&var_a48, &var_780, 
        "symbolicEALREADYDeadlock");
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_780, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_780);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&var_780);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_780);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, &data_415770);
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_a48, 0x74);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_a48, &var_780, &data_415770);
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_a48, 
        "specify the DIRECTORY in which t…", 0x32);
    clap_builder::builder::arg::Arg::value_name::h7782d995d3e96a9f(&var_a48, &var_780);
    clap_builder::builder::arg::Arg::value_hint::h5cae060624e20492(&var_780, &var_a48, 4);
    clap_builder::builder::arg::Arg::conflicts_with::hfdefdbf6c576ef27(&var_268, &var_780, 
        "no-target-directorytreat LINK_NA…");
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_530, 
        "no-target-directorytreat LINK_NA…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_530, 0x54);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_530, &var_780, 
        "no-target-directorytreat LINK_NA…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_530, 
        "treat LINK_NAME as a normal file…", 0x27);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, "relative\n       extern "");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_a48, 0x72);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_a48, &var_780, 
        "relative\n       extern "");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_a48, 
        "create symbolic links relative t…", 0x2f);
    clap_builder::builder::arg::Arg::requires::h1d27d71543f2d819(&var_a48, &var_780, 
        "symbolicEALREADYDeadlock");
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_780, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_530, 
        "verboseprint name of each linked…");
    clap_builder::builder::arg::Arg::short::hef88c3297fecd295(&var_780, &var_530, 0x76);
    clap_builder::builder::arg::Arg::long::h5c4dba651152cd6b(&var_530, &var_780, 
        "verboseprint name of each linked…");
    clap_builder::builder::arg::Arg::help::h32db748ac84da4ce(&var_780, &var_530, 
        "print name of each linked file.s…", 0x1e);
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::ha224f4e45bc95b4e(&var_a48, 
        "files0.0.28Make links between fi…");
    clap_builder::builder::arg::Arg::action::he8e33ae435700345(&var_780, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_hint::h5cae060624e20492(&var_a48, &var_780, 2);
    memcpy(&var_780, &var_a48, 0x248);
    int32_t var_800;
    int32_t var_538 = var_800 | 1;
    int32_t var_7fc;
    int32_t var_534 = var_7fc;
    clap_builder::builder::arg::Arg::num_args::h1ca3ae445e0bf9b1(&var_a48, &var_780);
    clap_builder::builder::command::Command::arg::h4abc64ce55f11013(arg1, &var_530, &var_a48);
    return arg1;
}
