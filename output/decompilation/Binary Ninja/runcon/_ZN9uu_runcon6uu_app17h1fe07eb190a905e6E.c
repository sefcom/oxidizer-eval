
  void* uu_runcon::uu_app::h1fe07eb190a905e6(void* arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h656122781c2c2e6f(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h848a0d4f0fbaa52b(&var_830, &var_568);
    clap_builder::builder::command::Command::about::hf27dcc54746c88f1(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::h22876d193ffeb47c(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} CONTEXT COMMAND [ARG...]\n{} …", 0x5d);
    clap_builder::builder::command::Command::override_usage::hc0860ff1a469243e(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t rcx = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_568, 
        "computeCompute process transitio…");
    clap_builder::builder::arg::Arg::short::h86c131a4dbaa6954(&var_ab0, &var_568, 0x63);
    clap_builder::builder::arg::Arg::long::hf5348895895b9c86(&var_568, &var_ab0, 
        "computeCompute process transitio…");
    clap_builder::builder::arg::Arg::help::h706f8f8d3d425d9f(&var_ab0, &var_568, 
        "Compute process transition conte…", 0x34);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h14f9250bb3c7c1ff(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_830, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::short::h86c131a4dbaa6954(&var_ab0, &var_830, 0x75);
    clap_builder::builder::arg::Arg::long::hf5348895895b9c86(&var_830, &var_ab0, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::value_name::h4cb69874de1a7d65(&var_ab0, &var_830, 
        "USER\x1b[0mCyantype    TYPE"`$\E…");
    clap_builder::builder::arg::Arg::help::h706f8f8d3d425d9f(&var_830, &var_ab0, 
        "Set user USER in the target secu…", 0x2d);
    int64_t var_ac8 = 2;
    clap_builder::builder::arg::Arg::value_parser::he1e245ff32adbcd9(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_568, "role) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::short::h86c131a4dbaa6954(&var_ab0, &var_568, 0x72);
    clap_builder::builder::arg::Arg::long::hf5348895895b9c86(&var_568, &var_ab0, 
        "role) = Zero\x1b[7mBool");
    clap_builder::builder::arg::Arg::value_name::h4cb69874de1a7d65(&var_ab0, &var_568, 
        "ROLE\x1b[2mAnsipath -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::help::h706f8f8d3d425d9f(&var_568, &var_ab0, 
        "Set role ROLE in the target secu…", 0x2d);
    clap_builder::builder::arg::Arg::value_parser::he1e245ff32adbcd9(&var_ab0, &var_568, &var_ac8);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_830, &data_418cd0);
    clap_builder::builder::arg::Arg::short::h86c131a4dbaa6954(&var_ab0, &var_830, 0x74);
    clap_builder::builder::arg::Arg::long::hf5348895895b9c86(&var_830, &var_ab0, &data_418cd0);
    clap_builder::builder::arg::Arg::value_name::h4cb69874de1a7d65(&var_ab0, &var_830, 
        &data_418cd0[8]);
    clap_builder::builder::arg::Arg::help::h706f8f8d3d425d9f(&var_830, &var_ab0, 
        "Set type TYPE in the target secu…", 0x2d);
    clap_builder::builder::arg::Arg::value_parser::he1e245ff32adbcd9(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_568, 
        "rangeRANGESet range RANGE in the…");
    clap_builder::builder::arg::Arg::short::h86c131a4dbaa6954(&var_ab0, &var_568, 0x6c);
    clap_builder::builder::arg::Arg::long::hf5348895895b9c86(&var_568, &var_ab0, 
        "rangeRANGESet range RANGE in the…");
    clap_builder::builder::arg::Arg::value_name::h4cb69874de1a7d65(&var_ab0, &var_568, 
        "RANGESet range RANGE in the targ…");
    clap_builder::builder::arg::Arg::help::h706f8f8d3d425d9f(&var_568, &var_ab0, 
        "Set range RANGE in the target se…", 0x2f);
    clap_builder::builder::arg::Arg::value_parser::he1e245ff32adbcd9(&var_ab0, &var_568, &var_ac8);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h9ceb494e35a9d462(&var_830, 
        "ARGGetting security context of t…");
    clap_builder::builder::arg::Arg::action::h14f9250bb3c7c1ff(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_parser::he1e245ff32adbcd9(&var_830, &var_ab0, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h8b4b7dcb2e6f132b(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h33cebf69b39935e2(&var_830, &var_568, &var_ab0);
    memcpy(arg1, &var_830, 0x2bc);
    *(arg1 + 0x2bc) = rcx | 0x20;
    *(arg1 + 0x2c0) = rcx;
    return arg1;
}
