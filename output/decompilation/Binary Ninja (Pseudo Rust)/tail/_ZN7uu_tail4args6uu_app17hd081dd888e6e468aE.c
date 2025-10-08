
  fn uu_tail::args::uu_app::hd081dd888e6e468a(arg1: i64) -> i64

{
    let mut var_840: *mut c_void;
    clap_builder::builder::command::Command::new::h2e31ba8c757b8f5e(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::version::h267fdd9edaa9591b(&var_578, &var_840);
    clap_builder::builder::command::Command::about::h89914f5fde8276ec(&var_840, &var_578);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [FLAG]... [FILE]...Number of …", 0x16);
    clap_builder::builder::command::Command::override_usage::h3d5ba385d058e130(&var_578, &var_840, 
        &var_ac0);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8000000080 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "byteslinescannot convert float s…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_578, 0x63);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_578, &var_ac0, 
        "byteslinescannot convert float s…");
    memcpy(&var_ac0, &var_578, 0x278);
    let var_300: i32;
    let var_848: i32 = var_300 | 0x20;
    let var_2fc: i32;
    let var_844: i32 = var_2fc;
    let mut var_2b0: *const i8 = "byteslinescannot convert float s…";
    let var_2a8: i64 = 5;
    let var_2a0: *const i8 = "linescannot convert float second…";
    let var_298: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h21f226da5fcfe92a(&var_578, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_578, 
        "Number of bytes to printdescript…", 0x18);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "followuse-pollingverbose-presume…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_840, 0x66);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_840, &var_ac0, 
        "followuse-pollingverbose-presume…");
    clap_builder::builder::arg::Arg::default_missing_value::h3c843c8a98e9163d(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::num_args::hb51fb6a5d668a320(&var_840, &var_ac0, 0);
    memcpy(&var_ac0, &var_840, 0x278);
    let var_5c8: i32;
    let var_848_1: i32 = 0x80 | var_5c8;
    let var_5c4: i32;
    let var_844_1: i32 = var_5c4;
    var_840 = "descriptorPrint the file as it g…";
    let var_838: i64 = 0xa;
    let var_830: *const i8 = &data_421a48[0x10];
    let var_828: i64 = 4;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h9fa9d8b15e49bd57(&var_2b0, &var_840);
    clap_builder::builder::arg::Arg::value_parser::ha026d414d5d080cc(&var_840, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::overrides_with::h5382a3db1c32db33(&var_ac0, &var_840, 
        "followuse-pollingverbose-presume…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_2b0, &var_ac0, 
        "Print the file as it growsNumber…", 0x1a);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "linescannot convert float second…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_578, 0x6e);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_578, &var_ac0, 
        "linescannot convert float second…");
    memcpy(&var_ac0, &var_578, 0x278);
    let var_848_2: i32 = var_300 | 0x20;
    let var_844_2: i32 = var_2fc;
    var_2b0 = "byteslinescannot convert float s…";
    let var_2a8_1: i64 = 5;
    let var_2a0_1: *const i8 = "linescannot convert float second…";
    let var_298_1: i64 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h21f226da5fcfe92a(&var_578, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_578, 
        "Number of lines to printPIDWith …", 0x18);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "pidfilesquietinvalid number of s…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_ac0, &var_840, 
        "pidfilesquietinvalid number of s…");
    clap_builder::builder::arg::Arg::value_name::h1a60bc4a9d9b1dcf(&var_840, &var_ac0, 
        "PIDWith -f, terminate after proc…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_840, 
        "With -f, terminate after process…", 0x2d);
    clap_builder::builder::arg::Arg::overrides_with::h5382a3db1c32db33(&var_2b0, &var_ac0, 
        "pidfilesquietinvalid number of s…");
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "quietinvalid number of seconds: …");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_578, 0x71);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_578, &var_ac0, 
        "quietinvalid number of seconds: …");
    clap_builder::builder::arg::Arg::visible_alias::hdd9e01bb24d43dbf(&var_ac0, &var_578);
    var_2b0 = "quietinvalid number of seconds: …";
    let var_2a8_2: i64 = 5;
    let var_2a0_2: *const i8 = "verbose-presume-input-pipesleep-…";
    let var_298_2: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h21f226da5fcfe92a(&var_578, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_578, 
        "Never output headers giving file…", 0x26);
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "sleep-intervalmax-unchanged-stat…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_840, 0x73);
    clap_builder::builder::arg::Arg::value_name::h1a60bc4a9d9b1dcf(&var_840, &var_ac0, 
        "NNumber of seconds to sleep betw…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_ac0, &var_840, 
        "sleep-intervalmax-unchanged-stat…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_2b0, &var_ac0, 
        "Number of seconds to sleep betwe…", 0x48);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "max-unchanged-statspidfilesquiet…");
    clap_builder::builder::arg::Arg::value_name::h1a60bc4a9d9b1dcf(&var_ac0, &var_578, 
        "NNumber of seconds to sleep betw…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_578, &var_ac0, 
        "max-unchanged-statspidfilesquiet…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_578, 
        "Reopen a FILE which has not chan…", 0xfe);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "verbose-presume-input-pipesleep-…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_840, 0x76);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_840, &var_ac0, 
        "verbose-presume-input-pipesleep-…");
    var_2b0 = "quietinvalid number of seconds: …";
    let var_2a8_3: i64 = 5;
    let var_2a0_3: *const i8 = "verbose-presume-input-pipesleep-…";
    let var_298_3: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h21f226da5fcfe92a(&var_ac0, &var_840, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_840, &var_ac0, 
        "Always output headers giving fil…", 0x27);
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "zero-terminatedbyteslinescannot …");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_578, 0x7a);
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_578, &var_ac0, 
        "zero-terminatedbyteslinescannot …");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_ac0, &var_578, 
        "Line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "use-pollingverbose-presume-input…");
    clap_builder::builder::arg::Arg::alias::h5de87fc9649bfe6f(&var_ac0, &var_840, "-disable-inoti");
    clap_builder::builder::arg::Arg::alias::h5de87fc9649bfe6f(&var_840, &var_ac0, 
        "disDisable 'inotify' support and…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_ac0, &var_840, 
        "use-pollingverbose-presume-input…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_840, &var_ac0, 
        "Disable 'inotify' support and us…", 0x31);
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "retryfollowuse-pollingverbose-pr…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_ac0, &var_578, 
        "retryfollowuse-pollingverbose-pr…");
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_578, &var_ac0, 
        "Keep trying to open a file if it…", 0x30);
    clap_builder::builder::arg::Arg::overrides_with::h5382a3db1c32db33(&var_ac0, &var_578, 
        "retryfollowuse-pollingverbose-pr…");
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "Fretryfollowuse-pollingverbose-p…");
    clap_builder::builder::arg::Arg::short::h2a594879963a62b8(&var_ac0, &var_840, 0x46);
    clap_builder::builder::arg::Arg::help::hf63af9f8bad37977(&var_840, &var_ac0, 
        "Same as --follow=name --retrypre…", 0x1d);
    clap_builder::builder::arg::Arg::overrides_with::h5382a3db1c32db33(&var_ac0, &var_840, 
        "Fretryfollowuse-pollingverbose-p…");
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_578, 
        "-presume-input-pipesleep-interva…");
    clap_builder::builder::arg::Arg::long::h445183b57429113b(&var_ac0, &var_578, 
        "presume-input-pipesrc/uu/tail/sr…");
    clap_builder::builder::arg::Arg::alias::h5de87fc9649bfe6f(&var_578, &var_ac0, 
        "-presume-input-pipesleep-interva…");
    memcpy(&var_ac0, &var_578, 0x278);
    let var_848_3: i32 = var_300 | 4;
    let var_844_3: i32 = var_2fc;
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h20264cdf54e40620(&var_840, 
        "filesquietinvalid number of seco…");
    clap_builder::builder::arg::Arg::action::h3c323cccbe8af5d1(&var_ac0, &var_840, 1);
    clap_builder::builder::arg::Arg::num_args::hcbfde4872ecd4280(&var_840, &var_ac0);
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hd67223dcbbb3ce87(&var_ac0, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::value_hint::hf490d386d6fe0bcf(&var_840, &var_ac0);
    clap_builder::builder::command::Command::arg::hc0fd4ce8e2245b06(arg1, &var_578, &var_840);
    arg1
}
