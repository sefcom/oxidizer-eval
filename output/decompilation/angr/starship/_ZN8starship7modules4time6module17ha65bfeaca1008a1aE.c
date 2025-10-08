void starship::modules::time::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x220], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x218], Other Possible Types: unsigned long long
    char v2;  // [bp-0x214], Other Possible Types: unsigned int
    char *v3;  // [bp-0x210]
    unsigned int v4;  // [bp-0x20c]
    unsigned long long v5;  // [bp-0x208]
    void* v6;  // [bp-0x200]
    unsigned long long v7;  // [bp-0x1f0]
    unsigned long long v8;  // [bp-0x1e8]
    char v9;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned int v10;  // [bp-0x1dc]
    unsigned long long v11;  // [bp-0x1d8]
    unsigned long long v12;  // [bp-0x1d0]
    unsigned long long v13;  // [bp-0x1c8]
    unsigned long long v14;  // [bp-0x1c0]
    char *v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b0]
    unsigned long long v17;  // [bp-0x1a0]
    char v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x188]
    unsigned long long v20;  // [bp-0x178]
    unsigned int v21;  // [bp-0x170]
    unsigned long long v22;  // [bp-0x168]
    unsigned int v23;  // [bp-0x160]
    char v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x148]
    char *v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0x138]
    char *v28;  // [bp-0x130]
    char *v29;  // [bp-0x128]
    unsigned long v30;  // [bp-0x120]
    char v31;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x110]
    unsigned long long v33;  // [bp-0x108]
    unsigned long long v34;  // [bp-0x100]
    char v35;  // [bp-0xf8]
    unsigned long long v36;  // [bp-0xe8]
    unsigned long long v37;  // [bp-0xe0]
    unsigned long long v38;  // [bp-0xd8]
    unsigned long long v39;  // [bp-0xd0]
    char v40;  // [bp-0xc8]
    char v41;  // [bp-0xc7]
    int v42;  // [bp-0xc0], Other Possible Types: char
    int v43;  // [bp-0xb0]
    int v44;  // [bp-0xa0]
    int v45;  // [bp-0x90]
    int v46;  // [bp-0x80]
    char v47;  // [bp-0x70]
    unsigned long long v48;  // [bp-0x68]
    char v49;  // [bp-0x60], Other Possible Types: unsigned long
    char v50;  // [bp-0x58]
    char v51;  // [bp-0x48]
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax

    v42.new_module(a1, "time\": \"unixlifecodeHashTaskbodyPing\'", 4);
    v31.try_load(v48);
    if (!v41)
    {
        starship::modules::time::parse_time_range(&(char)v0, v38, v39);
        v21 = *((int *)&v1);
        v20 = *((long long *)&v0);
        v22 = *((long long *)&v2);
        v23 = v4;
        (char)v0.now();
        v15 = *((long long *)&(&v0)[4]);
        (char)v9.overflowing_add_offset(&v15, v2);
        if (!(char)starship::modules::time::is_inside_time_range(*((int *)&v9), v10, &v20, &v22))
            goto LABEL_bbf754;
        v53 = (v40 ? "%rsrc/modules/time.rs" : "%T%rsrc/modules/time.rs");
        if (v31)
        {
            v54 = v32;
            if (!v31)
                goto LABEL_bbf64f;
LABEL_bbf64e:
        }
        else
        {
            v54 = 2;
            if (v31)
                goto LABEL_bbf64e;
LABEL_bbf64f:
            v31 = v53;
        }
        v7 = v31;
        v8 = v54;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
        {
            v15 = &v7;
            v16 = <&T as core::fmt::Display>::fmt;
            v0 = &g_11f6310;
            v1 = 1;
            v6 = 0;
            v3 = &v15;
            v5 = 1;
            v55 = log::__private_api::loc(&g_11f6330);
            v9 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
            v11 = 23;
            v12 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
            v13 = 23;
            v14 = v55;
            log::__private_api::log(&(char)v0, 5, &(char)v9);
        }
        (char)v9.now();
        starship::modules::time::create_offset_time_string(&(char)v0, &(char)v9, v36, v37, v7, v8);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            starship::modules::time::module::{{closure}}(&v18, v7, v8);
        }
        else
        {
            v19 = *((long long *)&(&v2)[4]);
            memcpy(&v18, &v0, 16);
        }
        v49.new(v33, v34);
        v28 = &v35;
        v29 = &v18;
        v30 = a1;
        if (v49 == 0x8000000000000000)
        {
            v17 = *((long long *)&v51);
            memcpy(&v16, &v50, 16);
        }
        else
        {
            starship::modules::time::module::{{closure}}(&v15, &v28, &v49);
            if (!((char)v15 & 1))
            {
                v42.set_segments(&v16);
                *((int128_t *)&a0[80]) = *((int128_t *)&v47);
                a0[64] = v46;
                a0[48] = v45;
                a0[32] = v44;
                a0[16] = v43;
                *(a0) = v42;
                core::ptr::drop_in_place<alloc::string::String>(&v18);
                return;
            }
        }
        v25 = v17;
        memcpy(&v24, &v16, 16);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v26 = &v24;
            v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v0 = &g_11f6320;
            v1 = 1;
            v6 = 0;
            v3 = &v26;
            v5 = 1;
            v56 = log::__private_api::loc(&g_11f6348);
            v9 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
            v11 = 23;
            v12 = "starship::modules::timeInvalid utc_time_offset configuration provided! Falling back to \"local\".Target timezone offset is Time in target timezone now is ";
            v13 = 23;
            v14 = v56;
            log::__private_api::log(&(char)v0, 2, &(char)v9);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v24);
        core::ptr::drop_in_place<alloc::string::String>(&v18);
    }
    else
    {
LABEL_bbf754:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<starship::module::Module>(&v42);
    return;
}
