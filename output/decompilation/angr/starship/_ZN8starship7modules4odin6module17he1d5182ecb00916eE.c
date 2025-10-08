void starship::modules::odin::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x200]
    int v1;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1f0]
    int v3;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1e0]
    int v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1d0]
    unsigned long long v7;  // [bp-0x1c0]
    char v8;  // [bp-0x1b8]
    int v9;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x1a0]
    int v11;  // [bp-0x198]
    unsigned long long v12;  // [bp-0x188]
    int v13;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x170]
    int v15;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x160]
    void* v17;  // [bp-0x158], Other Possible Types: char
    int v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x138]
    char *v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x120]
    char *v22;  // [bp-0x118]
    int v23;  // [bp-0x110]
    char *v24;  // [bp-0x100]
    unsigned long v25;  // [bp-0xf8]
    int v26;  // [bp-0xf0], Other Possible Types: char
    int v27;  // [bp-0xe0]
    int v28;  // [bp-0xd0]
    int v29;  // [bp-0xc0]
    int v30;  // [bp-0xb0]
    char v31;  // [bp-0xa0]
    unsigned long long v32;  // [bp-0x98]
    char v33;  // [bp-0x90]
    char v34;  // [bp-0x88]
    char v35;  // [bp-0x70]
    int v36;  // [bp-0x58]
    unsigned long long v37;  // [bp-0x48]
    unsigned long long v38;  // [bp-0x40]
    int v39;  // [bp-0x38]
    char v40;  // [bp-0x28]
    char v41;  // [bp-0x18]
    int v43;  // xmm0
    int v44;  // xmm0

    v26.new_module(a1, "odinfish ", 4);
    v33.try_load(v32);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v43 = *((int128_t *)&v34);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v35);
        v3 = v36;
        v5 = v43;
        if (!(char)v0.is_match())
            goto LABEL_bacc0e;
        v0.new(v37, v38);
        v22 = &v41;
        v23 = v39;
        v24 = &v40;
        v25 = a1;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v10 = v3;
            memcpy(&v9, &(char)v1, 16);
        }
        else
        {
            v19 = v7;
            v44 = *((int128_t *)&v0);
            v18 = v6;
            memcpy(&v17, &v3, 16);
            *((int128_t *)&v15) = (int128_t)(&v1)[8];
            v13 = v44;
            starship::modules::odin::module::{{closure}}(&v8, &v22, &(char)v13);
            if (*((int *)&v8) != 1)
            {
                v26.set_segments(&(char)v9);
                *((int128_t *)&a0[80]) = *((int128_t *)&v31);
                a0[64] = v30;
                a0[48] = v29;
                a0[32] = v28;
                a0[16] = v27;
                *(a0) = v26;
                core::ptr::drop_in_place<starship::configs::mojo::MojoConfig>(&v33);
                return;
            }
        }
        v12 = v10;
        v11 = v9;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v20 = &v11;
            v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v13 = &g_11f56d8;
            v14 = 1;
            v17 = 0;
            v15 = &v20;
            v16 = 1;
            v0 = "starship::modules::odinError in module `opa`:\nsrc/modules/opa.rs";
            v1 = 23;
            v2 = "starship::modules::odinError in module `opa`:\nsrc/modules/opa.rs";
            v3 = 23;
            v4 = log::__private_api::loc(&g_11f56e8);
            log::__private_api::log(&v13, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
    }
    else
    {
LABEL_bacc0e:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::mojo::MojoConfig>(&v33);
    core::ptr::drop_in_place<starship::module::Module>(&v26);
    return;
}
