double uu_uniq::handle_obsolete(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0xa2]
    char v1;  // [bp-0xa1]
    char *v2;  // [bp-0xa0]
    char *v3;  // [bp-0x98]
    char *v4;  // [bp-0x90]
    char *v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    char v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x68]
    char v10;  // [bp-0x50], Other Possible Types: unsigned long long
    char v11;  // [bp-0x48]
    void* v13;  // r14
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r15
    void* v16;  // rax
    int v17;  // xmm0
    unsigned long long v18;  // rdx

    v6 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = &v6;
    v3 = &v8;
    v4 = &v0;
    v5 = &v1;
    v10.filter_map(a1, a2, &v2);
    v2.collect(&v10);
    if (v6 == 0x8000000000000000)
    {
        v13 = 0;
    }
    else
    {
        memcpy(&v11, &v7, 16);
        v10 = v6;
        v13 = uu_uniq::handle_obsolete::{{closure}}(&v10);
        v15 = v14;
    }
    v16 = 0;
    a0->field_20 = v4;
    v17 = *((int128_t *)&v2);
    *((void*)&a0->field_10) = v17;
    a0->field_0 = v13;
    a0->field_8 = v15;
    a0->field_28 = v16;
    a0->field_30 = v18;
    return (unsigned long long)v17;
}
