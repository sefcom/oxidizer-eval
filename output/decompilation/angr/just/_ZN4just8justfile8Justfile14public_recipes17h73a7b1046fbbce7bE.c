long long just::justfile::Justfile::public_recipes(struct_0 *a0, unsigned long long a1[90], char a2)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x30]
    unsigned long v10;  // [bp-0x28]
    unsigned long v11;  // [bp-0x20]
    unsigned long v13;  // rax
    unsigned long v14;  // rax

    v13 = a1[87];
    v14 = v13;
    if (v14)
        v14 = a1[89];
    v3 = v13;
    v4 = 0;
    v5 = v13;
    v6 = a1[88];
    v7 = v3;
    v8 = 0;
    v9 = v13;
    v10 = a1[88];
    v11 = v14;
    v0.collect(&v3);
    if ((a2 & 1))
        alloc::slice::<impl [T]>::sort_by_key(v1, v2);
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return v2;
}
