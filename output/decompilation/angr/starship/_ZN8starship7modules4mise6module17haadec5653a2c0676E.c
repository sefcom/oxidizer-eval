void starship::modules::mise::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x248]
    int v1;  // [bp-0x240], Other Possible Types: char
    unsigned long long v2;  // [bp-0x230]
    int v3;  // [bp-0x228]
    unsigned long long v4;  // [bp-0x218]
    unsigned long long v5;  // [bp-0x210]
    int v6;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x200]
    int v8;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x1f0]
    int v10;  // [bp-0x1e8]
    char *v11;  // [bp-0x1d8]
    unsigned long long v12;  // [bp-0x1d0]
    char v13;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1c0]
    char *v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b0]
    void* v17;  // [bp-0x1a8]
    int v18;  // [bp-0x190], Other Possible Types: char
    int v19;  // [bp-0x180]
    int v20;  // [bp-0x170]
    int v21;  // [bp-0x160]
    int v22;  // [bp-0x150]
    char v23;  // [bp-0x140]
    unsigned long long v24;  // [bp-0x138]
    char *v25;  // [bp-0x130]
    char *v26;  // [bp-0x128]
    int v27;  // [bp-0x120]
    int v28;  // [bp-0x110]
    unsigned long v29;  // [bp-0x100]
    char v30;  // [bp-0xf8]
    char v31;  // [bp-0xf0]
    char v32;  // [bp-0xd8]
    int v33;  // [bp-0xc0]
    unsigned long long v34;  // [bp-0xb0]
    unsigned long long v35;  // [bp-0xa8]
    char v36;  // [bp-0xa0]
    char v37;  // [bp-0x90]
    int v38;  // [bp-0x80]
    int v39;  // [bp-0x70]
    char v40;  // [bp-0x60]
    char v41;  // [bp-0x58], Other Possible Types: unsigned long long
    char v42;  // [bp-0x50]
    char v43;  // [bp-0x40]
    int v45;  // xmm0

    v18.new_module(a1, "miseDate", 4);
    v30.try_load(v24);
    if (!v40)
    {
        v13.try_begin_scan(a1);
        if (v13)
        {
            v45 = *((int128_t *)&v31);
            v5 = v13;
            *((int128_t *)&v6) = *((int128_t *)&v32);
            v8 = v33;
            v10 = v45;
            if ((char)v5.is_match())
            {
                v41.new(v34, v35);
                v25 = &v36;
                v26 = &v37;
                v27 = v38;
                v28 = v39;
                v29 = a1;
                if ((char)(((0 ^ v41) & (0 ^ -(v41))) >> 63))
                {
                    v2 = *((long long *)&v43);
                    memcpy(&v1, &v42, 16);
                }
                else
                {
                    starship::modules::mise::module::{{closure}}(&v0, &v25, &v41);
                    if (*((int *)&v0) != 1)
                    {
                        v18.set_segments(&v1);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v23);
                        a0[64] = v22;
                        a0[48] = v21;
                        a0[32] = v20;
                        a0[16] = v19;
                        *(a0) = v18;
                        core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v30);
                        return;
                    }
                }
                v4 = v2;
                v3 = v1;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v11 = &v3;
                    v12 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v13 = &g_525500;
                    v14 = 1;
                    v17 = 0;
                    v15 = &v11;
                    v16 = 1;
                    v5 = "starship::modules::misehealthdoctorError in module `mojo`:\nsrc/modules/mojo.rs";
                    v6 = 23;
                    v7 = "starship::modules::misehealthdoctorError in module `mojo`:\nsrc/modules/mojo.rs";
                    v8 = 23;
                    v9 = log::__private_api::loc(&g_11f5430);
                    log::__private_api::log(&v13, 2, &v5);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v3);
                core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v30);
                core::ptr::drop_in_place<starship::module::Module>(&v18);
                return;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::configs::go::GoConfig>(&v30);
    core::ptr::drop_in_place<starship::module::Module>(&v18);
    return;
}
