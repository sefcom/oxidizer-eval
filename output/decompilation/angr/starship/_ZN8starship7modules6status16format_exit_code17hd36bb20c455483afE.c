void starship::modules::status::format_exit_code(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x1a4]
    int v1;  // [bp-0x198], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0x198]
    unsigned long v3;  // [bp-0x190]
    char *v4;  // [bp-0x188]
    void* v5;  // [bp-0x178]
    char *v6;  // [bp-0x170], Other Possible Types: unsigned long long
    char v7;  // [bp-0x168], Other Possible Types: unsigned long long
    int v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x160]
    int v10;  // [bp-0x158], Other Possible Types: char *, unsigned long long
    int v11;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x148]
    int v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x128]
    char *v15;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x110]
    void* v18;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x100]
    int v20;  // [bp-0xf0]
    unsigned long long v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd0]
    void* v23;  // [bp-0xc8]
    unsigned long long v24;  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    void* v27;  // [bp-0xa8]
    unsigned long long v28;  // [bp-0xa0]
    char v29;  // [bp-0x98]
    char *v30;  // [bp-0x80]
    struct_0 *v31;  // [bp-0x78]
    char *v32;  // [bp-0x70]
    char *v33;  // [bp-0x68]
    char *v34;  // [bp-0x60]
    char *v35;  // [bp-0x58]
    char *v36;  // [bp-0x50]
    char *v37;  // [bp-0x48]
    char *v38;  // [bp-0x40]
    unsigned long long v39;  // [bp-0x38]
    void* v40;  // r12
    unsigned int v41;  // r14d
    unsigned long long v42;  // rdx
    unsigned int v43;  // r14d
    void* v45;  // rax
    int v46;  // xmm0

    v40 = a1;
    v23 = a1;
    v24 = a2;
    v22 = a5;
    ::0xa6d3e0::core::num::<impl i64>::from_ascii_radix(&v7, a1, a2);
    if (v7 == 1)
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 1)
        {
            v7 = &g_11f6218;
            v9 = 1;
            v10 = 8;
            *((uint128_t *)&v11) = 0;
            v15 = "starship::modules::statusError parsing format string in `status.pipestatus_segment_format`: Error parsing exit_code string to int0x";
            v16 = 25;
            v17 = "starship::modules::statusError parsing format string in `status.pipestatus_segment_format`: Error parsing exit_code string to int0x";
            v18 = 25;
            v19 = log::__private_api::loc(&g_11f6238);
            log::__private_api::log(&v7, 2, &v15);
        }
        *((unsigned long long *)&a0[16]) = 8;
        *((unsigned long long *)&a0[24]) = 0;
        *((uint128_t *)a0) = 0;
        return;
    }
    else
    {
        v0 = v9;
        v15 = &v0;
        v16 = core::fmt::num::<impl core::fmt::UpperHex for i32>::fmt;
        v7 = &g_11f6228;
        v9 = 1;
        v12 = 0;
        v10 = &v15;
        v11 = 1;
        v29.map_or_else(0, a2, &v7);
        v41 = v0;
        v25 = starship::modules::status::status_common_meaning(v41);
        v26 = v42;
        if (a6->field_d1 && v41 >= 129)
        {
            v43 = v41 - 128;
            v7.to_vec(core::fmt::num::imp::<impl u32>::_fmt(v43, &v15, 10), a2);
            v4 = v10;
            *((int128_t *)&v1) = *((int128_t *)&v7);
            v45 = starship::modules::status::status_signal_name(v43);
            if (v45)
            {
                v5 = v45;
                v6 = v42;
                v40 = 0;
            }
            else
            {
                *((int *)&v5) = (v1 == 0x8000000000000000 ? 0 : v3);
                v6 = v4;
                if ((v1 == 0x8000000000000000 & !v25))
                    goto LABEL_bbdaea;
LABEL_bbdb2a:
                v40 = 0;
            }
        }
        else
        {
            v2 = 0x8000000000000000;
            v5 = 0;
            if (!(1 & !v25))
                goto LABEL_bbdb2a;
LABEL_bbdaea:
            v28 = a2;
        }
        v27 = v40;
        v15.new(a3, a4);
        v30 = &v0;
        v31 = a6;
        v32 = &v23;
        v33 = &v29;
        v34 = &v27;
        v35 = &v25;
        v36 = &(char)v1;
        v37 = &v5;
        v38 = &v22;
        v39 = a7;
        if (v15 == 0x8000000000000000)
        {
            *((void* *)&a0[24]) = v18;
            *((int128_t *)&a0[8]) = *((int128_t *)&v16);
            *((unsigned long long *)a0) = 1;
        }
        else
        {
            v14 = v21;
            v46 = *((int128_t *)&v15);
            v13 = v20;
            memcpy(&v12, &v19, 16);
            *((int128_t *)&v10) = *((int128_t *)&v17);
            v8 = v46;
            starship::modules::status::format_exit_code::{{closure}}(a0, &v30, &(unsigned long long)v8);
        }
        core::ptr::drop_in_place<regex::error::Error>(&(char)v1);
        core::ptr::drop_in_place<alloc::string::String>(&v29);
        return;
    }
}
