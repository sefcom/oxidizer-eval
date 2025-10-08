long long starship::modules::custom::module(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x2c0], Other Possible Types: unsigned long long
    int v1;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x2b8]
    unsigned long long v3;  // [bp-0x2b0]
    int v4;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x2a0]
    int v6;  // [bp-0x298]
    int v7;  // [bp-0x290]
    unsigned long long v8;  // [bp-0x280]
    unsigned long long v9;  // [bp-0x278]
    int v10;  // [bp-0x278]
    unsigned long long v11;  // [bp-0x270]
    int v12;  // [bp-0x268], Other Possible Types: char *
    unsigned long long v13;  // [bp-0x260]
    void* v14;  // [bp-0x258]
    int v15;  // [bp-0x248]
    unsigned long long v16;  // [bp-0x238]
    char v17;  // [bp-0x228]
    char v18;  // [bp-0x220]
    unsigned long long v19;  // [bp-0x210]
    char v20;  // [bp-0x208]
    unsigned long long v21;  // [bp-0x1f8]
    unsigned long long v22;  // [bp-0x1e8]
    unsigned long long v23;  // [bp-0x1e0]
    char *v24;  // [bp-0x1d8]
    unsigned long long v25;  // [bp-0x1d0]
    char *v26;  // [bp-0x1c8]
    unsigned long long v27;  // [bp-0x1c0]
    char *v28;  // [bp-0x1b8]
    unsigned long long v29;  // [bp-0x1b0]
    char v30;  // [bp-0x1a8]
    char *v31;  // [bp-0x198]
    char *v32;  // [bp-0x190]
    char *v33;  // [bp-0x188]
    unsigned long long v34;  // [bp-0x180]
    int v35;  // [bp-0x178], Other Possible Types: char
    int v36;  // [bp-0x168]
    int v37;  // [bp-0x158]
    int v38;  // [bp-0x148]
    int v39;  // [bp-0x138]
    int v40;  // [bp-0x128]
    char v41;  // [bp-0x118]
    char v42;  // [bp-0xf8]
    char v43;  // [bp-0xe0]
    int v44;  // [bp-0xc8]
    unsigned long long v45;  // [bp-0xb8]
    unsigned long long v46;  // [bp-0xb0]
    char v47;  // [bp-0xa8]
    unsigned long long v48;  // [bp-0x88]
    unsigned long long v49;  // [bp-0x80]
    char v50;  // [bp-0x78]
    unsigned long long v51;  // [bp-0x68]
    unsigned long long v52;  // [bp-0x60]
    unsigned long long v53;  // [bp-0x58]
    unsigned long long v54;  // [bp-0x50]
    char v55;  // [bp-0x48]
    char v56;  // [bp-0x47]
    char v57;  // [bp-0x45]
    char v58;  // [bp-0x40]
    unsigned long long v60;  // rax
    unsigned long long v61;  // rdx
    int v62;  // xmm1
    int v63;  // xmm0

    v22 = a1;
    v23 = a2;
    v60 = starship::modules::custom::get_config(a1, a2, a3);
    if (!v60)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v41.load(v60);
    if (v56 || v53 && !(char)v53.equal(v54, "linuxsrc/modules/custom.rs", 5) && !(char)v53.equal(v54, "unixlifecodeHashTaskbodyPing'", 4) || v55 && a3.get_repo())
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v0 = &v22;
        v2 = <&T as core::fmt::Display>::fmt;
        *((unsigned long long **)&v10) = &g_11f3ea0;
        v11 = 1;
        v14 = 0;
        v12 = &v0;
        v13 = 1;
        v58.map_or_else(0, v61, &(unsigned long long)v10);
        v35.new(&v58, v48, v49);
        (unsigned long long)v10.try_begin_scan(a3);
        if (v9)
        {
            v62 = *((int128_t *)&v43);
            v0 = v9;
            *((int128_t *)&v1) = *((int128_t *)&v42);
            v4 = v44;
            v6 = v62;
            if (!(char)v0.is_match())
            {
                if (v51)
                {
                    if (!(char)starship::modules::custom::exec_when(v51, v52, &v41, a3))
                        goto LABEL_b8a4eb;
                }
                else
                {
                    if (!(char)v52)
                        goto LABEL_b8a4eb;
                }
            }
            v24 = &v41;
            v25 = a3;
            v0.new(v45, v46);
            memcpy(&v30, &v47, 16);
            v31 = &v50;
            v32 = &v57;
            v33 = &v24;
            v34 = a3;
            if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
            {
                v19 = v4;
                memcpy(&v18, &v2, 16);
LABEL_b8a3ea:
                v21 = v19;
                memcpy(&v20, &v18, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v26 = &v22;
                    v27 = <&T as core::fmt::Display>::fmt;
                    v28 = &v20;
                    v29 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v9 = &g_11f3eb0;
                    v11 = 2;
                    v14 = 0;
                    v12 = &v26;
                    v13 = 2;
                    v0 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                    v1 = 25;
                    v3 = "starship::modules::customoutputtop level format contains custom module , but no configuration was provided. Configuration for the following modules were provided: , but no configuration was provided.";
                    v4 = 25;
                    v5 = log::__private_api::loc(&g_11f3ed0);
                    log::__private_api::log(&v9, 2, &v0);
                }
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v20);
            }
            else
            {
                v16 = v8;
                v63 = *((int128_t *)&v0);
                v15 = v7;
                memcpy(&v14, &v4, 16);
                *((int128_t *)&v12) = (int128_t)(&v1)[8];
                v10 = v63;
                starship::modules::custom::module::{{closure}}(&v17, &v30, &(unsigned long long)v10);
                if ((v17 & 1))
                    goto LABEL_b8a3ea;
                v35.set_segments(&v18);
            }
            a0[80] = v40;
            a0[64] = v39;
            a0[48] = v38;
            a0[32] = v37;
            a0[16] = v36;
            *(a0) = v35;
        }
        else
        {
LABEL_b8a4eb:
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::module::Module>(&v35);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::configs::custom::CustomConfig>(&v41);
}
