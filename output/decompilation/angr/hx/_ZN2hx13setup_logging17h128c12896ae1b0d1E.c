long long hx::setup_logging(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x1a8]
    unsigned int v1;  // [bp-0x1a0]
    char v2;  // [bp-0x19e]
    char v3;  // [bp-0x19c], Other Possible Types: unsigned short
    int v4;  // [bp-0x198], Other Possible Types: unsigned long long
    int v5;  // [bp-0x198]
    void* v6;  // [bp-0x190]
    int v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x188]
    int v9;  // [bp-0x180]
    int v10;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x170]
    unsigned long long v12;  // [bp-0x168]
    int v13;  // [bp-0x168]
    unsigned long long v14;  // [bp-0x160]
    int v15;  // [bp-0x158]
    unsigned long long v16;  // [bp-0x158]
    int v17;  // [bp-0x150]
    unsigned long long v18;  // [bp-0x148]
    unsigned long v19;  // [bp-0x138]
    void* v20;  // [bp-0x130]
    int v21;  // [bp-0x130]
    unsigned long long v22;  // [bp-0x128]
    int v23;  // [bp-0x120]
    unsigned long long v24;  // [bp-0x110]
    int v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    unsigned long long v27;  // [bp-0xf8]
    int v28;  // [bp-0xf0]
    unsigned long long v29;  // [bp-0xe0]
    char v30;  // [bp-0xd8], Other Possible Types: unsigned int
    unsigned int v31;  // [bp-0xd4]
    unsigned long long v32;  // [bp-0xd0]
    char v33;  // [bp-0xc8]
    char v34;  // [bp-0x68]
    int v36;  // xmm1
    unsigned long v37;  // rcx
    unsigned long long v38;  // rax
    int v39;  // xmm0
    int v40;  // xmm1

    v20 = 0;
    v22 = 8;
    *((uint128_t *)&v23) = 0;
    v24 = 8;
    *((uint128_t *)&v25) = 0;
    v27 = 8;
    *((uint128_t *)&v28) = 0;
    v18 = v29;
    *((int128_t *)&v15) = (int128_t)v28;
    v12 = v26;
    v14 = v27;
    v10 = 8;
    v11 = (long long)v25;
    *((int128_t *)&v7) = (int128_t)v23;
    v36 = *((int128_t *)&v20);
    v4 = v36;
    v37 = (a0 < 3 ? a0 : 3);
    v19 = (a0 < 3 ? a0 : 3) + 2;
    v29 = v18;
    v21 = v36;
    v6 = 0;
    v8 = 8;
    *((uint128_t *)&v9) = 0;
    v4 = 5;
    v11 = 8;
    *((uint128_t *)&v13) = 0;
    v16 = 8;
    *((uint128_t *)&v17) = 0;
    v33.format(&v4);
    helix_loader::log_file(&v4);
    v0 = 0x1b600000000;
    v3 = 0;
    v1 = 0;
    v3 = 1;
    v2 = 1;
    v30.open(&v0, &v4);
    if (v30 == 1)
    {
        v38 = v32.new();
        core::ptr::drop_in_place<fern::builders::Dispatch>(&v33);
        core::ptr::drop_in_place<fern::builders::Dispatch>(&v19);
        return v38;
    }
    v34.chain(&v33, v31);
    memcpy(&v18, &(char)v28, 16);
    *((int128_t *)&v15) = *((int128_t *)&v27);
    v39 = *((int128_t *)&v19);
    v40 = (int128_t)(&v21)[8];
    memcpy(&v12, &(char)v25, 16);
    *((int128_t *)&v10) = (int128_t)(&v23)[8];
    v7 = v40;
    v5 = v39;
    v33.chain(&v4, &v34);
    if ((char)v33.apply())
        return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
    return 0;
}
