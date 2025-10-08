long long just::function::without_extension(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x90], Other Possible Types: char
    unsigned long v1;  // [bp-0x80]
    char *v2;  // [bp-0x78]
    unsigned long long v3;  // [sp-0x70]
    char v4;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x60]
    char *v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    void* v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v9 = a2;
    v10 = a3;
    v12 = a2.parent(a3);
    if (v12)
    {
        v13 = a2.file_stem(a3);
        if (v13)
        {
            v4.join(v12, v14, v13, v14);
            v0.spec_to_string(&v4);
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v1;
            *((void*)&(&a0->field_0)[1]) = v0;
            a0->field_0 = 0;
            core::ptr::drop_in_place<camino::Utf8PathBuf>(&v4);
            return a0;
        }
        v2 = &v9;
        v3 = <&T as core::fmt::Display>::fmt;
        v15 = &g_82fec8;
    }
    else
    {
        v2 = &v9;
        v3 = <&T as core::fmt::Display>::fmt;
        v15 = &g_8300d8;
    }
    v4 = v15;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    (char)v0.map_or_else(0, v16, &v4);
    *((void*)&(&a0->field_0)[1]) = v0;
    *((unsigned long *)((char *)&a0->field_8 + 8)) = v1;
    a0->field_0 = 1;
    return a0;
}
