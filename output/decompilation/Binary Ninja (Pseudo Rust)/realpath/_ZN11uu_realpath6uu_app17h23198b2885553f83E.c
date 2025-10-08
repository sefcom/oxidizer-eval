
  fn uu_realpath::uu_app::h23198b2885553f83(arg1: i64) -> i64

{
    let mut var_840: ();
    clap_builder::builder::command::Command::new::h9eb3dd0cefff68bd(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::version::hbb3216ff362417f3(&var_578, &var_840);
    clap_builder::builder::command::Command::about::hc5467f1323680862(&var_840, &var_578);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... FILE...Do not pri…", 0x16);
    clap_builder::builder::command::Command::override_usage::heb7ada44a1d67407(&var_578, &var_840, 
        &var_ac0);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8000000080 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_578, 
        "quietstriplogicalfiles(uutils co…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_578, 0x71);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_578, &var_ac0, 
        "quietstriplogicalfiles(uutils co…");
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_ac0, &var_578, 
        "Do not print warnings for invali…", 0x27);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_840, 
        "striplogicalfiles(uutils coreuti…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_840, 0x73);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_840, &var_ac0, 
        "striplogicalfiles(uutils coreuti…");
    clap_builder::builder::arg::Arg::visible_alias::h597518f0e50fabd9(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_840, &var_ac0, 
        "Only strip '.' and '..' componen…", 0x44);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_578, 
        "zero -- \x1b[8mhelpNoneshim\x1b[…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_578, 0x7a);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_578, &var_ac0, 
        "zero -- \x1b[8mhelpNoneshim\x1b[…");
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_ac0, &var_578, 
        "Separate output filenames with \…", 0x35);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_840, 
        "logicalfiles(uutils coreutils) 0…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_840, 0x4c);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_840, &var_ac0, 
        "logicalfiles(uutils coreutils) 0…");
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_ac0, &var_840, 
        "resolve '..' components before s…", 0x27);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_578, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_578, 0x50);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_578, &var_ac0, 
        "physicalNotFoundTimedOutENETDOWN…");
    var_2b0 = "striplogicalfiles(uutils coreuti…";
    let var_2a8: i64 = 5;
    let var_2a0: *const i8 = "logicalfiles(uutils coreutils) 0…";
    let var_298: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h416ca1dd45e1b9cb(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_578, &var_ac0, 
        "resolve symlinks as encountered …", 0x29);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_ac0, &var_578, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_840, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_840, 0x65);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_840, &var_ac0, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_ac0, &var_840, 
        "canonicalize by following every …", 0x73);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_578, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::short::he744ecbbf5f02b5f(&var_ac0, &var_578, 0x6d);
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_578, &var_ac0, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_ac0, &var_578, 
        "canonicalize by following every …", 0x86);
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_840, 
        "relative-toDIRprint the resolved…");
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_ac0, &var_840, 
        "relative-toDIRprint the resolved…");
    clap_builder::builder::arg::Arg::value_name::h36652fb51b007f48(&var_840, &var_ac0);
    clap_builder::builder::arg::Arg::value_parser::h1091437068a8dc7e(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_2b0, &var_ac0, 
        "print the resolved path relative…", 0x27);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_578, 
        "relative-baseprint absolute path…");
    clap_builder::builder::arg::Arg::long::hf9247904d0c5a845(&var_ac0, &var_578, 
        "relative-baseprint absolute path…");
    clap_builder::builder::arg::Arg::value_name::h36652fb51b007f48(&var_578, &var_ac0);
    clap_builder::builder::arg::Arg::value_parser::h1091437068a8dc7e(&var_ac0, &var_578);
    clap_builder::builder::arg::Arg::help::habd2b4d5dc8fd694(&var_2b0, &var_ac0, 
        "print absolute paths unless path…", 0x2b);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hdf316cce76806a0b(&var_840, 
        "files(uutils coreutils) 0.0.30{}…");
    clap_builder::builder::arg::Arg::action::h8afc00c92188ded9(&var_ac0, &var_840, 1);
    memcpy(&var_840, &var_ac0, 0x278);
    let var_848: i32;
    let var_5c8: i32 = var_848 | 1;
    let var_844: i32;
    let var_5c4: i32 = var_844;
    clap_builder::builder::arg::Arg::value_parser::h1091437068a8dc7e(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::value_hint::hf6aa3d24fb040055(&var_840, &var_ac0);
    clap_builder::builder::command::Command::arg::h9c566b4dd2ff9d4c(arg1, &var_578, &var_840);
    arg1
}
