void uu_id::pretty(void* a0)
{
    char *v0;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1b0]
    char *v2;  // [bp-0x1a8], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x198]
    char *v5;  // [bp-0x190], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x188]
    void* v7;  // [bp-0x180]
    unsigned int v8;  // [bp-0x170]
    unsigned int v9;  // [bp-0x16c]
    int v10;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x168]
    unsigned long long v14;  // [bp-0x160]
    unsigned long long v15;  // [bp-0x160]
    char *v16;  // [bp-0x158], Other Possible Types: int
    char *v17;  // [bp-0x158]
    unsigned long long v18;  // [bp-0x150]
    int v19;  // [bp-0x148], Other Possible Types: void*
    int v20;  // [bp-0x138]
    int v21;  // [bp-0x128]
    int v22;  // [bp-0x118], Other Possible Types: char
    int v23;  // [bp-0x108]
    int v24;  // [bp-0xf8], Other Possible Types: char
    char *v25;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0xe0]
    char *v27;  // [bp-0xd8]
    char *v28;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    int v29;  // [bp-0xc8]
    unsigned long long v30;  // [bp-0xc0]
    int v31;  // [bp-0xb8], Other Possible Types: char *, char, unsigned long long
    unsigned long long v32;  // [bp-0xb0]
    void* v33;  // [bp-0xa8], Other Possible Types: char
    int v34;  // [bp-0x98]
    int v35;  // [bp-0x88]
    int v36;  // [bp-0x78], Other Possible Types: char
    int v37;  // [bp-0x68]
    int v38;  // [bp-0x58], Other Possible Types: char
    char *v39;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v40;  // [bp-0x38]
    char *v42;  // rax
    int v44;  // xmm0
    int v45;  // xmm0
    int v46;  // xmm0
    unsigned long long v47;  // rdx
    int v48;  // xmm0

    if (!((char)(((0 ^ *((long long *)a0)) & (0 ^ -(*((long long *)a0)))) >> 63)))
    {
        *((int128_t *)&v24) = (int128_t)a0[112];
        *((int128_t *)&v23) = (int128_t)a0[96];
        *((int128_t *)&v22) = (int128_t)a0[80];
        *((int128_t *)&v21) = (int128_t)a0[64];
        v48 = *((int128_t *)a0);
        *((int128_t *)&v20) = (int128_t)a0[48];
        *((int128_t *)&v19) = (int128_t)a0[32];
        *((int128_t *)&v16) = (int128_t)a0[16];
        v10 = v48;
        v3 = &(char)v10;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v28 = &g_4e8d58;
        v30 = 2;
        v33 = 0;
        v31 = &v3;
        v32 = 1;
        std::io::stdio::_print(&v28);
        v3.belongs_to(&(char)v10);
        (char)v0.collect(<alloc::string::String as core::fmt::Display>::fmt, <alloc::string::String as core::fmt::Display>::fmt + v5 * 4);
        alloc::str::join_generic_copy(&v28, v1, v2, " \nlogin\teuid\tgroups\tsrc/uu/id/src/id.rs:() gid= euid= egid=");
        v27 = v31;
        memcpy(&(char)v25, &v28, 16);
        v39 = &(char)v25;
        v40 = <alloc::string::String as core::fmt::Display>::fmt;
        v28 = &g_4e8d78;
        v30 = 2;
        v33 = 0;
        v31 = &v39;
        v32 = 1;
        std::io::stdio::_print(&v28);
        core::ptr::drop_in_place<alloc::string::String>(v25, v26);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v3, <alloc::string::String as core::fmt::Display>::fmt);
        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&(char)v10);
        return;
    }
    v42 = getlogin();
    if (v42)
    {
        (char)v10.to_string_lossy(v42, strlen(v42) + 1);
        v12 = v11;
        v17 = v16;
    }
    else
    {
        v11 = 9223372036854775809;
    }
    v13 = v12;
    v8 = uucore::features::process::getuid();
    v28.locate(v8);
    if (v28 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v28);
        v28 = &v8;
        v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v13 = &g_4e8db8;
        v14 = 2;
        v19 = 0;
        v17 = &v28;
        v18 = 1;
        std::io::stdio::_print(&v13);
    }
    else
    {
        memcpy(&v24, &v38, 16);
        v23 = v37;
        memcpy(&v22, &v36, 16);
        v21 = v35;
        v44 = *((int128_t *)&v28);
        v20 = v34;
        memcpy(&v19, &v33, 16);
        *((int128_t *)&v16) = *((int128_t *)&v31);
        v10 = v44;
        if (v11 != 9223372036854775809)
        {
            v0 = v11;
            v1 = v15;
            v2 = v16;
            v25 = &v0;
            v26 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v3 = &g_4e8d98;
            v4 = 2;
            v7 = 0;
            v5 = &v25;
            v6 = 1;
            std::io::stdio::_print(&v3);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v0, v1);
        }
        v0 = &(char)v10;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_4e8db8;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_print(&v3);
        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&(char)v10);
    }
    v9 = uucore::features::process::getegid();
    if (v9 == v8)
    {
        v28.locate(v9);
        if (v28 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v28);
            v28 = &v9;
            v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v13 = &g_4e8dd8;
            v14 = 2;
            v19 = 0;
            v17 = &v28;
            v18 = 1;
            std::io::stdio::_print(&v13);
        }
        else
        {
            memcpy(&v24, &v38, 16);
            v23 = v37;
            memcpy(&v22, &v36, 16);
            v21 = v35;
            v45 = *((int128_t *)&v28);
            v20 = v34;
            memcpy(&v19, &v33, 16);
            *((int128_t *)&v16) = *((int128_t *)&v31);
            v10 = v45;
            v0 = &v13;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_4e8dd8;
            v4 = 2;
            v7 = 0;
            v5 = &v0;
            v6 = 1;
            std::io::stdio::_print(&v3);
            core::ptr::drop_in_place<uucore::features::entries::Passwd>(&v13);
        }
    }
    v39 = uucore::features::process::getgid();
    if (v39 != v9)
    {
        v3.locate(v39);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Group,std::io::error::Error>>(&v3);
            v28 = &v39;
            v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v13 = &g_4e8dd8;
            v14 = 2;
            v19 = 0;
            v17 = &v28;
            v18 = 1;
            std::io::stdio::_print(&v13);
        }
        else
        {
            v46 = *((int128_t *)&v3);
            *((int128_t *)&v31) = *((int128_t *)&v5);
            v29 = v46;
            v0 = &v28;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &g_4e8dd8;
            v14 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_print(&v13);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v28, v30);
        }
    }
    uucore::features::entries::get_groups_gnu(&v13, 0, v47);
    v28.unwrap(&v13);
    v3.collect(v30, v30 + v31 * 4);
    alloc::str::join_generic_copy(&v13, v4, v5, " \nlogin\teuid\tgroups\tsrc/uu/id/src/id.rs:() gid= euid= egid=");
    v2 = v17;
    memcpy(&v0, &v13, 16);
    v25 = &v0;
    v26 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &g_4e8df8;
    v14 = 2;
    v19 = 0;
    v16 = &v25;
    v18 = 1;
    std::io::stdio::_print(&v10);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v28, v30);
    if (v11 == 9223372036854775809)
        return;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v11, v15);
    return;
}
