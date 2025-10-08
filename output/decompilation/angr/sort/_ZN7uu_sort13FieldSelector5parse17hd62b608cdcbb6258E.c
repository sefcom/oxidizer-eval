long long uu_sort::FieldSelector::parse(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    char *v2;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    char v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    int v9;  // [bp-0xb0]
    char v10;  // [bp-0xa0]
    char v11;  // [bp-0x99]
    void* v12;  // [bp-0x98]
    char v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    void* v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned short v19;  // [bp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // rax
    int v25;  // xmm0
    int v26;  // xmm1

    v4 = a3;
    v18.into_searcher(44, a1, a2);
    v16 = 0;
    v17 = a2;
    v19 = 1;
    v21 = v16.next();
    if (!v21)
        core::option::unwrap_failed(&g_58d080); /* do not return */
    v5.split_key_options(v21, a2);
    v22 = v5;
    v23 = v6;
    v24 = v16.next();
    if (v24)
    {
        v13.split_key_options(v24, a2);
LABEL_4d324b:
        v0 = v22;
        v1 = v23;
        v2 = v7;
        v3 = v8;
        v5.parse_with_options(&v0, &v13);
        if (v11 == 2)
        {
            *((long long *)a0) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v5);
            *((char **)&a0[8]) = &g_58c448;
            *((char *)&a0[55]) = 2;
            return a0;
        }
    }
    else
    {
        v12 = 0;
        if (v8 || v12 && !(char)v14.equal(v15, 1, 0))
            goto LABEL_4d324b;
        v0 = v22;
        v1 = v23;
        v2 = &v4;
        v3 = &v13;
        uu_sort::FieldSelector::parse::{{closure}}(&v5, &v0);
        if (v11 == 2)
        {
            *((long long *)a0) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v5);
            *((char **)&a0[8]) = &g_58c448;
            *((char *)&a0[55]) = 2;
            return a0;
        }
    }
    *((long long *)&a0[48]) = *((long long *)&v10);
    v25 = *((int128_t *)&v5);
    v26 = *((int128_t *)&v7);
    a0[32] = v9;
    a0[16] = v26;
    *(a0) = v25;
    return a0;
}
