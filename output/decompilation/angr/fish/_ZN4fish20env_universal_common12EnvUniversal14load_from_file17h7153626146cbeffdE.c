long long fish::env_universal_common::EnvUniversal::load_from_file(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128], Other Possible Types: unsigned long long
    int v3;  // [bp-0x118], Other Possible Types: char
    int v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    char v7;  // [bp-0xe8], Other Possible Types: unsigned long
    char v8;  // [bp-0xe0]
    unsigned long long v9;  // [bp-0xd0]
    int v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xb8]
    int v12;  // [bp-0xb0]
    int v13;  // [bp-0xa0]
    int v14;  // [bp-0x98]
    char v15;  // [bp-0x90]
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x78]
    char v18;  // [bp-0x60]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    char v22;  // bpl
    int v23;  // xmm0
    unsigned long long v24;  // rax

    fish::wutil::fileid::file_id_for_file(&v18, a2);
    if (!v18.eq(a1 + 144))
    {
        v20 = std::thread::local::LocalKey<T>::with();
        *((uint128_t *)&v3) = g_14bd810;
        *((uint128_t *)&v4) = g_14bd820;
        v5 = v20;
        v6 = v21;
        v22 = a2.read_message_internal(&v3);
        v7.generate_callbacks_and_update_exports(a1, &v3);
        v2 = v9;
        memcpy(&(char)v0, &v8, 16);
        a1.acquire_variables(&v3);
        memcpy(&v15, &v5, 16);
        v13 = v4;
        v12 = v3;
        v11 = v2;
        v23 = *((int128_t *)&v0);
        *(a0) = v23;
        *((long long *)&a0[64]) = *((long long *)&v16);
        a0[48] = v14;
        *((int128_t *)&a0[32]) = (int128_t)(&v12)[8];
        *((unsigned long long *)&a0[16]) = v11;
        v24 = (long long)v12;
        *((unsigned long long *)&a0[24]) = v24;
        *((unsigned long *)&a0[72]) = v7;
        *((char *)&a0[80]) = v22 != 2;
        v10 = v23;
        *((char *)&a0[88]) = v22 != 2;
        return v24;
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7.to_flog_str(&g_15a9790);
        v3.into_iter(&v7);
        v0.spec_extend(&v3);
        v0.push(58, &g_14d7408);
        v0.push(32, &g_14d7408);
        v17.to_vec("universal log sync elided based on fstat()", 42);
        v3.into_iter(&v17);
        v0.spec_extend(&v3);
        v0.push(10, &g_14d7408);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
