long long uu_stty::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    char v4;  // [bp-0x568]
    unsigned long long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v4.new(uucore::util_name(), v10);
    v0.version(&v4);
    uucore::format_usage(&v3, "{} [-F DEVICE | --file=DEVICE] [SETTING]...\n{} [-F DEVICE | --file=DEVICE] [-a|--all]\n{} [-F DEVICE | --file=DEVICE] [-g|--save]Print or change terminal characteristics.print all current settings in human-readable formprint all current settings in a stty-r", 128);
    v4.override_usage(&v0, &v3);
    v0.about(&v4);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | v1;
    v6 = v2;
    v0.new("allthe options for verbose and stty-readable output styles are mutually exclusivewhen specifying an output style, modes may not be setinvalid argument ''", 3);
    v3.short(&v0, 97);
    v0.long(&v3, "allthe options for verbose and stty-readable output styles are mutually exclusivewhen specifying an output style, modes may not be setinvalid argument ''", 3);
    v3.help(&v0, "print all current settings in human-readable formprint all current settings in a stty-readable formDEVICEopen and use the specified DEVICE instead of stdinsettings to change", 49);
    v7.action(&v3, 2);
    v0.arg(&v4, &v7);
    v4.new("save", 4);
    v3.short(&v4, 103);
    v4.long(&v3, "save", 4);
    v3.help(&v4, "print all current settings in a stty-readable formDEVICEopen and use the specified DEVICE instead of stdinsettings to change", 50);
    v7.action(&v3, 2);
    v4.arg(&v0, &v7);
    v0.new("filequitechoi128 as dyn isigERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v3.short(&v0, 70);
    v0.long(&v3, "filequitechoi128 as dyn isigERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v3.value_hint(&v0);
    v0.value_name(&v3);
    v3.help(&v0, "open and use the specified DEVICE instead of stdinsettings to change", 50);
    v0.arg(&v4, &v3);
    v4.new("settings", 8);
    v3.action(&v4, 1);
    v4.help(&v3, "settings to change", 18);
    a0.arg(&v0, &v4);
    return a0;
}
