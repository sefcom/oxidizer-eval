
  int64_t uu_hashsum::uu_app_opt_length::ha4be398f09f1abb1(int64_t arg1, int64_t arg2)

{
    void var_2e0;
    memcpy(&var_2e0, arg2, 0x2c8);
    void var_560;
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_560, 
        "lengthdigest length in bits; mus…");
    void var_7e0;
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_7e0, &var_560, 
        "lengthdigest length in bits; mus…");
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::h69abcbfffaa76762(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::he7963e1397bf94db);
    int64_t var_7f8 = 4;
    uint64_t var_7f0 = rax;
    void* const var_7e8 = &data_5515d8;
    clap_builder::builder::arg::Arg::value_parser::hbbb42d02c19229f0(&var_560, &var_7e0, &var_7f8);
    clap_builder::builder::arg::Arg::short::h94ef1aed863077db(&var_7e0, &var_560, 0x6c);
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_560, &var_7e0, 
        "digest length in bits; must not …", 0x63);
    clap_builder::builder::arg::Arg::overrides_with::hc2db0b48d061391e(&var_7e0, &var_560);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_560, &var_7e0, 0);
    return clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(arg1, &var_2e0, 
        &var_560);
}
