void starship::modules::pixi::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x278]
    int v2;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x268]
    int v4;  // [bp-0x260], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x258]
    int v6;  // [bp-0x250]
    int v7;  // [bp-0x248]
    unsigned long long v8;  // [bp-0x238]
    char v9;  // [bp-0x230], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x228]
    unsigned long long v11;  // [bp-0x220]
    unsigned long long v12;  // [bp-0x218]
    int v13;  // [bp-0x218]
    unsigned long long v14;  // [bp-0x208]
    int v15;  // [bp-0x1f8], Other Possible Types: char, unsigned long long
    unsigned long long v16;  // [bp-0x1f8]
    unsigned long long v17;  // [bp-0x1f0]
    int v18;  // [bp-0x1e8], Other Possible Types: char *, unsigned long long
    unsigned long long v19;  // [bp-0x1e0]
    void* v20;  // [bp-0x1d8], Other Possible Types: char
    int v21;  // [bp-0x1c8]
    unsigned long long v22;  // [bp-0x1b8]
    char v23;  // [bp-0x1a8]
    int v24;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v25;  // [bp-0x190]
    int v26;  // [bp-0x188]
    unsigned long long v27;  // [bp-0x178]
    char *v28;  // [bp-0x168]
    unsigned long long v29;  // [bp-0x160]
    char *v30;  // [bp-0x158]
    char *v31;  // [bp-0x150]
    unsigned long v32;  // [bp-0x148]
    char *v33;  // [bp-0x140]
    int v34;  // [bp-0x138], Other Possible Types: char
    int v35;  // [bp-0x128]
    int v36;  // [bp-0x118]
    int v37;  // [bp-0x108]
    int v38;  // [bp-0xf8]
    char v39;  // [bp-0xe8]
    unsigned long long v40;  // [bp-0xe0]
    char v41;  // [bp-0xd8]
    char v42;  // [bp-0xb8]
    char v43;  // [bp-0xa0]
    int v44;  // [bp-0x88]
    unsigned long long v45;  // [bp-0x78]
    char v46;  // [bp-0x70]
    char v47;  // [bp-0x38]
    int v49;  // xmm0
    char v50;  // bpl
    int v51;  // xmm0

    v34.new_module(a1, "pixi    yearblue", 4);
    v41.try_load(v40);
    v9.get_env("PIXI_ENVIRONMENT_NAMEError in module `pixi`:\nsrc/modules/pixi.rs", 21);
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
    {
        v15.try_begin_scan(a1);
        if (v16)
        {
            v49 = *((int128_t *)&v42);
            v1 = v16;
            *((int128_t *)&v2) = *((int128_t *)&v43);
            v4 = v44;
            v6 = v49;
            if ((char)v1.is_match())
                goto LABEL_bb2d93;
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
LABEL_bb2d93:
        if (!v47)
        {
            v16.to_vec("defaultdriverrecursivemergeshowUntrackedFilesrenamesstatusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 7);
            v3 = v18;
            *((int128_t *)&v0) = *((int128_t *)&v16);
            if (v9 == 0x8000000000000000)
            {
                if (v1 != 0x8000000000000000)
                    goto LABEL_bb2e1f;
LABEL_bb2e0d:
                core::ptr::drop_in_place<regex::error::Error>(&v1);
                v12 = 0x8000000000000000;
                v50 = 1;
                goto LABEL_bb2e3d;
            }
            else
            {
                if (v1 != 0x8000000000000000 && (char)v10.eq(v11, v2, v3))
                    goto LABEL_bb2e0d;
LABEL_bb2e1f:
                core::ptr::drop_in_place<regex::error::Error>(&v1);
            }
        }
        v14 = v11;
        memcpy(&v12, &v9, 16);
LABEL_bb2e3d:
        v1.new(v45, *((long long *)&v46));
        v30 = &v41;
        v31 = &v13;
        v32 = a1;
        v33 = &v34;
        if (v1 == 0x8000000000000000)
        {
            v25 = v4;
            memcpy(&v24, &v2, 16);
        }
        else
        {
            v22 = v8;
            v51 = *((int128_t *)&v1);
            v21 = v7;
            memcpy(&v20, &v4, 16);
            *((int128_t *)&v18) = *((int128_t *)&v3);
            v15 = v51;
            starship::modules::pixi::module::{{closure}}(&v23, &v30, &(unsigned long long)v15);
            if (*((int *)&v23) != 1)
            {
                v34.set_segments(&v24);
                *((int128_t *)&a0[80]) = *((int128_t *)&v39);
                a0[64] = v38;
                a0[48] = v37;
                a0[32] = v36;
                a0[16] = v35;
                *(a0) = v34;
                core::ptr::drop_in_place<regex::error::Error>(&v13);
                if (v50)
                    core::ptr::drop_in_place<regex::error::Error>(&v9);
                core::ptr::drop_in_place<starship::configs::pixi::PixiConfig>(&v41);
                return;
            }
        }
        v27 = v25;
        v26 = v24;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v28 = &v26;
            v29 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v15 = &g_11f5b38;
            v17 = 1;
            v20 = 0;
            v18 = &v28;
            v19 = 1;
            v0 = "starship::modules::pixiPULUMI_HOMEError in module `pulumi`:\n";
            v2 = 23;
            v3 = "starship::modules::pixiPULUMI_HOMEError in module `pulumi`:\n";
            v4 = 23;
            v5 = log::__private_api::loc(&g_11f5b48);
            log::__private_api::log(&v15, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v26);
        core::ptr::drop_in_place<regex::error::Error>(&v13);
        if (!v50)
        {
            core::ptr::drop_in_place<starship::configs::pixi::PixiConfig>(&v41);
            core::ptr::drop_in_place<starship::module::Module>(&v34);
            return;
        }
    }
    core::ptr::drop_in_place<regex::error::Error>(&v9);
    core::ptr::drop_in_place<starship::configs::pixi::PixiConfig>(&v41);
    core::ptr::drop_in_place<starship::module::Module>(&v34);
    return;
}
