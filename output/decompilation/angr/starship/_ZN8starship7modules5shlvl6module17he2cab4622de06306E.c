long long starship::modules::shlvl::module(void* a0, unsigned long long a1[2])
{
    int v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x208]
    int v2;  // [bp-0x200]
    unsigned long long v3;  // [bp-0x1f8]
    char *v4;  // [bp-0x1f0]
    char v5;  // [bp-0x1e8]
    int v6;  // [bp-0x1e0], Other Possible Types: char
    unsigned long long v7;  // [bp-0x1d0]
    int v8;  // [bp-0x1c8]
    unsigned long long v9;  // [bp-0x1b8]
    int v10;  // [bp-0x1a8], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [bp-0x1a0]
    int v12;  // [bp-0x198], Other Possible Types: char *, unsigned long long
    unsigned long long v13;  // [bp-0x190]
    void* v14;  // [bp-0x188], Other Possible Types: char
    int v15;  // [bp-0x178]
    unsigned long long v16;  // [bp-0x168]
    char v17;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0x158], Other Possible Types: unsigned long long
    char v19;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x148]
    char v21;  // [bp-0x140], Other Possible Types: unsigned long long
    int v22;  // [bp-0x130]
    unsigned long long v23;  // [bp-0x120]
    char *v24;  // [bp-0x118]
    unsigned long long v25;  // [bp-0x110]
    char v26;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x100]
    unsigned long long v28;  // [bp-0xf8]
    unsigned long long v29;  // [bp-0xf0]
    char v30;  // [bp-0xe8]
    unsigned long v31;  // [bp-0xd8]
    unsigned long long v32;  // [bp-0xd0]
    char v33;  // [bp-0xc8]
    char v34;  // [bp-0xc7]
    char v35;  // [bp-0xc0]
    char *v36;  // [bp-0xa8]
    char *v37;  // [bp-0xa0]
    char *v38;  // [bp-0x98]
    unsigned long long v39[2];  // [bp-0x90]
    int v40;  // [bp-0x88], Other Possible Types: char
    int v41;  // [bp-0x78]
    int v42;  // [bp-0x68]
    int v43;  // [bp-0x58]
    int v44;  // [bp-0x48]
    char v45;  // [bp-0x38]
    char v46;  // [bp-0x30]
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // cc_ndep
    int v51;  // xmm0

    if (!((char)a1[0].or_else(a1[1]) & 1))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v40.new_module(a1, "shlvlsingularitykubernetesdirectoryfossil_branchfossil_metricsgit_branchgit_commitgit_stategit_metricsgit_statushg_branchpijul_channeldocker_contextpackagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypst", 5);
    v26.try_load(*((long long *)&v46));
    if (!v34 && v48 >= v31)
    {
        v35.spec_to_string(v48);
        v4 = &v35;
        if (v33)
        {
            if (v48 < 0)
                v49 = 1;
            if (!v32)
                goto LABEL_bbbeee;
        }
        else
        {
            v49 = 1;
            if (!v32)
                goto LABEL_bbbef4;
        }
        if (v32 <= v49)
        {
            v49 -= v32;
            if ((char)_ccall(6, 8, v49, v32, v50))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v35);
                return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v40);
            }
        }
        else
        {
            v49 = 0;
            if ((char)_ccall(6, 8, v49, v32, v50))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v35);
                return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v40);
            }
        }
LABEL_bbbeee:
        if (v49 == 1)
        {
LABEL_bbbef4:
            *((int128_t *)&v2) = *((int128_t *)&v28);
            v1 = 0x8000000000000000;
        }
        else
        {
            alloc::slice::<impl [T]>::repeat(&(char)v10, v28, v29, v49);
            v3 = v12;
            *((int128_t *)&v0) = *((int128_t *)&v10);
        }
        v17.new(v26, v27);
        v36 = &(char)v1;
        v37 = &v30;
        v38 = &v4;
        v39[0] = a1;
        if (v17 == 0x8000000000000000)
        {
            v7 = v20;
            memcpy(&v6, &v18, 16);
        }
        else
        {
            v16 = v23;
            v51 = *((int128_t *)&v17);
            v15 = v22;
            memcpy(&v14, &v21, 16);
            *((int128_t *)&v12) = *((int128_t *)&v19);
            v10 = v51;
            starship::modules::shlvl::module::{{closure}}(&v5, &v36, &(char)v10);
            if (*((int *)&v5) != 1)
            {
                v40.set_segments(&(char)v6);
                *((int128_t *)&a0[80]) = *((int128_t *)&v45);
                a0[64] = v44;
                a0[48] = v43;
                a0[32] = v42;
                a0[16] = v41;
                *(a0) = v40;
                core::ptr::drop_in_place<versions::Chunk>(&(char)v1);
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v35);
            }
        }
        v9 = v7;
        v8 = v6;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v24 = &v8;
            v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v10 = &g_11f6128;
            v11 = 1;
            v14 = 0;
            v12 = &v24;
            v13 = 1;
            v17 = "starship::modules::shlvlSHLVLsrc/modules/singularity.rs";
            v18 = 24;
            v19 = "starship::modules::shlvlSHLVLsrc/modules/singularity.rs";
            v20 = 24;
            v21 = log::__private_api::loc(&g_11f6138);
            log::__private_api::log(&v10, 2, &v17);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v8);
        core::ptr::drop_in_place<versions::Chunk>(&(char)v1);
        core::ptr::drop_in_place<alloc::string::String>(&v35);
        return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v40);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v40);
}
