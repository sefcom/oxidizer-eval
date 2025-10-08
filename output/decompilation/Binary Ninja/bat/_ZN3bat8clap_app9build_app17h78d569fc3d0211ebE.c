
  int64_t bat::clap_app::build_app::h78d569fc3d0211eb(int64_t arg1, int32_t arg2)

{
    uint64_t rbp;
    rbp = 2;
    
    if (arg2)
        rbp = bat::app::env_no_color::hf40fc7450e3b701f() * 2;
    
    int64_t var_a90;
    clap_builder::builder::command::Command::new::h67e8791dce7e27d9(&var_a90, 
        "batA cat(1) clone with wings.A c…");
    void* rax_2 = once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h0637f4668d0c2bc6();
    *(rax_2 + 0x10);
    int64_t var_d58;
    clap_builder::builder::command::Command::version::h14fbcb21383de15d(&var_d58, &var_a90, 
        *(rax_2 + 8));
    clap_builder::builder::command::Command::color::h9b1967a6a1d4a0c3(&var_a90, &var_d58, rbp);
    memcpy(&var_d58, &var_a90, 0x2bc);
    int64_t var_7d4;
    int64_t var_a9c = 0x110000001102400 | var_7d4;
    int32_t var_7cc;
    int32_t var_a94 = var_7cc;
    clap_builder::builder::command::Command::max_term_width::hcb86384aab29d4df(&var_a90, &var_d58);
    clap_builder::builder::command::Command::about::h0b8564a6950e7dd4(&var_d58, &var_a90, 
        "A cat(1) clone with wings.A cat(…", 0x1a);
    clap_builder::builder::command::Command::long_about::h350de48db2eca3a6(&var_a90, &var_d58);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, &data_48141c[0x1c]);
    void var_1020;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "File(s) to print / concatenate. …", 0x3b);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_d58, &var_1020, 
        "File(s) to print / concatenate. …", 0x63);
    clap_builder::builder::arg::Arg::num_args::h37985f12b956105d(&var_1020, &var_d58);
    int64_t var_568 = 3;
    char const* const var_550;
    clap_builder::builder::arg::Arg::value_parser::h0f8097d3d43be33a(&var_550, &var_1020, &var_568);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_550);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, "show-allnotation");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "show-allnotation");
    clap_builder::builder::arg::Arg::alias::h4123757bd3807568(&var_a90, &var_1020, 
        "show-nonprintableMust be one fil…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_a90, 0x41);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_1020, &var_a90, 
        "languageshow-allnotation");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_a90, &var_1020, 
        "Show non-printable characters (s…", 0x38);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_a90, 
        "Show non-printable characters li…", 0xa8);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "nonprintable-notationbinarychop-…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "nonprintable-notationbinarychop-…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 0);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_1020, &var_d58, 
        "unicodecaretinternal error: ente…");
    var_550 = "unicodecaretinternal error: ente…";
    int64_t var_548 = 7;
    char const* const var_540 = "caretinternal error: entered unr…";
    int64_t var_538 = 5;
    clap_builder::builder::arg::Arg::value_parser::h27ab60e7d157d99a(&var_d58, &var_1020, &var_550);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_d58, "notation");
    memcpy(&var_d58, &var_1020, 0x250);
    int32_t var_dd0;
    int32_t rcx_8 = 0x400 | var_dd0;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Set notation for non-printable c…", 0x2a);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_550, &var_1020, 
        "Set notation for non-printable c…", 0x79);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_550);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "binarychop-long-linesforce-color…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "binarychop-long-linesforce-color…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 0);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_1020, &var_a90, 
        "no-printinginternal error: enter…");
    var_550 = "no-printinginternal error: enter…";
    int64_t var_548_1 = 0xb;
    char const* const var_540_1 = "as-textno-printinginternal error…";
    int64_t var_538_1 = 7;
    clap_builder::builder::arg::Arg::value_parser::h27ab60e7d157d99a(&var_a90, &var_1020, &var_550);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, "behavi");
    memcpy(&var_a90, &var_1020, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "How to treat binary content. (de…", 0x33);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_550, &var_1020, 
        "How to treat binary content. (de…", 0xa7);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_550);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "plainpagingno-paginglist-themesi…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_1020, &var_d58, 
        "plainpagingno-paginglist-themesi…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        &data_485489[0xa]);
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_d58, 0x70);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_d58, &var_1020, 
        "plainpagingno-paginglist-themesi…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 4);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Show plain style (alias for '--s…", 0x2d);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_d58, 
        "Only show plain style, no decora…", 0xbb);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, "languageshow-allnotation");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_a90, 0x6c);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_a90, &var_1020, 
        "languageshow-allnotation");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_1020, &var_a90, 
        "languageshow-allnotation");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_a90, &var_1020, 
        "Set the language for syntax high…", 0x29);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_a90, 
        "Explicitly set the language for …", 0xfd);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "highlight-lineset-terminal-title…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "highlight-lineset-terminal-title…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x48);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 1);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_d58, &var_1020, 
        "N:MHighlight lines N through M.H…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Highlight lines N through M.High…", 0x1c);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_550, &var_1020, 
        "Highlight the specified line ran…", 0x15e);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_550);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, &data_485489);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, &data_485489);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 1);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "name\x1b[0mmore");
    clap_builder::builder::arg::Arg::value_parser::h0f8097d3d43be33a(&var_a90, &var_1020, &var_568);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Specify the name to display for …", 0x27);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_a90, &var_1020, 
        "Specify the name to display for …", 0xc4);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_550, &var_d58, &var_a90);
    memcpy(&var_a90, &var_550, 0x2c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, &data_480bb0);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, &data_480bb0);
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x64);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_d58, &var_1020, 
        "line-rangediff-contextpageritali…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Only show lines that have been a…", 0x36);
    char const* const var_7c8;
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Only show lines that have been a…", 0x96);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "diff-contextpageritalic-texthigh…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "diff-contextpageritalic-texthigh…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "diff-contextpageritalic-texthigh…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "NInclude N lines of context arou…");
    clap_builder::builder::arg::Arg::value_parser::hfacd80511d7734c8(&var_a90, &var_1020);
    memcpy(&var_1020, &var_a90, 0x250);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_a90, &var_1020, 
        "Include N lines of context aroun…", 0x53);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_550, &var_d58, &var_a90);
    memcpy(&var_a90, &var_550, 0x2c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, "tabsgridQuitbyten");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "tabsgridQuitbyten");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        "tabsgridQuitbyten");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_d58, 
        "TSet the tab width to T spaces.S…");
    clap_builder::builder::arg::Arg::value_parser::h0952f42123b40436(&var_d58, &var_1020);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Set the tab width to T spaces.Se…", 0x1e);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Set the tab width to T spaces. U…", 0x4d);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, &data_480e94);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, &data_480e94);
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        &data_480e94);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "mode\x1b[2J");
    var_7c8 = &data_480130[0x28];
    int64_t var_7c0 = 4;
    char const* const var_7b8 = "neverinternal error: entered unr…";
    int64_t var_7b0 = 5;
    char const* const var_7a8 = "characterinternal error: entered…";
    int64_t var_7a0 = 9;
    clap_builder::builder::arg::Arg::value_parser::h3758d48321c0c9ed(&var_a90, &var_1020, &var_7c8);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_1020, &var_a90, 
        &data_480130[0x28]);
    memcpy(&var_a90, &var_1020, 0x250);
    int32_t rcx_35 = 0x400 | 0x1000 | 0x400 | var_dd0;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Specify the text-wrapping mode (…", 0x3a);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Specify the text-wrapping mode (…", 0x8d);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "chop-long-linesforce-colorizatio…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "chop-long-linesforce-colorizatio…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x53);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Truncate all lines longer than s…", 0x46);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "terminal-widthnonprintable-notat…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "terminal-widthnonprintable-notat…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_a90, &var_1020, 
        "widthExplicitly set the width of…");
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t var_dd0_2 = 0x1020 | rcx_35;
    int32_t var_dcc;
    int32_t var_dcc_2 = var_dcc;
    clap_builder::builder::arg::Arg::value_parser::h7bf76a4609ea4091(&var_a90, &var_1020);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Explicitly set the width of the …", 0xc7);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, &data_485489[0xa]);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        &data_485489[0xa]);
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        &data_485489[0xa]);
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_d58, 0x6e);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Show line numbers (alias for '--…", 0x30);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Only show line numbers, no other…", 0x54);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "colordecorationsstrip-ansiline-r…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "colordecorationsstrip-ansiline-r…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "colordecorationsstrip-ansiline-r…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "when -- \x1b[8mYAMLb");
    var_7c8 = &data_480130[0x28];
    int64_t var_7c0_1 = 4;
    char const* const var_7b8_1 = "neverinternal error: entered unr…";
    int64_t var_7b0_1 = 5;
    char const* const var_7a8_1 = "alwaysneverinternal error: enter…";
    int64_t var_7a0_1 = 6;
    clap_builder::builder::arg::Arg::value_parser::h3758d48321c0c9ed(&var_a90, &var_1020, &var_7c8);
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t var_dd0_3 = 0x400 | rcx_35;
    int32_t var_dcc_3 = var_dcc;
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_a90, &var_1020, 
        &data_480130[0x28]);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "When to use colors (*auto*, neve…", 0x2b);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Specify when to use colored outp…", 0xdb);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "italic-texthighlight-lineset-ter…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "italic-texthighlight-lineset-ter…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_d58, &var_1020, 
        "when -- \x1b[8mYAMLb");
    var_7c8 = "alwaysneverinternal error: enter…";
    int64_t var_7c0_2 = 6;
    char const* const var_7b8_2 = "neverinternal error: entered unr…";
    int64_t var_7b0_2 = 5;
    clap_builder::builder::arg::Arg::value_parser::h27ab60e7d157d99a(&var_1020, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_d58, &var_1020, 
        "neverinternal error: entered unr…");
    memcpy(&var_1020, &var_d58, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Use italics in output (always, *…", 0x27);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_d58, 
        "Specify when to use ANSI sequenc…", 0x63);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "decorationsstrip-ansiline-ranged…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "decorationsstrip-ansiline-ranged…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "decorationsstrip-ansiline-ranged…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "when -- \x1b[8mYAMLb");
    var_7c8 = &data_480130[0x28];
    int64_t var_7c0_3 = 4;
    char const* const var_7b8_3 = "neverinternal error: entered unr…";
    int64_t var_7b0_3 = 5;
    char const* const var_7a8_2 = "alwaysneverinternal error: enter…";
    int64_t var_7a0_2 = 6;
    clap_builder::builder::arg::Arg::value_parser::h3758d48321c0c9ed(&var_a90, &var_1020, &var_7c8);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_1020, &var_a90, 
        &data_480130[0x28]);
    memcpy(&var_a90, &var_1020, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "When to show the decorations (*a…", 0x35);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Specify when to use the decorati…", 0xc7);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "force-colorizationcolordecoratio…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "force-colorizationcolordecoratio…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x66);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_d58, &var_1020, 
        "colordecorationsstrip-ansiline-r…");
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_1020, &var_d58, 
        "decorationsstrip-ansiline-ranged…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        "force-colorizationcolordecoratio…");
    memcpy(&var_1020, &var_d58, 0x250);
    int32_t var_dd0_5 = 0x1000 | rcx_8;
    int32_t var_dcc_5 = var_dcc;
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Alias for '--decorations=always …", 0xa4);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "pagingno-paginglist-themesignore…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "pagingno-paginglist-themesignore…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "pagingno-paginglist-themesignore…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_1020, &var_a90, 
        "no-paginglist-themesignored-suff…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_a90, &var_1020, 
        "when -- \x1b[8mYAMLb");
    var_7c8 = &data_480130[0x28];
    int64_t var_7c0_4 = 4;
    char const* const var_7b8_4 = "neverinternal error: entered unr…";
    int64_t var_7b0_4 = 5;
    char const* const var_7a8_3 = "alwaysneverinternal error: enter…";
    int64_t var_7a0_3 = 6;
    clap_builder::builder::arg::Arg::value_parser::h3758d48321c0c9ed(&var_1020, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_a90, &var_1020, 
        &data_480130[0x28]);
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t rcx_66 = 0x400 | 0x400 | 0x400 | rcx_8;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_a90, &var_1020, 
        "Specify when to use the pager, o…", 0x4e);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_a90, 
        "Specify when to use the pager. T…", 0xfb);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "no-paginglist-themesignored-suff…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_d58, 0x50);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_d58, &var_1020, 
        "no-paginglist-themesignored-suff…");
    clap_builder::builder::arg::Arg::alias::h4123757bd3807568(&var_1020, &var_d58, 
        "no-pagercapacity");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_1020, &var_d58, 
        "no-paginglist-themesignored-suff…");
    memcpy(&var_d58, &var_1020, 0x250);
    int32_t var_b08_1 = 0x1004 | rcx_66;
    int32_t var_b04_1 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Alias for '--paging=never'comman…", 0x1a);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "pageritalic-texthighlight-linese…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "pageritalic-texthighlight-linese…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "pageritalic-texthighlight-linese…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "commandDetermine which pager to …");
    memcpy(&var_a90, &var_1020, 0x250);
    int32_t rcx_74 = 0x1000 | rcx_66;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Determine which pager to use.Det…", 0x1d);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Determine which pager is used. T…", 0x123);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "map-syntaxterminal-widthnonprint…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_d58, 0x6d);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_d58, &var_1020, 
        "map-syntaxterminal-widthnonprint…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 1);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_d58, &var_1020, 
        "glob:syntaxUse the specified syn…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Use the specified syntax for fil…", 0x4b);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Map a glob pattern to an existin…", 0x177);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "ignored-suffixmap-syntaxterminal…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_a90, 1);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_a90, &var_1020, 
        "ignored-suffixmap-syntaxterminal…");
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t rcx_78 = 0x1000 | rcx_74;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Ignore extension. For example:\n…", 0x77);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "themetheme-darktheme-lightthemes…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "themetheme-darktheme-lightthemes…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        "themetheme-darktheme-lightthemes…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Set the color theme for syntax h…", 0x2c);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Set the theme for syntax highlig…", 0x2d1);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "theme-lightthemes.bintheme set c…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "theme-lightthemes.bintheme set c…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_a90, &var_1020, 
        "theme-lightthemes.bintheme set c…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "themetheme-darktheme-lightthemes…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_a90, &var_1020, 
        "Sets the color theme for syntax …", 0x48);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_a90, 
        "Sets the theme name for syntax h…", 0x13a);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "theme-darktheme-lightthemes.bint…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "theme-darktheme-lightthemes.bint…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        "theme-darktheme-lightthemes.bint…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_d58, 
        "themetheme-darktheme-lightthemes…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Sets the color theme for syntax …", 0x47);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_d58, 
        "Sets the theme name for syntax h…", 0x136);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "list-themesignored-suffixmap-syn…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "list-themesignored-suffixmap-syn…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Display all supported highlighti…", 0x2a);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Display a list of supported them…", 0x3b);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "squeeze-blanksqueeze-limitshow-n…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "squeeze-blanksqueeze-limitshow-n…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x73);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Squeeze consecutive empty lines.…", 0x20);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_d58, 
        "Squeeze consecutive empty lines …", 0x39);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "squeeze-limitshow-nonprintableMu…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "squeeze-limitshow-nonprintableMu…");
    clap_builder::builder::arg::Arg::value_parser::ha9b1cac5de7d8017(&var_a90, &var_1020);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_a90, 
        "Set the maximum number of consec…", 0x40);
    memcpy(&var_7c8, &var_1020, 0x250);
    int32_t var_578 = 0x1000 | rcx_78;
    int32_t var_574 = var_dcc;
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "strip-ansiline-rangediff-context…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "strip-ansiline-rangediff-context…");
    clap_builder::builder::arg::Arg::overrides_with::he0f55ba8a15cf8ba(&var_d58, &var_1020, 
        "strip-ansiline-rangediff-context…");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_d58, 
        "when -- \x1b[8mYAMLb");
    var_7c8 = &data_480130[0x28];
    int64_t var_7c0_5 = 4;
    char const* const var_7b8_5 = "alwaysneverinternal error: enter…";
    int64_t var_7b0_5 = 6;
    char const* const var_7a8_4 = "neverinternal error: entered unr…";
    int64_t var_7a0_4 = 5;
    clap_builder::builder::arg::Arg::value_parser::h3758d48321c0c9ed(&var_d58, &var_1020, &var_7c8);
    clap_builder::builder::arg::Arg::default_value::h57428a5eed539231(&var_1020, &var_d58, 
        "neverinternal error: entered unr…");
    memcpy(&var_d58, &var_1020, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Strip colors from the input (aut…", 0x33);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_d58, &var_1020, 
        "Specify when to strip ANSI escap…", 0xca);
    memcpy(&var_1020, &var_d58, 0x250);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "stylethemetheme-darktheme-lightt…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "stylethemetheme-darktheme-lightt…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 1);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_1020, &var_a90, 
        "componentsComma-separated list o…");
    clap_builder::builder::arg::Arg::value_parser::h0eefa7e55ed1255a(&var_a90, &var_1020);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Comma-separated list of style el…", 0x9f);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Configure which elements (line n…", 0x623);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "line-rangediff-contextpageritali…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "line-rangediff-contextpageritali…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_1020, 0x72);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 1);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_d58, &var_1020, 
        "N:MHighlight lines N through M.H…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Only print the lines from N to M…", 0x21);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Only print the specified range o…", 0x1d0);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "list-languagesDisplay a list of …");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "list-languagesDisplay a list of …");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_a90, &var_1020, 0x4c);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_a90, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_a90, &var_1020, 
        "list-themesignored-suffixmap-syn…");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_a90, 
        "Display all supported languages.…", 0x20);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_1020, 
        "Display a list of supported lang…", 0x3e);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "unbufferedThis option exists for…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_1020, &var_d58, 0x75);
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_d58, &var_1020, 
        "unbufferedThis option exists for…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    memcpy(&var_d58, &var_1020, 0x250);
    int32_t rcx_104 = 0x1000 | 0x1000 | 0x400 | rcx_78;
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_1020, &var_d58, 
        "This option exists for POSIX-com…", 0x8b);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "no-configDo not use the configur…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "no-configDo not use the configur…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t var_dd0_9 = rcx_74 | 4;
    int32_t var_dcc_9 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Do not use the configuration fil…", 0x21);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, "no-custom-assets");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "no-custom-assets");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    memcpy(&var_1020, &var_d58, 0x250);
    int32_t var_dd0_10 = rcx_104 | 4;
    int32_t var_dcc_10 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Do not load custom assetscomplet…", 0x19);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_550, &var_a90, &var_d58);
    memcpy(&var_a90, &var_550, 0x2c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "completionSHELLps1zshShow shell …");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "completionSHELLps1zshShow shell …");
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_d58, &var_1020, 
        "SHELLps1zshShow shell completion…");
    var_7c8 = "bashHOME=";
    int64_t var_7c0_6 = 4;
    char const* const var_7b8_6 = "fish\x1b[2m to l";
    int64_t var_7b0_6 = 4;
    char const* const var_7a8_5 = "ps1zshShow shell completion for …";
    int64_t var_7a0_5 = 3;
    char const* const var_798 = "zshShow shell completion for a c…";
    int64_t var_790 = 3;
    clap_builder::builder::arg::Arg::value_parser::h2ce8401e13ded5d6(&var_1020, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Show shell completion for a cert…", 0x52);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_550, &var_a90, &var_d58);
    memcpy(&var_a90, &var_550, 0x2c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "config-fileShow path to the conf…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "config-fileShow path to the conf…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_1020, &var_d58, 
        "list-languagesDisplay a list of …");
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_d58, &var_1020, 
        "list-themesignored-suffixmap-syn…");
    memcpy(&var_1020, &var_d58, 0x250);
    int32_t var_dd0_11 = rcx_104 | 4;
    int32_t var_dcc_11 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Show path to the configuration f…", 0x24);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "generate-config-fileGenerates a …");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "generate-config-fileGenerates a …");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_1020, &var_a90, 
        "list-languagesDisplay a list of …");
    clap_builder::builder::arg::Arg::conflicts_with::hb284045f63e3df61(&var_a90, &var_1020, 
        "list-themesignored-suffixmap-syn…");
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t var_dd0_12 = rcx_74 | 4;
    int32_t var_dcc_12 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Generates a default configuratio…", 0x27);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "config-dirShow bat's configurati…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "config-dirShow bat's configurati…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    memcpy(&var_1020, &var_d58, 0x250);
    int32_t var_dd0_13 = rcx_104 | 4;
    int32_t var_dcc_13 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Show bat's configuration directo…", 0x23);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "cache-dirShow bat's cache direct…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "cache-dirShow bat's cache direct…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    memcpy(&var_1020, &var_a90, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Show bat's cache directory.diagn…", 0x1b);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "diagnosticdiagnosticsShow diagno…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "diagnosticdiagnosticsShow diagno…");
    clap_builder::builder::arg::Arg::alias::h4123757bd3807568(&var_d58, &var_1020, 
        "diagnosticsShow diagnostic infor…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_1020, &var_d58, 2);
    memcpy(&var_d58, &var_1020, 0x250);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_1020, &var_d58, 
        "Show diagnostic information for …", 0x2c);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_1020);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, "acknowledgements");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_a90, 
        "acknowledgements");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_1020, 2);
    memcpy(&var_1020, &var_a90, 0x250);
    int32_t var_dd0_15 = 0x1000 | rcx_74;
    int32_t var_dcc_15 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_7c8, &var_1020, 
        "Show acknowledgements.Sets termi…", 0x16);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "set-terminal-titlesqueeze-blanks…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_1020, &var_d58, 
        "set-terminal-titlesqueeze-blanks…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_1020, 2);
    memcpy(&var_1020, &var_d58, 0x250);
    int32_t var_dd0_16 = 0x1000 | rcx_74 | 4 | 0x1000;
    int32_t var_dcc_16 = var_dcc;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_1020, 
        "Sets terminal title to filenames…", 0x34);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_550, &var_a90, &var_d58);
    std::fs::metadata::h69cc250c0e4ebc3f(&var_a90);
    int32_t rbx_1 = var_a90;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h0c3c97850cfa6031(&var_a90);
    
    if (rbx_1 != 2)
        return memcpy(arg1, &var_550, 0x2c8);
    
    memcpy(&var_1020, &var_550, 0x2c8);
    clap_builder::builder::command::Command::new::h67e8791dce7e27d9(&var_a90, 
        "cachesrc/bin/bat/app.rsCould not…");
    memcpy(&var_d58, &var_a90, 0x2bc);
    var_a9c = 0x800000 | var_7d4;
    var_a9c = var_7d4;
    clap_builder::builder::command::Command::about::h0b8564a6950e7dd4(&var_a90, &var_d58, 
        "Modify the syntax-definition and…", 0x2c);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "buildInitialize (or update) the …");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_d58, 
        "buildInitialize (or update) the …");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_d58, &var_7c8, 0x62);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_7c8, &var_d58, 2);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_d58, &var_7c8, 
        "Initialize (or update) the synta…", 0x2e);
    clap_builder::builder::arg::Arg::long_help::h083fb45089f9692f(&var_7c8, &var_d58, 
        "Initialize (or update) the synta…", 0x7a);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "clearRemove the cached syntax de…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_a90, 
        "clearRemove the cached syntax de…");
    clap_builder::builder::arg::Arg::short::h5b994f24c0ff1dc4(&var_a90, &var_7c8, 0x63);
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_7c8, &var_a90, 2);
    char const* const var_288;
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_288, &var_7c8, 
        "Remove the cached syntax definit…", 0x30);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_288);
    int64_t var_d10_1 = 1;
    int64_t var_d08_1 = 0;
    var_d58 = 0;
    int64_t var_d50_1 = 8;
    int16_t var_d00_1 = 0;
    int128_t var_d48_1 = {0};
    int64_t var_d38_1 = 8;
    int128_t var_d30_1 = {0};
    int64_t var_d20_1 = 8;
    int64_t var_d18_1 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::hfb63df85da8821fb(&var_7c8, &var_d58);
    var_288 = "buildInitialize (or update) the …";
    int64_t var_280_1 = 5;
    char const* const var_278_1 = "clearRemove the cached syntax de…";
    int64_t var_270_1 = 5;
    clap_builder::builder::arg_group::ArgGroup::args::h95ccf77517ae9464(&var_d58, &var_7c8, 
        &var_288);
    var_d00_1 = 1;
    var_7c8 = var_d58;
    var_7b8_6 = var_d48_1;
    var_7a8_5 = var_d38_1;
    var_798 = var_d30_1;
    int128_t var_788_1 = var_d18_1;
    int64_t var_778_1 = var_d08_1;
    char var_770_1 = var_d00_1;
    int32_t var_76f_1 = *var_d00_1[1];
    int16_t var_cfb;
    int16_t var_76b_1 = var_cfb;
    char var_cf9;
    char var_769_1 = var_cf9;
    clap_builder::builder::command::Command::group::he3cac4b8560c953b(&var_d58, &var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "sourcedirUse a different directo…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_a90, 
        "sourcedirUse a different directo…");
    clap_builder::builder::arg::Arg::requires::h285ee0176c9835f6(&var_a90, &var_7c8);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_7c8, &var_a90, 
        "dirUse a different directory to …");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_288, &var_7c8, 
        "Use a different directory to loa…", 0x3b);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_288);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, 
        "targetUse a different directory …");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_d58, 
        "targetUse a different directory …");
    clap_builder::builder::arg::Arg::requires::h285ee0176c9835f6(&var_d58, &var_7c8);
    clap_builder::builder::arg::Arg::value_name::h660bca0c7418db71(&var_7c8, &var_d58, 
        "dirUse a different directory to …");
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_288, &var_7c8, 
        "Use a different directory to sto…", 0x43);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_288);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_a90, 
        "blankCreate completely new synta…");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_a90, 
        "blankCreate completely new synta…");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_a90, &var_7c8, 2);
    clap_builder::builder::arg::Arg::requires::h285ee0176c9835f6(&var_7c8, &var_a90);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_288, &var_7c8, 
        "Create completely new syntax and…", 0x57);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_a90, &var_d58, &var_288);
    clap_builder::builder::arg::Arg::new::h0cedc99a5a4b2d9b(&var_d58, "acknowledgements");
    clap_builder::builder::arg::Arg::long::he78e7877abf06eb1(&var_7c8, &var_d58, 
        "acknowledgements");
    clap_builder::builder::arg::Arg::action::hc38daab2fb3140bd(&var_d58, &var_7c8, 2);
    clap_builder::builder::arg::Arg::requires::h285ee0176c9835f6(&var_7c8, &var_d58);
    clap_builder::builder::arg::Arg::help::h0e3af94f24af5b7e(&var_288, &var_7c8, 
        "Build acknowledgements.bin.You c…", 0x1b);
    clap_builder::builder::command::Command::arg::h42064b8ec4a5569f(&var_d58, &var_a90, &var_288);
    clap_builder::builder::command::Command::subcommand::h4a7d6e751cc8e1cb(&var_a90, &var_1020, 
        &var_d58);
    return clap_builder::builder::command::Command::after_long_help::h41aa0aca446676ce(arg1, 
        &var_a90);
}
