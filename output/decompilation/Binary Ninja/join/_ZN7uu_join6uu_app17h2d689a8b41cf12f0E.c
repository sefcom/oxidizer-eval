
  int64_t uu_join::uu_app::h2d689a8b41cf12f0(int64_t arg1)

{
    void var_540;
    clap_builder::builder::command::Command::new::hf0c7b4d468a90a92(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    void var_808;
    clap_builder::builder::command::Command::version::h683d8a8d79e1c2bb(&var_808, &var_540, 
        "0.0.28For each pair of input lin…");
    clap_builder::builder::command::Command::about::h9ff7c73dacacbe10(&var_540, &var_808, 
        "For each pair of input lines wit…", 0xd4);
    void var_a58;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a58, "{} [OPTION]... FILE1 FILE2FILENU…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h9779d504759106a2(&var_808, &var_540, 
        &var_a58);
    memcpy(&var_540, &var_808, 0x2bc);
    int64_t var_54c;
    int64_t var_284 = 0x8000000080 | var_54c;
    int32_t var_544;
    int32_t var_27c = var_544;
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "aj12itoenocheck-ordercheck-order…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x61);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_808, &var_a58, 1);
    clap_builder::builder::arg::Arg::num_args::h3ff65f816ed627ad(&var_a58, &var_808);
    char const* const var_278 = "12itoenocheck-ordercheck-orderhe…";
    int64_t var_270 = 1;
    char const* const var_268 = "2itoenocheck-ordercheck-orderhea…";
    int64_t var_260 = 1;
    clap_builder::builder::arg::Arg::value_parser::hc79b09d5fad8d665(&var_808, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_a58, &var_808, 
        "FILENUMalso print unpairable lin…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_278, &var_a58, 
        "also print unpairable lines from…", 0x67);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "vaj12itoenocheck-ordercheck-orde…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_540, 0x76);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_540, &var_a58, 1);
    clap_builder::builder::arg::Arg::num_args::h3ff65f816ed627ad(&var_a58, &var_540);
    var_278 = "12itoenocheck-ordercheck-orderhe…";
    int64_t var_270_1 = 1;
    char const* const var_268_1 = "2itoenocheck-ordercheck-orderhea…";
    int64_t var_260_1 = 1;
    clap_builder::builder::arg::Arg::value_parser::hc79b09d5fad8d665(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_a58, &var_540, 
        "FILENUMalso print unpairable lin…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_278, &var_a58, 
        "like -a FILENUM, but suppress jo…", 0x31);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "enocheck-ordercheck-orderheaderz…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x65);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_808, &var_a58, 
        "EMPTYreplace missing input field…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_808, 
        "replace missing input fields wit…", 0x27);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "itoenocheck-ordercheck-orderhead…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_540, 0x69);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&var_540, &var_a58, 
        "ignore-caseignore differences in…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_540, 
        "ignore differences in case when …", 0x30);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "j12itoenocheck-ordercheck-orderh…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x6a);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_808, &var_a58, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_808, 
        "equivalent to '-1 FIELD -2 FIELD…", 0x21);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "oenocheck-ordercheck-orderheader…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_540, 0x6f);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_540, &var_a58, 
        "FORMATobey FORMAT while construc…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_540, 
        "obey FORMAT while constructing o…", 0x2a);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "toenocheck-ordercheck-orderheade…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x74);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_808, &var_a58, 
        "CHAR\x1b[7m");
    var_278 = 2;
    clap_builder::builder::arg::Arg::value_parser::h77c891e8728d4758(&var_a58, &var_808, &var_278);
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_278, &var_a58, 
        "use CHAR as input and output fie…", 0x2c);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "12itoenocheck-ordercheck-orderhe…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_540, 0x31);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_540, &var_a58, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_540, 
        "join on this FIELD of file 1join…", 0x1c);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "2itoenocheck-ordercheck-orderhea…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x32);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_808, &var_a58, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_808, 
        "join on this FIELD of file 2chec…", 0x1c);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "check-orderheaderz0.0.28For each…");
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&var_a58, &var_540, 
        "check-orderheaderz0.0.28For each…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_540, &var_a58, 
        "check that the input is correctl…", 0x4e);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_a58, &var_540, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "nocheck-ordercheck-orderheaderz0…");
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&var_a58, &var_808, 
        "nocheck-ordercheck-orderheaderz0…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_808, &var_a58, 
        "do not check that the input is c…", 0x2f);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_a58, &var_808, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "headerz0.0.28For each pair of in…");
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&var_a58, &var_540, 
        "headerz0.0.28For each pair of in…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_540, &var_a58, 
        "treat the first line in each fil…", 0x5a);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_a58, &var_540, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_a58);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "z0.0.28For each pair of input li…");
    clap_builder::builder::arg::Arg::short::hbc137961c5dd4baf(&var_a58, &var_808, 0x7a);
    clap_builder::builder::arg::Arg::long::h7ad96478866e1a90(&var_808, &var_a58, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::hbf0c46bcb54f3f56(&var_a58, &var_808, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h0ec8734b3bda57fa(&var_278, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_808, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_540, 
        "file1FILE1file2FILE2incompatible…");
    memcpy(&var_a58, &var_540, 0x248);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_540, &var_a58, 
        "FILE1file2FILE2incompatible join…");
    clap_builder::builder::arg::Arg::value_hint::hdbe3a0d87f468a76(&var_a58, &var_540, 3);
    memcpy(&var_278, &var_a58, 0x248);
    int32_t var_2f8;
    int32_t var_30 = var_2f8 | 1 | 4;
    int32_t var_2f4;
    int32_t var_2c = var_2f4;
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(&var_540, &var_808, &var_278);
    clap_builder::builder::arg::Arg::new::h2c97ede5852b6623(&var_808, 
        "file2FILE2incompatible join fiel…");
    memcpy(&var_a58, &var_808, 0x248);
    clap_builder::builder::arg::Arg::value_name::ha21116e1d570c277(&var_808, &var_a58, 
        "FILE2incompatible join fields , …");
    clap_builder::builder::arg::Arg::value_hint::hdbe3a0d87f468a76(&var_a58, &var_808, 3);
    memcpy(&var_808, &var_a58, 0x248);
    int32_t var_5c0;
    int32_t var_5c0_1 = var_5c0 | 1 | 4;
    int32_t var_5bc;
    int32_t var_5bc_1 = var_5bc;
    clap_builder::builder::command::Command::arg::h78b924fdfa0d19fb(arg1, &var_540, &var_808);
    return arg1;
}
