long long starship::modules::pijul_channel::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x218]
    unsigned long long v1;  // [bp-0x210]
    unsigned long long v2;  // [bp-0x208]
    int v3;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1f0]
    int v5;  // [bp-0x1e8], Other Possible Types: char *, unsigned long long
    unsigned long long v6;  // [bp-0x1e0]
    void* v7;  // [bp-0x1d8], Other Possible Types: char
    int v8;  // [bp-0x1c8]
    unsigned long long v9;  // [bp-0x1b8]
    char v10;  // [bp-0x1a8]
    int v11;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v12;  // [bp-0x190]
    int v13;  // [bp-0x188]
    unsigned long long v14;  // [bp-0x178]
    char v15;  // [bp-0x170], Other Possible Types: unsigned long, unsigned long long
    char v16;  // [bp-0x168], Other Possible Types: unsigned long long
    char v17;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x158]
    char v19;  // [bp-0x150], Other Possible Types: unsigned long long
    int v20;  // [bp-0x140]
    unsigned long long v21;  // [bp-0x130]
    int v22;  // [bp-0x128]
    unsigned long long v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    int v26;  // [bp-0x100]
    unsigned long long v27;  // [bp-0xf8]
    unsigned long long v28;  // [bp-0xf0]
    unsigned long long v29;  // [bp-0xe8]
    char v30;  // [bp-0xe0]
    char *v31;  // [bp-0xd0]
    unsigned long long v32;  // [bp-0xc8]
    int v33;  // [bp-0xc0], Other Possible Types: char
    int v34;  // [bp-0xb0], Other Possible Types: char
    char v35;  // [bp-0xa0]
    char v36;  // [bp-0x98]
    int v37;  // [bp-0x90]
    int v38;  // [bp-0x80]
    char v39;  // [bp-0x70]
    unsigned long long v40;  // [bp-0x68]
    char v41;  // [bp-0x60]
    char v42;  // [bp-0x48]
    char *v43;  // [bp-0x38]
    char *v44;  // [bp-0x30]
    unsigned long v45;  // [bp-0x28]
    int v47;  // xmm0
    int v48;  // xmm2

    v33.try_begin_scan(a1);
    if (*((long long *)&v33))
    {
        v23 = *((long long *)&v34);
        v22 = v33;
        *((int128_t *)&v26) = *((int128_t *)&v36);
        v24 = &g_11f5b00;
        v25 = 1;
        if ((char)v22.is_match())
        {
            v33.new_module(a1, "pijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_br", 13);
            v22.try_load(v40);
            if (v30)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                starship::modules::pijul_channel::get_pijul_current_channel(&(char)v3, a1);
                if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                }
                else
                {
                    v2 = v5;
                    *((int128_t *)&v0) = *((int128_t *)&v3);
                    starship::modules::utils::truncate::truncate_text(&v41, v1, v5, v29, v27, v28);
                    v15.new(1, (long long)v26);
                    memcpy(&v42, &v22, 16);
                    v43 = &v23;
                    v44 = &v41;
                    v45 = a1;
                    if (v15 == 0x8000000000000000)
                    {
                        v12 = v18;
                        memcpy(&v11, &v16, 16);
                    }
                    else
                    {
                        v9 = v21;
                        v47 = *((int128_t *)&v15);
                        v8 = v20;
                        memcpy(&v7, &v19, 16);
                        *((int128_t *)&v5) = *((int128_t *)&v17);
                        v3 = v47;
                        starship::modules::pijul_channel::module::{{closure}}(&v10, &v42, &(char)v3);
                        if (*((int *)&v10) != 1)
                        {
                            v33.set_segments(&v11);
                            *((int128_t *)&a0[80]) = *((int128_t *)&v39);
                            a0[64] = v38;
                            v48 = *((int128_t *)&v35);
                            a0[48] = v37;
                            a0[32] = v48;
                            a0[16] = v34;
                            *(a0) = v33;
                            core::ptr::drop_in_place<alloc::string::String>(&v41);
                            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                        }
                    }
                    v14 = v12;
                    v13 = v11;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v31 = &v13;
                        v32 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v3 = &g_11f5af0;
                        v4 = 1;
                        v7 = 0;
                        v5 = &v31;
                        v6 = 1;
                        v15 = "starship::modules::pijul_channelassertion failed: idx < CAPACITYUnable to open session log file ";
                        v16 = 32;
                        v17 = "starship::modules::pijul_channelassertion failed: idx < CAPACITYUnable to open session log file ";
                        v18 = 32;
                        v19 = log::__private_api::loc(&g_11f5b10);
                        log::__private_api::log(&v3, 2, &v15);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v13);
                    core::ptr::drop_in_place<alloc::string::String>(&v41);
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                }
            }
            return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v33);
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
