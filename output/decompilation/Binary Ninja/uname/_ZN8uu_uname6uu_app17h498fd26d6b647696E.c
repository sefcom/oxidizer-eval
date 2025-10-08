
  int64_t uu_uname::uu_app::h498fd26d6b647696(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::hbda45aa305631dcf(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::he6e5046ac45c09d1(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h7aa8fc1aee1fdc42(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]...Behave as though a…", 0xe);
    clap_builder::builder::command::Command::override_usage::h8eae2dd7ca76b962(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_568, 
        "allkernel-namekernel-versionkern…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_568, 0x61);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_568, &var_ab0, 
        "allkernel-namekernel-versionkern…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_568, 
        "Behave as though all of the opti…", 0x3b);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_830, 
        "kernel-namekernel-versionkernel-…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_830, &var_ab0, 
        "kernel-namekernel-versionkernel-…");
    clap_builder::builder::arg::Arg::alias::h9ab28ff6795de8a8(&var_ab0, &var_830, 
        "sysnameprint the kernel name.pri…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_830, &var_ab0, 
        "print the kernel name.print the …", 0x16);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_568, 
        "nodenamePriorArg' existsDeadlock…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_568, 0x6e);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_568, &var_ab0, 
        "nodenamePriorArg' existsDeadlock…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_568, 
        "print the nodename (the nodename…", 0x68);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_830, 
        "kernel-releasemachineprocessorha…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_830, 0x72);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_830, &var_ab0, 
        "kernel-releasemachineprocessorha…");
    clap_builder::builder::arg::Arg::alias::h9ab28ff6795de8a8(&var_ab0, &var_830, 
        "releaseprint the operating syste…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_830, &var_ab0, 
        "print the operating system relea…", 0x23);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_568, 
        "kernel-versionkernel-releasemach…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_568, &var_ab0, 
        "kernel-versionkernel-releasemach…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_568, 
        "print the operating system versi…", 0x23);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_830, 
        "machineprocessorhardware-platfor…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_830, 0x6d);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_830, &var_ab0, 
        "machineprocessorhardware-platfor…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_830, 
        "print the machine hardware name.…", 0x20);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_568, 
        "operating-system[short aliases: …");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_568, 0x6f);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_568, &var_ab0, 
        "operating-system[short aliases: …");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_568, 
        "print the operating system name.…", 0x20);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_830, 
        "processorhardware-platformunknow…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_830, 0x70);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_830, &var_ab0, 
        "processorhardware-platformunknow…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_830, 
        "print the processor type (non-po…", 0x27);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_830, &var_ab0);
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 4;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::he81dc6faa32add45(&var_568, 
        "hardware-platformunknowncannot g…");
    clap_builder::builder::arg::Arg::short::h00cb5c393bd6dc66(&var_ab0, &var_568, 0x69);
    clap_builder::builder::arg::Arg::long::hcf126cd65342a1c0(&var_568, &var_ab0, 
        "hardware-platformunknowncannot g…");
    clap_builder::builder::arg::Arg::help::h34bdc4567447d108(&var_ab0, &var_568, 
        "print the hardware platform (non…", 0x2a);
    clap_builder::builder::arg::Arg::action::hd5cbde159c2534e8(&var_568, &var_ab0);
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_838_1 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_834_1 = var_2ec;
    clap_builder::builder::command::Command::arg::h3d175528a18336ee(arg1, &var_830, &var_ab0);
    return arg1;
}
