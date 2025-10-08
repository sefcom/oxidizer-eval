long long uu_uname::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned int v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    unsigned long v11;  // [bp-0x2ac]
    unsigned int v12;  // [bp-0x2a4]
    char v13;  // [bp-0x2a0]
    unsigned long long v16;  // rdx

    v3.new(uucore::util_name(), v16);
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (the nodename may be a name that the system is known by to a communications network).releaseprint the operating system release.print the operating system version.", 14);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v11;
    v7 = v12;
    v8.new("allkernel-namekernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were sp", 3);
    v0.short(&v8, 97);
    v8.long(&v0, "allkernel-namekernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were sp", 3);
    v0.help(&v8, "Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (the nodename may be a name that the system is known by to a communications network).releaseprint the operating system release.print the operating system version.", 59);
    v13.action(&v0);
    v8.arg(&v3, &v13);
    v3.new("kernel-namekernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were speci", 11);
    v0.short(&v3, 115);
    v3.long(&v0, "kernel-namekernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were speci", 11);
    v0.alias(&v3, "sysnameprint the kernel name.print the nodename (the nodename may be a name that the system is known by to a communications network).releaseprint the operating system release.print the operating system version.");
    v3.help(&v0, "print the kernel name.print the nodename (the nodename may be a name that the system is known by to a communications network).releaseprint the operating system release.print the operating system version.", 22);
    v0.action(&v3);
    v3.arg(&v8, &v0);
    v8.new("nodenamePriorArg' existsDeadlockdeadlock", 8);
    v0.short(&v8, 110);
    v8.long(&v0, "nodenamePriorArg' existsDeadlockdeadlock", 8);
    v0.help(&v8, "print the nodename (the nodename may be a name that the system is known by to a communications network).releaseprint the operating system release.print the operating system version.", 104);
    v13.action(&v0);
    v8.arg(&v3, &v13);
    v3.new("kernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the ker", 14);
    v0.short(&v3, 114);
    v3.long(&v0, "kernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the ker", 14);
    v0.alias(&v3, "releaseprint the operating system release.print the operating system version.");
    v3.help(&v0, "print the operating system release.print the operating system version.", 35);
    v0.action(&v3);
    v3.arg(&v8, &v0);
    v8.new("kernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnam", 14);
    v0.short(&v8, 118);
    v8.long(&v0, "kernel-versionkernel-releasemachineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnam", 14);
    v0.help(&v8, "print the operating system version.", 35);
    v13.action(&v0);
    v8.arg(&v3, &v13);
    v3.new("machineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print", 7);
    v0.short(&v3, 109);
    v3.long(&v0, "machineprocessorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print", 7);
    v0.help(&v3, "print the machine hardware name.Print help for the subcommand(s)print the operating system name.library/alloc/src/raw_vec/mod.rsindex out of bounds: the len is ", 32);
    v13.action(&v0);
    v3.arg(&v8, &v13);
    v8.new("operating-system[short aliases: DASHED_UNDERLINE", 16);
    v0.short(&v8, 111);
    v8.long(&v0, "operating-system[short aliases: DASHED_UNDERLINE", 16);
    v0.help(&v8, "print the operating system name.library/alloc/src/raw_vec/mod.rsindex out of bounds: the len is ", 32);
    v13.action(&v0);
    v8.arg(&v3, &v13);
    v3.new("processorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the no", 9);
    v0.short(&v3, 112);
    v3.long(&v0, "processorhardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the no", 9);
    v0.help(&v3, "print the processor type (non-portable)print the hardware platform (non-portable)", 39);
    v3.action(&v0);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 4;
    v2 = *((int *)&v5);
    v3.arg(&v8, &v0);
    v8.new("hardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (t", 17);
    v0.short(&v8, 105);
    v8.long(&v0, "hardware-platformunknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (t", 17);
    v0.help(&v8, "print the hardware platform (non-portable)", 42);
    v8.action(&v0);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 4;
    v2 = *((int *)&v10);
    a0.arg(&v3, &v0);
    return a0;
}
