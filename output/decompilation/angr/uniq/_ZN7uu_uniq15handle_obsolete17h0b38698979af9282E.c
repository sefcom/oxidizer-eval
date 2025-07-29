double uu_uniq::handle_obsolete(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0xc2]
    char v1;  // [bp-0xc1]
    char *v2;  // [bp-0xc0], Other Possible Types: unsigned long long
    char *v3;  // [bp-0xb8]
    char *v4;  // [bp-0xb0]
    char *v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    char v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x88]
    int v10;  // [bp-0x70], Other Possible Types: char
    unsigned long v11;  // [bp-0x60]
    char v12;  // [bp-0x58]
    void* v14;  // r14
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r15
    void* v17;  // rax
    unsigned long long v18;  // rdx

    v6 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = &v6;
    v3 = &v8;
    v4 = &v0;
    v5 = &v1;
    v12.filter_map(a1, a2, &v2);
    v10.from_iter(&v12, &g_58b688);
    if (v6 == 0x8000000000000000)
    {
        v14 = 0;
    }
    else
    {
        memcpy(&v3, &v7, 16);
        v2 = v6;
        v14 = uu_uniq::handle_obsolete::{{closure}}(&v2);
        v16 = v15;
    }
    v17 = 0;
    a0->field_20 = v11;
    *((void*)&a0->field_10) = v10;
    a0->field_0 = v14;
    a0->field_8 = v16;
    a0->field_28 = v17;
    a0->field_30 = v18;
    return (unsigned long long)v10;
}
