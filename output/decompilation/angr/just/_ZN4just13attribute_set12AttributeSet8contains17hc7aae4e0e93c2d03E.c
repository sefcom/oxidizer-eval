char just::attribute_set::AttributeSet::contains(unsigned long long a0[3], char a1)
{
    char v0;  // [bp-0x49]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    unsigned long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    void* v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    unsigned long v11;  // rax
    unsigned long v12;  // rdx
    unsigned long v13;  // rax

    v0 = a1;
    v11 = a0[0];
    v12 = v11;
    v13 = v11;
    if (v13)
        v13 = a0[2];
    v1 = v11;
    v2 = 0;
    v3 = v11;
    v4 = a0[1];
    v5 = v1;
    v6 = 0;
    v7 = v11;
    v8 = a0[1];
    v9 = v13;
    return v1.try_fold(&v0).eq(1);
}
