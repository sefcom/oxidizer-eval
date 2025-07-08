
  int64_t uu_csplit::uu_app::h86eb726b6073e125(int64_t arg1)

{
    void var_538;
    clap_builder::builder::command::Command::new::hb6d046c22d0ef603(&var_538, 
        uucore::util_name::h60d842bf27b05e82());
    void var_a50;
    clap_builder::builder::command::Command::version::hbce6c3f8c7c6cd3a(&var_a50, &var_538, 
        "0.0.28Split a file into sections…");
    clap_builder::builder::command::Command::about::hf404c7feac6198e2(&var_538, &var_a50, 
        "Split a file into sections deter…", 0x36);
    void var_788;
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... FILE PATTERN...FO…", 0x1e);
    clap_builder::builder::command::Command::override_usage::h8d1bbf79058ebe18(&var_a50, &var_538, 
        &var_788);
    memcpy(&var_538, &var_a50, 0x2bc);
    int64_t var_794;
    int64_t var_27c = 0x8800000088 | var_794;
    int32_t var_78c;
    int32_t var_274 = var_78c;
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_a50, 
        "suffix-formatdigits: \nkeep-file…");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_a50, 0x62);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_a50, &var_788, 
        "suffix-formatdigits: \nkeep-file…");
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&var_788, &var_a50, 
        "FORMATuse sprintf FORMAT instead…");
    void var_270;
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_270, &var_788, 
        "use sprintf FORMAT instead of %0…", 0x22);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_538, 
        "prefixsuffix-formatdigits: \nkee…");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_538, 0x66);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_538, &var_788, 
        "prefixsuffix-formatdigits: \nkee…");
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&var_788, &var_538, 
        "PREFIXuse PREFIX instead of 'xx'…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_270, &var_788, 
        "use PREFIX instead of 'xx'do not…", 0x1a);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_a50, 
        "keep-filesquietelide-empty-files…");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_a50, 0x6b);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_a50, &var_788, 
        "keep-filesquietelide-empty-files…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_788, &var_a50, 
        "do not remove output files on er…", 0x24);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_538, 
        "suppress-matcheduespemosarenegyl…");
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_788, &var_538, 
        "suppress-matcheduespemosarenegyl…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_538, &var_788, 
        "suppress the lines matching PATT…", 0x23);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_a50, 
        "digits: \nkeep-filesquietelide-e…");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_a50, 0x6e);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_a50, &var_788, 
        "digits: \nkeep-filesquietelide-e…");
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&var_788, &var_a50, 
        "DIGITSuse specified number of di…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_270, &var_788, 
        "use specified number of digits i…", 0x2b);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_538, 
        "quietelide-empty-filesFailed to …");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_538, 0x73);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_538, &var_788, 
        "quietelide-empty-filesFailed to …");
    clap_builder::builder::arg::Arg::visible_alias::h1c77802993eed174(&var_788, &var_538, 
        "silentdo not print counts of out…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_538, &var_788, 
        "do not print counts of output fi…", 0x28);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_a50, 
        "elide-empty-filesFailed to elide…");
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&var_788, &var_a50, 0x7a);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&var_a50, &var_788, 
        "elide-empty-filesFailed to elide…");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&var_788, &var_a50, 
        "remove empty output filespattern…", 0x19);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_538, "filemode{");
    memcpy(&var_788, &var_538, 0x248);
    int32_t var_2f0;
    int32_t var_540 = var_2f0 | 5;
    int32_t var_2ec;
    int32_t var_53c = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::h3e8455d3453ae831(&var_270, &var_788, 3);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&var_a50, 
        "patternOutput pieces of FILE sep…");
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_808;
    int32_t var_540_1 = var_808 | 4;
    int32_t var_804;
    int32_t var_53c_1 = var_804;
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&var_a50, &var_788, 1);
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_540_2 = var_808 | 1;
    int32_t var_53c_2 = var_804;
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&var_a50, &var_538, &var_788);
    clap_builder::builder::command::Command::after_help::ha6aa7879de8ba777(arg1, &var_a50, 
        "Output pieces of FILE separated …", 0x84);
    return arg1;
}
