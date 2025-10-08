void starship::modules::scala::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x220]
    int v1;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x210]
    int v3;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x200]
    int v5;  // [bp-0x1f8]
    int v6;  // [bp-0x1f0]
    unsigned long long v7;  // [bp-0x1e0]
    char v8;  // [bp-0x1d8]
    int v9;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x1c0]
    int v11;  // [bp-0x1b8]
    unsigned long long v12;  // [bp-0x1a8]
    int v13;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x190]
    int v15;  // [bp-0x188], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x180]
    void* v17;  // [bp-0x178], Other Possible Types: char
    int v18;  // [bp-0x168]
    unsigned long long v19;  // [bp-0x158]
    char *v20;  // [bp-0x150]
    unsigned long long v21;  // [bp-0x148]
    int v22;  // [bp-0x140], Other Possible Types: char
    int v23;  // [bp-0x130]
    int v24;  // [bp-0x120]
    int v25;  // [bp-0x110]
    int v26;  // [bp-0x100]
    char v27;  // [bp-0xf0]
    unsigned long long v28;  // [bp-0xe8]
    char v29;  // [bp-0xe0]
    char *v30;  // [bp-0xd0]
    char v31;  // [bp-0xc8]
    unsigned long v32;  // [bp-0xb8]
    char *v33;  // [bp-0xb0]
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0xa0]
    char v36;  // [bp-0x88]
    int v37;  // [bp-0x70]
    unsigned long long v38;  // [bp-0x60]
    unsigned long long v39;  // [bp-0x58]
    char v40;  // [bp-0x50]
    char v41;  // [bp-0x40]
    char v42;  // [bp-0x30]
    int v44;  // xmm0
    int v45;  // xmm0

    v22.new_module(a1, "scala.scalaenv.sbtenv.metals", 5);
    v34.try_load(v28);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v44 = *((int128_t *)&v35);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v36);
        v3 = v37;
        v5 = v44;
        if (!(char)v0.is_match())
            goto LABEL_bbaeeb;
        v0.new(v38, v39);
        memcpy(&v29, &v40, 16);
        v30 = &v41;
        memcpy(&v31, &v42, 16);
        v32 = a1;
        v33 = &v22;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v10 = v3;
            memcpy(&v9, &(char)v1, 16);
        }
        else
        {
            v19 = v7;
            v45 = *((int128_t *)&v0);
            v18 = v6;
            memcpy(&v17, &v3, 16);
            *((int128_t *)&v15) = (int128_t)(&v1)[8];
            v13 = v45;
            starship::modules::scala::module::{{closure}}(&v8, &v29, &(char)v13);
            if (*((int *)&v8) != 1)
            {
                v22.set_segments(&v9);
                *((int128_t *)&a0[80]) = *((int128_t *)&v27);
                a0[64] = v26;
                a0[48] = v25;
                a0[32] = v24;
                a0[16] = v23;
                *(a0) = v22;
                core::ptr::drop_in_place<starship::configs::v::VConfig>(&v34);
                return;
            }
        }
        v12 = v10;
        v11 = v9;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v20 = &v11;
            v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v13 = &g_11f60b8;
            v14 = 1;
            v17 = 0;
            v15 = &v20;
            v16 = 1;
            v0 = "starship::modules::scala--scalascala-cliscalacError in module `shell`: \nsrc/modules/shell.rs";
            v1 = 24;
            v2 = "starship::modules::scala--scalascala-cliscalacError in module `shell`: \nsrc/modules/shell.rs";
            v3 = 24;
            v4 = log::__private_api::loc(&g_11f60c8);
            log::__private_api::log(&v13, 2, &v0);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
    }
    else
    {
LABEL_bbaeeb:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::configs::v::VConfig>(&v34);
    core::ptr::drop_in_place<starship::module::Module>(&v22);
    return;
}
