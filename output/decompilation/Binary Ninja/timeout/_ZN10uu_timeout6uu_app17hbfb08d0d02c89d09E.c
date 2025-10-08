
  void* uu_timeout::uu_app::hbfb08d0d02c89d09(void* arg1)

{
    void var_838;
    clap_builder::builder::command::Command::new::hb7b9e1dab7a395de(&var_838);
    void var_570;
    clap_builder::builder::command::Command::version::h46a466e77cb5da5d(&var_570, &var_838);
    clap_builder::builder::command::Command::about::h57e5ab36e61a23e6(&var_838, &var_570);
    void var_ab8;
    uucore::format_usage::he053403a896311ed(&var_ab8, "{} [OPTION] DURATION COMMAND...w…", 0x1f);
    clap_builder::builder::command::Command::override_usage::hfb49b5994d20e4b7(&var_570, &var_838, 
        &var_ab8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_838, 
        "foregroundkill-aftersignalpreser…");
    clap_builder::builder::arg::Arg::long::h514f3620c7469438(&var_ab8, &var_838, 
        "foregroundkill-aftersignalpreser…");
    clap_builder::builder::arg::Arg::short::h630ebfc314b5bdbf(&var_838, &var_ab8, 0x66);
    clap_builder::builder::arg::Arg::help::h46362353e6c13036(&var_ab8, &var_838, 
        "when not running timeout directl…", 0xa6);
    void var_2a8;
    clap_builder::builder::arg::Arg::action::hc9674d23fb38bbb8(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_570, 
        "kill-aftersignalpreserve-statusv…");
    clap_builder::builder::arg::Arg::long::h514f3620c7469438(&var_ab8, &var_570, 
        "kill-aftersignalpreserve-statusv…");
    clap_builder::builder::arg::Arg::short::h630ebfc314b5bdbf(&var_570, &var_ab8, 0x6b);
    clap_builder::builder::arg::Arg::help::h46362353e6c13036(&var_ab8, &var_570, 
        "also send a KILL signal if COMMA…", 0x5f);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_838, 
        "preserve-statusverbosecommandsrc…");
    clap_builder::builder::arg::Arg::long::h514f3620c7469438(&var_ab8, &var_838, 
        "preserve-statusverbosecommandsrc…");
    clap_builder::builder::arg::Arg::short::h630ebfc314b5bdbf(&var_838, &var_ab8, 0x70);
    clap_builder::builder::arg::Arg::help::h46362353e6c13036(&var_ab8, &var_838, 
        "exit with the same status as COM…", 0x45);
    clap_builder::builder::arg::Arg::action::hc9674d23fb38bbb8(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_570, 
        "signalpreserve-statusverbosecomm…");
    clap_builder::builder::arg::Arg::short::h630ebfc314b5bdbf(&var_ab8, &var_570, 0x73);
    clap_builder::builder::arg::Arg::long::h514f3620c7469438(&var_570, &var_ab8, 
        "signalpreserve-statusverbosecomm…");
    clap_builder::builder::arg::Arg::help::h46362353e6c13036(&var_ab8, &var_570, 
        "specify the signal to be sent on…", 0x7a);
    clap_builder::builder::arg::Arg::value_name::h142a63b678798546(&var_2a8, &var_ab8);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_838, 
        "verbosecommandsrc/uu/timeout/src…");
    clap_builder::builder::arg::Arg::short::h630ebfc314b5bdbf(&var_ab8, &var_838, 0x76);
    clap_builder::builder::arg::Arg::long::h514f3620c7469438(&var_838, &var_ab8, 
        "verbosecommandsrc/uu/timeout/src…");
    clap_builder::builder::arg::Arg::help::h46362353e6c13036(&var_ab8, &var_838, 
        "diagnose to stderr any signal se…", 0x2f);
    clap_builder::builder::arg::Arg::action::hc9674d23fb38bbb8(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_570, "duration\n       ");
    memcpy(&var_ab8, &var_570, 0x278);
    int32_t var_2f8;
    int32_t var_840 = var_2f8 | 1;
    int32_t var_2f4;
    int32_t var_83c = var_2f4;
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h83358cd592e20eb1(&var_838, 
        "commandsrc/uu/timeout/src/timeou…");
    memcpy(&var_ab8, &var_838, 0x278);
    int32_t var_5c0;
    int32_t var_840_1 = var_5c0 | 1;
    int32_t var_5bc;
    int32_t var_83c_1 = var_5bc;
    clap_builder::builder::arg::Arg::action::hc9674d23fb38bbb8(&var_838, &var_ab8, 1);
    clap_builder::builder::arg::Arg::value_hint::h6d24875c8bbbc6df(&var_ab8, &var_838);
    clap_builder::builder::command::Command::arg::h02c1e1c0d10541e1(&var_838, &var_570, &var_ab8);
    memcpy(arg1, &var_838, 0x2bc);
    int64_t var_57c;
    *(arg1 + 0x2bc) = 0x80000000a0 | var_57c;
    int32_t var_574;
    *(arg1 + 0x2c4) = var_574;
    return arg1;
}
