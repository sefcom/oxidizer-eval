void starship::modules::custom::exec_command(void* a0, unsigned long long a1, unsigned long long a2, void* a3, void* a4)
{
    char *v0;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x138]
    char *v2;  // [bp-0x130]
    unsigned long long v3;  // [bp-0x128]
    void* v4;  // [bp-0x120]
    char *v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xf0]
    unsigned long long v10;  // [bp-0xe8]
    unsigned long v11;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    int v15;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xb0]
    int v17;  // [bp-0xa8], Other Possible Types: char *
    unsigned long long v18;  // [bp-0xa0]
    int v19;  // [bp-0x98]
    void* v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    unsigned int v22;  // [bp-0x84]
    char v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x70]
    unsigned long long v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v28;  // [bp-0x50]
    char v29;  // [bp-0x40]
    unsigned long long v31;  // 4096
    int v33;  // xmm0
    int v34;  // xmm1
    unsigned long long v35;  // rax

    v14 = a1;
    v31 = a1;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v0 = &v14;
        v1 = <&T as core::fmt::Display>::fmt;
        v15 = &g_11f4008;
        v16 = 2;
        v20 = 0;
        v17 = &v0;
        v18 = 1;
        v24 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v25 = 25;
        v26 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
        v27 = 25;
        v28 = log::__private_api::loc(&g_11f4110);
        log::__private_api::log(&v15, 5, &v24);
        v31 = v14;
    }
    starship::modules::custom::shell_command(&v24, v31, a2, a4, a3);
    if ((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63))
    {
        v24.drop_in_place<core::option::Option<process_control::Output>>();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return;
    }
    v33 = *((int128_t *)&v24);
    v34 = *((int128_t *)&v26);
    memcpy(&v21, &v29, 16);
    *((int128_t *)&v19) = *((int128_t *)&v28);
    v17 = v34;
    v15 = v33;
    if (v22 || v23 != 2)
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            if (v23 != 2)
            {
                v35 = 0;
            }
            else
            {
                v8 = v22;
                v35 = 1;
            }
            v7 = v35;
            v5 = &v7;
            v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
            v0 = &g_11f40f0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v9 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
            v10 = 25;
            v11 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
            v12 = 25;
            v13 = log::__private_api::loc(&g_11f4128);
            log::__private_api::log(&v0, 5, &v9);
        }
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            core::str::converts::from_utf8(&v0, v16, v17);
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
            v13 = log::__private_api::loc(&g_11f4140);
            log::__private_api::log(&v0, 5, &v9);
        }
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            core::str::converts::from_utf8(&v0, v20, (long long)(&v19)[8]);
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
            v13 = log::__private_api::loc(&g_11f4158);
            log::__private_api::log(&v0, 5, &v9);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v0.from_utf8_lossy(v16, v17);
        (char)v9.from(&v0);
        *((unsigned long *)&a0[16]) = v11;
        *((int128_t *)a0) = *((int128_t *)&v9);
    }
    core::ptr::drop_in_place<process_control::Output>(&v24);
    return;
}
