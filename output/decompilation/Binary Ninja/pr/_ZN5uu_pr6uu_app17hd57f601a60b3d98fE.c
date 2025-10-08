
  int64_t uu_pr::uu_app::hd57f601a60b3d98f(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h7bd21421599d0cd9(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h3a9bfc8a8d7544a4(&var_830, &var_568);
    clap_builder::builder::command::Command::about::hc9cce853574a2770(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::hb5fba745b951e2d3(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...pagesBeg…", 0x18);
    clap_builder::builder::command::Command::override_usage::hc4aa069dcb95aa33(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8008800080088 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "pagesBegin and stop printing wit…");
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_ab0, &var_568, 
        "pagesBegin and stop printing wit…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_568, &var_ab0, 
        "Begin and stop printing with pag…", 0x38);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_ab0, &var_568, 
        "FIRST_PAGE[:LAST_PAGE]headerUse …");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "headerUse the string header to r…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x68);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "headerUse the string header to r…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Use the string header to replace…", 0x42);
    void var_2a0;
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "STRINGdouble-spaceProduce output…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "double-spaceProduce output that …");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x64);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "double-spaceProduce output that …");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "Produce output that is double sp…", 0x7a);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "number-linesProvide width digit …");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x6e);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "number-linesProvide width digit …");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Provide width digit line numberi…", 0x185);
    memcpy(&var_830, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_5b8 = var_838 | 0x20;
    int32_t var_834;
    int32_t var_5b4 = var_834;
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_ab0, &var_830, 
        "[char][width]first-line-numberst…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "first-line-numberstart counting …");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x4e);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "first-line-numberstart counting …");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "start counting with NUMBER at 1s…", 0x3c);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "NUMBERomit-headerWrite neither t…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "omit-headerWrite neither the fiv…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x74);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "omit-headerWrite neither the fiv…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Write neither the five-line iden…", 0xbe);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "lengthOverride the 66-line defau…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x6c);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "lengthOverride the 66-line defau…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "Override the 66-line default (de…", 0x131);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "PAGE_LENGTHomit warning when a f…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "no-file-warningsidsunaryoperator…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x72);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "no-file-warningsidsunaryoperator…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "omit warning when a file cannot …", 0x29);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "form-feedUse a <form-feed> for n…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x46);
    clap_builder::builder::arg::Arg::short_alias::ha070c9909ee467a2(&var_568, &var_ab0);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_ab0, &var_568, 
        "form-feedUse a <form-feed> for n…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_568, &var_ab0, 
        "Use a <form-feed> for new pages,…", 0x64);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "widthSet the width of the line t…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x77);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "widthSet the width of the line t…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Set the width of the line to wid…", 0x120);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "widthSet the width of the line t…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "page-widthset page width to PAGE…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x57);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "page-widthset page width to PAGE…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "set page width to PAGE_WIDTH (72…", 0x7b);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "widthSet the width of the line t…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "acrossModify the effect of the -…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x61);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "acrossModify the effect of the -…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Modify the effect of the - colum…", 0x106);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_ab0, &var_568, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_568, &var_ab0, 
        "Produce multi-column output that…", 0x21c);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_ab0, &var_568, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "separatorSeparate text columns b…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "separatorSeparate text columns b…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Separate text columns by the sin…", 0x8e);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, "charpr");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "sep-stringseparate columns by ST…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x53);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "sep-stringseparate columns by ST…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "separate columns by STRING, with…", 0x8a);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "stringmergeMerge files. Standard…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "mergeMerge files. Standard outpu…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x6d);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_830, &var_ab0, 
        "mergeMerge files. Standard outpu…");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_830, 
        "Merge files. Standard output sha…", 0x125);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, 
        "indentEach line of output shall …");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_568, 0x6f);
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_568, &var_ab0, 
        "indentEach line of output shall …");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_ab0, &var_568, 
        "Each line of output shall be pre…", 0xd1);
    clap_builder::builder::arg::Arg::value_name::hfa23fa27713d41dc(&var_2a0, &var_ab0, 
        "marginjoin-linesmerge full lines…");
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "join-linesmerge full lines, turn…");
    clap_builder::builder::arg::Arg::short::h9fdb089fc1274f91(&var_ab0, &var_830, 0x4a);
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_830, &var_ab0, 
        "merge full lines, turns off -W l…", 0x6a);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_568, "helpt");
    clap_builder::builder::arg::Arg::long::hc7bc1e16787d5f6f(&var_ab0, &var_568, "helpt");
    clap_builder::builder::arg::Arg::help::h236e427149429541(&var_568, &var_ab0, 
        "Print help informationfiles^[-+]…", 0x16);
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_ab0, &var_568, 5);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h13be9b64df8b7861(&var_830, 
        "files^[-+]\d+.*src/uu/pr/src/pr.…");
    clap_builder::builder::arg::Arg::action::h205145bd2fe5073f(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_hint::h49cc9350e030d14d(&var_830, &var_ab0);
    clap_builder::builder::command::Command::arg::h65738565064a8c14(arg1, &var_568, &var_830);
    return arg1;
}
