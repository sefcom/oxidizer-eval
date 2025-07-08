
  int64_t uu_base32::base_common::base_app::ha21d2a66676032ef(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void var_2f8;
    clap_builder::builder::command::Command::new::hfa716c44879ea464(&var_2f8, 
        uucore::util_name::h60d842bf27b05e82());
    char const (** const var_810)[0xf5];
    clap_builder::builder::command::Command::version::hb92211e67539361a(&var_810, &var_2f8, 
        "0.0.28decode datawhen decoding, …");
    clap_builder::builder::command::Command::about::hec0b9e41edbe4337(&var_2f8, &var_810, arg2, 
        arg3);
    void var_548;
    uucore::format_usage::h76fcb2d15fbabc58(&var_548, arg4, arg5);
    clap_builder::builder::command::Command::override_usage::hf1986e74298ec10a(&var_810, &var_2f8, 
        &var_548);
    memcpy(&var_2f8, &var_810, 0x2bc);
    int64_t var_554;
    int64_t var_3c = 0x8000000080 | var_554;
    int32_t var_54c;
    int32_t var_34 = var_54c;
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
    char const* const var_838 = "L";
    uint64_t (* var_830)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    var_810 = &data_549718;
    int64_t var_808 = 2;
    int64_t var_7f0 = 0;
    char const* const* var_800 = &var_838;
    int64_t var_7f8 = 1;
    void var_828;
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
    return arg1;
}
