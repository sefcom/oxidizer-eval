void starship::modules::rust::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x308]
    int v2;  // [bp-0x300], Other Possible Types: unsigned long long
    int v3;  // [bp-0x2f8], Other Possible Types: char *
    int v4;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v5;  // [bp-0x2e8], Other Possible Types: void*
    int v6;  // [bp-0x2e0]
    int v7;  // [bp-0x2d8]
    unsigned long long v8;  // [bp-0x2c8]
    char v9;  // [bp-0x2b8]
    int v10;  // [bp-0x2b0], Other Possible Types: char
    unsigned long long v11;  // [bp-0x2a0]
    int v12;  // [bp-0x298]
    unsigned long long v13;  // [bp-0x288]
    char v14;  // [bp-0x280], Other Possible Types: unsigned long long
    char v15;  // [bp-0x278], Other Possible Types: unsigned long long
    char v16;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x268]
    char v18;  // [bp-0x260], Other Possible Types: unsigned long long
    int v19;  // [bp-0x250]
    unsigned long long v20;  // [bp-0x240]
    char *v21;  // [bp-0x238]
    unsigned long long v22;  // [bp-0x230]
    char *v23;  // [bp-0x228]
    unsigned long v24;  // [bp-0x220]
    char *v25;  // [bp-0x218]
    int v26;  // [bp-0x210], Other Possible Types: char
    int v27;  // [bp-0x200]
    int v28;  // [bp-0x1f0]
    int v29;  // [bp-0x1e0]
    int v30;  // [bp-0x1d0]
    char v31;  // [bp-0x1c0]
    unsigned long long v32;  // [bp-0x1b8]
    char v33;  // [bp-0x1b0]
    char v34;  // [bp-0x1a8]
    char v35;  // [bp-0x190]
    int v36;  // [bp-0x178]
    unsigned long long v37;  // [bp-0x168]
    char v38;  // [bp-0x160]
    char v39;  // [bp-0x120]
    unsigned int v40;  // [bp-0xa8]
    unsigned int v41;  // [bp-0x88]
    unsigned int v42;  // [bp-0x60]
    unsigned int v43;  // [bp-0x28]
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm1

    v26.new_module(a1, "rust", 4);
    v33.try_load(v32);
    v39.try_begin_scan(a1);
    if (*((long long *)&v39))
    {
        v45 = *((int128_t *)&v34);
        v1 = *((long long *)&v39);
        *((int128_t *)&v2) = *((int128_t *)&v35);
        v4 = v36;
        v6 = v45;
        if (!(char)v1.is_match())
            goto LABEL_bb92d1;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v14.new(v37, *((long long *)&v38));
        v23 = &v33;
        v24 = a1;
        v25 = &v39;
        if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
        {
            v11 = v17;
            memcpy(&v10, &v15, 16);
        }
        else
        {
            v8 = v20;
            v46 = *((int128_t *)&v14);
            v47 = *((int128_t *)&v16);
            v7 = v19;
            *((int128_t *)&v5) = *((int128_t *)&v18);
            v3 = v47;
            v0 = v46;
            starship::modules::rust::module::{{closure}}(&v9, &v23, &v1);
            if (*((int *)&v9) != 1)
            {
                v26.set_segments(&(char)v10);
                *((int128_t *)&a0[80]) = *((int128_t *)&v31);
                a0[64] = v30;
                a0[48] = v29;
                a0[32] = v28;
                a0[16] = v27;
                *(a0) = v26;
                core::ptr::drop_in_place<starship::modules::rust::RustToolingEnvironmentInfo>(&v39);
                core::ptr::drop_in_place<starship::configs::v::VConfig>(&v33);
                return;
            }
        }
        v13 = v11;
        v12 = v10;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v21 = &v12;
            v22 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v0 = &g_11f5f68;
            v2 = 1;
            v5 = 0;
            v3 = &v21;
            v4 = 1;
            v14 = "starship::modules::rustRustup rustc version is ";
            v15 = 23;
            v16 = "starship::modules::rustRustup rustc version is ";
            v17 = 23;
            v18 = log::__private_api::loc(&g_11f5f78);
            log::__private_api::log(&v0, 2, &v14);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v12);
        core::ptr::drop_in_place<starship::modules::rust::RustToolingEnvironmentInfo>(&v39);
    }
    else
    {
LABEL_bb92d1:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::v::VConfig>(&v33);
    core::ptr::drop_in_place<starship::module::Module>(&v26);
    return;
}
