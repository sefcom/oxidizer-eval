
  fn uu_hashsum::uu_app_common::he3603fb037840435(arg1: i64) -> i64

{
    let mut var_840: ();
    clap_builder::builder::command::Command::new::he81fabb331bef1c2(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::version::h0c4a60c7163dd065(&var_578, &var_840);
    clap_builder::builder::command::Command::about::h22d722537367ec5a(&var_840, &var_578);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} --<digest> [OPTIONS]... [FILE…", 0x24);
    clap_builder::builder::command::Command::override_usage::h33fbfcc08b9c7cb8(&var_578, &var_840, 
        &var_ac0);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8800000088 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_578, 0x62);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_578, &var_ac0, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_578, 
        "read in binary modecheckread has…", 0x13);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_840, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_840, 0x63);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_840, &var_ac0, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_840, 
        "read hashsums from the FILEs and…", 0x2b);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_840, &var_ac0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h6e58a9bdfee48787(&var_ac0, &var_840, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_ac0, &var_578, 
        "tagcreate a BSD-style checksumre…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_578, &var_ac0, 
        "create a BSD-style checksumread …", 0x1b);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_ac0, &var_578, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h6e58a9bdfee48787(&var_2b0, &var_ac0, 
        "textSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_840, 
        "textSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_840, 0x74);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_840, &var_ac0, 
        "textSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_840, 
        "read in text mode (default)quiet…", 0x1b);
    clap_builder::builder::arg::Arg::conflicts_with::h6e58a9bdfee48787(&var_840, &var_ac0, 
        "binaryread in binary modecheckre…");
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_578, 0x71);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_578, &var_ac0, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_578, 
        "don't print OK for each successf…", 0x32);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_578, &var_ac0, 2);
    var_2b0 = "statusdon't output anything, sta…";
    let var_2a8: i64 = 6;
    let var_2a0: *const i8 = "warnZero\x1b[7mBool";
    let var_298: i64 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::hf9e822be6c4c71ee(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_840, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_840, 0x73);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_840, &var_ac0, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_840, 
        "don't output anything, status co…", 0x30);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_840, &var_ac0, 2);
    var_2b0 = "quietdon't print OK for each suc…";
    let var_2a8_1: i64 = 5;
    let var_2a0_1: *const i8 = "warnZero\x1b[7mBool";
    let var_298_1: i64 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all::hf9e822be6c4c71ee(&var_ac0, &var_840, 
        &var_2b0);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_ac0, &var_578, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_578, &var_ac0, 
        "exit non-zero for improperly for…", 0x35);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_ac0, &var_578, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_840, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_ac0, &var_840, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_840, &var_ac0, 
        "don't fail or report status for …", 0x2d);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, "warnZero\x1b[7mBool");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_578, 0x77);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_578, &var_ac0, 
        "warnZero\x1b[7mBool");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_578, 
        "warn about improperly formatted …", 0x2e);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_578, &var_ac0, 2);
    var_2b0 = "quietdon't print OK for each suc…";
    let var_2a8_2: i64 = 5;
    let var_2a0_2: *const i8 = "statusdon't output anything, sta…";
    let var_298_2: i64 = 6;
    clap_builder::builder::arg::Arg::overrides_with_all::hf9e822be6c4c71ee(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_840, 
        "zeroAnsi -- \x1b[8mhelpNonesha1s…");
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_ac0, &var_840, 0x7a);
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_840, &var_ac0, 
        "zeroAnsi -- \x1b[8mhelpNonesha1s…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_ac0, &var_840, 
        "end each output line with NUL, n…", 0x2a);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_578, &data_411db8);
    clap_builder::builder::arg::Arg::index::h9a9056642d48bc66(&var_ac0, &var_578);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_578, &var_ac0, 1);
    clap_builder::builder::arg::Arg::value_name::h58de39279c54d2fa(&var_ac0, &var_578, 
        &data_411db8);
    clap_builder::builder::arg::Arg::value_hint::he985ef4fc9802ca6(&var_578, &var_ac0);
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc0836ea164fad5fe(&var_ac0, &var_578, &var_2b0);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(arg1, &var_840, &var_ac0);
    arg1
}
