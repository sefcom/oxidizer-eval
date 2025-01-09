long long uu_base32::base_common::base_app::ha21d2a66676032ef(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x838], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x830]
    char v2;  // [bp-0x828]
    char v3;  // [bp-0x810], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x808]
    char *v5;  // [sp-0x800]
    unsigned long long v6;  // [sp-0x7f8]
    void* v7;  // [sp-0x7f0]
    char v8;  // [bp-0x554]
    char v9;  // [bp-0x54c]
    char v10;  // [bp-0x548]
    char v11;  // [bp-0x2f8]
    unsigned long long v12;  // [sp-0x3c]
    unsigned int v13;  // [sp-0x34]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::hfa716c44879ea464(&v11, uucore::util_name::h60d842bf27b05e82(), v15);
    clap_builder::builder::command::Command::version::hb92211e67539361a(&v3, &v11, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hec0b9e41edbe4337(&v11, &v3, a1, a2);
    uucore::format_usage::h76fcb2d15fbabc58(&v10, a3, a4);
    clap_builder::builder::command::Command::override_usage::hf1986e74298ec10a(&v3, &v11, &v10);
    memcpy(&v11, &v3, 700);
    v12 = 549755814016 | *((long long *)&v8);
    v13 = *((int *)&v9);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&v3, "decode", 6);
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&v10, &v3, 100);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&v3, &v10, "decode", 6);
    clap_builder::builder::arg::Arg::help::h40d56640fed2be37(&v10, &v3, "decode data", 11);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&v3, &v10, 2);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&v10, &v3, "decode", 6);
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&v3, &v11, &v10);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&v11, "ignore-garbage", 14);
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&v10, &v11, 105);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&v11, &v10, "ignore-garbage", 14);
    clap_builder::builder::arg::Arg::help::h40d56640fed2be37(&v10, &v11, "when decoding, ignore non-alphabetic characters", 47);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&v11, &v10, 2);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&v10, &v11, "ignore-garbage", 14);
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&v11, &v3, &v10);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&v3, "wrap", 4);
    clap_builder::builder::arg::Arg::short::h428f0722295604ff(&v10, &v3, 119);
    clap_builder::builder::arg::Arg::long::he1104ce654318553(&v3, &v10, "wrap", 4);
    clap_builder::builder::arg::Arg::value_name::h13e072b4d1b72f35(&v10, &v3);
    v0 = "L";
    v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v3 = &g_549718;
    v4 = 2;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b();
    clap_builder::builder::arg::Arg::help::hd570429907ec6595(&v3, &v10, &v2);
    clap_builder::builder::arg::Arg::overrides_with::ha62caa77c6cf0524(&v10, &v3, "wrap", 4);
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(&v3, &v11, &v10);
    clap_builder::builder::arg::Arg::new::hd6a05d291299ce3c(&v11, "filei128", 4);
    clap_builder::builder::arg::Arg::index::h0d277d3604e1b382(&v10, &v11);
    clap_builder::builder::arg::Arg::action::h78abc8b7d6dd2888(&v11, &v10, 1);
    clap_builder::builder::arg::Arg::value_hint::h0af7fcc19388eca0(&v10, &v11, 3);
    clap_builder::builder::command::Command::arg::h4f860fc6ea6f3166(a0, &v3, &v10);
    return a0;
}
