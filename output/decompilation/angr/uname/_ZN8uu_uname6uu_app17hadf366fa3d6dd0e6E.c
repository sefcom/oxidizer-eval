long long uu_uname::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    char v5;  // [bp-0x82c]
    unsigned long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned int v9;  // [bp-0x568]
    char v10;  // [bp-0x564]
    unsigned long long v11;  // [bp-0x524]
    unsigned int v12;  // [bp-0x51c]
    char v13;  // [bp-0x518]
    unsigned int v14;  // [bp-0x2a0]
    unsigned int v15;  // [bp-0x29c]
    char v16;  // [bp-0x298]
    unsigned long long v19;  // rdx

    v8.new(uucore::util_name(), v19);
    v3.version(&v8, "(uutils coreutils) 0.1.0uname-aboutuname-usageuname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 24);
    uucore::mods::locale::get_message(&v13, "uname-aboutuname-usageuname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 11);
    v8.about(&v3, &v13);
    uucore::mods::locale::get_message(&v0, "uname-usageuname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 11);
    uucore::format_usage(&v13, v1, v2);
    v3.override_usage(&v8, &v13);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    v3.new(_ZN8uu_uname7options3ALL17heaf5658c0e21cb52E, g_562600);
    v13.short(&v3, 97);
    v3.long(&v13, _ZN8uu_uname7options3ALL17heaf5658c0e21cb52E, g_562600);
    uucore::mods::locale::get_message(&v16, "uname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 14);
    v13.help(&v3, &v16);
    v16.action(&v13);
    v3.arg(&v8, &v16);
    v8.new(_ZN8uu_uname7options11KERNEL_NAME17haac390bfac08ed45E, g_562610);
    v13.short(&v8, 115);
    v8.long(&v13, _ZN8uu_uname7options11KERNEL_NAME17haac390bfac08ed45E, g_562610);
    v13.alias(&v8, "sysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 7);
    uucore::mods::locale::get_message(&v16, "uname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 22);
    v8.help(&v13, &v16);
    v13.action(&v8);
    v8.arg(&v3, &v13);
    v3.new(_ZN8uu_uname7options8NODENAME17h8a669fd05c5c9b9bE, g_562620);
    v13.short(&v3, 110);
    v3.long(&v13, _ZN8uu_uname7options8NODENAME17h8a669fd05c5c9b9bE, g_562620);
    uucore::mods::locale::get_message(&v16, "uname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 19);
    v13.help(&v3, &v16);
    v16.action(&v13);
    v3.arg(&v8, &v16);
    v8.new(_ZN8uu_uname7options14KERNEL_RELEASE17h0e7ee0ccb19f7ba2E, g_562640);
    v13.short(&v8, 114);
    v8.long(&v13, _ZN8uu_uname7options14KERNEL_RELEASE17h0e7ee0ccb19f7ba2E, g_562640);
    v13.alias(&v8, "releaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 7);
    uucore::mods::locale::get_message(&v16, "uname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 25);
    v8.help(&v13, &v16);
    v13.action(&v8);
    v8.arg(&v3, &v13);
    v3.new(_ZN8uu_uname7options14KERNEL_VERSION17ha5452be4ea29402dE, g_562630);
    v13.short(&v3, 118);
    v3.long(&v13, _ZN8uu_uname7options14KERNEL_VERSION17ha5452be4ea29402dE, g_562630);
    uucore::mods::locale::get_message(&v16, "uname-help-kernel-versionuname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 25);
    v13.help(&v3, &v16);
    v16.action(&v13);
    v3.arg(&v8, &v16);
    v8.new(_ZN8uu_uname7options7MACHINE17h4111c3392cf6ece3E, g_562650);
    v13.short(&v8, 109);
    v8.long(&v13, _ZN8uu_uname7options7MACHINE17h4111c3392cf6ece3E, g_562650);
    uucore::mods::locale::get_message(&v16, "uname-help-machineuname-help-osuname-help-processoruname-help-hardware-platform", 18);
    v13.help(&v8, &v16);
    v16.action(&v13);
    v8.arg(&v3, &v16);
    v3.new(_ZN8uu_uname7options2OS17he1085588577ce02eE, g_562680);
    v13.short(&v3, 111);
    v3.long(&v13, _ZN8uu_uname7options2OS17he1085588577ce02eE, g_562680);
    uucore::mods::locale::get_message(&v16, "uname-help-osuname-help-processoruname-help-hardware-platform", 13);
    v13.help(&v3, &v16);
    v16.action(&v13);
    v3.arg(&v8, &v16);
    v8.new(_ZN8uu_uname7options9PROCESSOR17hb0f945e70ac119fbE, g_562660);
    v13.short(&v8, 112);
    v8.long(&v13, _ZN8uu_uname7options9PROCESSOR17hb0f945e70ac119fbE, g_562660);
    uucore::mods::locale::get_message(&v16, "uname-help-processoruname-help-hardware-platform", 20);
    v13.help(&v8, &v16);
    v8.action(&v13);
    memcpy(&v13, &v8, 632);
    v14 = v9 | 4;
    v15 = *((int *)&v10);
    v8.arg(&v3, &v13);
    v3.new(_ZN8uu_uname7options17HARDWARE_PLATFORM17h871618e7203d841dE, g_562670);
    v13.short(&v3, 105);
    v3.long(&v13, _ZN8uu_uname7options17HARDWARE_PLATFORM17h871618e7203d841dE, g_562670);
    uucore::mods::locale::get_message(&v16, "uname-help-hardware-platform", 28);
    v13.help(&v3, &v16);
    v3.action(&v13);
    memcpy(&v13, &v3, 632);
    v14 = v4 | 4;
    v15 = *((int *)&v5);
    a0.arg(&v8, &v13);
    ::0x491300::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
