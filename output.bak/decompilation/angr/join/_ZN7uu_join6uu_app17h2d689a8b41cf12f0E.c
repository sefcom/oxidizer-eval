long long uu_join::uu_app::h2d689a8b41cf12f0(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::hf0c7b4d468a90a92(&v8, uucore::util_name::h60d842bf27b05e82(), v20);
    clap_builder::builder::command::Command::version::h683d8a8d79e1c2bb(&v3, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h9ff7c73dacacbe10(&v8, &v3, "For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.", 212);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... FILE1 FILE2", 26);
    clap_builder::builder::command::Command::override_usage::h9779d504759106a2(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | *((long long *)&v6);
    v12 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "a", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 97);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h3ff65f816ed627ad(&v0, &v3);
    v13 = "1";
    v14 = 1;
    v15 = "2";
    v16 = 1;
    clap_builder::builder::arg::Arg::value_parser::hc79b09d5fad8d665(&v3, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v0, &v3, "FILENUM", 7);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v13, &v0, "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2", 103);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "v", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h3ff65f816ed627ad(&v0, &v8);
    v13 = "1";
    v14 = 1;
    v15 = "2";
    v16 = 1;
    clap_builder::builder::arg::Arg::value_parser::hc79b09d5fad8d665(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v0, &v8, "FILENUM", 7);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v13, &v0, "like -a FILENUM, but suppress joined output lines", 49);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "e", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 101);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v3, &v0, "EMPTY", 5);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v3, "replace missing input fields with EMPTY", 39);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "i", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&v8, &v0, "ignore-case", 11);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v8, "ignore differences in case when comparing fields", 48);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "j", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 106);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v3, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v3, "equivalent to '-1 FIELD -2 FIELD'", 33);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "o", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v8, &v0, "FORMAT", 6);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v8, "obey FORMAT while constructing output line", 42);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "t", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 116);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v3, &v0, &g_40b750, 4);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::h77c891e8728d4758(&v0, &v3, &v13);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v13, &v0, "use CHAR as input and output field separator", 44);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "1", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v8, 49);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v8, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v8, "join on this FIELD of file 1", 28);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "2", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 50);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v3, &v0, "FIELD", 5);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v3, "join on this FIELD of file 2", 28);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "check-order", 11);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&v0, &v8, "check-order", 11);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v8, &v0, "check that the input is correctly sorted, even if all input lines are pairable", 78);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "nocheck-order", 13);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&v0, &v3, "nocheck-order", 13);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v3, &v0, "do not check that the input is correctly sorted", 47);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "header", 6);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&v0, &v8, "header", 6);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v8, &v0, "treat the first line in each file as field headers, print them without trying to pair them", 90);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "z", 1);
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&v3, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&v0, &v3, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v8, "file1", 5);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 1;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v8, &v0, "FILE1", 5);
    clap_builder::builder::arg::Arg::value_hint::hdbe3a0d87f468a76(&v0, &v8, 3);
    memcpy(&v13, &v0, 584);
    v17 = v1 | 4;
    v18 = v2;
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&v3, "file2", 5);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 1;
    v2 = v5;
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&v3, &v0, "FILE2incompatible join fields , invalid field number: invalid file number: ", 5);
    clap_builder::builder::arg::Arg::value_hint::hdbe3a0d87f468a76(&v0, &v3, 3);
    memcpy(&v3, &v0, 584);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(a0, &v8, &v3);
    return a0;
}
