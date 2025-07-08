
  fn uu_wc::uu_app::h62af8873bd1507e0(arg1: i64) -> i64

{
    let mut var_a48: *const i8;
    clap_builder::builder::command::Command::new::heef53aa4e5d4acf1(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h42037cd52bcef4ac(&var_530, &var_a48, 
        "0.0.28Display newline, word, and…");
    clap_builder::builder::command::Command::about::h1782c64d94d23983(&var_a48, &var_530, 
        "Display newline, word, and byte …", 0xa0);
    let mut var_780: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [FILE]...print th…", 0x18);
    clap_builder::builder::command::Command::override_usage::h88329b020f4035f1(&var_530, &var_a48, 
        &var_780);
    memcpy(&var_a48, &var_530, 0x2bc);
    let var_274: i64;
    let var_78c: i64 = 0x8800000088 | var_274;
    let var_26c: i32;
    let var_784: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_530, 
        "bytescharsfiles0-fromlinesmax-li…");
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&var_780, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_530, &var_780, 
        "bytescharsfiles0-fromlinesmax-li…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_530, 
        "print the byte countsprint the c…", 0x15);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_a48, 
        "charsfiles0-fromlinesmax-line-le…");
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&var_780, &var_a48, 0x6d);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_a48, &var_780, 
        "charsfiles0-fromlinesmax-line-le…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_a48, 
        "print the character countsFread …", 0x1a);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_530, 
        "files0-fromlinesmax-line-lengtht…");
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_780, &var_530, 
        "files0-fromlinesmax-line-lengtht…");
    clap_builder::builder::arg::Arg::value_name::hc7d8e8b2a7daef84(&var_530, &var_780, 
        "Fread input from the files speci…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_530, 
        "read input from the files specif…", 0x78);
    let mut var_a60: i64 = 2;
    let var_a50: i64;
    let var_258: i64 = var_a50;
    var_268 = var_a60;
    let var_a58: i64;
    let var_260: i64 = var_a58;
    clap_builder::builder::arg::Arg::value_parser::h113a58cf051bb473(&var_530, &var_780, &var_268);
    clap_builder::builder::arg::Arg::value_hint::h4dbfb8abcb369b0b(&var_780, &var_530, 3);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_530, &var_a48, &var_780);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_a48, 
        "linesmax-line-lengthtotalwordsca…");
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&var_780, &var_a48, 0x6c);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_a48, &var_780, 
        "linesmax-line-lengthtotalwordsca…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_a48, 
        "print the newline countsprint th…", 0x18);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_530, 
        "max-line-lengthtotalwordscapacit…");
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&var_780, &var_530, 0x4c);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_530, &var_780, 
        "max-line-lengthtotalwordscapacit…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_530, 
        "print the length of the longest …", 0x24);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_a48, 
        "totalwordscapacity overflow/rust…");
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_780, &var_a48, 
        "totalwordscapacity overflow/rust…");
    var_a48 = "autoBoolcodetip:\x1b[3mWHENu128f…";
    let var_a40: i64 = 4;
    let var_a38: *const i8 = "alwaysneverinternal error: enter…";
    let var_a30: i64 = 6;
    let var_a28: *const i8 = "only\x1b[1mkind/";
    let var_a20: i64 = 4;
    let var_a18: *const i8 = "neverinternal error: entered unr…";
    let var_a10: i64 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he94a2a0f1ec543ac(&var_268, &var_a48);
    clap_builder::builder::arg::Arg::value_parser::hb47b92374b06f664(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::value_name::hc7d8e8b2a7daef84(&var_780, &var_a48, 
        "WHENu128for<keysKindboolmut only…");
    memcpy(&var_a48, &var_780, 0x248);
    let var_538: i32;
    let var_800: i32 = var_538 | 0x10;
    let var_534: i32;
    let var_7fc: i32 = var_534;
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_a48, 
        "when to print a line with total …", 0x50);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_530, 
        "wordscapacity overflow/rustc/8bf…");
    clap_builder::builder::arg::Arg::short::h1821cb640058dc7e(&var_780, &var_530, 0x77);
    clap_builder::builder::arg::Arg::long::h3c3a43fe85585989(&var_530, &var_780, 
        "wordscapacity overflow/rustc/8bf…");
    clap_builder::builder::arg::Arg::help::hda24e5bf42a6979b(&var_780, &var_530, 
        "print the word counts: \n<stdin>…", 0x15);
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h121854c2d7176118(&var_a48, "file");
    clap_builder::builder::arg::Arg::action::hfee65dd4032c8fea(&var_780, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_parser::h113a58cf051bb473(&var_a48, &var_780, &var_a60);
    clap_builder::builder::arg::Arg::value_hint::h4dbfb8abcb369b0b(&var_780, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h6158f1000831def5(arg1, &var_530, &var_780);
    arg1
}
