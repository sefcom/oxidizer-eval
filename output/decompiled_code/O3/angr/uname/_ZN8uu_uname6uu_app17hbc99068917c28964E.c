long long uu_uname::uu_app::hbc99068917c28964(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    unsigned long long v6;  // [sp-0x53c]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x2e8]
    char v10;  // [bp-0x2e4]
    char v11;  // [bp-0x274]
    char v12;  // [bp-0x26c]
    char v13;  // [bp-0x268]
    unsigned long long v15;  // rdx

    clap_builder::builder::command::Command::new::h33de013894abd84d(&v3, uucore::util_name::h60d842bf27b05e82(), v15);
    clap_builder::builder::command::Command::version::h5183e70f273eb493(&v8, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h71f73133e2e1a990(&v3, &v8, "Print certain system information. \nWith no OPTION, same as -s.", 62);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]...", 14);
    clap_builder::builder::command::Command::override_usage::h2ab54060bf0607bf(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v11);
    v7 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v8, "all", 3);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v8, &v0, "all", 3);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v8, "Behave as though all of the options -mnrsvo were specified.", 59);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v13, &v0);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v3, "kernel-name", 11);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v3, &v0, "kernel-name", 11);
    clap_builder::builder::arg::Arg::alias::h62ef68af077758a7(&v0, &v3, "sysname", 7);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v3, &v0, "print the kernel name.", 22);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v0, &v3);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v8, "nodenameDeadlock", 8);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v8, 110);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v8, &v0, "nodenameDeadlock", 8);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v8, "print the nodename (the nodename may be a name that the system is known by to a communications network).", 104);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v13, &v0);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v3, "kernel-release", 14);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v3, &v0, "kernel-release", 14);
    clap_builder::builder::arg::Arg::alias::h62ef68af077758a7(&v0, &v3, "release", 7);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v3, &v0, "print the operating system release.", 35);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v0, &v3);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v8, "kernel-version", 14);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v8, &v0, "kernel-version", 14);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v8, "print the operating system version.", 35);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v13, &v0);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v3, "machine", 7);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v3, 109);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v3, &v0, "machine", 7);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v3, "print the machine hardware name.", 32);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v13, &v0);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v8, "operating-system[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v8, &v0, "operating-system[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v8, "print the operating system name.index out of bounds: the len is ", 32);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v13, &v0);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v3, "processor", 9);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v3, 112);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v3, &v0, "processor", 9);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v3, "print the processor type (non-portable)", 39);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h1141f38d1bd57110(&v8, "hardware-platform", 17);
    clap_builder::builder::arg::Arg::short::hab43391185e493c5(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long::ha91bc731b37cf9cb(&v8, &v0, "hardware-platform", 17);
    clap_builder::builder::arg::Arg::help::h51dd6f0148051d6d(&v0, &v8, "print the hardware platform (non-portable)", 42);
    clap_builder::builder::arg::Arg::action::h8a255baa2ae38d24(&v8, &v0);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::command::Command::arg::h747f304f861eac9f(a0, &v3, &v0);
    return a0;
}
