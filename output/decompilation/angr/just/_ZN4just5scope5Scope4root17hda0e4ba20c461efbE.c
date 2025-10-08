long long just::scope::Scope::root(unsigned long a0)
{
    uint128_t v0[2];  // [bp-0x100]
    void* v1;  // [bp-0xf8]
    uint128_t v2;  // [bp-0xe8]
    int v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    void* v9;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x98]
    uint128_t v11;  // [bp-0x90]
    char v12;  // [bp-0x80]
    unsigned int v13;  // [bp-0x78]
    unsigned short v14;  // [bp-0x74]
    char v15;  // [bp-0x72]
    int v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x60]
    char v18;  // [bp-0x58]
    unsigned long long v21[2];  // rax
    unsigned long long v22[2];  // rdx
    int v23;  // xmm0

    v1 = 0;
    v2 = 0;
    v18.iter(just::constants::constants());
    if (v18.next())
    {
        do
        {
            v16.to_vec(v22[0], v22[1]);
            v4 = v17;
            v3 = v16;
            v14 = 1;
            v13 = 0;
            v5 = "PRELUDEsrc/search.rs";
            v6 = 7;
            v7 = v21[0];
            v8 = v21[1];
            v9 = 0;
            v10 = v21[1];
            v11 = 0;
            v12 = 24;
            v15 = 0;
            v1.bind(&v3);
            v21 = v18.next();
        } while (v21);
    }
    v23 = *((int128_t *)&v1);
    v0[1] = 0;
    *((void*)&v0[0]) = v23;
    return v0;
}
