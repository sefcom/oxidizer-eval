
  int64_t uu_rm::uu_app::hbf90efb73f59e8a6(int64_t arg1)

{
    void var_ac0;
    clap_builder::builder::command::Command::new::hbca3ce061ed456d5(&var_ac0, 
        uucore::util_name::h074417a1e6395129());
    void var_578;
    clap_builder::builder::command::Command::version::h1ea3b78b22168264(&var_578, &var_ac0);
    clap_builder::builder::command::Command::about::h9ca2956cc22ebd03(&var_ac0, &var_578);
    void var_7f8;
    uucore::format_usage::he053403a896311ed(&var_7f8, "{} [OPTION]... FILE...ignore non…", 0x16);
    clap_builder::builder::command::Command::override_usage::h65a27385442ac47f(&var_578, &var_ac0, 
        &var_7f8);
    memcpy(&var_ac0, &var_578, 0x2bc);
    int64_t var_2bc;
    int64_t var_804 = 0x8800000088 | var_2bc;
    int32_t var_2b4;
    int32_t var_7fc = var_2b4;
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_578, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::h129d89526844dfbc(&var_578, &var_7f8, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_7f8, &var_578, 
        "ignore nonexistent files and arg…", 0x34);
    char const* const var_2b0;
    clap_builder::builder::arg::Arg::action::h85eb9950b74f585b(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h88e40eca71908716(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::ha01614abf7ee4185(&var_ac0, 
        "promptprompt-morerecursiveverbos…");
    clap_builder::builder::arg::Arg::short::h78641cdcffff5928(&var_7f8, &var_ac0, 0x69);
    clap_builder::builder::arg::Arg::help::h9e2f4fbd60549b49(&var_ac0, &var_7f8, 
        "prompt before every removalpromp…", 0x1b);
    var_2b0 = "prompt-morerecursiveverbose-pres…";
    int64_t var_2a8 = 0xb;
    char const* const var_2a0 = "interactiveforceone-file-systemp…";
    int64_t var_298 = 0xb;
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
    int64_t var_2a8_1 = 6;
    char const* const var_2a0_1 = "interactiveforceone-file-systemp…";
    int64_t var_298_1 = 0xb;
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
    int32_t var_848;
    int32_t var_580 = 0x80 | var_848;
    int32_t var_844;
    int32_t var_57c = var_844;
    clap_builder::builder::arg::Arg::default_missing_value::hba2383e2563ce42f(&var_ac0, &var_7f8);
    var_2b0 = "promptprompt-morerecursiveverbos…";
    int64_t var_2a8_2 = 6;
    char const* const var_2a0_2 = "prompt-morerecursiveverbose-pres…";
    int64_t var_298_2 = 0xb;
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
    int32_t var_300;
    int32_t var_580_1 = var_300 | 4;
    int32_t var_2fc;
    int32_t var_57c_1 = var_2fc;
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
    return arg1;
}
