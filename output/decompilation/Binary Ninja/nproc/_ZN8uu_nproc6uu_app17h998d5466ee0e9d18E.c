
  int64_t uu_nproc::uu_app::h998d5466ee0e9d18(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::h93bc6311aa466ae4(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h92178293ed7099bd(&var_568, &var_830);
    clap_builder::builder::command::Command::about::he43e05ef87956149(&var_830, &var_568);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} [OPTIONS]...print the number …", 0xf);
    clap_builder::builder::command::Command::override_usage::hd9ba48e6009df6a1(&var_568, &var_830, 
        &var_2a0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::hb9361d905053f36d(&var_568, 
        "allignore(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::long::h6c2d08cefa9a9462(&var_2a0, &var_568, 
        "allignore(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::help::hf952c3f9d610f7f7(&var_568, &var_2a0, 
        "print the number of cores availa…", 0x31);
    clap_builder::builder::arg::Arg::action::h1747dee6f055c1dd(&var_2a0, &var_568);
    clap_builder::builder::command::Command::arg::hf4d3b30c757fbc74(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb9361d905053f36d(&var_830, 
        "ignore(uutils coreutils) 0.0.30P…");
    clap_builder::builder::arg::Arg::long::h6c2d08cefa9a9462(&var_2a0, &var_830, 
        "ignore(uutils coreutils) 0.0.30P…");
    clap_builder::builder::arg::Arg::value_name::h38066391a1cb9874(&var_830, &var_2a0);
    clap_builder::builder::arg::Arg::help::hf952c3f9d610f7f7(&var_2a0, &var_830, 
        "ignore up to N cores", 0x14);
    clap_builder::builder::command::Command::arg::hf4d3b30c757fbc74(arg1, &var_568, &var_2a0);
    return arg1;
}
