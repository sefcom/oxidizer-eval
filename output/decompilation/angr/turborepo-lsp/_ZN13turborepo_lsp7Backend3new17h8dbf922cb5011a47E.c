long long turborepo_lsp::Backend::new(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1d0]
    char v2;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1c8]
    unsigned long long v4;  // [bp-0x1c0]
    unsigned long long v5;  // [bp-0x1b8]
    unsigned long long v6;  // [bp-0x1b0]
    unsigned long long v7;  // [bp-0x1a8]
    unsigned long long v8;  // [bp-0x1a0]
    unsigned long long v9;  // [bp-0x198]
    int v10;  // [bp-0x195]
    unsigned long long v11;  // [bp-0x190]
    unsigned int v12;  // [bp-0x188]
    int v13;  // [bp-0x185]
    char v14;  // [bp-0x184]
    unsigned long long v15;  // [bp-0x180]
    unsigned long long v17;  // rax
    int v18;  // xmm1
    unsigned long v19;  // rdx

    v0 = a1;
    v9 = 2;
    tokio::sync::watch::channel(&v2, &(char)v9);
    v1 = v3;
    v7 = v4;
    v8 = v5;
    v6 = a1;
    v9 = 1;
    v11 = 1;
    v12 = 0;
    v14 = 0;
    v15 = 0x8000000000000000;
    *((double *)&v2) = (char)v9.new();
    v17 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v13) = g_d269a8;
    *((uint128_t *)&v10) = g_d26998;
    a0->field_0 = a1;
    a0->field_8 = v2;
    a0->field_28 = 0;
    a0->field_2c = 0;
    v18 = (int128_t)(&v10)[13];
    *((int128_t *)&(&a0->field_2c)[1]) = *((int128_t *)&v9);
    *((void*)((char *)&a0->field_2d + 13)) = v18;
    *((int *)&a0->field_3d[12]) = (int)(&v13)[12];
    *((unsigned long long *)&a0->field_3d[16]) = v17;
    a0->field_50 = v19;
    a0->field_10 = v3;
    a0->field_18 = v4;
    a0->field_20 = v5;
    *((unsigned int *)&a0->field_58) = 0;
    *((char *)&a0->field_58 + 4) = 0;
    *((unsigned long long *)&a0->field_60) = 0x8000000000000000;
    return a0;
}
