long long uu_uname::uu_app::hbd45341f6692ef53(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h1a6ab34f38143741(&v3, uucore::util_name::h412db5e565a079f3(), v15);
    clap_builder::builder::command::Command::version::h3de080aa3f2d4fdd(&v8, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h0cfca520bdad60ef(&v3, &v8, "Print certain system information. \nWith no OPTION, same as -s.", 62);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]...", 14);
    clap_builder::builder::command::Command::override_usage::h5d1071f1de29ca2c(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v11);
    v7 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v8, "all", 3);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v8, &v0, "all", 3);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v8, "Behave as though all of the options -mnrsvo were specified.", 59);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v13, &v0);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v3, "kernel-name", 11);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v3, &v0, "kernel-name", 11);
    clap_builder::builder::arg::Arg::alias::hdf080012533c22f0(&v0, &v3, "sysname", 7);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v3, &v0, "print the kernel name.", 22);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v0, &v3);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v8, "nodenameDeadlock", 8);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v8, 110);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v8, &v0, "nodenameDeadlock", 8);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v8, "print the nodename (the nodename may be a name that the system is known by to a communications network).", 104);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v13, &v0);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v3, "kernel-release", 14);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v3, &v0, "kernel-release", 14);
    clap_builder::builder::arg::Arg::alias::hdf080012533c22f0(&v0, &v3, "release", 7);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v3, &v0, "print the operating system release.", 35);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v0, &v3);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v8, "kernel-version", 14);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v8, 118);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v8, &v0, "kernel-version", 14);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v8, "print the operating system version.", 35);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v13, &v0);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v3, "machine", 7);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v3, 109);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v3, &v0, "machine", 7);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v3, "print the machine hardware name.", 32);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v13, &v0);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v8, "operating-system[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v8, &v0, "operating-system[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v8, "print the operating system name.index out of bounds: the len is ", 32);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v13, &v0);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v3, "processor", 9);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v3, 112);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v3, &v0, "processor", 9);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v3, "print the processor type (non-portable)", 39);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h17d594c32b69e87a(&v8, "hardware-platform", 17);
    clap_builder::builder::arg::Arg::short::h33d5ca6060897b9c(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long::h7a11cda5d53c889a(&v8, &v0, "hardware-platform", 17);
    clap_builder::builder::arg::Arg::help::hc07dd4ad3ab7d8d4(&v0, &v8, "print the hardware platform (non-portable)", 42);
    clap_builder::builder::arg::Arg::action::hd9fb5628df923edb(&v8, &v0);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::command::Command::arg::h64c5ae4cfa3f25db(a0, &v3, &v0);
    return a0;
}
