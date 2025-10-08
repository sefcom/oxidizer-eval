
  fn uu_rm::uu_app::hbf90efb73f59e8a6(arg1: i64) -> i64

{
    let mut var_ac0: ();
    clap_builder::builder::command::Command::new::hbca3ce061ed456d5(&var_ac0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::version::h1ea3b78b22168264(&var_578, &var_ac0);
    clap_builder::builder::command::Command::about::h9ca2956cc22ebd03(&var_ac0, &var_578);
    let mut var_7f8: ();
    uucore::format_usage::he053403a896311ed(&var_7f8, "{} [OPTION]... FILE...ignore non…", 0x16);
    clap_builder::builder::command::Command::override_usage::h65a27385442ac47f(&var_578, &var_ac0, 
        &var_7f8);
    memcpy(&var_ac0, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_804: i64 = 0x8800000088 | var_2bc;
    let var_2b4: i32;
    let var_7fc: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_578, &var_7f8, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_7f8, &var_578, 
        "ignore nonexistent files and arg…", 0x34);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "promptprompt-morerecursiveverbos…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_ac0, 0x69);
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_ac0, &var_7f8, 
        "prompt before every removalpromp…", 0x1b);
    var_2b0 = "prompt-morerecursiveverbose-pres…";
    let var_2a8: i64 = 0xb;
    let var_2a0: *const i8 = "interactiveforceone-file-systemp…";
    let var_298: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h22ab1893dc6423bd(&var_7f8, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_ac0, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "prompt-morerecursiveverbose-pres…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_578, 0x49);
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_578, &var_7f8, 
        "prompt once before removing more…", 0xa1);
    var_2b0 = "promptprompt-morerecursiveverbos…";
    let var_2a8_1: i64 = 6;
    let var_2a0_1: *const i8 = "interactiveforceone-file-systemp…";
    let var_298_1: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h22ab1893dc6423bd(&var_7f8, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "interactiveforceone-file-systemp…");
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_ac0, 
        "interactiveforceone-file-systemp…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_ac0, &var_7f8, 
        "prompt according to WHEN: never,…", 0x58);
    clap_builder::builder::arg::Arg::value_name::hfa87db88236180f7(&var_7f8, &var_ac0);
    clap_builder::builder::arg::Arg::num_args::h4b3ed2f2cfb334df(&var_ac0, &var_7f8, 0);
    memcpy(&var_7f8, &var_ac0, 0x278);
    let var_848: i32;
    let var_580: i32 = 0x80 | var_848;
    let var_844: i32;
    let var_57c: i32 = var_844;
    clap_builder::builder::arg::Arg::default_missing_value::hba2383e2563ce42f(&var_ac0, &var_7f8);
    var_2b0 = "promptprompt-morerecursiveverbos…";
    let var_2a8_2: i64 = 6;
    let var_2a0_2: *const i8 = "prompt-morerecursiveverbose-pres…";
    let var_298_2: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h22ab1893dc6423bd(&var_7f8, &var_ac0, 
        &var_2b0);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_ac0, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "one-file-systempreserve-rootprom…");
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_578, 
        "one-file-systempreserve-rootprom…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_578, &var_7f8, 
        "when removing a hierarchy recurs…", 0xa3);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_7f8, &var_578, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_7f8);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, "no-preserve-root");
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_ac0, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_ac0, &var_7f8, 
        "do not treat '/' speciallydo not…", 0x1a);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_7f8, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_ac0, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "preserve-rootpromptprompt-morere…");
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_578, 
        "preserve-rootpromptprompt-morere…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_578, &var_7f8, 
        "do not remove '/' (default)remov…", 0x1b);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_7f8, &var_578, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_7f8);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "recursiveverbose-presume-input-t…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_ac0, 0x72);
    clap_builder::builder::arg::Arg::visible_short_alias::h720b4d9aeed4ef99(&var_ac0, &var_7f8);
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_ac0, 
        "recursiveverbose-presume-input-t…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_ac0, &var_7f8, 
        "remove directories and their con…", 0x31);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_7f8, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_ac0, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "dirinteractiveforceone-file-syst…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_578, 0x64);
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_578, &var_7f8, 
        "dirinteractiveforceone-file-syst…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_7f8, &var_578, 
        "remove empty directoriesexplain …", 0x18);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "verbose-presume-input-ttyfiles(u…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_ac0, 0x76);
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_ac0, &var_7f8, 
        "verbose-presume-input-ttyfiles(u…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_7f8, &var_ac0, 
        "explain what is being donepresum…", 0x1a);
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_ac0, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "-presume-input-ttyfiles(uutils c…");
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_7f8, &var_578, 
        "presume-input-tty: cannot remove…");
    clap_builder::builder::arg::Arg::alias::hda9a93e6fca109a6(&var_578, &var_7f8);
    memcpy(&var_7f8, &var_578, 0x278);
    let var_300: i32;
    let var_580_1: i32 = var_300 | 4;
    let var_2fc: i32;
    let var_57c_1: i32 = var_2fc;
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "files(uutils coreutils) 0.0.30Re…");
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_7f8, &var_ac0, 1);
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2941a6fcbfa50731(&var_ac0, &var_7f8, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h06df245c713ce67d(&var_7f8, &var_ac0);
    clap_builder::builder::arg::Arg::value_hint::h883341e5b4207766(&var_ac0, &var_7f8);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(arg1, &var_578, &var_ac0);
    arg1
}
