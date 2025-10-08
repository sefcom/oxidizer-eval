long long fish::highlight::highlight::HighlightColorResolver::resolve_spec(struct_0 *a0, unsigned long long a1, unsigned int *a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x70]
    char v1;  // [bp-0x6e]
    unsigned int v2;  // [bp-0x6d]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x68]
    unsigned short v5;  // [bp-0x67]
    char v6;  // [bp-0x65]
    unsigned long long v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x57]
    char v10;  // [bp-0x54], Other Possible Types: unsigned int
    int v11;  // [bp-0x49], Other Possible Types: char
    char v12;  // [bp-0x39]
    unsigned long long v13;  // [bp-0x38]
    void* v15;  // r14
    unsigned long v16;  // rax
    int v17;  // xmm0

    v3.rustc_entry(a1, *(a2));
    v15 = *((long long *)&v3);
    if (v8 == 2)
    {
        v16 = (char)v15[1];
        a0->field_10 = v16;
        v17 = (int128_t)v15[17];
    }
    else
    {
        v13 = v7;
        v0 = *((int *)&v9);
        v2 = v10;
        v11.resolve_spec_uncached(a2, a3, a4);
        v6 = v1;
        v5 = v0;
        v4 = v8;
        memcpy(&v3, &v11, 16);
        v10 = v12;
        v15.insert_no_grow(v13, &v4);
        v16 = v12;
        a0->field_10 = v16;
        v17 = v11;
    }
    *((void*)&a0->field_0) = v17;
    return v16;
}
