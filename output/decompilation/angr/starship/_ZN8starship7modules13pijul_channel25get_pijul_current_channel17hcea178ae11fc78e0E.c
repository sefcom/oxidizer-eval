long long starship::modules::pijul_channel::get_pijul_current_channel(void* a0, void* a1)
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    int v3;  // [bp-0x98]
    int v4;  // [bp-0x88]
    int v5;  // [bp-0x78]
    void* v6;  // [bp-0x60], Other Possible Types: unsigned long long (64 bits)[1], unsigned long long
    unsigned long long v7;  // [bp-0x58]
    int v8;  // [bp-0x50]
    int v9;  // [bp-0x40]
    char v10;  // [bp-0x30]
    unsigned short v11;  // [bp-0x20]
    int v13;  // xmm0
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    v6.exec_cmd(a1, "pijul* PIXI_ENVIRONMENT_NAMEError in module `pixi`:\nsrc/modules/pixi.rs", 5, &g_11f5b28, 1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v13 = *((int128_t *)&v6);
    v5 = v9;
    v4 = v8;
    v3 = v13;
    v0 = v3;
    v2 = (long long)v4;
    core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
    v3.into_searcher(10, v1, v2);
    memcpy(&v10, &v5, 16);
    memcpy(&v9, &v4, 16);
    v8 = v3;
    v6 = 0;
    v7 = v2;
    v11 = 0;
    v14 = v6.try_fold();
    if (v14)
    {
        v3.to_vec(v14, v15);
        *((long long *)&a0[16]) = (long long)v4;
        *(a0) = v3;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
}
