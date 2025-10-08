long long starship::modules::time::create_offset_time_string(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0xa4]
    char *v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned int v4;  // [bp-0x88]
    unsigned int v5;  // [bp-0x84]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    char *v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    void* v15;  // [bp-0x38]
    unsigned long long v17;  // rax
    unsigned long long v18;  // xmm0lq
    unsigned long v19;  // xmm0lq
    unsigned int v20;  // ecx
    unsigned long long v21;  // cc_ndep
    unsigned int v22;  // r13d

    v17 = a2.from_str(a3);
    if (!((char)v17 & 1))
    {
        v18 = v17 >> 32;
        if (((CmpF(0x41c00000, 9223372034707292159 & v18) & 69 | (CmpF(0x41c00000, 9223372034707292159 & v18) & 69) >> 6) & 1) == 1)
            goto LABEL_bbfd8c;
        v19 = MulV(v18, 0x45610000);
        if (((CmpF(v19, 1325400063) & 69 | (char)((CmpF(v19, 1325400063) & 69) >> 6)) & 1) == 1)
            v20 = v19;
        else
            v20 = 2147483647;
        if (!((char)_ccall(11, 0, (unsigned long long)(CmpF(v19, v19) & 69), 0, v21)))
            v20 = 0;
        if (v20 + 86399 < 172799)
        {
            v0 = v20;
            v22 = v20;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
            {
                v1 = &v0;
                v2 = <chrono::offset::fixed::FixedOffset as core::fmt::Display>::fmt;
                v11 = &g_11f6388;
                v12 = 1;
                v15 = 0;
                v13 = &v1;
                v14 = 1;
                v6 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
                v7 = 23;
                v8 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
                v9 = 23;
                v10 = log::__private_api::loc(&g_11f63a8);
                log::__private_api::log(&v11, 5, &v6);
                v22 = v0;
            }
            v4 = a1->field_8;
            v3 = a1->field_0;
            v5 = v22;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                v1 = &v3;
                v2 = <chrono::datetime::DateTime<Tz> as core::fmt::Display>::fmt;
                v11 = &g_11f6398;
                v12 = 1;
                v15 = 0;
                v13 = &v1;
                v14 = 1;
                v6 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
                v7 = 23;
                v8 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
                v9 = 23;
                v10 = log::__private_api::loc(&g_11f63c0);
                log::__private_api::log(&v11, 5, &v6);
            }
            memcpy(&v11, &v3, 16);
            return (unsigned long long)starship::modules::time::format_time(a0, a4, a5, &v11);
        }
        a0[1] = "Invalid offsetError in module `username`:\nsrc/modules/username.rs";
        a0[2] = 14;
    }
    else
    {
LABEL_bbfd8c:
        a0[1] = "Invalid timezone offset.Invalid offsetError in module `username`:\nsrc/modules/username.rs";
        a0[2] = 24;
    }
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
