long long fish::highlight::highlight::HighlightColorResolver::resolve_spec_uncached(struct_0 *a0, char a1[4], unsigned long long a2, struct_2 *a3)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned int
    char v1;  // [bp-0x6d]
    char v2;  // [bp-0x6c]
    char v3;  // [bp-0x6b]
    unsigned short v4;  // [bp-0x6a]
    char v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x67]
    unsigned short v7;  // [bp-0x63]
    char v8;  // [bp-0x61]
    char v9;  // [bp-0x60]
    int v10;  // [bp-0x58], Other Possible Types: char
    char v11;  // [bp-0x55]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x4f]
    char v14;  // [bp-0x40], Other Possible Types: unsigned int
    char v15;  // [bp-0x3c]
    char v16;  // [bp-0x3b]
    unsigned short v17;  // [bp-0x3a]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // rax

    fish::highlight::highlight::HighlightColorResolver::resolve_spec_uncached::{{closure}}(&v0, a2, a3, a1[2]);
    if (a1[3] != a1[2])
    {
        fish::highlight::highlight::HighlightColorResolver::resolve_spec_uncached::{{closure}}(&v10, a2, a3, a1[3]);
        v6 = *((int *)&v13);
        v1 |= v11;
    }
    if (a1[0])
    {
        a3->field_18(&v10, a2, "f", 21);
        if ((long long)v10)
        {
            fish::highlight::highlight::parse_text_face_for_highlight(&v14, (long long)v10, *((long long *)&v12));
            if (v16 != 3)
            {
                v3 = v16;
                v4 = v17;
                v5 = v18;
            }
            v20 = *((int *)&v2) * 0x100000000 | *((int *)&v0).union_prefer_right(*((int *)&v15) * 0x100000000 | v14);
            v0 = v20;
            v2 = v20 >> 32;
            core::ptr::drop_in_place<fish::env::var::EnvVar>(&v10);
        }
    }
    if (a1[1])
        v2 = 0;
    *((char *)&a0->field_d) = v9;
    a0->field_0 = v0;
    a0->field_4 = v2;
    *((long long *)&(&a0->field_4)[1]) = *((long long *)&v3);
    *((unsigned short *)((char *)&a0->field_5 + 5)) = v7;
    *((char *)&a0->field_5 + 7) = v8;
    return v8;
}
