double fish::tinyexpr::State::new(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    int v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    void* v5;  // [bp-0x10]
    int v7;  // xmm0
    int v8;  // xmm2

    v3 = a1;
    v4 = a2;
    v5 = 0;
    v0 = 5;
    v2 = 10;
    v0.next_token();
    v7 = *((int128_t *)&v0);
    v8 = *((int128_t *)&v2);
    a0[3] = *((int128_t *)&v4);
    *((void*)&a0[2]) = v8;
    *((void*)&a0[1]) = v1;
    *((void*)&a0[0]) = v7;
    return (unsigned long long)v7;
}
