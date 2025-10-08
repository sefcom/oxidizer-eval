long long starship::modules::battery::get_battery_status(unsigned long long a0, struct_1 *a1)
{
    unsigned int v0;  // [bp-0x7c]
    char v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x74]
    unsigned long v3;  // [bp-0x70]
    unsigned int v4;  // [bp-0x6c]
    char v5;  // [bp-0x68], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    void* v8;  // [bp-0x50]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    unsigned long long v15;  // [bp-0x10]
    unsigned long v17;  // rax
    unsigned long v18;  // cc_ndep
    int v19;  // xmm1
    int v20;  // xmm0

    a1->field_18(&(char)v3, a0);
    v17 = v5;
    if ((char)v17 != 5 && (((char)((CmpF(v4, 0) & 69) >> 6) & 1) != 1 || (char)_ccall(10, 0, (unsigned long long)(CmpF(v4, 0) & 69), 0, v18)))
    {
        v2 = (unsigned int)(MulV(DivV(v19, v20), 0x42c80000));
        v0 = (unsigned int)(MulV(DivV(v19, v20), 0x42c80000));
        v1 = v17;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v9 = &v0;
            v10 = <starship::modules::battery::BatteryStatus as core::fmt::Debug>::fmt;
            v3 = &g_11f65b0;
            v5 = 1;
            v8 = 0;
            v6 = &v9;
            v7 = 1;
            v11 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
            v12 = 26;
            v13 = "starship::modules::batterypercentageBattery found: Unable to access battery information:\nError in module `typst`:\nsrc/modules/typst.rs";
            v14 = 26;
            v15 = log::__private_api::loc(&g_11f65c0);
            log::__private_api::log(&(char)v3, 4, &v11);
            return v1;
        }
        return (unsigned int)v17 & 255;
    }
    return 5;
}
