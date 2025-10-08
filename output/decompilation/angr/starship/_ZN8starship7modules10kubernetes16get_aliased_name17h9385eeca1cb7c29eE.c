long long starship::modules::kubernetes::get_aliased_name(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x170]
    char *v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    void* v4;  // [bp-0x158]
    char v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    char *v7;  // [bp-0x138], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    char *v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    char v12;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    char v17;  // [bp-0xe8]
    unsigned long long v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    char *v20;  // [bp-0xd0]
    char v21;  // [bp-0xc8]
    unsigned long long v22;  // [bp-0xb8]
    char v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0x98]
    unsigned long long v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    char v27;  // [bp-0x78], Other Possible Types: unsigned long
    char v28;  // [bp-0x70]
    char v29;  // [bp-0x68]
    unsigned long long v30;  // [bp-0x60]
    char v31;  // [bp-0x58]
    char v32;  // [bp-0x48]
    unsigned long long v33;  // 4096
    unsigned long long v34;  // rsi
    unsigned long long v35;  // 4096

    if (!a5)
        v33 = a3;
    else
        v33 = a5;
    v34 = v33;
    if (!v34)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if (!a5)
        v35 = a4;
    else
        v35 = a6;
    v5.to_vec(v34, v35);
    if (!a1)
    {
        *((char **)&a0[16]) = v7;
        *((int128_t *)a0) = *((int128_t *)&v5);
        return v7;
    }
    v25 = a1;
    v26 = a2;
    if (a3)
    {
        if ((char)a3.equal(a4, a1, a2))
        {
            *((char **)&a0[16]) = v7;
            *((int128_t *)a0) = *((int128_t *)&v5);
            return v7;
        }
        v8 = &v25;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_11f51a0;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        v12.map_or_else(0, a2, &v0);
        memcpy(&v17, &v12, 16);
        v19 = v14;
        v27.new(v18, v14);
        if (v27)
        {
            memcpy(&v32, &v29, 16);
            memcpy(&v31, &v27, 16);
            core::ptr::drop_in_place<alloc::string::String>(&v17);
            v0.replacen(&v31, a3, a4, 1, v6, v7);
            if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                *((char **)&a0[16]) = v2;
                *((int128_t *)a0) = *((int128_t *)&v0);
            }
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v31);
        }
        else
        {
            v22 = v30;
            memcpy(&v21, &v28, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v8 = &v25;
                v9 = <&T as core::fmt::Display>::fmt;
                v0 = &g_11f51a0;
                v1 = 2;
                v4 = 0;
                v2 = &v8;
                v3 = 1;
                v12.map_or_else(0, a2, &v0);
                memcpy(&v23, &v12, 16);
                v24 = v14;
                v20 = &v23;
                v8 = &v20;
                v9 = <&T as core::fmt::Display>::fmt;
                v10 = &v21;
                v11 = <regex::error::Error as core::fmt::Display>::fmt;
                v0 = &g_11f51c0;
                v1 = 2;
                v4 = 0;
                v2 = &v8;
                v3 = 2;
                v12 = "starship::modules::kubernetesError in module `kubernetes`: \n";
                v13 = 29;
                v14 = "starship::modules::kubernetesError in module `kubernetes`: \n";
                v15 = 29;
                v16 = log::__private_api::loc(&g_11f51e0);
                log::__private_api::log(&v0, 2, &v12);
                core::ptr::drop_in_place<alloc::string::String>(&v23);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<regex::error::Error>(&v21);
            core::ptr::drop_in_place<alloc::string::String>(&v17);
        }
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v5);
}
