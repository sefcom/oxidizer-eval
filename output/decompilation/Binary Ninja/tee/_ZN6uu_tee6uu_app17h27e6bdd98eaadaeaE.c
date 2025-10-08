
  int64_t uu_tee::uu_app::h27e6bdd98eaadaea(int64_t arg1)

{
    void var_570;
    clap_builder::builder::command::Command::new::h328c469f5f7641be(&var_570, 
        uucore::util_name::h074417a1e6395129());
    int64_t var_b98;
    clap_builder::builder::command::Command::version::h6e7669af9644fd20(&var_b98, &var_570);
    clap_builder::builder::command::Command::about::hbf2525e22ea1334e(&var_570, &var_b98);
    void var_7f0;
    uucore::format_usage::he053403a896311ed(&var_7f0, "{} [OPTION]... [FILE]...If a FIL…", 0x18);
    clap_builder::builder::command::Command::override_usage::he2ef76f1310b8d22(&var_b98, &var_570, 
        &var_7f0);
    clap_builder::builder::command::Command::after_help::h725b28a97e67b6a1(&var_570, &var_b98);
    memcpy(&var_b98, &var_570, 0x2bc);
    int64_t var_2b4;
    int64_t var_8dc = 0x8008000080080 | var_2b4;
    int32_t var_2ac;
    int32_t var_8d4 = var_2ac;
    clap_builder::builder::arg::Arg::new::h64023fdfe3a3f6e8(&var_570, 
        "--helpPrint helpappendappend to …");
    clap_builder::builder::arg::Arg::short::hfa2f3c724af3c5ed(&var_7f0, &var_570, 0x68);
    clap_builder::builder::arg::Arg::long::h11dbbd7e7324fb23(&var_570, &var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_570, 
        "Print helpappendappend to the gi…", 0xa);
    int128_t var_2a8;
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
    int32_t var_578;
    int32_t var_920 = 0x80 | var_578;
    int32_t var_574;
    int32_t var_91c = var_574;
    clap_builder::builder::arg::Arg::num_args::h6f84a2625b963170(&var_7f0, &var_b98, 0);
    char const* const var_b68 = "warnZero\x1b[7mBool";
    int64_t var_b60 = 4;
    int64_t var_b80 = -0x8000000000000000;
    int128_t var_ba8;
    int128_t var_b78 = var_ba8;
    var_b98 = 0;
    int64_t var_b90 = 8;
    int64_t var_b88 = 0;
    char var_b58 = 0;
    int128_t var_8c8;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_8c8, 
        &var_b98, "produce warnings for errors writ…", 0x31);
    char const* const var_b68_1 = "warn-nopipeexit-nopipe(uutils co…";
    int64_t var_b60_1 = 0xb;
    int64_t var_b80_1 = -0x8000000000000000;
    int128_t var_b78_1 = var_ba8;
    var_b98 = 0;
    int64_t var_b90_1 = 8;
    int64_t var_b88_1 = 0;
    char var_b58_1 = 0;
    int128_t var_880;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_880, 
        &var_b98, "produce warnings for errors that…", 0x54);
    char const* const var_b68_2 = "exitERANGEEDEADLKENAMETOOLONGENO…";
    int64_t var_b60_2 = 4;
    int64_t var_b80_2 = -0x8000000000000000;
    int128_t var_b78_2 = var_ba8;
    var_b98 = 0;
    int64_t var_b90_2 = 8;
    int64_t var_b88_2 = 0;
    char var_b58_2 = 0;
    int128_t var_838;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_838, 
        &var_b98, "exit on write errors to any outp…", 0x22);
    char const* const var_b68_3 = "exit-nopipe(uutils coreutils) 0.…";
    int64_t var_b60_3 = 0xb;
    int64_t var_b80_3 = -0x8000000000000000;
    int128_t var_b78_3 = var_ba8;
    var_b98 = 0;
    int64_t var_b90_3 = 8;
    int64_t var_b88_3 = 0;
    char var_b58_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::h7a85030acd765e74(&var_2a8, 
        &var_b98, "exit on write errors to any outp…", 0x66);
    var_b98 = var_8c8;
    int128_t var_8b8;
    var_b88_3 = var_8b8;
    int128_t var_8a8;
    int128_t var_b78_4 = var_8a8;
    int128_t var_898;
    var_b68_3 = var_898;
    int64_t var_888;
    var_b58_3 = var_888;
    int128_t var_b50 = var_880;
    int128_t var_870;
    int128_t var_b40 = var_870;
    int128_t var_860;
    int128_t var_b30 = var_860;
    int128_t var_850;
    int128_t var_b20 = var_850;
    int64_t var_840;
    int64_t var_b10 = var_840;
    int64_t var_7f8;
    int64_t var_ac8 = var_7f8;
    int128_t var_808;
    int128_t var_ad8 = var_808;
    int128_t var_818;
    int128_t var_ae8 = var_818;
    int128_t var_828;
    int128_t var_af8 = var_828;
    int128_t var_b08 = var_838;
    int64_t var_268;
    int64_t var_a80 = var_268;
    int128_t var_278;
    int128_t var_a90 = var_278;
    int128_t var_288;
    int128_t var_aa0 = var_288;
    int128_t var_298;
    int128_t var_ab0 = var_298;
    int128_t var_ac0 = var_2a8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::heb07f6468785cbc8(&var_2a8, &var_b98);
    clap_builder::builder::arg::Arg::value_parser::h549f72b672b0a153(&var_b98, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::help::hcfcd1c1487fab995(&var_7f0, &var_b98, 
        "set write error behavior'standar…", 0x18);
    clap_builder::builder::command::Command::arg::h7a160d1d679eb393(arg1, &var_570, &var_7f0);
    return arg1;
}
