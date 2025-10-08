
  fn uu_base32::base_common::base_app::hf62dc1f5a26396f2(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_578: ();
    clap_builder::builder::command::Command::new::h932fad5509a6382d(&var_578, 
        uucore::util_name::h074417a1e6395129());
    let mut var_ac0: *mut *mut [i8; 0x8c];
    clap_builder::builder::command::Command::version::hc1fe59c39b6f4211(&var_ac0, &var_578);
    clap_builder::builder::command::Command::about::h8205f6058889eff4(&var_578, &var_ac0, arg2, 
        arg3);
    let mut var_7f8: ();
    uucore::format_usage::he053403a896311ed(&var_7f8, arg4, arg5);
    clap_builder::builder::command::Command::override_usage::h7cfcee2420e996d7(&var_ac0, &var_578, 
        &var_7f8);
    memcpy(&var_578, &var_ac0, 0x2bc);
    let var_804: i64;
    let var_2bc: i64 = 0x8000000080 | var_804;
    let var_7fc: i32;
    let var_2b4: i32 = var_7fc;
    clap_builder::builder::arg::Arg::new::h6ce6ec4dbfc681bb(&var_ac0, 
        "decodeignore-garbageextra operan…");
    clap_builder::builder::arg::Arg::short::hc1b23b5f63f257f6(&var_7f8, &var_ac0, 0x64);
    clap_builder::builder::arg::Arg::visible_short_alias::h61648684a42d2af9(&var_ac0, &var_7f8);
    clap_builder::builder::arg::Arg::long::h184e9f6fa9f8d2c0(&var_7f8, &var_ac0, 
        "decodeignore-garbageextra operan…");
    clap_builder::builder::arg::Arg::help::h36f90f0dab6bd913(&var_ac0, &var_7f8, 
        "decode datawhen decoding, ignore…", 0xb);
    clap_builder::builder::arg::Arg::action::h872abf759cc678f7(&var_7f8, &var_ac0, 2);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::overrides_with::h69004ae79cc03a2b(&var_2b0, &var_7f8, 
        "decodeignore-garbageextra operan…");
    clap_builder::builder::command::Command::arg::h08729c9827e4ea92(&var_ac0, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h6ce6ec4dbfc681bb(&var_578, 
        "ignore-garbageextra operand : No…");
    clap_builder::builder::arg::Arg::short::hc1b23b5f63f257f6(&var_7f8, &var_578, 0x69);
    clap_builder::builder::arg::Arg::long::h184e9f6fa9f8d2c0(&var_578, &var_7f8, 
        "ignore-garbageextra operand : No…");
    clap_builder::builder::arg::Arg::help::h36f90f0dab6bd913(&var_7f8, &var_578, 
        "when decoding, ignore non-alphab…", 0x2f);
    clap_builder::builder::arg::Arg::action::h872abf759cc678f7(&var_578, &var_7f8, 2);
    clap_builder::builder::arg::Arg::overrides_with::h69004ae79cc03a2b(&var_7f8, &var_578, 
        "ignore-garbageextra operand : No…");
    clap_builder::builder::command::Command::arg::h08729c9827e4ea92(&var_578, &var_ac0, &var_7f8);
    clap_builder::builder::arg::Arg::new::h6ce6ec4dbfc681bb(&var_ac0, 
        "wrapdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::arg::Arg::short::hc1b23b5f63f257f6(&var_7f8, &var_ac0, 0x77);
    clap_builder::builder::arg::Arg::long::h184e9f6fa9f8d2c0(&var_ac0, &var_7f8, 
        "wrapdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::arg::Arg::value_name::h35c574f0d6f6de07(&var_7f8, &var_ac0);
    var_2b0 = "L";
    let var_2a8: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    var_ac0 = &data_50de80;
    let var_ab8: i64 = 2;
    let var_aa0: i64 = 0;
    let var_ab0: *const *const i8 = &var_2b0;
    let var_aa8: i64 = 1;
    let mut var_ad8: ();
    core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(&var_ad8, &var_ac0);
    clap_builder::builder::arg::Arg::help::h38b600f407a4509a(&var_ac0, &var_7f8, &var_ad8);
    clap_builder::builder::arg::Arg::overrides_with::h69004ae79cc03a2b(&var_7f8, &var_ac0, 
        "wrapdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::command::Command::arg::h08729c9827e4ea92(&var_ac0, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::h6ce6ec4dbfc681bb(&var_578, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::index::h5309e592fc0f72ce(&var_7f8, &var_578);
    clap_builder::builder::arg::Arg::action::h872abf759cc678f7(&var_578, &var_7f8, 1);
    clap_builder::builder::arg::Arg::value_hint::ha7fdcb74d1825e1d(&var_7f8, &var_578);
    clap_builder::builder::command::Command::arg::h08729c9827e4ea92(arg1, &var_ac0, &var_7f8);
    arg1
}
