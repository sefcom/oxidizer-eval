long long starship::utils::create_command(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1a0]
    unsigned long long v1;  // [bp-0x198]
    unsigned long long v2;  // [bp-0x190]
    unsigned long long v3;  // [bp-0x188]
    unsigned long long v4;  // [bp-0x180]
    unsigned long long v5;  // [bp-0x178]
    unsigned long long v6;  // [bp-0x178]
    char *v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    char *v9;  // [bp-0x158]
    unsigned long long v10;  // [bp-0x150]
    char v11;  // [bp-0x148]
    char v12;  // [bp-0x148]
    unsigned long long v13;  // [bp-0x138]
    char v14;  // [bp-0x130], Other Possible Types: unsigned long long
    char v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    char v17;  // [bp-0x118]
    unsigned long long v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    char *v21;  // [bp-0xf0]
    unsigned long long v22;  // [bp-0xe8]
    void* v23;  // [bp-0xe0]
    unsigned long long v25;  // r15
    unsigned long v26;  // rbp
    unsigned long long v27;  // rax

    v5 = a1.as_ref(a2);
    v6 = v5;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
    {
        v7 = &v5;
        v8 = <&T as core::fmt::Debug>::fmt;
        v19 = &g_11f72f8;
        v20 = 1;
        v23 = 0;
        v21 = &v7;
        v22 = 1;
        v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v1 = 15;
        v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
        v3 = 15;
        v4 = log::__private_api::loc(&g_11f7348);
        log::__private_api::log(&v19, 5, &v0);
        v6 = v5;
    }
    which::which(&v14, v6, v25);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
    {
        v26 = v15;
        v11 = v26;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
        {
            v7 = &v5;
            v8 = <&T as core::fmt::Debug>::fmt;
            v9 = &v11;
            v10 = <which::error::Error as core::fmt::Debug>::fmt;
            v19 = &g_11f7328;
            v20 = 2;
            v23 = 0;
            v21 = &v7;
            v22 = 2;
            v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v1 = 15;
            v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v3 = 15;
            v4 = log::__private_api::loc(&g_11f7378);
            log::__private_api::log(&v19, 5, &v0);
            v26 = v12;
        }
        v27 = 0.new(v26 & 4294967295);
        a0[1] = v27;
        a0[0] = 0x8000000000000000;
        return v27;
    }
    else
    {
        v13 = v16;
        memcpy(&v11, &v14, 16);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            v7 = &v12;
            v8 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v9 = &v5;
            v10 = <&T as core::fmt::Debug>::fmt;
            v19 = &g_11f7308;
            v20 = 2;
            v23 = 0;
            v21 = &v7;
            v22 = 2;
            v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v1 = 15;
            v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v3 = 15;
            v4 = log::__private_api::loc(&g_11f7360);
            log::__private_api::log(&v19, 5, &v0);
        }
        v18 = v13;
        memcpy(&v17, &v12, 16);
        v19.new(&v17);
        v19.stderr(2);
        v19.stdout(2);
        v19.stdin(1);
        return memcpy(a0, &v19, 224);
    }
}
