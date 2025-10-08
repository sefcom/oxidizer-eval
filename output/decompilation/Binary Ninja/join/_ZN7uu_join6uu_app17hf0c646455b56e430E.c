
  int64_t uu_join::uu_app::hf0c646455b56e430(int64_t arg1)

{
    void var_570;
    clap_builder::builder::command::Command::new::h525d6d2cdd39d258(&var_570, 
        uucore::util_name::h074417a1e6395129());
    void var_838;
    clap_builder::builder::command::Command::version::h7d94b48d97665849(&var_838, &var_570);
    clap_builder::builder::command::Command::about::h99e4f5e889dd74ba(&var_570, &var_838);
    void var_ab8;
    uucore::format_usage::he053403a896311ed(&var_ab8, "{} [OPTION]... FILE1 FILE2FILENU…", 0x1a);
    clap_builder::builder::command::Command::override_usage::hef9cde8e09fd86be(&var_838, &var_570, 
        &var_ab8);
    memcpy(&var_570, &var_838, 0x2bc);
    int64_t var_57c;
    int64_t var_2b4 = 0x8000000080 | var_57c;
    int32_t var_574;
    int32_t var_2ac = var_574;
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "aj12itoenocheck-ordercheck-order…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x61);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_838, &var_ab8, 1);
    clap_builder::builder::arg::Arg::num_args::h569cca45bec2bb7e(&var_ab8, &var_838);
    char const* const var_2a8 = "12itoenocheck-ordercheck-orderhe…";
    int64_t var_2a0 = 1;
    char const* const var_298 = "2itoenocheck-ordercheck-orderhea…";
    int64_t var_290 = 1;
    clap_builder::builder::arg::Arg::value_parser::h43e16d855eaff5dc(&var_838, &var_ab8, &var_2a8);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_ab8, &var_838, 
        "FILENUMalso print unpairable lin…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_2a8, &var_ab8, 
        "also print unpairable lines from…", 0x67);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "vaj12itoenocheck-ordercheck-orde…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_570, 0x76);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_570, &var_ab8, 1);
    clap_builder::builder::arg::Arg::num_args::h569cca45bec2bb7e(&var_ab8, &var_570);
    var_2a8 = "12itoenocheck-ordercheck-orderhe…";
    int64_t var_2a0_1 = 1;
    char const* const var_298_1 = "2itoenocheck-ordercheck-orderhea…";
    int64_t var_290_1 = 1;
    clap_builder::builder::arg::Arg::value_parser::h43e16d855eaff5dc(&var_570, &var_ab8, &var_2a8);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_ab8, &var_570, 
        "FILENUMalso print unpairable lin…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_2a8, &var_ab8, 
        "like -a FILENUM, but suppress jo…", 0x31);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "enocheck-ordercheck-orderheaderz…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x65);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_838, &var_ab8, 
        "EMPTYreplace missing input field…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_838, 
        "replace missing input fields wit…", 0x27);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "itoenocheck-ordercheck-orderhead…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_570, 0x69);
    clap_builder::builder::arg::Arg::long::h34288add47d990b2(&var_570, &var_ab8, 
        "ignore-caseignore differences in…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_570, 
        "ignore differences in case when …", 0x30);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "j12itoenocheck-ordercheck-orderh…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x6a);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_838, &var_ab8, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_838, 
        "equivalent to '-1 FIELD -2 FIELD…", 0x21);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "oenocheck-ordercheck-orderheader…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_570, 0x6f);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_570, &var_ab8, 
        "FORMATobey FORMAT while construc…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_570, 
        "obey FORMAT while constructing o…", 0x2a);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "toenocheck-ordercheck-orderheade…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x74);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_838, &var_ab8, 
        "CHARZero\x1b[7mautoBool");
    var_2a8 = 2;
    clap_builder::builder::arg::Arg::value_parser::hddefc057e53b7cae(&var_ab8, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_2a8, &var_ab8, 
        "use CHAR as input and output fie…", 0x2c);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "12itoenocheck-ordercheck-orderhe…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_570, 0x31);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_570, &var_ab8, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_570, 
        "join on this FIELD of file 1join…", 0x1c);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "2itoenocheck-ordercheck-orderhea…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x32);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_838, &var_ab8, 
        "FIELDequivalent to '-1 FIELD -2 …");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_838, 
        "join on this FIELD of file 2chec…", 0x1c);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "check-orderheaderz(uutils coreut…");
    clap_builder::builder::arg::Arg::long::h34288add47d990b2(&var_ab8, &var_570, 
        "check-orderheaderz(uutils coreut…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_570, &var_ab8, 
        "check that the input is correctl…", 0x4e);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_ab8, &var_570, 2);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "nocheck-ordercheck-orderheaderz(…");
    clap_builder::builder::arg::Arg::long::h34288add47d990b2(&var_ab8, &var_838, 
        "nocheck-ordercheck-orderheaderz(…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_838, &var_ab8, 
        "do not check that the input is c…", 0x2f);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_ab8, &var_838, 2);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "headerz(uutils coreutils) 0.0.30…");
    clap_builder::builder::arg::Arg::long::h34288add47d990b2(&var_ab8, &var_570, 
        "headerz(uutils coreutils) 0.0.30…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_570, &var_ab8, 
        "treat the first line in each fil…", 0x5a);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_ab8, &var_570, 2);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "z(uutils coreutils) 0.0.30For ea…");
    clap_builder::builder::arg::Arg::short::h36512b2e98c7e56d(&var_ab8, &var_838, 0x7a);
    clap_builder::builder::arg::Arg::long::h34288add47d990b2(&var_838, &var_ab8, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::h10b3faf2bc03bd5c(&var_ab8, &var_838, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h8908cb4a12e2a288(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_570, 
        "file1FILE1file2FILE2incompatible…");
    memcpy(&var_ab8, &var_570, 0x278);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_570, &var_ab8, 
        "FILE1file2FILE2incompatible join…");
    clap_builder::builder::arg::Arg::value_hint::h13c4d91d7ca681c3(&var_ab8, &var_570);
    memcpy(&var_2a8, &var_ab8, 0x278);
    int32_t var_2f8;
    int32_t var_30 = var_2f8 | 1 | 4;
    int32_t var_2f4;
    int32_t var_2c = var_2f4;
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h4235f5218f32fea7(&var_838, 
        "file2FILE2incompatible join fiel…");
    memcpy(&var_ab8, &var_838, 0x278);
    clap_builder::builder::arg::Arg::value_name::h017f8a4149966e60(&var_838, &var_ab8, 
        "FILE2incompatible join fields , …");
    clap_builder::builder::arg::Arg::value_hint::h13c4d91d7ca681c3(&var_ab8, &var_838);
    memcpy(&var_838, &var_ab8, 0x278);
    int32_t var_5c0;
    int32_t var_5c0_1 = var_5c0 | 1 | 4;
    int32_t var_5bc;
    int32_t var_5bc_1 = var_5bc;
    clap_builder::builder::command::Command::arg::hb993b0b5afd8ecad(arg1, &var_570, &var_838);
    return arg1;
}
