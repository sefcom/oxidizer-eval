long long starship::modules::rust::execute_rustup_default(void* a0, void* a1)
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    void* v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    int v10;  // [bp-0x50]
    unsigned short v11;  // [bp-0x38]
    int v12;  // [bp-0x30], Other Possible Types: char
    char v13;  // [bp-0x20]
    int v15;  // xmm0
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v6 = &g_11f5fd0;
        v7 = 1;
        v8 = 8;
        *((uint128_t *)&v9) = 0;
        v1 = "starship::modules::rustRustup rustc version is ";
        v2 = 23;
        v3 = "starship::modules::rustRustup rustc version is ";
        v4 = 23;
        v5 = log::__private_api::loc(&g_11f5fe0);
        log::__private_api::log(&v6, 5, &v1);
    }
    v6.exec_cmd(a1, "rustuprunRustup verbose version is ", 6, &g_11f5ff8, 1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v15 = *((int128_t *)&v6);
    memcpy(&v5, &v10, 16);
    *((int128_t *)&v3) = *((int128_t *)&v8);
    v0 = v15;
    v8.into_searcher(v2, v3);
    v6 = 0;
    v7 = v3;
    v11 = 1;
    v16 = v6.try_fold();
    if (v16)
    {
        v12.to_vec(v16, v17);
        *((long long *)&a0[16]) = *((long long *)&v13);
        *(a0) = v12;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::utils::CommandOutput>(&(unsigned long long)v0);
}
