
  fn uu_mv::uu_app::hb7098f4f79f9c6f5(arg1: i64) -> i64

{
    let mut var_578: *mut c_void;
    clap_builder::builder::command::Command::new::h7f82bb5b5e559a7b(&var_578, 
        uucore::util_name::h074417a1e6395129());
    let mut var_840: ();
    clap_builder::builder::command::Command::version::h3b729f3964ee6dcd(&var_840, &var_578);
    clap_builder::builder::command::Command::about::h0a2c7ed6bf50f1d6(&var_578, &var_840);
    let mut var_ad8: *mut *mut [i8; 0xb0];
    uucore::format_usage::he053403a896311ed(&var_ad8, "{} [OPTION]... [-T] SOURCE DEST\n…", 0x68);
    clap_builder::builder::command::Command::override_usage::h5d5372cf9ec4bf4d(&var_840, &var_578, 
        &var_ad8);
    var_ad8 = &data_541610;
    let var_ad0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
    let var_ac8: *mut *mut c_void = &data_541600;
    let var_ac0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
    var_578 = &data_5415e0;
    let var_570: i64 = 2;
    let var_558: i64 = 0;
    let var_568: *const *mut *mut [i8; 0xb0] = &var_ad8;
    let var_560: i64 = 2;
    let mut var_858: ();
    core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_858, &var_578);
    clap_builder::builder::command::Command::after_help::h7a09f767cdc36e1b(&var_578, &var_840, 
        &var_858);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8000000080 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_578, 
        "forceinteractiveno-clobberstrip-…");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_578, &var_ad8, 
        "forceinteractiveno-clobberstrip-…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_578, 
        "do not prompt before overwriting…", 0x20);
    let mut var_2b0: *const i8 = "interactiveno-clobberstrip-trail…";
    let var_2a8: i64 = 0xb;
    let var_2a0: *const i8 = "no-clobberstrip-trailing-slashes…";
    let var_298: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h066b234cfcfb0907(&var_578, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_578, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_840, 
        "interactiveno-clobberstrip-trail…");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_840, 0x69);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_840, &var_ad8, 
        "interactiveno-clobberstrip-trail…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_840, 
        "prompt before overridedo not ove…", 0x16);
    var_2b0 = "forceinteractiveno-clobberstrip-…";
    let var_2a8_1: i64 = 5;
    let var_2a0_1: *const i8 = "no-clobberstrip-trailing-slashes…";
    let var_298_1: i64 = 0xa;
    clap_builder::builder::arg::Arg::overrides_with_all::h066b234cfcfb0907(&var_840, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_840, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_578, 
        "no-clobberstrip-trailing-slashes…");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_578, 0x6e);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_578, &var_ad8, 
        "no-clobberstrip-trailing-slashes…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_578, 
        "do not overwrite an existing fil…", 0x21);
    var_2b0 = "forceinteractiveno-clobberstrip-…";
    let var_2a8_2: i64 = 5;
    let var_2a0_2: *const i8 = "interactiveno-clobberstrip-trail…";
    let var_298_2: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h066b234cfcfb0907(&var_578, &var_ad8, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_578, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_840, 
        "strip-trailing-slashesno-target-…");
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_ad8, &var_840, 
        "strip-trailing-slashesno-target-…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_840, &var_ad8, 
        "remove any trailing slashes from…", 0x35);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_840, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    uucore::features::backup_control::arguments::backup::h97e05fc730627326(&var_ad8);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_ad8);
    uucore::features::backup_control::arguments::backup_no_args::hfb21d07466a7545a(&var_ad8);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    uucore::features::backup_control::arguments::suffix::h87e85728d219a77f(&var_ad8);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_ad8);
    uucore::features::update_control::arguments::update::h042cd58a51ead532(&var_ad8);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    uucore::features::update_control::arguments::update_no_args::hb4e4463f3f7510d7(&var_ad8);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_840, &data_41fd30[0x10]);
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_840, 0x74);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_840, &var_ad8, 
        &data_41fd30[0x10]);
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_840, 
        "move all SOURCE arguments into D…", 0x28);
    clap_builder::builder::arg::Arg::value_name::h61ff4659daedc090(&var_840, &var_ad8);
    clap_builder::builder::arg::Arg::value_hint::hf38580f9a462787e(&var_ad8, &var_840, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h106e887abff37471(&var_840, &var_ad8);
    let mut var_af0: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc31563990e94e401(&var_ad8, &var_840, &var_af0);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_578, 
        "no-target-directoryverbosefilesd…");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_578, 0x54);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_578, &var_ad8, 
        "no-target-directoryverbosefilesd…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_578, 
        "treat DEST as a normal fileexpla…", 0x1b);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_840, 
        "verbosefilesdebug\n\n(uutils cor…");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_840, 0x76);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_840, &var_ad8, 
        "verbosefilesdebug\n\n(uutils cor…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_840, 
        "explain what is being doneDispla…", 0x1a);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_578, "progress");
    clap_builder::builder::arg::Arg::short::hf820f8627e180b7a(&var_ad8, &var_578, 0x67);
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_578, &var_ad8, "progress");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_ad8, &var_578, 
        "Display a progress bar. \nNote: …", 0x4e);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_840, 
        "filesdebug\n\n(uutils coreutils)…");
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_840, 1);
    clap_builder::builder::arg::Arg::num_args::h6190fa01943e4143(&var_840, &var_ad8);
    memcpy(&var_ad8, &var_840, 0x278);
    let var_5c8: i32;
    let var_860: i32 = var_5c8 | 1;
    let var_5c4: i32;
    let var_85c: i32 = var_5c4;
    clap_builder::builder::arg::Arg::value_parser::hc31563990e94e401(&var_840, &var_ad8, &var_af0);
    clap_builder::builder::arg::Arg::value_hint::hf38580f9a462787e(&var_ad8, &var_840, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(&var_840, &var_578, &var_ad8);
    clap_builder::builder::arg::Arg::new::h5dfcfea206c23747(&var_578, 
        "debug\n\n(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::long::ha4464611d4cf3c3b(&var_ad8, &var_578, 
        "debug\n\n(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::help::haec559e6e974a82b(&var_578, &var_ad8, 
        "explain how a file is copied. Im…", 0x28);
    clap_builder::builder::arg::Arg::action::h2bbd86678dedb4d7(&var_ad8, &var_578, 2);
    clap_builder::builder::command::Command::arg::h8a7e81e38c8662a6(arg1, &var_840, &var_ad8);
    arg1
}
