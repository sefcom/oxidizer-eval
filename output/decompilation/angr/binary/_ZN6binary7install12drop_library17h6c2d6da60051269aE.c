long long binary::install::drop_library(struct_0 *a0)
{
    unsigned int v0;  // [bp-0xcc]
    char *v1;  // [bp-0xc8]
    unsigned long long v2;  // [sp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [sp-0xb0]
    unsigned long long v5;  // [sp-0xa8]
    unsigned long long v6;  // [sp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    unsigned long long v9;  // [sp-0x88]
    char *v10;  // [sp-0x80], Other Possible Types: unsigned long long
    int v11;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x70]
    char v13;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned int v14;  // [bp-0x5c]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x40]
    int v19;  // [bp-0x38], Other Possible Types: char
    int v20;  // [bp-0x38]
    int v21;  // [bp-0x38]
    char v22;  // [bp-0x28]
    unsigned long long v23;  // [bp-0x20]
    char v24;  // [bp-0x18]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
    {
        v8 = &g_1ce6d38;
        v9 = 1;
        v10 = 8;
        *((uint128_t *)&v11) = 0;
        v3 = "binary::install";
        v4 = 15;
        v5 = "binary::install";
        v6 = 15;
        v7 = log::__private_api::loc(&g_1ce6d78);
        log::__private_api::log(&v8, 3, &v3);
    }
    binary::install::find_library_path(&v22);
    v16.join(v23, *((long long *)&v24), "libcext.so.2", 12);
    (char)v13.create(&v16);
    if (*((int *)&v13) == 1)
    {
        if (::0x1bcf200::core::sync::atomic::atomic_load())
        {
            memcpy(&v19, &v17, 16);
            v1 = &v19;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v8 = &g_1ce6d48;
            v9 = 1;
            v12 = 0;
            v10 = &v1;
            v11 = 1;
            v3 = "binary::install";
            v4 = 15;
            v5 = "binary::install";
            v6 = 15;
            v7 = log::__private_api::loc(&g_1ce6dd8);
            log::__private_api::log(&v8, 1, &v3);
        }
        a0->field_10 = v18;
        a0->field_0 = *((int128_t *)&v16);
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v13);
    }
    else
    {
        v0 = v14;
        v26 = v0.write(&g_45047a, "eric23Slim$LT$V$C$4_usize$GT$4find17hddafa1cbfe3b0fffE");
        v13 = v26;
        v15 = v27;
        if (v26 && ::0x1bcf200::core::sync::atomic::atomic_load())
        {
            memcpy(&v19, &v17, 16);
            v1 = &v19;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v8 = &g_1ce6d58;
            v9 = 1;
            v12 = 0;
            v10 = &v1;
            v11 = 1;
            v3 = "binary::install";
            v4 = 15;
            v5 = "binary::install";
            v6 = 15;
            v7 = log::__private_api::loc(&g_1ce6d90);
            log::__private_api::log(&v8, 1, &v3);
        }
        v8 = std::fs::set_permissions(&v16, 511);
        if (v8)
        {
            ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
            v20 = v19;
            if (::0x1bcf200::core::sync::atomic::atomic_load())
            {
                memcpy(&v19, &v17, 16);
                v1 = &v20;
                v2 = <std::path::Display as core::fmt::Display>::fmt;
                v8 = &g_1ce6c70;
                v9 = 1;
                v12 = 0;
                v10 = &v1;
                v11 = 1;
                v3 = "binary::install";
                v4 = 15;
                v5 = "binary::install";
                v6 = 15;
                v7 = log::__private_api::loc(&g_1ce6da8);
                log::__private_api::log(&v8, 1, &v3);
                v20 = v21;
            }
        }
        else
        {
            ::0x1bce5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
            v20 = v19;
        }
        if (::0x1bcf200::core::sync::atomic::atomic_load() > 2)
        {
            memcpy(&v20, &v17, 16);
            v1 = &v20;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v8 = &g_1ce6d68;
            v9 = 1;
            v12 = 0;
            v10 = &v1;
            v11 = 1;
            v3 = "binary::install";
            v4 = 15;
            v5 = "binary::install";
            v6 = 15;
            v7 = log::__private_api::loc(&g_1ce6dc0);
            log::__private_api::log(&v8, 3, &v3);
        }
        a0->field_10 = v18;
        a0->field_0 = *((int128_t *)&v16);
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&(char)v13);
        core::ptr::drop_in_place<std::fs::File>(v0);
    }
    return ::0x1bce4a0::core::ptr::drop_in_place<std::path::PathBuf>(&v22);
}
