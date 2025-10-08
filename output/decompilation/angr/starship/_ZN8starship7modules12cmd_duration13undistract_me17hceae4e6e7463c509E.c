long long starship::modules::cmd_duration::undistract_me(uint128_t a0[6], uint128_t a1[6], struct_0 *a2, unsigned long long a3, unsigned long a4)
{
    int v0;  // [bp-0x328]
    char *v1;  // [bp-0x328]
    unsigned long long v2;  // [bp-0x320]
    unsigned long long v3;  // [bp-0x318]
    int v4;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x308]
    unsigned long long v6;  // [bp-0x300]
    unsigned long long v7;  // [bp-0x2f8]
    unsigned long long v8;  // [bp-0x2f0]
    char v9;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2e0]
    char *v11;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2d0]
    void* v13;  // [bp-0x2c8]
    char *v14;  // [bp-0x2b8]
    unsigned long long v15;  // [bp-0x2b0]
    char v16;  // [bp-0x2a8]
    char v17;  // [bp-0x298]
    int v18;  // [bp-0x288]
    char v19;  // [bp-0x278]
    char v20;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x260]
    char *v22;  // [bp-0x258]
    unsigned long long v23;  // [bp-0x250]
    void* v24;  // [bp-0x248]
    int v25;  // [bp-0x240]
    char v26;  // [bp-0x230]
    unsigned long long v27;  // [bp-0x140]
    unsigned long long v28;  // [bp-0x138]
    void* v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    int v34;  // xmm3
    unsigned int v35;  // ebp
    unsigned int v36[46];  // rax

    if (a2->field_3a)
    {
        v30 = a2->field_30;
        if (!((char)_ccall(2, 16, a4, v30 >> 63 ^ (unsigned long long)(char)(a3 < v30), (unsigned long long)(char)(a3 < v30))))
        {
            v27 = &g_11f3d90;
            v28 = &g_11f3dc0;
            v20.find_map(&v27);
            core::ptr::drop_in_place<regex::error::Error>(&v20);
            if ((char)(((0 ^ v20) & (0 ^ -(v20))) >> 63))
            {
                a0[5] = a1[5];
                a0[4] = a1[4];
                v31 = a1[0];
                v32 = a1[1];
                v33 = a1[2];
                a0[3] = a1[3];
                *((void*)&a0[2]) = v33;
                *((void*)&a0[1]) = v32;
                *((void*)&a0[0]) = v31;
                return 0;
            }
            v27.ansi_strings(a1, a2, a3);
            *((int128_t *)&v4) = *((int128_t *)&v28);
            nu_ansi_term::util::unstyle(&v16, &(char)v4);
            v1 = &v16;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            v20 = &g_11f3d70;
            v21 = 1;
            v24 = 0;
            v22 = &v1;
            v23 = 1;
            v9.map_or_else(0, a2, &v20);
            core::ptr::drop_in_place<alloc::string::String>(&v16);
            core::ptr::drop_in_place<alloc::vec::Vec<nu_ansi_term::display::AnsiGenericString<str>>>(&v27);
            *((int128_t *)&v0) = *((int128_t *)&v9);
            v3 = v11;
            v35 = a2->field_4;
            v27.new();
            v36 = v27.summary("Command finishedstruct PhpConfig", 16).body(<alloc::string::String as core::fmt::Display>::fmt, v3).icon("utilities-terminalError in module `cobol`:\nsrc/modules/cobol.rs", 18);
            v36[44] = a2->field_0 * 2;
            v36[45] = v35;
            v20.show(&v27);
            if ((int)v20 == 3)
            {
                memcpy(&v19, &v26, 16);
                v18 = v25;
                memcpy(&v17, &v23, 16);
                memcpy(&v16, &v21, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
                {
                    v14 = &v16;
                    v15 = <notify_rust::error::Error as core::fmt::Display>::fmt;
                    v9 = &g_11f3d80;
                    v10 = 1;
                    v13 = 0;
                    v11 = &v14;
                    v12 = 1;
                    v4 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
                    v5 = 31;
                    v6 = "starship::modules::cmd_durationCommand execution Cannot show notification: DISPLAYWAYLAND_DISPLAYMIR_SOCKET";
                    v7 = 31;
                    v8 = log::__private_api::loc(&g_11f3dc0);
                    log::__private_api::log(&v9, 5, &v4);
                }
                core::ptr::drop_in_place<notify_rust::error::Error>(&v16);
                if ((int)v20 == 3)
                    goto LABEL_b88399;
            }
            core::ptr::drop_in_place<core::result::Result<notify_rust::xdg::NotificationHandle,notify_rust::error::Error>>(&v20);
LABEL_b88399:
            core::ptr::drop_in_place<notify_rust::notification::Notification>(&v27);
            v30 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v1);
        }
    }
    a0[5] = a1[5];
    a0[4] = a1[4];
    v31 = a1[0];
    v32 = a1[1];
    v33 = a1[2];
    v34 = a1[3];
    *((void*)&a0[3]) = v34;
    *((void*)&a0[2]) = v33;
    *((void*)&a0[1]) = v32;
    *((void*)&a0[0]) = v31;
    return v30;
}
