
  fn uu_ptx::uu_app::h769fde6fd203379a(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h10fabb2b1144ad1c(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::about::h9a931ab9e78fbfe3(&var_7f8, &var_530, 
        "Produce a permuted index of file…", 0x108);
    clap_builder::builder::command::Command::version::h285dda135f18ba90(&var_530, &var_7f8, 
        "0.0.28{} [OPTION]... [INPUT]...\n…");
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [INPUT]...\n{} -G…", 0x3c);
    clap_builder::builder::command::Command::override_usage::hc7af5b0854f2f0a9(&var_7f8, &var_530, 
        &var_a48);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, "filemode{");
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800: i32 = var_5b0 | 4;
    let var_5ac: i32;
    let var_7fc: i32 = var_5ac;
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_7f8, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_hint::h9de4deb4bac13114(&var_a48, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "auto-referencetraditionalflag-tr…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x41);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "auto-referencetraditionalflag-tr…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "output automatically generated r…", 0x29);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, 
        "traditionalflag-truncationmacro-…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x47);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "traditionalflag-truncationmacro-…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "behave more like System V 'ptx'u…", 0x1f);
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "flag-truncationmacro-nameformat=…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x46);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "flag-truncationmacro-nameformat=…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "use STRING for flagging line tru…", 0x28);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_268, &var_a48, 
        "STRINGmacro name to use instead …");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, 
        "macro-nameformat=roffright-side-…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x4d);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "macro-nameformat=roffright-side-…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "macro name to use instead of 'xx…", 0x21);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_268, &var_a48, 
        "STRINGmacro name to use instead …");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "format=roffright-side-refssenten…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x4f);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "format=roffright-side-refssenten…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "generate output as roff directiv…", 0x22);
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, 
        "right-side-refssentence-regexpfo…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x52);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "right-side-refssentence-regexpfo…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "put references at right, not cou…", 0x2a);
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "sentence-regexpformat=texword-re…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x53);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "sentence-regexpformat=texword-re…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "for end of lines or end of sente…", 0x24);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_268, &var_a48, 
        "REGEXPgenerate output as TeX dir…");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, 
        "format=texword-regexpbreak-filei…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x54);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "format=texword-regexpbreak-filei…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "generate output as TeX directive…", 0x21);
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "word-regexpbreak-fileignore-case…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x57);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "word-regexpbreak-fileignore-case…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "use REGEXP to match each keyword", 0x20);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_268, &var_a48, 
        "REGEXPgenerate output as TeX dir…");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, 
        "break-fileignore-caseignore-file…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x62);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "break-fileignore-caseignore-file…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "word break characters in this FI…", 0x22);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_7f8, &var_a48, "FI");
    clap_builder::builder::arg::Arg::value_hint::h9de4deb4bac13114(&var_a48, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "ignore-caseignore-fileonly-filer…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x66);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "ignore-caseignore-fileonly-filer…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "fold lower case to upper case fo…", 0x29);
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, "gap-siz");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x67);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, "gap-siz");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "gap size in columns between outp…", 0x29);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_268, &var_a48, 
        "NUMBERread ignore word list from…");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, 
        "ignore-fileonly-filereferenceswi…");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x69);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, 
        "ignore-fileonly-filereferenceswi…");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "read ignore word list from FILEr…", 0x1f);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_530, &var_a48, "FI");
    clap_builder::builder::arg::Arg::value_hint::h9de4deb4bac13114(&var_a48, &var_530, 3);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, "only-filereferenceswidth");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x6f);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, 
        "only-filereferenceswidth");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "read only word list from this FI…", 0x22);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_7f8, &var_a48, "FI");
    clap_builder::builder::arg::Arg::value_hint::h9de4deb4bac13114(&var_a48, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_530, "referenceswidth");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_530, 0x72);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_530, &var_a48, "referenceswidth");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_530, 
        "first field of each line is a re…", 0x27);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_530, &var_a48, "FI");
    clap_builder::builder::arg::Arg::action::h46af598e30efdc3b(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hfae21f3d74aba04c(&var_7f8, "width");
    clap_builder::builder::arg::Arg::short::hab208f1d722cd955(&var_a48, &var_7f8, 0x77);
    clap_builder::builder::arg::Arg::long::h17b77454ddd7d2a8(&var_7f8, &var_a48, "width");
    clap_builder::builder::arg::Arg::help::h3c60c5663295bb09(&var_a48, &var_7f8, 
        "output width in columns, referen…", 0x2b);
    clap_builder::builder::arg::Arg::value_name::hc56e1022ad2e780e(&var_7f8, &var_a48, 
        "NUMBERread ignore word list from…");
    clap_builder::builder::command::Command::arg::h73d0619826ecd676(arg1, &var_530, &var_7f8);
    arg1
}
