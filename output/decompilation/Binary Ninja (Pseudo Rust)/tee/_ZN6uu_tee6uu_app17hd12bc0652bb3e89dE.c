
  fn uu_tee::uu_app::hd12bc0652bb3e89d(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h37e801e86ae6f4b5(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_b28: i64;
    clap_builder::builder::command::Command::version::hf6a8e7432674da97(&var_b28, &var_530, 
        "0.0.28Copy standard input to eac…");
    clap_builder::builder::command::Command::about::hdbd90eced67467b6(&var_530, &var_b28, 
        "Copy standard input to each FILE…", 0x3e);
    let mut var_780: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [FILE]...If a FIL…", 0x18);
    clap_builder::builder::command::Command::override_usage::h35692a8f92f3f067(&var_b28, &var_530, 
        &var_780);
    clap_builder::builder::command::Command::after_help::h9f91a2bed818f84b(&var_530, &var_b28, 
        "If a FILE is -, it refers to a f…", 0x2d);
    memcpy(&var_b28, &var_530, 0x2bc);
    let var_274: i64;
    let var_86c: i64 = 0x4008000040080 | var_274;
    let var_26c: i32;
    let var_864: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_530, 
        "--helpPrint helpappendappend to …");
    clap_builder::builder::arg::Arg::short::h0480673c359743c3(&var_780, &var_530, 0x68);
    clap_builder::builder::arg::Arg::long::h742b401d5f468487(&var_530, &var_780, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_530, 
        "Print helpappendappend to the gi…", 0xa);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::ha3621f600631173d(&var_268, &var_780, 7);
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(&var_530, &var_b28, &var_268);
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_b28, 
        "appendappend to the given FILEs,…");
    clap_builder::builder::arg::Arg::long::h742b401d5f468487(&var_780, &var_b28, 
        "appendappend to the given FILEs,…");
    clap_builder::builder::arg::Arg::short::h0480673c359743c3(&var_b28, &var_780, 0x61);
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_b28, 
        "append to the given FILEs, do no…", 0x2b);
    clap_builder::builder::arg::Arg::action::ha3621f600631173d(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(&var_b28, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_530, 
        "ignore-interruptsignore interrup…");
    clap_builder::builder::arg::Arg::long::h742b401d5f468487(&var_780, &var_530, 
        "ignore-interruptsignore interrup…");
    clap_builder::builder::arg::Arg::short::h0480673c359743c3(&var_530, &var_780, 0x69);
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_530, 
        "ignore interrupt signals (ignore…", 0x38);
    clap_builder::builder::arg::Arg::action::ha3621f600631173d(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(&var_530, &var_b28, &var_268);
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_b28, 
        "filei128 as dyn exitERANGEEDEADL…");
    clap_builder::builder::arg::Arg::action::ha3621f600631173d(&var_780, &var_b28, 1);
    clap_builder::builder::arg::Arg::value_hint::h15745e9b43c0da80(&var_268, &var_780, 3);
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(&var_b28, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_530, 
        "ignore-pipe-errorsset write erro…");
    clap_builder::builder::arg::Arg::short::h0480673c359743c3(&var_780, &var_530, 0x70);
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_530, &var_780, 
        "set write error behavior (ignore…", 0x38);
    clap_builder::builder::arg::Arg::action::ha3621f600631173d(&var_780, &var_530, 2);
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(&var_530, &var_b28, &var_780);
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_b28, 
        "output-errorproduce warnings for…");
    clap_builder::builder::arg::Arg::long::h742b401d5f468487(&var_780, &var_b28, 
        "output-errorproduce warnings for…");
    memcpy(&var_b28, &var_780, 0x248);
    let var_538: i32;
    let var_8e0: i32 = 0x80 | var_538;
    let var_534: i32;
    let var_8dc: i32 = var_534;
    var_268 = 0;
    let var_260: i64 = 1;
    let var_258: i8 = 0;
    clap_builder::builder::arg::Arg::num_args::h2858c75c9c41de16(&var_780, &var_b28, &var_268);
    let var_af8: *const i8 = "warnZero\x1b[7m";
    let var_af0: i64 = 4;
    let var_b10: i64 = -0x8000000000000000;
    let var_b38: i128;
    let var_b08: i128 = var_b38;
    var_b28 = 0;
    let var_b20: i64 = 8;
    let var_b18: i64 = 0;
    let var_ae8: i8 = 0;
    let mut var_858: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_858, 
        &var_b28, "produce warnings for errors writ…", 0x31);
    let var_af8_1: *const i8 = "warn-nopipeexit-nopipe0.0.28Copy…";
    let var_af0_1: i64 = 0xb;
    let var_b10_1: i64 = -0x8000000000000000;
    let var_b08_1: i128 = var_b38;
    var_b28 = 0;
    let var_b20_1: i64 = 8;
    let var_b18_1: i64 = 0;
    let var_ae8_1: i8 = 0;
    let mut var_810: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_810, 
        &var_b28, "produce warnings for errors that…", 0x54);
    let var_af8_2: *const i8 = "exitERANGEEDEADLKENAMETOOLONGENO…";
    let var_af0_2: i64 = 4;
    let var_b10_2: i64 = -0x8000000000000000;
    let var_b08_2: i128 = var_b38;
    var_b28 = 0;
    let var_b20_2: i64 = 8;
    let var_b18_2: i64 = 0;
    let var_ae8_2: i8 = 0;
    let mut var_7c8: i128;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_7c8, 
        &var_b28, "exit on write errors to any outp…", 0x22);
    let mut var_af8_3: *const i8 = "exit-nopipe0.0.28Copy standard i…";
    let var_af0_3: i64 = 0xb;
    let var_b10_3: i64 = -0x8000000000000000;
    let var_b08_3: i128 = var_b38;
    var_b28 = 0;
    let var_b20_3: i64 = 8;
    let mut var_b18_3: i64 = 0;
    let mut var_ae8_3: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_268, 
        &var_b28, "exit on write errors to any outp…", 0x66);
    var_b28 = var_858;
    let var_848: i128;
    var_b18_3 = var_848;
    let var_838: i128;
    let var_b08_4: i128 = var_838;
    let var_828: i128;
    var_af8_3 = var_828;
    let var_818: i64;
    var_ae8_3 = var_818;
    let var_ae0: i128 = var_810;
    let var_800: i128;
    let var_ad0: i128 = var_800;
    let var_7f0: i128;
    let var_ac0: i128 = var_7f0;
    let var_7e0: i128;
    let var_ab0: i128 = var_7e0;
    let var_7d0: i64;
    let var_aa0: i64 = var_7d0;
    let var_788: i64;
    let var_a58: i64 = var_788;
    let var_798: i128;
    let var_a68: i128 = var_798;
    let var_7a8: i128;
    let var_a78: i128 = var_7a8;
    let var_7b8: i128;
    let var_a88: i128 = var_7b8;
    let var_a98: i128 = var_7c8;
    let var_228: i64;
    let var_a10: i64 = var_228;
    let var_238: i128;
    let var_a20: i128 = var_238;
    let var_248: i128;
    let var_a30: i128 = var_248;
    let var_a40: i128 = var_258;
    let var_a50: i128 = var_268;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5be438b1e962fcaf(&var_268, &var_b28);
    clap_builder::builder::arg::Arg::value_parser::hbc60523bad46077b(&var_b28, &var_780, &var_268);
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_b28, 
        "set write error behavior'standar…", 0x18);
    clap_builder::builder::arg::Arg::conflicts_with::h13d1ca2bd04a2232(&var_b28, &var_780, 
        "ignore-pipe-errorsset write erro…");
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(arg1, &var_530, &var_b28);
    arg1
}
