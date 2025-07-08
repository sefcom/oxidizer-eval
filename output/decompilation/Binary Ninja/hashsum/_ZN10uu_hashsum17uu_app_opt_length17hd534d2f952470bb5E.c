
  int64_t uu_hashsum::uu_app_opt_length::hd534d2f952470bb5(int64_t arg1, int64_t arg2)

{
    void var_2d8;
    memcpy(&var_2d8, arg2, 0x2c8);
    void var_778;
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_778, 
        "lengthdigest length in bits; mus…");
    void var_528;
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_528, &var_778, 
        "lengthdigest length in bits; mus…");
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::h335045434651419a();
    int64_t var_790 = 4;
    uint64_t var_788 = rax;
    void* const var_780 = &data_73ec80;
    clap_builder::builder::arg::Arg::value_parser::he5d3a65a49706acc(&var_778, &var_528, &var_790);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&var_528, &var_778, 0x6c);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_778, &var_528, 
        "digest length in bits; must not …", 0x63);
    clap_builder::builder::arg::Arg::overrides_with::hcce032071395fcec(&var_528, &var_778, 
        "lengthdigest length in bits; mus…");
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_778, &var_528, 0);
    return clap_builder::builder::command::Command::arg::h001132be747f46b6(arg1, &var_2d8, 
        &var_778);
}
