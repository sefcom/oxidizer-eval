
  int64_t uu_tee::uu_app::hd12bc0652bb3e89d(int64_t arg1)

{
    void var_530;
    clap_builder::builder::command::Command::new::h37e801e86ae6f4b5(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    int64_t var_b28;
    clap_builder::builder::command::Command::version::hf6a8e7432674da97(&var_b28, &var_530, 
        "0.0.28Copy standard input to eac…");
    clap_builder::builder::command::Command::about::hdbd90eced67467b6(&var_530, &var_b28, 
        "Copy standard input to each FILE…", 0x3e);
    void var_780;
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [FILE]...If a FIL…", 0x18);
    clap_builder::builder::command::Command::override_usage::h35692a8f92f3f067(&var_b28, &var_530, 
        &var_780);
    clap_builder::builder::command::Command::after_help::h9f91a2bed818f84b(&var_530, &var_b28, 
        "If a FILE is -, it refers to a f…", 0x2d);
    memcpy(&var_b28, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_86c = 0x4008000040080 | var_274;
    int32_t var_26c;
    int32_t var_864 = var_26c;
    clap_builder::builder::arg::Arg::new::h31b39a87c99808d3(&var_530, 
        "--helpPrint helpappendappend to …");
    clap_builder::builder::arg::Arg::short::h0480673c359743c3(&var_780, &var_530, 0x68);
    clap_builder::builder::arg::Arg::long::h742b401d5f468487(&var_530, &var_780, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_530, 
        "Print helpappendappend to the gi…", 0xa);
    int64_t var_268;
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
    int32_t var_538;
    int32_t var_8e0 = 0x80 | var_538;
    int32_t var_534;
    int32_t var_8dc = var_534;
    var_268 = 0;
    int64_t var_260 = 1;
    char var_258 = 0;
    clap_builder::builder::arg::Arg::num_args::h2858c75c9c41de16(&var_780, &var_b28, &var_268);
    char const* const var_af8 = "warnZero\x1b[7m";
    int64_t var_af0 = 4;
    int64_t var_b10 = -0x8000000000000000;
    int128_t var_b38;
    int128_t var_b08 = var_b38;
    var_b28 = 0;
    int64_t var_b20 = 8;
    int64_t var_b18 = 0;
    char var_ae8 = 0;
    int128_t var_858;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_858, 
        &var_b28, "produce warnings for errors writ…", 0x31);
    char const* const var_af8_1 = "warn-nopipeexit-nopipe0.0.28Copy…";
    int64_t var_af0_1 = 0xb;
    int64_t var_b10_1 = -0x8000000000000000;
    int128_t var_b08_1 = var_b38;
    var_b28 = 0;
    int64_t var_b20_1 = 8;
    int64_t var_b18_1 = 0;
    char var_ae8_1 = 0;
    int128_t var_810;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_810, 
        &var_b28, "produce warnings for errors that…", 0x54);
    char const* const var_af8_2 = "exitERANGEEDEADLKENAMETOOLONGENO…";
    int64_t var_af0_2 = 4;
    int64_t var_b10_2 = -0x8000000000000000;
    int128_t var_b08_2 = var_b38;
    var_b28 = 0;
    int64_t var_b20_2 = 8;
    int64_t var_b18_2 = 0;
    char var_ae8_2 = 0;
    int128_t var_7c8;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_7c8, 
        &var_b28, "exit on write errors to any outp…", 0x22);
    char const* const var_af8_3 = "exit-nopipe0.0.28Copy standard i…";
    int64_t var_af0_3 = 0xb;
    int64_t var_b10_3 = -0x8000000000000000;
    int128_t var_b08_3 = var_b38;
    var_b28 = 0;
    int64_t var_b20_3 = 8;
    int64_t var_b18_3 = 0;
    char var_ae8_3 = 0;
    clap_builder::builder::possible_value::PossibleValue::help::h5e832121e462e853(&var_268, 
        &var_b28, "exit on write errors to any outp…", 0x66);
    var_b28 = var_858;
    int128_t var_848;
    var_b18_3 = var_848;
    int128_t var_838;
    int128_t var_b08_4 = var_838;
    int128_t var_828;
    var_af8_3 = var_828;
    int64_t var_818;
    var_ae8_3 = var_818;
    int128_t var_ae0 = var_810;
    int128_t var_800;
    int128_t var_ad0 = var_800;
    int128_t var_7f0;
    int128_t var_ac0 = var_7f0;
    int128_t var_7e0;
    int128_t var_ab0 = var_7e0;
    int64_t var_7d0;
    int64_t var_aa0 = var_7d0;
    int64_t var_788;
    int64_t var_a58 = var_788;
    int128_t var_798;
    int128_t var_a68 = var_798;
    int128_t var_7a8;
    int128_t var_a78 = var_7a8;
    int128_t var_7b8;
    int128_t var_a88 = var_7b8;
    int128_t var_a98 = var_7c8;
    int64_t var_228;
    int64_t var_a10 = var_228;
    int128_t var_238;
    int128_t var_a20 = var_238;
    int128_t var_248;
    int128_t var_a30 = var_248;
    int128_t var_a40 = var_258;
    int128_t var_a50 = var_268;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5be438b1e962fcaf(&var_268, &var_b28);
    clap_builder::builder::arg::Arg::value_parser::hbc60523bad46077b(&var_b28, &var_780, &var_268);
    clap_builder::builder::arg::Arg::help::hd1a3830b00bc2eb6(&var_780, &var_b28, 
        "set write error behavior'standar…", 0x18);
    clap_builder::builder::arg::Arg::conflicts_with::h13d1ca2bd04a2232(&var_b28, &var_780, 
        "ignore-pipe-errorsset write erro…");
    clap_builder::builder::command::Command::arg::h38425ec51d54d5d7(arg1, &var_530, &var_b28);
    return arg1;
}
