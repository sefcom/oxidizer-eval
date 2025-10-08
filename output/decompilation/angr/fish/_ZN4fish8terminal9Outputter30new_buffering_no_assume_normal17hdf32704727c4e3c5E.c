long long fish::terminal::Outputter::new_buffering_no_assume_normal(struct_0 *a0)
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x58]
    char v5;  // [bp-0x54]
    char v6;  // [bp-0x53]
    char v7;  // [bp-0x4f]
    unsigned int v8;  // [bp-0x4b]
    unsigned long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    int v12;  // xmm0
    int v13;  // xmm1

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0xffffffff00000000;
    v4 = 0;
    v5 = 5;
    v8 = 0;
    v6 = 0;
    v7 = 0;
    if (!(char)(char)v8.eq(&g_550cf8))
    {
        v10 = 0;
        core::panicking::assert_failed(0, &(char)v8, &g_550cf8, &v10, &g_14e2a98); /* do not return */
    }
    a0->field_30 = v9;
    v12 = *((int128_t *)&v0);
    v13 = *((int128_t *)&v2);
    a0->field_20 = *((int128_t *)&v4);
    *((void*)&a0->field_10) = v13;
    *((void*)&a0->field_0) = v12;
    return a0;
}
