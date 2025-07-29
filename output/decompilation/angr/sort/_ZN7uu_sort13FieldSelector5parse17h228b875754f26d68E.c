long long uu_sort::FieldSelector::parse(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x120]
    int v2;  // [bp-0x118], Other Possible Types: char *, unsigned long long
    char *v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    unsigned long long v12;  // [bp-0xb8]
    int v13;  // [bp-0xb0]
    char v14;  // [bp-0xa0]
    char v15;  // [bp-0x99]
    unsigned long long v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    unsigned long long v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    void* v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    unsigned short v23;  // [bp-0x38]
    unsigned long long v25;  // rax
    unsigned long long v26;  // r13
    unsigned long long v27;  // r12
    unsigned long long v28;  // rax
    int v29;  // xmm0
    int v30;  // xmm0
    int v31;  // xmm1

    v4 = a3;
    v22.into_searcher(44, a1, a2);
    v20 = 0;
    v21 = a2;
    v23 = 1;
    v25 = v20.next();
    if (!v25)
        core::option::unwrap_failed(&g_6706f8); /* do not return */
    v9.split_key_options(v25, a2);
    v26 = v9;
    v27 = v10;
    v28 = v20.next();
    if (v28)
    {
        (char)v5.call_once(v28, a2);
LABEL_50d7ab:
        v16 = v26;
        v17 = v27;
        v18 = v11;
        v19 = v12;
        v29 = *((int128_t *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v0 = v29;
        v9.parse_with_options(&v16, &(char)v0);
        if (v15 == 2)
        {
            v2 = v11;
            memcpy(&v0, &v9, 16);
            *((long long *)&a0->field_0) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0);
            *((char **)&a0->padding_1[7]) = &g_6702c0;
            a0[1].padding_1[5] = 2;
            return a0;
        }
    }
    else
    {
        v5 = 0;
        if (v12 || v5 && !(char)v7.equal(v8, 1, 0))
            goto LABEL_50d7ab;
        v0 = v26;
        v1 = v27;
        v2 = &v4;
        v3 = &(char)v5;
        uu_sort::FieldSelector::parse::{{closure}}(&v9, &v0);
        if (v15 == 2)
        {
            v2 = v11;
            memcpy(&v0, &v9, 16);
            *((long long *)&a0->field_0) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0);
            *((char **)&a0->padding_1[7]) = &g_6702c0;
            a0[1].padding_1[5] = 2;
            return a0;
        }
    }
    *((long long *)&a0->field_30) = *((long long *)&v14);
    v30 = *((int128_t *)&v9);
    v31 = *((int128_t *)&v11);
    *((void*)&a0->field_20) = v13;
    *((void*)&a0->field_10) = v31;
    *((void*)&a0->field_0) = v30;
    return a0;
}
