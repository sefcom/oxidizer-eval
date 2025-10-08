
  int64_t uu_sync::uu_app::h8e872b0e08daa914(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::hdc5d20ded2fe5937(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h8d1d4e4adb50ff62(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h20a2fa6cf3bbe39f(&var_830, &var_568);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} [OPTION]... FILE...sync the f…", 0x16);
    clap_builder::builder::command::Command::override_usage::hbbd0e923b7e75e29(&var_568, &var_830, 
        &var_2a0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::ha8ed694ecb490eca(&var_568, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::short::h03c14f09db810059(&var_2a0, &var_568, 0x66);
    clap_builder::builder::arg::Arg::long::hdd63639c55d4e175(&var_568, &var_2a0, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::conflicts_with::heb932e0e3cd0905b(&var_2a0, &var_568, 
        &data_4173a0[0xc]);
    clap_builder::builder::arg::Arg::help::h501879552b57ccc6(&var_568, &var_2a0, 
        "sync the file systems that conta…", 0x45);
    clap_builder::builder::arg::Arg::action::hf03b42939859e300(&var_2a0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h44b7b3ad517cce1b(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::ha8ed694ecb490eca(&var_830, &data_4173a0[0xc]);
    clap_builder::builder::arg::Arg::short::h03c14f09db810059(&var_2a0, &var_830, 0x64);
    clap_builder::builder::arg::Arg::long::hdd63639c55d4e175(&var_830, &var_2a0, &data_4173a0[0xc]);
    clap_builder::builder::arg::Arg::conflicts_with::heb932e0e3cd0905b(&var_2a0, &var_830, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::help::h501879552b57ccc6(&var_830, &var_2a0, 
        "sync only file data, no unneeded…", 0x36);
    clap_builder::builder::arg::Arg::action::hf03b42939859e300(&var_2a0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h44b7b3ad517cce1b(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::ha8ed694ecb490eca(&var_568, 
        "filessrc/uu/sync/src/sync.rs(uut…");
    clap_builder::builder::arg::Arg::action::hf03b42939859e300(&var_2a0, &var_568, 1);
    clap_builder::builder::arg::Arg::value_hint::h42a044bdb429c317(&var_568, &var_2a0);
    clap_builder::builder::command::Command::arg::h44b7b3ad517cce1b(arg1, &var_830, &var_568);
    return arg1;
}
