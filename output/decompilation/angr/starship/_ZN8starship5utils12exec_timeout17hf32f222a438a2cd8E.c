long long starship::utils::exec_timeout(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char *v0;  // [bp-0x1f8], Other Possible Types: int, unsigned long long
    unsigned long long v1;  // [bp-0x1f0]
    int v2;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1e0]
    unsigned long long v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1c8], Other Possible Types: char *, unsigned long long
    unsigned long long v6;  // [bp-0x1c0]
    char *v7;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v8;  // [bp-0x1b0], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v9;  // [bp-0x1b0]
    char *v10;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v11;  // [bp-0x1a0]
    void* v12;  // [sp-0x198], Other Possible Types: char *
    unsigned long long v13;  // [bp-0x190]
    int v14;  // [bp-0x188]
    char v15;  // [bp-0x17c]
    unsigned short v16;  // [bp-0x16c]
    char *v17;  // [bp-0x160], Other Possible Types: char, unsigned long, unsigned long long
    char v18;  // [bp-0x15c]
    unsigned long long v19;  // [bp-0x158]
    char *v20;  // [bp-0x150], Other Possible Types: char, unsigned long long
    unsigned long long v21;  // [bp-0x148]
    void* v22;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x130]
    char v24;  // [bp-0x128], Other Possible Types: unsigned int
    char v25;  // [bp-0x120]
    unsigned long long v26;  // [bp-0x118]
    unsigned long long v27;  // [bp-0x110]
    int v28;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x100]
    int v30;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0xf0]
    int v32;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v33;  // [bp-0xd8]
    unsigned int v34;  // [bp-0xd4]
    char v35;  // [bp-0xd0]
    int v36;  // [bp-0xc8], Other Possible Types: char *
    unsigned long long v37;  // [bp-0xc0]
    unsigned long long v38;  // [bp-0xb8]
    char *v39;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long v40;  // [bp-0xa0], Other Possible Types: unsigned long long
    char v41;  // [bp-0x98]
    int v42;  // [bp-0x98]
    unsigned long long v43;  // [bp-0x88]
    char *v44;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v45;  // [bp-0x70]
    char *v46;  // [bp-0x68]
    unsigned long long v47;  // [bp-0x60]
    int v48;  // [bp-0x58]
    char v49;  // [bp-0x48]
    unsigned long long v50;  // [bp-0x38]
    unsigned int v51;  // [bp-0x30]
    unsigned int v53;  // edx
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rdx
    int v56;  // xmm0
    char v57;  // bpl
    unsigned long long v58;  // rax
    int v59;  // xmm0
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx

    v50 = std::time::Instant::now();
    v51 = v53;
    (char)v17.spawn(a1);
    if (*((int *)&v17) == 1)
    {
        v23 = v19;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 3)
        {
            v0 = a1.get_program();
            v1 = v54;
            v44 = &v0;
            v45 = <&T as core::fmt::Debug>::fmt;
            v46 = &v23;
            v47 = <std::io::error::Error as core::fmt::Debug>::fmt;
            v5 = &g_11f73c8;
            v6 = 2;
            v10 = 0;
            v7 = &v44;
            v8 = 2;
            v28 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v29 = 15;
            v30 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
            v31 = 15;
            v32 = log::__private_api::loc(&g_11f7528);
            log::__private_api::log(&v5, 3, &v28);
        }
    }
    else
    {
        memcpy(&v15, &v20, 16);
        *((int128_t *)&v14) = *((int128_t *)&v18);
        v5 = 0;
        v7 = a2;
        v8 = a3;
        v10 = 0;
        v12 = 0;
        v16 = 0x100;
        (char)v44.wait(&v5);
        if ((char)(((0 ^ v44) & (0 ^ -(v44))) >> 63))
        {
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v17 = a1.get_program();
                v19 = v62;
                v0 = &(char)v17;
                v1 = <&T as core::fmt::Debug>::fmt;
                v5 = &g_11f7448;
                v6 = 2;
                v10 = 0;
                v7 = &v0;
                v9 = 1;
                v28 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v29 = 15;
                v30 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v31 = 15;
                v32 = log::__private_api::loc(&g_11f7498);
                log::__private_api::log(&v5, 2, &v28);
            }
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v5 = &g_11f7468;
                v6 = 1;
                v7 = 8;
                *((uint128_t *)&v8) = 0;
                v28 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v29 = 15;
                v30 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v31 = 15;
                v32 = log::__private_api::loc(&g_11f74b0);
                log::__private_api::log(&v5, 2, &v28);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            return a0;
        }
        else if (v44 == 9223372036854775809)
        {
            v23 = v45;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 3)
            {
                v0 = a1.get_program();
                v1 = v55;
                v17 = &v0;
                v19 = <&T as core::fmt::Debug>::fmt;
                v20 = &v23;
                v21 = <std::io::error::Error as core::fmt::Debug>::fmt;
                v5 = &g_11f7478;
                v6 = 2;
                v10 = 0;
                v7 = &(char)v17;
                v8 = 2;
                v28 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v29 = 15;
                v30 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                v31 = 15;
                v32 = log::__private_api::loc(&g_11f7510);
                log::__private_api::log(&v5, 3, &v28);
            }
        }
        else
        {
            v56 = *((int128_t *)&v44);
            memcpy(&v33, &v49, 16);
            v32 = v48;
            *((int128_t *)&v30) = *((int128_t *)&v46);
            v28 = v56;
            (char)v23.from_utf8(&(char)v44);
            if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
            {
                v43 = v26;
                memcpy(&v41, &v24, 16);
                (char)v23.from_utf8(&(char)v46);
                if (v23 == 0x8000000000000000)
                {
                    v38 = v26;
                    *((int128_t *)&v36) = *((int128_t *)&v24);
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
                    {
                        v57 = v35;
                        if (v57 == 2)
                        {
                            v40 = v34;
                            v58 = 1;
                        }
                        else
                        {
                            v58 = 0;
                        }
                        v39 = v58;
                        v23 = v50.elapsed();
                        v24 = v53;
                        v5 = &v41;
                        v6 = <alloc::string::String as core::fmt::Debug>::fmt;
                        v7 = &(char)v36;
                        v9 = <alloc::string::String as core::fmt::Debug>::fmt;
                        v10 = &v39;
                        v11 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                        v12 = &v23;
                        v13 = <core::time::Duration as core::fmt::Debug>::fmt;
                        v17 = &g_11f7408;
                        v19 = 4;
                        v22 = 0;
                        v20 = &v5;
                        v21 = 4;
                        v0 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                        v1 = 15;
                        v2 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                        v3 = 15;
                        v4 = log::__private_api::loc(&g_11f74c8);
                        log::__private_api::log(&(char)v17, 5, &v0);
                    }
                    else
                    {
                        v57 = v35;
                    }
                    if (v57 == 2 && !v34)
                    {
                        v7 = v43;
                        v5 = v42;
                        v11 = v38;
                        memcpy(&v9, &(char)v36, 16);
                        *(a0) = v42;
                        *((char **)&a0[32]) = v10;
                        *((unsigned long long *)&a0[40]) = v11;
                        *((unsigned long long *)&a0[16]) = v7;
                        *((unsigned long long *)&a0[24]) = v9;
                        return a0;
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v36);
                }
                else
                {
                    v4 = v27;
                    v59 = *((int128_t *)&v23);
                    *((int128_t *)&v2) = *((int128_t *)&v25);
                    v0 = v59;
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                    {
                        v39 = &(char)v0;
                        v40 = <alloc::string::FromUtf8Error as core::fmt::Debug>::fmt;
                        v5 = &g_11f73f8;
                        v6 = 1;
                        v10 = 0;
                        v7 = &v39;
                        v8 = 1;
                        v60 = log::__private_api::loc(&g_11f74e0);
                        v17 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                        v19 = 15;
                        v20 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                        v21 = 15;
                        v22 = v60;
                        log::__private_api::log(&v5, 2, &(char)v17);
                    }
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::string::FromUtf8Error>(&(char)v0);
                }
                core::ptr::drop_in_place<alloc::string::String>(&v41);
                return a0;
            }
            else
            {
                v4 = v27;
                memcpy(&(char)v2, &v25, 16);
                *((int128_t *)&v0) = *((int128_t *)&v23);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v36 = &(char)v0;
                    v37 = <alloc::string::FromUtf8Error as core::fmt::Debug>::fmt;
                    v5 = &g_11f73e8;
                    v6 = 1;
                    v10 = 0;
                    v7 = &v36;
                    v8 = 1;
                    v61 = log::__private_api::loc(&g_11f74f8);
                    v17 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                    v19 = 15;
                    v20 = "starship::utilsCreating Command for binary Using Unable to find  in PATH, ";
                    v21 = 15;
                    v22 = v61;
                    log::__private_api::log(&v5, 2, &(char)v17);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::FromUtf8Error>(&(char)v0);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v30);
                return a0;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<std::io::error::Error>(&v23);
    return a0;
}
