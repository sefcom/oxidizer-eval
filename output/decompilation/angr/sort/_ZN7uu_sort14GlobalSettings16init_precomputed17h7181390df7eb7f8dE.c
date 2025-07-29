long long uu_sort::GlobalSettings::init_precomputed(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long v7;  // r15
    unsigned long long v8;  // rax

    v3 = v5;
    v2 = v6;
    v7 = a0->field_8;
    v0 = v7;
    v1 = a0->field_10 * 56 + v7;
    a0->field_60 = v0.any();
    a0->field_58 = v7.fold(v1);
    a0->field_48 = v7.fold(v1);
    v8 = v7.fold(v1);
    a0->field_50 = v8;
    return v8;
}
