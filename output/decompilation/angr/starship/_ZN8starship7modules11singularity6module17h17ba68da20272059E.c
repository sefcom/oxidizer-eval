long long starship::modules::singularity::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1c8]
    char v2;  // [bp-0x1b8]
    int v3;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v4;  // [bp-0x1a0]
    int v5;  // [bp-0x198]
    unsigned long long v6;  // [bp-0x188]
    char v7;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x178], Other Possible Types: unsigned long long
    char v9;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x168]
    char v11;  // [bp-0x160], Other Possible Types: unsigned long long
    int v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x140]
    char *v14;  // [bp-0x138]
    unsigned long long v15;  // [bp-0x130]
    int v16;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x120]
    int v18;  // [bp-0x118], Other Possible Types: char *
    unsigned long long v19;  // [bp-0x110]
    void* v20;  // [bp-0x108], Other Possible Types: char
    int v21;  // [bp-0xf8]
    unsigned long long v22;  // [bp-0xe8]
    int v23;  // [bp-0xd8], Other Possible Types: char
    int v24;  // [bp-0xc8], Other Possible Types: char
    int v25;  // [bp-0xb8]
    int v26;  // [bp-0xa8]
    int v27;  // [bp-0x98]
    char v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x80]
    char v30;  // [bp-0x78]
    char *v31;  // [bp-0x68]
    char *v32;  // [bp-0x60]
    unsigned long v33;  // [bp-0x58]
    char v34;  // [bp-0x50]
    unsigned long long v35;  // [bp-0x40]
    unsigned long long v36;  // [bp-0x38]
    char v37;  // [bp-0x30]
    int v39;  // xmm0

    v23.get_env("SINGULARITY_NAMEMissingParameter", 16);
    if ((char)(((0 ^ *((long long *)&v23)) & (0 ^ -(*((long long *)&v23)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v1 = *((long long *)&v24);
    v0 = v23;
    v23.new_module(a1, "singularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlang", 11);
    v34.try_load(v29);
    v7.new(v35, v36);
    memcpy(&v30, &v34, 16);
    v31 = &v37;
    v32 = &v0;
    v33 = a1;
    if (v7 == 0x8000000000000000)
    {
        v4 = v10;
        memcpy(&v3, &v8, 16);
LABEL_bbc4fb:
        v6 = v4;
        v5 = v3;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v14 = &v5;
            v15 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v16 = &g_11f6150;
            v17 = 1;
            v20 = 0;
            v18 = &v14;
            v19 = 1;
            v7 = "starship::modules::singularityenvError in module 'solidity'\n src/modules/solidity.rs";
            v8 = 30;
            v9 = "starship::modules::singularityenvError in module 'solidity'\n src/modules/solidity.rs";
            v10 = 30;
            v11 = log::__private_api::loc(&g_11f6160);
            log::__private_api::log(&v16, 2, &v7);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v5);
        core::ptr::drop_in_place<starship::module::Module>(&v23);
    }
    else
    {
        v22 = v13;
        v39 = *((int128_t *)&v7);
        v21 = v12;
        memcpy(&v20, &v11, 16);
        *((int128_t *)&v18) = *((int128_t *)&v9);
        v16 = v39;
        starship::modules::singularity::module::{{closure}}(&v2, &v30, &(char)v16);
        if (*((int *)&v2) == 1)
            goto LABEL_bbc4fb;
        v23.set_segments(&(char)v3);
        *((int128_t *)&a0[80]) = *((int128_t *)&v28);
        a0[64] = v27;
        a0[48] = v26;
        a0[32] = v25;
        a0[16] = v24;
        *(a0) = v23;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
