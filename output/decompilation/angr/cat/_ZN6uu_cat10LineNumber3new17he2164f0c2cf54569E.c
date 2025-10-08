double uu_cat::LineNumber::new(long long a0)
{
    char v0[9];  // [bp-0x28]
    char v1[7];  // [bp-0x1f]
    char v2;  // [bp-0x18]
    char v3;  // [bp-0xf]
    int v5;  // xmm0

    strncpy(&v1, "0000000000000000", 16);
    strncpy(&v0, "0000000000000000", 16);
    core::slice::<impl [T]>::copy_from_slice(&v3);
    v5 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v5;
    a0->field_20 = 25;
    a0->field_28 = 30;
    a0->field_30 = 31;
    return (unsigned long long)v5;
}
