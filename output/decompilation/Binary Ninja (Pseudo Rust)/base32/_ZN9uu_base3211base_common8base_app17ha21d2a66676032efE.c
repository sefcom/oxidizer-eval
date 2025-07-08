
  fn uu_base32::base_common::base_app::ha21d2a66676032ef(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_2f8: ();
    clap_builder::builder::command::Command::new::hfa716c44879ea464(&var_2f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_810: *mut *mut [i8; 0xf5];
    clap_builder::builder::command::Command::version::hb92211e67539361a(&var_810, &var_2f8, 
        "0.0.28decode datawhen decoding, …");
    clap_builder::builder::command::Command::about::hec0b9e41edbe4337(&var_2f8, &var_810, arg2, 
        arg3);
    let mut var_548: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_548, arg4, arg5);
    clap_builder::builder::command::Command::override_usage::hf1986e74298ec10a(&var_810, &var_2f8, 
        &var_548);
    memcpy(&var_2f8, &var_810, 0x2bc);
    let var_554: i64;
    let var_3c: i64 = 0x8000000080 | var_554;
    let var_54c: i32;
    let var_34: i32 = var_54c;
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&var_810, 
        "decodeignore-garbageassertion fa…");
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&var_548, &var_810, 0x64);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&var_810, &var_548, 
        "decodeignore-garbageassertion fa…");
    clap_builder::builder::arg::Arg::help::h40d56640fed2be37(&var_548, &var_810, 
        "decode datawhen decoding, ignore…", 0xb);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&var_810, &var_548, 2);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&var_548, &var_810, 
        "decodeignore-garbageassertion fa…");
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&var_810, &var_2f8, &var_548);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&var_2f8, 
        "ignore-garbageassertion failed: …");
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&var_548, &var_2f8, 0x69);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&var_2f8, &var_548, 
        "ignore-garbageassertion failed: …");
    clap_builder::builder::arg::Arg::help::h40d56640fed2be37(&var_548, &var_2f8, 
        "when decoding, ignore non-alphab…", 0x2f);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&var_2f8, &var_548, 2);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&var_548, &var_2f8, 
        "ignore-garbageassertion failed: …");
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&var_2f8, &var_810, &var_548);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&var_810, 
        "wrapdumb\x1b[5m <= \x1b[9mtrueTE…");
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&var_548, &var_810, 0x77);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&var_810, &var_548, 
        "wrapdumb\x1b[5m <= \x1b[9mtrueTE…");
    clap_builder::builder::arg::Arg::value_name::h13e072b4d1b72f35(&var_548, &var_810);
    let mut var_838: *const i8 = "L";
    let var_830: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    var_810 = &data_549718;
    let var_808: i64 = 2;
    let var_7f0: i64 = 0;
    let var_800: *const *const i8 = &var_838;
    let var_7f8: i64 = 1;
    let mut var_828: ();
    core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(&var_828, &var_810);
    clap_builder::builder::arg::Arg::help::hd570429907ec6595(&var_810, &var_548, &var_828);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&var_548, &var_810, 
        "wrapdumb\x1b[5m <= \x1b[9mtrueTE…");
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&var_810, &var_2f8, &var_548);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&var_2f8, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::index::h0d277d3604e1b382(&var_548, &var_2f8);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&var_2f8, &var_548, 1);
    clap_builder::builder::arg::Arg::value_hint::h0af7fcc19388eca0(&var_548, &var_2f8, 3);
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(arg1, &var_810, &var_548);
    arg1
}
