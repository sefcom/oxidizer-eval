void starship::modules::vcsh::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x1d8], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x1d0]
    void* v2;  // [sp-0x1c8], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1b8]
    int v4;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v5;  // [bp-0x1a0]
    int v6;  // [bp-0x198]
    unsigned long long v7;  // [bp-0x188]
    char v8;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x178], Other Possible Types: unsigned long long
    char v10;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x168]
    char v12;  // [bp-0x160], Other Possible Types: unsigned long long
    int v13;  // [bp-0x150]
    unsigned long long v14;  // [bp-0x140]
    char *v15;  // [bp-0x138]
    unsigned long long v16;  // [bp-0x130]
    int v17;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x120]
    int v19;  // [bp-0x118], Other Possible Types: char *
    unsigned long long v20;  // [bp-0x110]
    void* v21;  // [bp-0x108], Other Possible Types: char
    int v22;  // [bp-0xf8]
    unsigned long long v23;  // [bp-0xe8]
    char v24;  // [bp-0xd8]
    int v25;  // [bp-0xd8]
    int v26;  // [bp-0xc8], Other Possible Types: char
    int v27;  // [bp-0xb8]
    int v28;  // [bp-0xa8]
    int v29;  // [bp-0x98]
    char v30;  // [bp-0x88]
    unsigned long long v31;  // [bp-0x80]
    char v32;  // [bp-0x78]
    char *v33;  // [bp-0x68]
    char *v34;  // [bp-0x60]
    unsigned long v35;  // [bp-0x58]
    char v36;  // [bp-0x50]
    char v37;  // [bp-0x40]
    unsigned long long v38;  // [bp-0x30]
    char v39;  // [bp-0x28]
    unsigned long v41;  // rdx
    unsigned long v42;  // rdx
    int v44;  // xmm0

    v24.get_env("VCSH_REPO_NAMEError in module `vcsh`:\nsrc/modules/vcsh.rs", 14);
    if ((char)(((0 ^ *((long long *)&v24)) & (0 ^ -(*((long long *)&v24)))) >> 63))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        core::str::<impl str>::trim_matches(1, 0);
        if (!v41)
            goto LABEL_bc159a;
LABEL_bc14c4:
        v24.new_module(a1, "vcsh", 4);
        v36.try_load(v31);
        v8.new(v38, *((long long *)&v39));
        memcpy(&v32, &v36, 16);
        v33 = &v37;
        v34 = &v0;
        v35 = a1;
        if (v8 == 0x8000000000000000)
        {
            v5 = v11;
            memcpy(&v4, &v9, 16);
LABEL_bc160e:
            v7 = v5;
            v6 = v4;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v15 = &v6;
                v16 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v17 = &g_11f64c0;
                v18 = 1;
                v21 = 0;
                v19 = &v15;
                v20 = 1;
                v8 = "starship::modules::vcshError in module `vlang`:\nsrc/modules/vlang.rs";
                v9 = 23;
                v10 = "starship::modules::vcshError in module `vlang`:\nsrc/modules/vlang.rs";
                v11 = 23;
                v12 = log::__private_api::loc(&g_11f64d0);
                log::__private_api::log(&v17, 2, &v8);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v6);
            core::ptr::drop_in_place<starship::module::Module>(&v24);
        }
        else
        {
            v23 = v14;
            v44 = *((int128_t *)&v8);
            v22 = v13;
            memcpy(&v21, &v12, 16);
            *((int128_t *)&v19) = *((int128_t *)&v10);
            v17 = v44;
            starship::modules::vcsh::module::{{closure}}(&v3, &v32, &(char)v17);
            if (*((int *)&v3) == 1)
                goto LABEL_bc160e;
            v24.set_segments(&v4);
            *((int128_t *)&a0[80]) = *((int128_t *)&v30);
            a0[64] = v29;
            a0[48] = v28;
            a0[32] = v27;
            a0[16] = v26;
            *(a0) = v25;
        }
    }
    else
    {
        v0 = v25;
        v2 = *((long long *)&v26);
        core::str::<impl str>::trim_matches(v1, *((long long *)&v26));
        if (v42)
            goto LABEL_bc14c4;
LABEL_bc159a:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
