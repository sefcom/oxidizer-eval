long long uu_csplit::uu_app::h86eb726b6073e125(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    char v1;  // [bp-0x808]
    char v2;  // [bp-0x804]
    char v3;  // [bp-0x794]
    char v4;  // [bp-0x78c]
    char v5;  // [bp-0x788]
    unsigned int v6;  // [sp-0x540]
    unsigned int v7;  // [sp-0x53c]
    char v8;  // [bp-0x538]
    char v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    unsigned long long v11;  // [sp-0x27c]
    unsigned int v12;  // [sp-0x274]
    char v13;  // [bp-0x270]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::hb6d046c22d0ef603(&v8, uucore::util_name::h60d842bf27b05e82(), v15);
    clap_builder::builder::command::Command::version::hbce6c3f8c7c6cd3a(&v0, &v8, "0.0.28Split a file into sections determined by context lines{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified num", 6);
    clap_builder::builder::command::Command::about::hf404c7feac6198e2(&v8, &v0, "Split a file into sections determined by context lines{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of", 54);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of outpu", 30);
    clap_builder::builder::command::Command::override_usage::h8d1bbf79058ebe18(&v0, &v8, &v5);
    memcpy(&v8, &v0, 700);
    v11 = 584115552392 | *((long long *)&v3);
    v12 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v0, "suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v0, 98);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v0, &v5, "suffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&v5, &v0, "FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty outpu");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v13, &v5, "use sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output file", 34);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v8, "prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v8, &v5, "prefixsuffix-formatdigits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&v5, &v8, "PREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v13, &v5, "use PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 26);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v0, "keep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v0, 107);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v0, &v5, "keep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v5, &v0, "do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 36);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v8, "suppress-matched", 16);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v5, &v8, "suppress-matched", 16);
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v8, &v5, "suppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 35);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v0, "digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v0, 110);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v0, &v5, "digits: \nkeep-filesquietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::value_name::h433bed507f4a0eca(&v5, &v0, "DIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.");
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v13, &v5, "use specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 43);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v8, "quietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v8, 115);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v8, &v5, "quietelide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    clap_builder::builder::arg::Arg::visible_alias::h1c77802993eed174(&v5, &v8, "silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 6);
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v8, &v5, "do not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 40);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v0, "elide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::builder::arg::Arg::short::h4278cc11f1512de5(&v5, &v0, 122);
    clap_builder::builder::arg::Arg::long::h5b9f19b5fc5c0111(&v0, &v5, "elide-empty-filesFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::builder::arg::Arg::help::h453b8918274ccd7f(&v5, &v0, "remove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 25);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v8, "filemode{", 4);
    memcpy(&v5, &v8, 584);
    v6 = *((int *)&v9) | 5;
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::value_hint::h3e8455d3453ae831(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::h58dfbbb12e485797(&v0, "patternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 7);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h9b4010247a2cfc2e(&v0, &v5, 1);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    clap_builder::builder::command::Command::arg::h37d599ab080beb55(&v0, &v8, &v5);
    clap_builder::builder::command::Command::after_help::ha6aa7879de8ba777(a0, &v0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.", 132);
    return a0;
}
