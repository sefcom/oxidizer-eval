
  fn uu_tail::args::uu_app::hb87d3ad1fe9d91d4(arg1: i64) -> i64

{
    let mut var_7f8: *const i8;
    clap_builder::builder::command::Command::new::hb4f8a8e57c4fa669(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h26f608ccb67720a9(&var_530, &var_7f8, 
        "0.0.28Print the last 10 lines of…");
    clap_builder::builder::command::Command::about::h47256b0c9b865ff6(&var_7f8, &var_530, 
        "Print the last 10 lines of each …", 0xfe);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [FLAG]... [FILE]...Number of …", 0x16);
    clap_builder::builder::command::Command::override_usage::h5f1fe1f379890508(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000080 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "bytesinvalid number of bytes: ''…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_530, &var_a48, 
        "bytesinvalid number of bytes: ''…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_2e8: i32;
    let var_800: i32 = var_2e8 | 0x20;
    let var_2e4: i32;
    let var_7fc: i32 = var_2e4;
    let mut var_a88: *const i8 = "bytesinvalid number of bytes: ''…";
    let var_a80: i64 = 5;
    let mut var_258: *const i8 = "linesinvalid number of lines: ze…";
    let var_250: i64 = 5;
    let mut var_268: *const i8 = var_a88;
    let var_260: i64 = var_a80;
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&var_530, &var_a48, 
        &var_268);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_530, 
        "Number of bytes to printdescript…", 0x18);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "followsleep-intervalinvalid numb…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_7f8, 0x66);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_7f8, &var_a48, 
        "followsleep-intervalinvalid numb…");
    clap_builder::builder::arg::Arg::default_missing_value::h7684e6667c2ff356(&var_a48, &var_7f8);
    var_268 = nullptr;
    let var_260_1: i64 = 1;
    var_258 = 0;
    clap_builder::builder::arg::Arg::num_args::h0d64d401db275127(&var_7f8, &var_a48, &var_268);
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800_1: i32 = 0x80 | var_5b0;
    let var_5ac: i32;
    let var_7fc_1: i32 = var_5ac;
    var_7f8 = "descriptorPrint the file as it g…";
    let var_7f0: i64 = 0xa;
    let var_7e8: *const i8 = &data_41ef2c[4];
    let var_7e0: i64 = 4;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf4f9a2f4632d3c1b(&var_268, &var_7f8);
    clap_builder::builder::arg::Arg::value_parser::h224af3b83e77494d(&var_7f8, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&var_a48, &var_7f8, 
        "followsleep-intervalinvalid numb…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_268, &var_a48, 
        "Print the file as it growsNumber…", 0x1a);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "linesinvalid number of lines: ze…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_530, 0x6e);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_530, &var_a48, 
        "linesinvalid number of lines: ze…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_800_2: i32 = var_2e8 | 0x20;
    let var_7fc_2: i32 = var_2e4;
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&var_530, &var_a48, 
        &var_a88);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_530, 
        "Number of lines to printPIDWith …", 0x18);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "pidinvalid PID: : filesFretryuse…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_a48, &var_7f8, 
        "pidinvalid PID: : filesFretryuse…");
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&var_7f8, &var_a48, 
        "PIDWith -f, terminate after proc…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_7f8, 
        "With -f, terminate after process…", 0x2d);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&var_268, &var_a48, 
        "pidinvalid PID: : filesFretryuse…");
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "quiet: warning: --retry ignored;…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_530, 0x71);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_530, &var_a48, 
        "quiet: warning: --retry ignored;…");
    clap_builder::builder::arg::Arg::visible_alias::h39dce69ff559fd1e(&var_a48, &var_530, 
        "silentNever output headers givin…");
    let mut var_a68: *const i8 = "quiet: warning: --retry ignored;…";
    let var_a60: i64 = 5;
    let var_258_1: *const i8 = "verbose-presume-input-pipequiet:…";
    let var_250_1: i64 = 7;
    var_268 = var_a68;
    let var_260_2: i64 = var_a60;
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&var_530, &var_a48, 
        &var_268);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_530, 
        "Never output headers giving file…", 0x26);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "sleep-intervalinvalid number of …");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&var_7f8, &var_a48, 
        "NNumber of seconds to sleep betw…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_a48, &var_7f8, 
        "sleep-intervalinvalid number of …");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_268, &var_a48, 
        "Number of seconds to sleep betwe…", 0x48);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "max-unchanged-statsinvalid maxim…");
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&var_a48, &var_530, 
        "NNumber of seconds to sleep betw…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_530, &var_a48, 
        "max-unchanged-statsinvalid maxim…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_530, 
        "Reopen a FILE which has not chan…", 0xfe);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "verbose-presume-input-pipequiet:…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_7f8, 0x76);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_7f8, &var_a48, 
        "verbose-presume-input-pipequiet:…");
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&var_a48, &var_7f8, 
        &var_a68);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_7f8, &var_a48, 
        "Always output headers giving fil…", 0x27);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "zero-terminatedcannot convert fl…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_530, 0x7a);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_530, &var_a48, 
        "zero-terminatedcannot convert fl…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_a48, &var_530, 
        "Line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "use-pollingverbose-presume-input…");
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&var_a48, &var_7f8, "-disable-inoti");
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&var_7f8, &var_a48, 
        "disDisable 'inotify' support and…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_a48, &var_7f8, 
        "use-pollingverbose-presume-input…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_7f8, &var_a48, 
        "Disable 'inotify' support and us…", 0x31);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "retryuse-pollingverbose-presume-…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_a48, &var_530, 
        "retryuse-pollingverbose-presume-…");
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_530, &var_a48, 
        "Keep trying to open a file if it…", 0x30);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&var_a48, &var_530, 
        "retryuse-pollingverbose-presume-…");
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "Fretryuse-pollingverbose-presume…");
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&var_a48, &var_7f8, 0x46);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&var_7f8, &var_a48, 
        "Same as --follow=name --retrypre…", 0x1d);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&var_a48, &var_7f8, 
        "Fretryuse-pollingverbose-presume…");
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_530, 
        "-presume-input-pipequiet: warnin…");
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&var_a48, &var_530, 
        "presume-input-pipecapacity overf…");
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&var_530, &var_a48, 
        "-presume-input-pipequiet: warnin…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_800_3: i32 = var_2e8 | 4;
    let var_7fc_3: i32 = var_2e4;
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&var_7f8, 
        "filesFretryuse-pollingverbose-pr…");
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&var_a48, &var_7f8, 1);
    clap_builder::builder::arg::Arg::num_args::hf081798b6ac4c38e(&var_7f8, &var_a48);
    var_268 = 2;
    clap_builder::builder::arg::Arg::value_parser::ha29d95b32fd76a47(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::value_hint::h7ffd75f863ae3b2d(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(arg1, &var_530, &var_7f8);
    arg1
}
