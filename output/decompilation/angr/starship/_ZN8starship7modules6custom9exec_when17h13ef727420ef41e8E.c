long long starship::modules::custom::exec_when(unsigned long long a0, unsigned long long a1, void* a2, void* a3)
{
    char *v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    char *v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    void* v4;  // [bp-0x110]
    char *v5;  // [bp-0x100]
    unsigned long long v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0], Other Possible Types: unsigned long
    unsigned long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    int v14;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xb0]
    int v16;  // [bp-0xa8], Other Possible Types: char *, unsigned long long
    int v17;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v18;  // [bp-0x98]
    void* v19;  // [bp-0x98]
    char v20;  // [bp-0x88]
    unsigned int v21;  // [bp-0x84]
    char v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    unsigned long long v26;  // [bp-0x50]
    unsigned long long v27;  // [bp-0x48]
    unsigned long long v28;  // [bp-0x40]
    char v29;  // [bp-0x30]
    unsigned long long v31;  // 4096
    int v33;  // xmm0
    int v34;  // xmm1
    char v35;  // bl
    unsigned long v36;  // r14
    unsigned long long v37;  // rax

    v23 = a0;
    v31 = a0;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v0 = &v23;
        v1 = <&T as core::fmt::Display>::fmt;
        v14 = &g_11f4008;
        v15 = 2;
        v19 = 0;
        v16 = &v0;
        v17 = 1;
        v24 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v25 = 25;
        v26 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v27 = 25;
        v28 = log::__private_api::loc(&g_11f4078);
        log::__private_api::log(&v14, 5, &v24);
        v31 = v23;
    }
    starship::modules::custom::shell_command(&v24, v31, a1, a2, a3);
    if ((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63))
    {
        v24.drop_in_place<core::option::Option<process_control::Output>>();
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) <= 3)
            return 0;
        v14 = &g_11f4068;
        v15 = 1;
        v16 = 8;
        *((uint128_t *)&v17) = 0;
        v24 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v25 = 25;
        v26 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v27 = 25;
        v28 = log::__private_api::loc(&g_11f40d8);
        log::__private_api::log(&v14, 4, &v24);
        return 0;
    }
    else
    {
        v33 = *((int128_t *)&v24);
        v34 = *((int128_t *)&v26);
        memcpy(&v20, &v29, 16);
        *((int128_t *)&v18) = *((int128_t *)&v28);
        v16 = v34;
        v14 = v33;
        v35 = v22;
        v36 = v21;
        if ((unsigned int)v36 || v35 != 2)
        {
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                if (v35 != 2)
                {
                    v37 = 0;
                }
                else
                {
                    v8 = v36;
                    v37 = 1;
                }
                v7 = v37;
                v5 = &v7;
                v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                v0 = &g_11f4028;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v9 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v10 = 25;
                v11 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v12 = 25;
                v13 = log::__private_api::loc(&g_11f4090);
                log::__private_api::log(&v0, 5, &v9);
            }
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                core::str::converts::from_utf8(&v0, v15, v16);
                *((int *)&v7) = (!(char)v0 ? v1 : "<invalid utf8>Cannot start commandNon-zero exit code '");
                *((int *)&v8) = (!(char)v0 ? v2 : 14);
                v5 = &v7;
                v6 = <&T as core::fmt::Display>::fmt;
                v0 = &g_11f4048;
                v1 = 1;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v9 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v10 = 25;
                v11 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v12 = 25;
                v13 = log::__private_api::loc(&g_11f40a8);
                log::__private_api::log(&v0, 5, &v9);
            }
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
            {
                core::str::converts::from_utf8(&v0, v19, (long long)(&v18)[8]);
                *((int *)&v7) = (!(char)v0 ? v1 : "<invalid utf8>Cannot start commandNon-zero exit code '");
                *((int *)&v8) = (!(char)v0 ? v2 : 14);
                v5 = &v7;
                v6 = <&T as core::fmt::Display>::fmt;
                v0 = &g_11f4058;
                v1 = 1;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                v9 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v10 = 25;
                v11 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                v12 = 25;
                v13 = log::__private_api::loc(&g_11f40c0);
                log::__private_api::log(&v0, 5, &v9);
            }
        }
        core::ptr::drop_in_place<process_control::Output>(&v24);
        return !(unsigned int)v36 & v35 == 2;
    }
}
