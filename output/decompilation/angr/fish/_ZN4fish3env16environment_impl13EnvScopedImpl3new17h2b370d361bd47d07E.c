long long fish::env::environment_impl::EnvScopedImpl::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    int v2;  // [bp-0x50], Other Possible Types: char
    int v3;  // [bp-0x40]
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a2;
    v2.default();
    a0->field_50 = a1;
    a0->field_58 = a2;
    *((void*)&a0->field_0) = v2;
    *((void*)&a0->field_10) = v3;
    *((void*)&a0->field_20) = v4;
    v7 = *((long long *)&v5);
    a0->field_30 = v7;
    a0->field_60 = 0;
    a0->field_38 = 0;
    a0->field_40 = 8;
    a0->field_48 = 0;
    return v7;
}
