long long just::attribute_set::AttributeSet::ensure_valid_attributes(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0xf9]
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    unsigned long v3;  // [bp-0xd0]
    unsigned long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8]
    unsigned long v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    unsigned long v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long v15;  // rax
    unsigned long v16;  // rax
    unsigned long long *v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    v15 = a1[0];
    v16 = v15;
    if (v16)
        v16 = a1[2];
    v1 = v15;
    v2 = 0;
    v3 = v15;
    v4 = a1[1];
    v5 = v1;
    v6 = 0;
    v7 = v15;
    v8 = a1[1];
    v9 = v16;
    v18 = v1.next();
    if (v18)
    {
        do
        {
            v0 = *(v18).discriminant();
            if (!v0.slice_contains(a5, a6))
            {
                v19 = a4.lexeme();
                v10.clone(v18);
                v11 = a2;
                v12 = a3;
                v13 = v19;
                v14 = v20;
                return a0.error(a4, &v10);
            }
            v18 = v1.next();
        } while (v18);
    }
    a0->field_48 = 37;
    return v18;
}
