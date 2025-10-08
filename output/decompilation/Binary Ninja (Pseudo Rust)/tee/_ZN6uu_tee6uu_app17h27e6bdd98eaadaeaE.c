
  fn uu_tee::uu_app::h27e6bdd98eaadaea(arg1: i64) -> i64

{
    let mut var_570: ();
    clap_builder::builder::command::Command::new::h328c469f5f7641be(&var_570, 
        uucore::util_name::h074417a1e6395129());
    let mut var_b98: i64;
    clap_builder::builder::command::Command::version::h6e7669af9644fd20(&var_b98, &var_570);
    clap_builder::builder::command::Command::about::hbf2525e22ea1334e(&var_570, &var_b98);
    let mut var_7f0: ();
    uucore::format_usage::he053403a896311ed(&var_7f0, "{} [OPTION]... [FILE]...If a FIL…", 0x18);
    clap_builder::builder::command::Command::override_usage::he2ef76f1310b8d22(&var_b98, &var_570, 
        &var_7f0);
    clap_builder::builder::command::Command::after_help::h725b28a97e67b6a1(&var_570, &var_b98);
    memcpy(&var_b98, &var_570, 0x2bc);
    let var_2b4: i64;
    let var_8dc: i64 = 0x8008000080080 | var_2b4;
    let var_2ac: i32;
    let var_8d4: i32 = var_2ac;
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_570, 
        "--helpPrint helpappendappend to …");
    clap_builder::builder::arg::Arg::short::hfa2f3c724af3c5ed(&var_7f0, &var_570, 0x68);
    clap_builder::builder::arg::Arg::long::h11dbbd7e7324fb23(&var_570, &var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_570, 
        "Print helpappendappend to the gi…", 0xa);
    let mut var_2a8: i128;
    clap_builder::builder::arg::Arg::action::he07538a61b56f553(&var_2a8, &var_7f0, 7);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(&var_570, &var_b98, &var_2a8);
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_b98, 
        "appendappend to the given FILEs,…");
    clap_builder::builder::arg::Arg::long::h11dbbd7e7324fb23(&var_7f0, &var_b98, 
        "appendappend to the given FILEs,…");
    clap_builder::builder::arg::Arg::short::hfa2f3c724af3c5ed(&var_b98, &var_7f0, 0x61);
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_b98, 
        "append to the given FILEs, do no…", 0x2b);
    clap_builder::builder::arg::Arg::action::he07538a61b56f553(&var_2a8, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(&var_b98, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_570, 
        "ignore-interruptsignore interrup…");
    clap_builder::builder::arg::Arg::long::h11dbbd7e7324fb23(&var_7f0, &var_570, 
        "ignore-interruptsignore interrup…");
    clap_builder::builder::arg::Arg::short::hfa2f3c724af3c5ed(&var_570, &var_7f0, 0x69);
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_570, 
        "ignore interrupt signals (ignore…", 0x38);
    clap_builder::builder::arg::Arg::action::he07538a61b56f553(&var_2a8, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(&var_570, &var_b98, &var_2a8);
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_b98, 
        "filei128 as dyn exitERANGEEDEADL…");
    clap_builder::builder::arg::Arg::action::he07538a61b56f553(&var_7f0, &var_b98, 1);
    clap_builder::builder::arg::Arg::value_hint::h1713aaa1f93f9b47(&var_2a8, &var_7f0);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(&var_b98, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_570, 
        "ignore-pipe-errorsset write erro…");
    clap_builder::builder::arg::Arg::short::hfa2f3c724af3c5ed(&var_7f0, &var_570, 0x70);
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_570, &var_7f0, 
        "set write error behavior (ignore…", 0x38);
    clap_builder::builder::arg::Arg::action::he07538a61b56f553(&var_7f0, &var_570, 2);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(&var_570, &var_b98, &var_7f0);
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_b98, 
        "output-errorproduce warnings for…");
    clap_builder::builder::arg::Arg::long::h11dbbd7e7324fb23(&var_7f0, &var_b98, 
        "output-errorproduce warnings for…");
    memcpy(&var_b98, &var_7f0, 0x278);
    let var_578: i32;
    let var_920: i32 = 0x80 | var_578;
    let var_574: i32;
    let var_91c: i32 = var_574;
    clap_builder::builder::arg::Arg::num_args::h6f84a2625b963170(&var_7f0, &var_b98, 0);
    let var_b68: *const i8 = "warnZero\x1b[7mBool";
    let var_b60: i64 = 4;
    let var_b80: i64 = -0x8000000000000000;
    let var_ba8: i128;
    let var_b78: i128 = var_ba8;
    var_b98 = 0;
    let var_b90: i64 = 8;
    let var_b88: i64 = 0;
    let var_b58: i8 = 0;
    let mut var_8c8: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_8c8, 
        &var_b98, "produce warnings for errors writ…", 0x31);
    let var_b68_1: *const i8 = "warn-nopipeexit-nopipe(uutils co…";
    let var_b60_1: i64 = 0xb;
    let var_b80_1: i64 = -0x8000000000000000;
    let var_b78_1: i128 = var_ba8;
    var_b98 = 0;
    let var_b90_1: i64 = 8;
    let var_b88_1: i64 = 0;
    let var_b58_1: i8 = 0;
    let mut var_880: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_880, 
        &var_b98, "produce warnings for errors that…", 0x54);
    let var_b68_2: *const i8 = "exitERANGEEDEADLKENAMETOOLONGENO…";
    let var_b60_2: i64 = 4;
    let var_b80_2: i64 = -0x8000000000000000;
    let var_b78_2: i128 = var_ba8;
    var_b98 = 0;
    let var_b90_2: i64 = 8;
    let var_b88_2: i64 = 0;
    let var_b58_2: i8 = 0;
    let mut var_838: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_838, 
        &var_b98, "exit on write errors to any outp…", 0x22);
    let mut var_b68_3: *const i8 = "exit-nopipe(uutils coreutils) 0.…";
    let var_b60_3: i64 = 0xb;
    let var_b80_3: i64 = -0x8000000000000000;
    let var_b78_3: i128 = var_ba8;
    var_b98 = 0;
    let var_b90_3: i64 = 8;
    let mut var_b88_3: i64 = 0;
    let mut var_b58_3: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_2a8, 
        &var_b98, "exit on write errors to any outp…", 0x66);
    var_b98 = var_8c8;
    let var_8b8: i128;
    var_b88_3 = var_8b8;
    let var_8a8: i128;
    let var_b78_4: i128 = var_8a8;
    let var_898: i128;
    var_b68_3 = var_898;
    let var_888: i64;
    var_b58_3 = var_888;
    let var_b50: i128 = var_880;
    let var_870: i128;
    let var_b40: i128 = var_870;
    let var_860: i128;
    let var_b30: i128 = var_860;
    let var_850: i128;
    let var_b20: i128 = var_850;
    let var_840: i64;
    let var_b10: i64 = var_840;
    let var_7f8: i64;
    let var_ac8: i64 = var_7f8;
    let var_808: i128;
    let var_ad8: i128 = var_808;
    let var_818: i128;
    let var_ae8: i128 = var_818;
    let var_828: i128;
    let var_af8: i128 = var_828;
    let var_b08: i128 = var_838;
    let var_268: i64;
    let var_a80: i64 = var_268;
    let var_278: i128;
    let var_a90: i128 = var_278;
    let var_288: i128;
    let var_aa0: i128 = var_288;
    let var_298: i128;
    let var_ab0: i128 = var_298;
    let var_ac0: i128 = var_2a8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::heb07f6468785cbc8(&var_2a8, &var_b98);
    clap_builder::builder::arg::Arg::value_parser::h549f72b672b0a153(&var_b98, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_b98, 
        "set write error behavior'standar…", 0x18);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(arg1, &var_570, &var_7f0);
    arg1
}
