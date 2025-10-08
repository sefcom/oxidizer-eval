
  int64_t uu_sum::uu_app::h22b6eed10a48226a(int64_t arg1)

{
    void var_2e8;
    clap_builder::builder::command::Command::new::h97c4a0b3a39f20a4(&var_2e8, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h8103610d5f1b6e09(&var_830, &var_2e8);
    void var_568;
    uucore::format_usage::he053403a896311ed(&var_568, "{} [OPTION]... [FILE]...Checksum…", 0x18);
    clap_builder::builder::command::Command::override_usage::h3c8cc79ec84dde61(&var_2e8, &var_830, 
        &var_568);
    clap_builder::builder::command::Command::about::h769caf7dafd9c456(&var_830, &var_2e8);
    memcpy(&var_2e8, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2c = 0x8000000080 | var_574;
    int32_t var_56c;
    int32_t var_24 = var_56c;
    clap_builder::builder::arg::Arg::new::h5d27add29adba624(&var_830, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::action::h61bbb8c3a6df83cd(&var_568, &var_830, 1);
    memcpy(&var_830, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_5b8 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_5b4 = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::hf872946301b9bd03(&var_568, &var_830);
    clap_builder::builder::command::Command::arg::h4ae0df5834f743b0(&var_830, &var_2e8, &var_568);
    clap_builder::builder::arg::Arg::new::h5d27add29adba624(&var_2e8, 
        "r(uutils coreutils) 0.0.30{} [OP…");
    clap_builder::builder::arg::Arg::short::hf1529a0089b51373(&var_568, &var_2e8, 0x72);
    clap_builder::builder::arg::Arg::help::h1ef978ded76be59a(&var_2e8, &var_568, 
        "use the BSD sum algorithm, use 1…", 0x32);
    clap_builder::builder::arg::Arg::action::h61bbb8c3a6df83cd(&var_568, &var_2e8, 2);
    clap_builder::builder::command::Command::arg::h4ae0df5834f743b0(&var_2e8, &var_830, &var_568);
    clap_builder::builder::arg::Arg::new::h5d27add29adba624(&var_830, &data_417b34[0xc]);
    clap_builder::builder::arg::Arg::short::hf1529a0089b51373(&var_568, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h50b43c455dfa0947(&var_830, &var_568);
    clap_builder::builder::arg::Arg::help::h1ef978ded76be59a(&var_568, &var_830, 
        "use System V sum algorithm, use …", 0x30);
    clap_builder::builder::arg::Arg::action::h61bbb8c3a6df83cd(&var_830, &var_568, 2);
    clap_builder::builder::command::Command::arg::h4ae0df5834f743b0(arg1, &var_2e8, &var_830);
    return arg1;
}
