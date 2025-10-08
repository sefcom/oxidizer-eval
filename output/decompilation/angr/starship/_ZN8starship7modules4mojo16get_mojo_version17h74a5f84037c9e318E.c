long long starship::modules::mojo::get_mojo_version(void* a0, void* a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf0]
    char *v2;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8], Other Possible Types: char
    int v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    int v13;  // [bp-0x78], Other Possible Types: char
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v16[6];  // [bp-0x58]
    unsigned long v17;  // [bp-0x50]
    char *v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    char v20;  // [bp-0x38]
    unsigned long long v22;  // r15
    int v23;  // xmm0
    unsigned long long v24[6];  // r14
    unsigned long long v26;  // rdx
    unsigned long v27;  // cc_ndep
    unsigned long long v29;  // rdx

    v22 = 0x8000000000000000;
    (char)v0.exec_cmd(a1, "mojo", 4, &g_11f24f0, 1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v23 = *((int128_t *)&v0);
    memcpy(&v10, &v5, 16);
    *((int128_t *)&v8) = *((int128_t *)&v2);
    v6 = v23;
    v11 = v23;
    v12 = v8;
    core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
    *((int128_t *)&v0) = (int128_t)(&v11)[8];
    v2 = 0;
    v15.collect(&(char)v0);
    v24 = v16;
    if (v17 == 2)
    {
        (char)v0.to_vec(core::str::<impl str>::trim_matches(v24[2], v24[3]), v26);
        v14 = v3;
        memcpy(&v13, &(char)v0, 16);
        goto LABEL_ba9bd0;
    }
    else if (!((char)_ccall(6, 8, v17, 2, v27)))
    {
        (char)v0.to_vec(core::str::<impl str>::trim_matches(v24[2], v24[3]), v29);
        v8 = v3;
        memcpy(&(char)v6, &(char)v0, 16);
        (char)v0.to_vec(core::str::<impl str>::trim_matches(v24[4], v24[5]), v29);
        v22 = v0;
        memcpy(&v20, &(char)v0, 16);
        memcpy(&v13, &(char)v6, 16);
        v14 = v8;
LABEL_ba9bd0:
        *((unsigned long long *)&a0[16]) = v14;
        *(a0) = v13;
        *((unsigned long long *)&a0[24]) = v22;
        *((int128_t *)&a0[32]) = *((int128_t *)&v20);
    }
    else
    {
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
        {
            v18 = &(char)v11;
            v19 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_11f5480;
            v1 = 1;
            v5 = 0;
            v2 = &v18;
            v4 = 1;
            v6 = "starship::modules::mojoUnexpected `mojo --version` output: Error in module `nats`:\nsrc/modules/nats.rs";
            v7 = 23;
            v8 = "starship::modules::mojoUnexpected `mojo --version` output: Error in module `nats`:\nsrc/modules/nats.rs";
            v9 = 23;
            v10 = log::__private_api::loc(&g_11f5490);
            log::__private_api::log(&v0, 4, &v6);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v15, v24);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v11);
}
