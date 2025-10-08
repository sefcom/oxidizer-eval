long long fd::walk::WorkerState::build_overrides(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x130]
    int v1;  // [bp-0x128]
    int v2;  // [bp-0x118]
    int v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    char v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    int v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    int v13;  // [bp-0xa8]
    int v14;  // [bp-0x98]
    unsigned long v15;  // [bp-0x88]
    char v16;  // [bp-0x80]
    void* v18;  // rbp
    unsigned long long v19;  // rcx
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2

    v16.new(a3);
    if (a2)
    {
        v18 = 0;
        do
        {
            v1.add(&v16, *((long long *)(8 + a1 + (char *)v18)), *((long long *)(16 + a1 + (char *)v18)));
            if ((int)v1 != 9)
            {
                v11 = v4;
                v9 = v3;
                v7 = v2;
                v5 = v1;
                *((long long *)&v0[8]) = fd::walk::WorkerState::build_overrides::{{closure}}(&(char)v5, a1, a2);
                *((unsigned long long *)v0) = 0x8000000000000000;
                return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(&v16);
            }
            v18 += 24;
        } while (a2 * 24 != v18);
    }
    (char)v5.build(&v16);
    if (!((char)(((0 ^ (long long)v5) & (0 ^ -((long long)v5))) >> 63)))
    {
        v19 = a0;
        *((unsigned long *)&v0[96]) = v15;
        v0[80] = v14;
        v0[64] = v13;
        v20 = (int128_t)v5;
        v21 = (int128_t)v7;
        v22 = (int128_t)v9;
        *((int128_t *)&v0[48]) = *((int128_t *)&v11);
        v0[32] = v22;
        v0[16] = v21;
        *(v0) = v20;
        return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(&v16);
    }
    v4 = v12;
    memcpy(&v3, &v10, 16);
    memcpy(&v2, &v8, 16);
    memcpy(&v1, &v6, 16);
    *((long long *)&v0[8]) = fd::walk::WorkerState::build_overrides::{{closure}}(&v1);
    *((unsigned long long *)v0) = 0x8000000000000000;
    return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(&v16);
}
