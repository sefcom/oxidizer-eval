long long uu_pinky::platform::unix::Pinky::print_entry(char a0[30], unsigned long long a1)
{
    char *v0;  // [bp-0x1c0], Other Possible Types: char
    char *v1;  // [bp-0x1c0]
    unsigned long long v2;  // [sp-0x1b8]
    unsigned long long v3;  // [bp-0x1b0]
    unsigned long long v4[4];  // [sp-0x1a8]
    unsigned long long v5[4];  // [bp-0x1a8]
    unsigned long long v6;  // [sp-0x1a0]
    int v7;  // [bp-0x198], Other Possible Types: char *, unsigned long long
    int v8;  // [bp-0x190], Other Possible Types: unsigned long long
    int v9;  // [bp-0x188], Other Possible Types: void*, unsigned long long
    unsigned short v10;  // [bp-0x180], Other Possible Types: unsigned long long
    int v11;  // [bp-0x178]
    char v12;  // [bp-0x170]
    int v13;  // [bp-0x168]
    char v14;  // [bp-0x158]
    int v15;  // [bp-0x148]
    char v16;  // [bp-0x140]
    char v17;  // [bp-0x138]
    unsigned int v18;  // [bp-0xf4]
    unsigned long long v19;  // [bp-0xf0]
    char *v20;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v21;  // [bp-0xe8]
    unsigned long long v22;  // [sp-0xe0]
    void* v23;  // [bp-0xd8], Other Possible Types: char *, unsigned long long
    unsigned long long v24;  // [bp-0xd0], Other Possible Types: unsigned short
    char v25;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0xc0]
    int v27;  // [bp-0xb8]
    int v28;  // [bp-0xa8]
    char v29;  // [bp-0x98]
    int v30;  // [bp-0x88]
    char v31;  // [bp-0x78]
    char v32;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0x58]
    unsigned long long v34;  // [bp-0x50]
    int v35;  // [bp-0x48], Other Possible Types: char
    char v36;  // [bp-0x38]
    unsigned int v38;  // eax
    unsigned long long v39;  // r15
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2

    v32.to_vec("/devCyan    EADV", 4);
    v4.tty_device(a1);
    v32.push(v6, v7);
    core::ptr::drop_in_place<alloc::string::String>(&v4);
    std::fs::metadata(&v4, v33, v34);
    if (v4 == 2)
    {
        v38 = 63;
        v39 = 0;
    }
    else
    {
        v39 = *((long long *)&v16);
        v38 = (!(v12 & 16) ? 42 : 32);
    }
    v18 = v38;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v4, v6);
    v0.user(a1);
    *((char **)&v21) = &v0;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    v23 = 0;
    v24 = 32;
    *(v5) = &g_419240;
    v6 = 1;
    v9 = &g_41a668;
    v10 = 1;
    v7 = &(unsigned long long)v21;
    v8 = 2;
    std::io::stdio::_print(&(unsigned long long)v5);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    if (a0[26])
    {
        v0.user(a1);
        (unsigned long long)v21.locate(v2, v3);
        if ((char)(((0 ^ v20) & (0 ^ -(v20))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&(unsigned long long)v21);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v20 = &g_4f8f80;
            v22 = <&T as core::fmt::Display>::fmt;
            *(v4) = &g_4f8f60;
            v6 = 1;
            v9 = &g_41a6a8;
            v10 = 1;
            v7 = &v20;
            v8 = 1;
            std::io::stdio::_print(&v4);
        }
        else
        {
            v19 = v39;
            memcpy(&v17, &v31, 16);
            v15 = v30;
            memcpy(&v14, &v29, 16);
            v13 = v28;
            v40 = *((int128_t *)&v20);
            v41 = *((int128_t *)&v23);
            v42 = *((int128_t *)&v25);
            v11 = v27;
            v9 = v42;
            v7 = v41;
            *((void*)v5) = v40;
            uu_pinky::platform::unix::gecos_to_fullname(&v35, &(unsigned long long)v5);
            core::ptr::drop_in_place<uucore::features::entries::Passwd>(&(unsigned long long)v5);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            if (*((long long *)&v35) == 0x8000000000000000)
            {
                v20 = &g_4f8f80;
                v22 = <&T as core::fmt::Display>::fmt;
                *(v4) = &g_4f8f60;
                v6 = 1;
                v9 = &g_41a6a8;
                v10 = 1;
                v7 = &v20;
                v8 = 1;
                std::io::stdio::_print(&v4);
                v39 = v19;
            }
            else
            {
                v23 = *((long long *)&v36);
                v21 = v35;
                v1 = &(unsigned long long)v21;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                *(v4) = &g_4f8f60;
                v6 = 1;
                v9 = &g_41a6d8;
                v10 = 1;
                v7 = &v1;
                v8 = 1;
                std::io::stdio::_print(&v4);
                v39 = v19;
                core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v21);
            }
        }
    }
    v0.tty_device(a1);
    *(v4) = &v18;
    v6 = <char as core::fmt::Display>::fmt;
    v7 = &v0;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = 0;
    v10 = 32;
    v20 = &g_4f8f90;
    v22 = 2;
    v25 = &g_41a708;
    v26 = 2;
    v23 = &v4;
    v24 = 3;
    std::io::stdio::_print(&v20);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    if (a0[24])
    {
        if (v39)
        {
            uu_pinky::platform::unix::idle_string(&v20, v39);
            v0 = &v20;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            *(v4) = &g_4f8f60;
            v6 = 1;
            v9 = &g_41a770;
            v10 = 1;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_print(&v4);
            core::ptr::drop_in_place<alloc::string::String>(&v20);
        }
        else
        {
            v20 = &g_4f8fb0;
            v22 = <&T as core::fmt::Display>::fmt;
            *(v4) = &g_4f8f60;
            v6 = 1;
            v9 = &g_41a770;
            v10 = 1;
            v7 = &v20;
            v8 = 1;
            std::io::stdio::_print(&v4);
        }
    }
    uu_pinky::platform::unix::time_string(&v20, a1);
    v0 = &v20;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    *(v4) = &g_4f8f60;
    v6 = 1;
    v9 = 0;
    v7 = &v0;
    v8 = 1;
    std::io::stdio::_print(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    v20.host(a1);
    if (a0[29] && v23)
    {
        v4.canon_host(a1);
        core::ptr::drop_in_place<alloc::string::String>(&v20);
        if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        {
            core::ptr::drop_in_place<std::path::PathBuf>(v32, v33);
            return 1;
        }
        *((unsigned long long [4])&v20) = v4;
        v22 = 1;
        v23 = v7;
        v0 = &v20;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        *(v4) = &g_4f8f60;
        v6 = 1;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        std::io::stdio::_print(&v4);
    }
    *(v4) = &g_4f8f70;
    v6 = 1;
    v7 = 8;
    *((uint128_t *)&v8) = 0;
    std::io::stdio::_print(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    core::ptr::drop_in_place<std::path::PathBuf>(v32, v33);
    return 0;
}
