void starship::modules::spack::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x218], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x210]
    unsigned long long v2;  // [bp-0x208]
    int v3;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v4;  // [bp-0x1e8]
    int v5;  // [bp-0x1d8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v6;  // [bp-0x1d0]
    int v7;  // [bp-0x1c8], Other Possible Types: char *, unsigned long long
    unsigned long long v8;  // [bp-0x1c0]
    void* v9;  // [bp-0x1b8], Other Possible Types: char
    int v10;  // [bp-0x1a8]
    unsigned long long v11;  // [bp-0x198]
    char v12;  // [bp-0x188]
    char v13;  // [bp-0x180]
    unsigned long long v14;  // [bp-0x170]
    char v15;  // [bp-0x168]
    unsigned long long v16;  // [bp-0x158]
    char v17;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0x140], Other Possible Types: unsigned long long
    char v19;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x130]
    char v21;  // [bp-0x128], Other Possible Types: unsigned long long
    int v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x108]
    char *v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    char v26;  // [bp-0xf0]
    int v27;  // [bp-0xf0]
    int v28;  // [bp-0xe0], Other Possible Types: char
    int v29;  // [bp-0xd0]
    int v30;  // [bp-0xc0]
    int v31;  // [bp-0xb0]
    char v32;  // [bp-0xa0]
    unsigned long long v33;  // [bp-0x98]
    char v34;  // [bp-0x90]
    char *v35;  // [bp-0x80]
    char *v36;  // [bp-0x78]
    unsigned long v37;  // [bp-0x70]
    char v38;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x60]
    char v40;  // [bp-0x58]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x38]
    unsigned long long v44;  // r12
    unsigned long long v45;  // r15
    unsigned long v46;  // rdx
    int v47;  // xmm0
    char *v48;  // rdi

    v26.get_env("SPACK_ENVError in module `spack`:\nsrc/modules/spack.rs", 9);
    if ((char)(((0 ^ *((long long *)&v26)) & (0 ^ -(*((long long *)&v26)))) >> 63))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v44 = 1;
        v45 = 0;
    }
    else
    {
        v0 = v27;
        v45 = *((long long *)&v28);
        v2 = *((long long *)&v28);
    }
    core::str::<impl str>::trim_matches(v44, v45);
    if (v46)
    {
        v26.new_module(a1, "spackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' mu", 5);
        v38.try_load(v33);
        starship::modules::utils::directory::truncate(&(char)v5, v44, v45, *((long long *)&v42));
        if (v5 == 0x8000000000000000)
        {
            v4 = v2;
            memcpy(&v3, &v0, 16);
        }
        else
        {
            v4 = v7;
            memcpy(&v3, &v5, 16);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
        }
        v17.new(v38, v39);
        memcpy(&v34, &v40, 16);
        v35 = &v41;
        v36 = &v3;
        v37 = a1;
        if (v17 == 0x8000000000000000)
        {
            v14 = v20;
            memcpy(&v13, &v18, 16);
LABEL_bbd000:
            v16 = v14;
            memcpy(&v15, &v13, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v24 = &v15;
                v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v5 = &g_11f61a0;
                v6 = 1;
                v9 = 0;
                v7 = &v24;
                v8 = 1;
                v17 = "starship::modules::spackError parsing format string in `status.format`src/modules/status.rs";
                v18 = 24;
                v19 = "starship::modules::spackError parsing format string in `status.format`src/modules/status.rs";
                v20 = 24;
                v21 = log::__private_api::loc(&g_11f61b0);
                log::__private_api::log(&v5, 2, &v17);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v15);
            core::ptr::drop_in_place<alloc::string::String>(&v3);
            core::ptr::drop_in_place<starship::module::Module>(&v26);
            return;
        }
        v11 = v23;
        v47 = *((int128_t *)&v17);
        v10 = v22;
        memcpy(&v9, &v21, 16);
        *((int128_t *)&v7) = *((int128_t *)&v19);
        v5 = v47;
        starship::modules::spack::module::{{closure}}(&v12, &v34, &(char)v5);
        if (*((int *)&v12) == 1)
            goto LABEL_bbd000;
        v26.set_segments(&v13);
        *((int128_t *)&a0[80]) = *((int128_t *)&v32);
        a0[64] = v31;
        a0[48] = v30;
        a0[32] = v29;
        a0[16] = v28;
        *(a0) = v27;
        v48 = &v3;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        v48 = &v0;
    }
    core::ptr::drop_in_place<alloc::string::String>(v48);
    return;
}
