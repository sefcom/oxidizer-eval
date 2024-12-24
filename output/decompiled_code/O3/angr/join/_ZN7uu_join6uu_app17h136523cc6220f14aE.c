long long uu_join::uu_app::h136523cc6220f14a(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa58]
    unsigned int v1;  // [sp-0x810]
    unsigned int v2;  // [sp-0x80c]
    char v3;  // [bp-0x808]
    unsigned int v4;  // [sp-0x5c0]
    unsigned int v5;  // [sp-0x5bc]
    char v6;  // [bp-0x54c]
    char v7;  // [bp-0x544]
    char v8;  // [bp-0x540]
    char v9;  // [bp-0x2f8]
    char v10;  // [bp-0x2f4]
    unsigned long long v11;  // [sp-0x284]
    unsigned int v12;  // [sp-0x27c]
    unsigned long v13;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x270]
    unsigned long long v15;  // [sp-0x268]
    unsigned long long v16;  // [sp-0x260]
    unsigned int v17;  // [sp-0x30]
    unsigned int v18;  // [sp-0x2c]
    unsigned long long v20;  // rdx

    clap_builder::builder::command::Command::new::h7ea17219e97065ad(&v8, uucore::util_name::h412db5e565a079f3(), v20);
    clap_builder::builder::command::Command::version::h6d4948b7764d4e90(&v3, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h0282f5f75c066599(&v8, &v3, "For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.", 212);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... FILE1 FILE2", 26);
    clap_builder::builder::command::Command::override_usage::h7a2637a5fbb9a78f(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | *((long long *)&v6);
    v12 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "a", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 97);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h043898dba52f6ebb(&v0, &v3, v20);
    v13 = "1";
    v14 = 1;
    v15 = "2";
    v16 = 1;
    clap_builder::builder::arg::Arg::value_parser::h6f217a6b22ad9c35(&v3, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v0, &v3, "FILENUM", 7);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v13, &v0, "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2", 103);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "v", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h043898dba52f6ebb(&v0, &v8, v20);
    v13 = "1";
    v14 = 1;
    v15 = "2";
    v16 = 1;
    clap_builder::builder::arg::Arg::value_parser::h6f217a6b22ad9c35(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v0, &v8, "FILENUM", 7);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v13, &v0, "like -a FILENUM, but suppress joined output lines", 49);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "e", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 101);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v3, &v0, "EMPTY", 5);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v3, "replace missing input fields with EMPTY", 39);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "i", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long::hc7c1d089a46a4b6f(&v8, &v0, "ignore-case", 11);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v8, "ignore differences in case when comparing fields", 48);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "j", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 106);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v3, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v3, "equivalent to '-1 FIELD -2 FIELD'", 33);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "o", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v8, &v0, "FORMAT", 6);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v8, "obey FORMAT while constructing output line", 42);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "t", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 116);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v3, &v0, &g_40b740, 4);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::h0d513bf1347f8e31(&v0, &v3, &v13);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v13, &v0, "use CHAR as input and output field separator", 44);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "1", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v8, 49);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v8, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v8, "join on this FIELD of file 1", 28);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "2", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 50);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v3, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v3, "join on this FIELD of file 2", 28);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "check-order", 11);
    clap_builder::builder::arg::Arg::long::hc7c1d089a46a4b6f(&v0, &v8, "check-order", 11);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v8, &v0, "check that the input is correctly sorted, even if all input lines are pairable", 78);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "nocheck-order", 13);
    clap_builder::builder::arg::Arg::long::hc7c1d089a46a4b6f(&v0, &v3, "nocheck-order", 13);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v3, &v0, "do not check that the input is correctly sorted", 47);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "header", 6);
    clap_builder::builder::arg::Arg::long::hc7c1d089a46a4b6f(&v0, &v8, "header", 6);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v8, &v0, "treat the first line in each file as field headers, print them without trying to pair them", 90);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "z", 1);
    clap_builder::builder::arg::Arg::short::he37c891c306ea316(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::hc7c1d089a46a4b6f(&v3, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h8a1433f48840fda9(&v0, &v3, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::h8bd241aad49c299d(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v8, "file1", 5);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 1;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v8, &v0, "FILE1", 5);
    clap_builder::builder::arg::Arg::value_hint::hde8886084460793d(&v0, &v8, 3);
    memcpy(&v13, &v0, 584);
    v17 = v1 | 4;
    v18 = v2;
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h5c665d79428a42cd(&v3, "file2", 5);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = v5;
    clap_builder::builder::arg::Arg::value_name::h3762f34236ede566(&v3, &v0, "FILE2incompatible join fields , invalid field number: invalid file number: ", 5);
    clap_builder::builder::arg::Arg::value_hint::hde8886084460793d(&v0, &v3, 3);
    memcpy(&v3, &v0, 584);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::command::Command::arg::hbb29894dffaf3775(a0, &v8, &v3);
    return a0;
}
