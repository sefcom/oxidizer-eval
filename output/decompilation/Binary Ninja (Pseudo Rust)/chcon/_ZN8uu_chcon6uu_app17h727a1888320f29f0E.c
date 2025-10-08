
  fn uu_chcon::uu_app::h727a1888320f29f0(arg1: i64) -> i64

{
    let mut var_840: ();
    clap_builder::builder::command::Command::new::h4d2b11354696c581(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::version::h7a468b25787f4d61(&var_578, &var_840);
    clap_builder::builder::command::Command::about::h06e63e27fa9a7df6(&var_840, &var_578);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... CONTEXT FILE...\n…", 0x87);
    clap_builder::builder::command::Command::override_usage::h87b95775a552981f(&var_578, &var_840, 
        &var_ac0);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8008800080088 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "helpNoneshimnameUSER\x1b[0mCyant…");
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_ac0, &var_578, 
        "helpNoneshimnameUSER\x1b[0mCyant…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_578, &var_ac0, 
        "Print help information.Affect th…", 0x17);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_578, 5);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "dereferenceno-dereferencepreserv…");
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_ac0, &var_840, 
        "dereferenceno-dereferencepreserv…");
    clap_builder::builder::arg::Arg::overrides_with::h88d3105140cc15d1(&var_840, &var_ac0, 
        "no-dereferencepreserve-root(uuti…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_840, 
        "Affect the referent of each symb…", 0x66);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "no-dereferencepreserve-root(uuti…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x68);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_578, &var_ac0, 
        "no-dereferencepreserve-root(uuti…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_578, 
        "Affect symbolic links instead of…", 0x35);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "preserve-root(uutils coreutils) …");
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_ac0, &var_840, 
        "preserve-root(uutils coreutils) …");
    clap_builder::builder::arg::Arg::overrides_with::h88d3105140cc15d1(&var_840, &var_ac0, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_840, 
        "Fail to operate recursively on '…", 0x23);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, "no-preserve-root");
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_ac0, &var_578, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_578, &var_ac0, 
        "Do not treat '/' specially (the …", 0x29);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_578, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "referencerangerecursivefollow-ar…");
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_ac0, &var_840, 
        "referencerangerecursivefollow-ar…");
    clap_builder::builder::arg::Arg::value_name::hdede60c7b57d89db(&var_840, &var_ac0, 
        "RFILEUse security context of RFI…");
    clap_builder::builder::arg::Arg::value_hint::h7e35c6c438b4ad6b(&var_ac0, &var_840, 3);
    var_2b0 = "userSomedumb\x1b[5m\x1b[9m <= tr…";
    let var_2a8: i64 = 4;
    let var_2a0: *const i8 = "role) = Zero\x1b[7mBool";
    let var_298: i64 = 4;
    let var_290: *const i8 = &data_419360;
    let var_288: i64 = 4;
    let var_280: *const i8 = "rangerecursivefollow-arg-dir-sym…";
    let var_278: i64 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::hdaf60db3b13205d0(&var_840, &var_ac0, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_840, 
        "Use security context of RFILE, r…", 0x46);
    let mut var_ad8: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_2b0, &var_ac0, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x75);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_578, &var_ac0, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::value_name::hdede60c7b57d89db(&var_ac0, &var_578, 
        "USER\x1b[0mCyantype    TYPE"`$\E…");
    clap_builder::builder::arg::Arg::value_hint::h7e35c6c438b4ad6b(&var_578, &var_ac0, 9);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_578, 
        "Set user USER in the target secu…", 0x2d);
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_2b0, &var_ac0, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, "role) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_840, 0x72);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_840, &var_ac0, 
        "role) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::value_name::hdede60c7b57d89db(&var_ac0, &var_840, 
        "ROLE\x1b[2mAnsipath -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_840, &var_ac0, 
        "Set role ROLE in the target secu…", 0x2d);
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_ac0, &var_840, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, &data_419360);
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x74);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_578, &var_ac0, &data_419360);
    clap_builder::builder::arg::Arg::value_name::hdede60c7b57d89db(&var_ac0, &var_578, 
        &data_419360[8]);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_578, &var_ac0, 
        "Set type TYPE in the target secu…", 0x2d);
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_ac0, &var_578, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "rangerecursivefollow-arg-dir-sym…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_840, 0x6c);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_840, &var_ac0, 
        "rangerecursivefollow-arg-dir-sym…");
    clap_builder::builder::arg::Arg::value_name::hdede60c7b57d89db(&var_ac0, &var_840, 
        "RANGESet range RANGE in the targ…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_840, &var_ac0, 
        "Set range RANGE in the target se…", 0x2f);
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_ac0, &var_840, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "recursivefollow-arg-dir-sym-link…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x52);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_578, &var_ac0, 
        "recursivefollow-arg-dir-sym-link…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_578, 
        "Operate on files and directories…", 0x2d);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "follow-arg-dir-sym-linkfollow-di…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_840, 0x48);
    clap_builder::builder::arg::Arg::requires::h97f6ac681d65abaf(&var_840, &var_ac0);
    var_2b0 = "follow-dir-sym-linksno-follow-sy…";
    let var_2a8_1: i64 = 0x14;
    let var_2a0_1: *const i8 = "no-follow-sym-linksdereferenceno…";
    let var_298_1: i64 = 0x13;
    clap_builder::builder::arg::Arg::overrides_with_all::h8db72c3cce94688d(&var_ac0, &var_840, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_840, &var_ac0, 
        "If a command line argument is a …", 0x6b);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "follow-dir-sym-linksno-follow-sy…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x4c);
    clap_builder::builder::arg::Arg::requires::h97f6ac681d65abaf(&var_578, &var_ac0);
    var_2b0 = "follow-arg-dir-sym-linkfollow-di…";
    let var_2a8_2: i64 = 0x17;
    let var_2a0_2: *const i8 = "no-follow-sym-linksdereferenceno…";
    let var_298_2: i64 = 0x13;
    clap_builder::builder::arg::Arg::overrides_with_all::h8db72c3cce94688d(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_578, &var_ac0, 
        "Traverse every symbolic link to …", 0x59);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_578, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, 
        "no-follow-sym-linksdereferenceno…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_840, 0x50);
    clap_builder::builder::arg::Arg::requires::h97f6ac681d65abaf(&var_840, &var_ac0);
    var_2b0 = "follow-arg-dir-sym-linkfollow-di…";
    let var_2a8_3: i64 = 0x17;
    let var_2a0_3: *const i8 = "follow-dir-sym-linksno-follow-sy…";
    let var_298_3: i64 = 0x14;
    clap_builder::builder::arg::Arg::overrides_with_all::h8db72c3cce94688d(&var_ac0, &var_840, 
        &var_2b0);
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_840, &var_ac0, 
        "Do not traverse any symbolic lin…", 0x4e);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_840, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_578, 
        "verbosereferencerangerecursivefo…");
    clap_builder::builder::arg::Arg::short::h29bb6cc97c4741d9(&var_ac0, &var_578, 0x76);
    clap_builder::builder::arg::Arg::long::ha7c235b447fa29cf(&var_578, &var_ac0, 
        "verbosereferencerangerecursivefo…");
    clap_builder::builder::arg::Arg::help::h573259a5cdbcd234(&var_ac0, &var_578, 
        "Output a diagnostic for every fi…", 0x2d);
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::hbf273b8c0a0d2821(&var_840, "FILEch");
    clap_builder::builder::arg::Arg::action::h445940f1731e1f95(&var_ac0, &var_840, 1);
    clap_builder::builder::arg::Arg::value_hint::h7e35c6c438b4ad6b(&var_840, &var_ac0, 3);
    clap_builder::builder::arg::Arg::num_args::h268453c0b9c8aa6e(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::value_parser::h015a0df7468ee792(&var_840, &var_ac0, &var_ad8);
    clap_builder::builder::command::Command::arg::hd9b7a629f9ec12e2(arg1, &var_578, &var_840);
    arg1
}
