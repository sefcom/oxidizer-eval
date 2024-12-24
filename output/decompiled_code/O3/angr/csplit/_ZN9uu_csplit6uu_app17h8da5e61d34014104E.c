long long uu_csplit::uu_app::h8da5e61d34014104(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h1689ed30181b363f(&v8, uucore::util_name::h412db5e565a079f3(), v15);
    clap_builder::builder::command::Command::version::h22c9aee661767092(&v0, &v8, "0.0.28Split a file into sections determined by context lines{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified num", 6);
    clap_builder::builder::command::Command::about::hce9b24340ea7ce56(&v8, &v0, "Split a file into sections determined by context lines{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of", 54);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... FILE PATTERN...FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of outpu", 30);
    clap_builder::builder::command::Command::override_usage::h52281e65c26e49d0(&v0, &v8, &v5);
    memcpy(&v8, &v0, 700);
    v11 = 584115552392 | *((long long *)&v3);
    v12 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v0, "suffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v0, 98);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v0, &v5, "suffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 13);
    clap_builder::builder::arg::Arg::value_name::hfaf39d32e8616a4e(&v5, &v0, "FORMATuse sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty outpu");
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v13, &v5, "use sprintf FORMAT instead of %02dPREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output file", 34);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v8, "prefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v8, &v5, "prefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::value_name::hfaf39d32e8616a4e(&v5, &v8, "PREFIXuse PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE sepa");
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v13, &v5, "use PREFIX instead of 'xx'do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated ", 26);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v0, "keep-filesquietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v0, 107);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v0, &v5, "keep-filesquietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 10);
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v5, &v0, "do not remove output files on errorssuppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx", 36);
    clap_builder::builder::arg::Arg::action::h0f0821ceff3952fb(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v8, "suppress-matched", 16);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v5, &v8, "suppress-matched", 16);
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v8, &v5, "suppress the lines matching PATTERNDIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte co", 35);
    clap_builder::builder::arg::Arg::action::h0f0821ceff3952fb(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v0, "digits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v0, 110);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v0, &v5, "digits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 6);
    clap_builder::builder::arg::Arg::value_name::hfaf39d32e8616a4e(&v5, &v0, "DIGITSuse specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard outp");
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v13, &v5, "use specified number of digits instead of 2silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./ru", 43);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v8, "quietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v8, 115);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v8, &v5, "quietelide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 5);
    clap_builder::builder::arg::Arg::visible_alias::h35174148521704c8(&v5, &v8, "silentdo not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./rustc/8bfcae730a5db2438bbda72796175bba21427be", 6);
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v8, &v5, "do not print counts of output file sizesremove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./rustc/8bfcae730a5db2438bbda72796175bba21427be1/libr", 40);
    clap_builder::builder::arg::Arg::action::h0f0821ceff3952fb(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v0, "elide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::builder::arg::Arg::short::h0de064b3b7b1fb73(&v5, &v0, 122);
    clap_builder::builder::arg::Arg::long::hf85190fcb5f1f7c5(&v0, &v5, "elide-empty-filesprefixsuffix-formatdigits: \nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 17);
    clap_builder::builder::arg::Arg::help::had7fa86f12bc8720(&v5, &v0, "remove empty output filespatternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 25);
    clap_builder::builder::arg::Arg::action::h0f0821ceff3952fb(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v8, "filemode{", 4);
    memcpy(&v5, &v8, 584);
    v6 = *((int *)&v9) | 5;
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::value_hint::hb775fbb9fe7b4b13(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new::ha2d697af59b645d6(&v0, "patternOutput pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 7);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 4;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::action::h0f0821ceff3952fb(&v0, &v5, 1);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    clap_builder::builder::command::Command::arg::hea3166e06af945ef(&v0, &v8, &v5);
    clap_builder::builder::command::Command::after_help::h8c5aeb8870f24013(a0, &v0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output./rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 132);
    return a0;
}
