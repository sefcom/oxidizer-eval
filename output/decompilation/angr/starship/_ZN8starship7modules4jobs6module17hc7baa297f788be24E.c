void starship::modules::jobs::module(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x218], Other Possible Types: unsigned long long
    int v1;  // [bp-0x218]
    unsigned long long v2;  // [sp-0x210]
    int v3;  // [bp-0x208], Other Possible Types: char *, unsigned long long
    int v4;  // [bp-0x200], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x1f8]
    int v6;  // [bp-0x1e8]
    unsigned long long v7;  // [bp-0x1d8]
    void* v8;  // [bp-0x1c8], Other Possible Types: int
    unsigned long long v9;  // [bp-0x1c0]
    void* v10;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x190]
    unsigned long long v15;  // [bp-0x188]
    int v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x168]
    char *v18;  // [bp-0x160], Other Possible Types: char
    char v19;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x148]
    unsigned long long v21;  // [bp-0x140]
    char v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x128]
    char v24;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x110]
    unsigned long long v26;  // [bp-0x108]
    unsigned long v27;  // [bp-0x100]
    char v28;  // [bp-0xf8]
    unsigned long v29;  // [bp-0xe8]
    unsigned long v30;  // [bp-0xe0]
    char v31;  // [bp-0xd8]
    char *v32;  // [bp-0xc8]
    unsigned long long v33;  // [bp-0xc0]
    unsigned long long v34;  // [bp-0xb8]
    void* v35;  // [bp-0xb0]
    char *v36;  // [bp-0xa8]
    char *v37;  // [bp-0xa0]
    struct_0 *v38;  // [bp-0x98]
    int v39;  // [bp-0x90], Other Possible Types: char
    int v40;  // [bp-0x80]
    int v41;  // [bp-0x70]
    int v42;  // [bp-0x60]
    int v43;  // [bp-0x50]
    char v44;  // [bp-0x40]
    char v45;  // [bp-0x38]
    unsigned long long v47;  // rax
    unsigned long v48;  // r15
    void* v49;  // r12
    unsigned long v50;  // cc_ndep
    unsigned long long v51;  // r13
    void* v53;  // r12
    int v54;  // xmm0

    v39.new_module(a1, "jobs  # ", 4);
    v24.try_load(*((long long *)&v45));
    if (v29 >= 0)
    {
        if (v30 >= 0)
        {
            v47 = *((long long *)&v31);
            if (v47 >= 0)
            {
                v48 = a1->field_a8;
                if (!v30 || !v47 || !v29 || v48)
                {
                    v8 = 0;
                    v9 = 1;
                    v10 = 0;
                    if (v29 == 1)
                    {
                        if (v30 > v48)
                            v49 = 0;
                        if (!((char)_ccall(13, 8, v48, v30, v50)))
                            v51 = 1;
                        if (v48 >= v47)
                        {
                            v0.spec_to_string(v48);
                            core::ptr::drop_in_place<alloc::string::String>(&v8);
                            v10 = v3;
                            *((int128_t *)&v8) = *((int128_t *)&v0);
                        }
                    }
                    else
                    {
                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                        {
                            v0 = &g_11f50a0;
                            v2 = 1;
                            v3 = 8;
                            *((uint128_t *)&v4) = 0;
                            v11 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                            v12 = 23;
                            v13 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                            v14 = 23;
                            v15 = log::__private_api::loc(&g_11f50c0);
                            log::__private_api::log(&v0, 2, &v11);
                        }
                        v21 = v26;
                        v51 = (v48 > 0 ? v21 : 1);
                        v49 = (v48 > 0 ? v27 : 0);
                        if (!v29 || v29 < v48)
                        {
                            v0.spec_to_string(v48);
                            core::ptr::drop_in_place<alloc::string::String>(&v8);
                            v10 = v3;
                            *((int128_t *)&v8) = *((int128_t *)&v0);
                            v51 = v21;
                            v49 = v53;
                        }
                    }
                    v11.new(v24, v25);
                    v34 = v51;
                    v35 = v49;
                    v36 = &v28;
                    v37 = &v8;
                    v38 = a1;
                    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
                    {
                        v20 = v14;
                        memcpy(&v19, &v12, 16);
                    }
                    else
                    {
                        v7 = v17;
                        v54 = *((int128_t *)&v11);
                        v6 = v16;
                        memcpy(&v4, &v15, 16);
                        *((int128_t *)&v3) = *((int128_t *)&v13);
                        v1 = v54;
                        starship::modules::jobs::module::{{closure}}(&v18, &v34, &v0);
                        if (!(v18 & 1))
                        {
                            v39.set_segments(&v19);
                            *((int128_t *)&a0[80]) = *((int128_t *)&v44);
                            a0[64] = v43;
                            a0[48] = v42;
                            a0[32] = v41;
                            a0[16] = v40;
                            *(a0) = v39;
                            core::ptr::drop_in_place<alloc::string::String>(&v8);
                            return;
                        }
                    }
                    v23 = v20;
                    memcpy(&v22, &v19, 16);
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v32 = &v22;
                        v33 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v0 = &g_11f50b0;
                        v2 = 1;
                        v5 = 0;
                        v3 = &v32;
                        v4 = 1;
                        v11 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                        v12 = 23;
                        v13 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                        v14 = 23;
                        v15 = log::__private_api::loc(&g_11f50d8);
                        log::__private_api::log(&v0, 2, &v11);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v22);
                    core::ptr::drop_in_place<alloc::string::String>(&v8);
                    core::ptr::drop_in_place<starship::module::Module>(&v39);
                    return;
                }
            }
            else
            {
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v18 = &v31;
                    v19 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                    v0 = &g_11f5080;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v18;
                    v4 = 1;
                    v11 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                    v12 = 23;
                    v13 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
                    v14 = 23;
                    v15 = log::__private_api::loc(&g_11f50f0);
                    log::__private_api::log(&v0, 2, &v11);
                }
            }
        }
        else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v18 = &v30;
            v19 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v0 = &g_11f5060;
            v2 = 2;
            v5 = 0;
            v3 = &v18;
            v4 = 1;
            v11 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
            v12 = 23;
            v13 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
            v14 = 23;
            v15 = log::__private_api::loc(&g_11f5108);
            log::__private_api::log(&v0, 2, &v11);
        }
    }
    else
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v18 = &v29;
            v19 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v0 = &g_11f5040;
            v2 = 2;
            v5 = 0;
            v3 = &v18;
            v4 = 1;
            v11 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
            v12 = 23;
            v13 = "starship::modules::jobsnumberError in module `julia`:\nsrc/modules/julia.rs";
            v14 = 23;
            v15 = log::__private_api::loc(&g_11f5120);
            log::__private_api::log(&v0, 2, &v11);
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::module::Module>(&v39);
    return;
}
