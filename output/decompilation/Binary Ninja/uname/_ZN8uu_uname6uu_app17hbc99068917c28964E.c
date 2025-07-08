
  int64_t uu_uname::uu_app::hbc99068917c28964(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::h33de013894abd84d(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::h5183e70f273eb493(&var_530, &var_7f8, 
        "0.0.28Print certain system infor…");
    clap_builder::builder::command::Command::about::h71f73133e2e1a990(&var_7f8, &var_530, 
        "Print certain system information…", 0x3e);
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]...Behave as though a…", 0xe);
    clap_builder::builder::command::Command::override_usage::h2ab54060bf0607bf(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_530, 
        "allkernel-namekernel-versionkern…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_530, 0x61);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_530, &var_a48, 
        "allkernel-namekernel-versionkern…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_530, 
        "Behave as though all of the opti…", 0x3b);
    void var_268;
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_7f8, 
        "kernel-namekernel-versionkernel-…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_7f8, &var_a48, 
        "kernel-namekernel-versionkernel-…");
    clap_builder::builder::arg::Arg::alias::h62ef68af077758a7(&var_a48, &var_7f8, 
        "sysnameprint the kernel name.pri…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_7f8, &var_a48, 
        "print the kernel name.print the …", 0x16);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_a48, &var_7f8);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_530, "nodenameDeadlock");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_530, 0x6e);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_530, &var_a48, 
        "nodenameDeadlock");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_530, 
        "print the nodename (the nodename…", 0x68);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_7f8, 
        "kernel-releasemachineprocessorha…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_7f8, 0x72);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_7f8, &var_a48, 
        "kernel-releasemachineprocessorha…");
    clap_builder::builder::arg::Arg::alias::h62ef68af077758a7(&var_a48, &var_7f8, 
        "releaseprint the operating syste…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_7f8, &var_a48, 
        "print the operating system relea…", 0x23);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_a48, &var_7f8);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_530, 
        "kernel-versionkernel-releasemach…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_530, 0x76);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_530, &var_a48, 
        "kernel-versionkernel-releasemach…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_530, 
        "print the operating system versi…", 0x23);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_7f8, 
        "machineprocessorhardware-platfor…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_7f8, 0x6d);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_7f8, &var_a48, 
        "machineprocessorhardware-platfor…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_7f8, 
        "print the machine hardware name.…", 0x20);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_530, 
        "operating-system[short aliases: …");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_530, 0x6f);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_530, &var_a48, 
        "operating-system[short aliases: …");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_530, 
        "print the operating system name.…", 0x20);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_268, &var_a48);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_7f8, 
        "processorhardware-platformdescri…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_7f8, 0x70);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_7f8, &var_a48, 
        "processorhardware-platformdescri…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_7f8, 
        "print the processor type (non-po…", 0x27);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_7f8, &var_a48);
    memcpy(&var_a48, &var_7f8, 0x248);
    int32_t var_5b0;
    int32_t var_800 = var_5b0 | 4;
    int32_t var_5ac;
    int32_t var_7fc = var_5ac;
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&var_530, 
        "hardware-platformdescription() i…");
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&var_a48, &var_530, 0x69);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&var_530, &var_a48, 
        "hardware-platformdescription() i…");
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&var_a48, &var_530, 
        "print the hardware platform (non…", 0x2a);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&var_530, &var_a48);
    memcpy(&var_a48, &var_530, 0x248);
    int32_t var_2e8;
    int32_t var_800_1 = var_2e8 | 4;
    int32_t var_2e4;
    int32_t var_7fc_1 = var_2e4;
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(arg1, &var_7f8, &var_a48);
    return arg1;
}
