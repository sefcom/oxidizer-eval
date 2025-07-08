
  fn uu_pr::uu_app::h27293cf4b1de8d69(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h7dec7b017f2ecb6e(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::hd212dec74c26cbc6(&var_7f8, &var_530, 
        "0.0.28Write content of given fil…");
    clap_builder::builder::command::Command::about::h66e2f5a678db2873(&var_530, &var_7f8, 
        "Write content of given file or s…", 0x57);
    clap_builder::builder::command::Command::after_help::h7605065ff121a4e0(&var_7f8, &var_530, 
        "+PAGE           Begin output at …", 0x36d);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]...pagesBeg…", 0x18);
    clap_builder::builder::command::Command::override_usage::h87816ddf62385552(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x4008800040088 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "pagesBegin and stop printing wit…");
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_a48, &var_530, 
        "pagesBegin and stop printing wit…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_530, &var_a48, 
        "Begin and stop printing with pag…", 0x38);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_a48, &var_530, 
        "FIRST_PAGE[:LAST_PAGE]headerUse …");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "headerUse the string header to r…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x68);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "headerUse the string header to r…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Use the string header to replace…", 0x42);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "STRINGdouble-spaceProduce output…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "double-spaceProduce output that …");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x64);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "double-spaceProduce output that …");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "Produce output that is double sp…", 0x7a);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "number-linesProvide width digit …");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x6e);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "number-linesProvide width digit …");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Provide width digit line numberi…", 0x185);
    memcpy(&var_7f8, &var_a48, 0x248);
    let var_800: i32;
    let var_5b0: i32 = var_800 | 0x20;
    let var_7fc: i32;
    let var_5ac: i32 = var_7fc;
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_a48, &var_7f8, 
        "[char][width]first-line-numberst…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "first-line-numberstart counting …");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x4e);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "first-line-numberstart counting …");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "start counting with NUMBER at 1s…", 0x3c);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "NUMBERomit-headerWrite neither t…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "omit-headerWrite neither the fiv…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x74);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "omit-headerWrite neither the fiv…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Write neither the five-line iden…", 0xbe);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "lengthOverride the 66-line defau…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x6c);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "lengthOverride the 66-line defau…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "Override the 66-line default (de…", 0x131);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "PAGE_LENGTHomit warning when a f…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "no-file-warningsArgumentConflict…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x72);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "no-file-warningsArgumentConflict…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "omit warning when a file cannot …", 0x29);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "form-feedUse a <form-feed> for n…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x46);
    clap_builder::builder::arg::Arg::short_alias::h45960be7a58464fa(&var_530, &var_a48, 0x66);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_a48, &var_530, 
        "form-feedUse a <form-feed> for n…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_530, &var_a48, 
        "Use a <form-feed> for new pages,…", 0x64);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "widthSet the width of the line t…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x77);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "widthSet the width of the line t…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Set the width of the line to wid…", 0x120);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "widthSet the width of the line t…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "page-widthset page width to PAGE…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x57);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "page-widthset page width to PAGE…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "set page width to PAGE_WIDTH (72…", 0x7b);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "widthSet the width of the line t…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "acrossModify the effect of the -…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x61);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "acrossModify the effect of the -…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Modify the effect of the - colum…", 0x106);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_a48, &var_530, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_530, &var_a48, 
        "Produce multi-column output that…", 0x21c);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_a48, &var_530, 
        "columnProduce multi-column outpu…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "separatorSeparate text columns b…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "separatorSeparate text columns b…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Separate text columns by the sin…", 0x8e);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, "charpr");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "sep-stringseparate columns by ST…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x53);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "sep-stringseparate columns by ST…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "separate columns by STRING, with…", 0x8a);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "stringmergeMerge files. Standard…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "mergeMerge files. Standard outpu…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x6d);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_7f8, &var_a48, 
        "mergeMerge files. Standard outpu…");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_7f8, 
        "Merge files. Standard output sha…", 0x125);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, 
        "indentEach line of output shall …");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_530, 0x6f);
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_530, &var_a48, 
        "indentEach line of output shall …");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_a48, &var_530, 
        "Each line of output shall be pre…", 0xd1);
    clap_builder::builder::arg::Arg::value_name::h4ad66697c80d0fe3(&var_268, &var_a48, 
        "marginjoin-linesmerge full lines…");
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "join-linesmerge full lines, turn…");
    clap_builder::builder::arg::Arg::short::h6d87e454e0b6080e(&var_a48, &var_7f8, 0x4a);
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_7f8, &var_a48, 
        "merge full lines, turns off -W l…", 0x6a);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_530, "helpt");
    clap_builder::builder::arg::Arg::long::hda8e355c2f00d33b(&var_a48, &var_530, "helpt");
    clap_builder::builder::arg::Arg::help::h851d896d2a6d3ed6(&var_530, &var_a48, 
        "Print help informationfiles^[-+]…", 0x16);
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_a48, &var_530, 5);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hc1928347fd83b3e7(&var_7f8, 
        "files^[-+]\d+.*src/uu/pr/src/pr.…");
    clap_builder::builder::arg::Arg::action::hb15e21bfc8572261(&var_a48, &var_7f8, 1);
    clap_builder::builder::arg::Arg::value_hint::h7a2c9cfd900e9b67(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hf1a4905edfc0c63e(arg1, &var_530, &var_7f8);
    arg1
}
