void starship::init_global_threadpool()
{
    void* v0;  // [bp-0xc8]
    int v1;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    void* v8;  // [bp-0x80]
    char v9;  // [bp-0x78]
    unsigned short v10;  // [bp-0x70]
    char v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    char v17;  // [bp-0x18]
    unsigned long long v20;  // rdx

    v10 = 0;
    v4 = 0;
    v0 = 0;
    v6 = 0;
    v8 = 0;
    *((uint128_t *)&v1) = 0;
    v1 = starship::num_rayon_threads();
    memcpy(&v11, &v0, 16);
    memcpy(&v14, &v3, 16);
    memcpy(&v15, &v5, 16);
    memcpy(&v16, &v7, 16);
    memcpy(&v17, &v9, 16);
    v12 = v1;
    v13 = v2;
    v11.build_global().expect(v20);
    return;
}
