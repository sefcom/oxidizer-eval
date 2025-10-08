void starship::modules::raku::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x260]
    int v1;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x250]
    int v3;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x240]
    int v5;  // [bp-0x238]
    int v6;  // [bp-0x230]
    unsigned long long v7;  // [bp-0x220]
    char v8;  // [bp-0x218]
    int v9;  // [bp-0x210], Other Possible Types: char
    unsigned long long v10;  // [bp-0x200]
    int v11;  // [bp-0x1f8]
    unsigned long long v12;  // [bp-0x1e8]
    int v13;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1d0]
    int v15;  // [bp-0x1c8], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x1c0]
    void* v17;  // [bp-0x1b8], Other Possible Types: char
    int v18;  // [bp-0x1a8]
    unsigned long long v19;  // [bp-0x198]
    char *v20;  // [bp-0x190]
    unsigned long long v21;  // [bp-0x188]
    int v22;  // [bp-0x180], Other Possible Types: char
    int v23;  // [bp-0x170]
    int v24;  // [bp-0x160]
    int v25;  // [bp-0x150]
    int v26;  // [bp-0x140]
    char v27;  // [bp-0x130]
    unsigned long long v28;  // [bp-0x128]
    char v29;  // [bp-0x120]
    int v30;  // [bp-0x110]
    char *v31;  // [bp-0x100]
    char *v32;  // [bp-0xf8]
    char *v33;  // [bp-0xf0]
    unsigned long v34;  // [bp-0xe8]
    unsigned long v35;  // [bp-0xe0]
    unsigned int v36;  // [bp-0xb0]
    char v37;  // [bp-0xa8]
    char v38;  // [bp-0xa0]
    char v39;  // [bp-0x88]
    int v40;  // [bp-0x70]
    unsigned long long v41;  // [bp-0x60]
    unsigned long long v42;  // [bp-0x58]
    char v43;  // [bp-0x50]
    int v44;  // [bp-0x40]
    char v45;  // [bp-0x30]
    int v47;  // xmm0
    int v48;  // xmm0

    v22.new_module(a1, "raku", 4);
    v37.try_load(v28);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v47 = *((int128_t *)&v38);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v39);
        v3 = v40;
        v5 = v47;
        if (!(char)v0.is_match())
            goto LABEL_bb6602;
        v36 = 0;
        v35 = a1;
        v0.new(v41, v42);
        memcpy(&v29, &v43, 16);
        v30 = v44;
        v31 = &v45;
        v32 = &v35;
        v33 = &v22;
        v34 = a1;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v10 = v3;
            memcpy(&v9, &(char)v1, 16);
        }
        else
        {
            v19 = v7;
            v48 = *((int128_t *)&v0);
            v18 = v6;
            memcpy(&v17, &v3, 16);
            *((int128_t *)&v15) = (int128_t)(&v1)[8];
            v13 = v48;
            starship::modules::raku::module::{{closure}}(&v8, &v29, &(char)v13);
            if (*((int *)&v8) != 1)
            {
                v22.set_segments(&(char)v9);
                *((int128_t *)&a0[80]) = *((int128_t *)&v27);
                a0[64] = v26;
                a0[48] = v25;
                a0[32] = v24;
                a0[16] = v23;
                *(a0) = v22;
                core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(alloc::string::String,alloc::string::String)>,starship::modules::raku::module::{{closure}}>>(&v35);
                core::ptr::drop_in_place<starship::configs::v::VConfig>(&v37);
                return;
            }
        }
        v12 = v10;
        v11 = v9;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v20 = &v11;
            v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v13 = &g_11f5da0;
            v14 = 1;
            v17 = 0;
            v15 = &v20;
            v16 = 1;
            v0 = "starship::modules::rakuvm_versionMoarVMError in module `red`:\nsrc/modules/red.rs";
            v1 = 23;
            v2 = "starship::modules::rakuvm_versionMoarVMError in module `red`:\nsrc/modules/red.rs";
            v3 = 23;
            v4 = log::__private_api::loc(&g_11f5db0);
            log::__private_api::log(&v13, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
        core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<(alloc::string::String,alloc::string::String)>,starship::modules::raku::module::{{closure}}>>(&v35);
    }
    else
    {
LABEL_bb6602:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::v::VConfig>(&v37);
    core::ptr::drop_in_place<starship::module::Module>(&v22);
    return;
}
