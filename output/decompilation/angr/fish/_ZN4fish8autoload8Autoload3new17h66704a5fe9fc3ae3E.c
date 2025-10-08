long long fish::autoload::Autoload::new(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x90]
    int v1;  // [bp-0x80]
    int v2;  // [bp-0x70]
    int v3;  // [bp-0x60]
    int v4;  // [bp-0x50]
    int v5;  // [bp-0x40]
    int v6;  // [bp-0x30]
    char v7;  // [bp-0x20]

    v0.default();
    a0->field_0 = a1;
    a0->field_8 = a2;
    *((void*)&a0->field_30) = v3;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_40) = v4;
    *((void*)&a0->field_50) = v5;
    *((void*)&a0->field_60) = v6;
    a0->field_70 = *((long long *)&v7);
    return a0;
}
