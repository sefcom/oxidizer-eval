long long starship::modules::cmd_duration::module(unsigned long long *a0, unsigned long a1)
{
    char v0;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1e0]
    char *v2;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1d0]
    void* v4;  // [bp-0x1c8]
    char *v5;  // [bp-0x1b0], Other Possible Types: char
    char v6;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x198]
    unsigned long long v8;  // [bp-0x190]
    unsigned long long v9;  // [bp-0x188]
    unsigned long long v10;  // [bp-0x180]
    unsigned long long v11;  // [bp-0x178]
    unsigned long long v12;  // [bp-0x170]
    char v13;  // [bp-0x168]
    unsigned long long v14;  // [bp-0x158]
    unsigned long long v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    char *v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x130]
    char *v19;  // [bp-0x128]
    char *v20;  // [bp-0x120]
    char *v21;  // [bp-0x118]
    unsigned long v22;  // [bp-0x110]
    char v23;  // [bp-0x108]
    unsigned long long v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    char v26;  // [bp-0xf0]
    char v27;  // [bp-0xe0]
    char v28;  // [bp-0xd0]
    char v29;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v30;  // [bp-0xc0]
    char v31;  // [bp-0xb0]
    char v32;  // [bp-0x80]
    char v33;  // [bp-0x28]

    v32.new_module(a1, "cmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 12);
    v23.try_load(*((long long *)&v33));
    if (!((char)(*((long long *)&v27) - 0 >> 63)))
    {
        v0.get_cmd_duration(a1);
        if ((v0 & 1))
        {
            v15 = v2;
            v16 = v3;
            if (!((char)_ccall(2, 16, v16, *((long long *)&v27) >> 63 ^ (unsigned long long)(char)(v15 < *((long long *)&v27)), (unsigned long long)(char)(v15 < *((long long *)&v27)))))
            {
                v29.new(v24, v25);
                v19 = &v26;
                v20 = &v28;
                v21 = &v15;
                v22 = a1;
                if ((char)(((0 ^ v29) & (0 ^ -(v29))) >> 63))
                {
                    v7 = *((long long *)&v31);
                    memcpy(&v6, &v30, 16);
                }
                else
                {
                    starship::modules::cmd_duration::module::{{closure}}(&v5, &v19, &v29);
                    if (!(v5 & 1))
                    {
                        v32.set_segments(&v6);
                        return starship::modules::cmd_duration::undistract_me(a0, &v32, &v23, v15, v16);
                    }
                }
                v14 = v7;
                memcpy(&v13, &v6, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v17 = &v13;
                    v18 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v0 = &g_11f3d30;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v17;
                    v3 = 1;
                    v8 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
                    v9 = 31;
                    v10 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
                    v11 = 31;
                    v12 = log::__private_api::loc(&g_11f3d40);
                    log::__private_api::log(&v0, 2, &v8);
                }
                *(a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v13);
                return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v32);
            }
        }
    }
    else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v5 = &v27;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v0 = &g_11f3d10;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        v8 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
        v9 = 31;
        v10 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
        v11 = 31;
        v12 = log::__private_api::loc(&g_11f3d58);
        log::__private_api::log(&v0, 2, &v8);
    }
    *(a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v32);
}
