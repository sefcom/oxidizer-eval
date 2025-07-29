double uu_cat::LineNumber::new(long long a0)
{
    char v0[16];  // [bp-0x28]
    char v1[9];  // [bp-0x18]
    char v2;  // [bp-0xf]

    strncpy(&v1, "0000000000000000", 16);
    strncpy(v0, "0000000000000000", 16);
    core::slice::<impl [T]>::copy_from_slice(&v2, 7, "     1\tsrc/uu/cat/src/cat.rs", 7, &g_572d70);
    a0->field_10 = *((int128_t *)&v1);
    *((char [16])&a0->field_0) = v0;
    a0->field_20 = 25;
    a0->field_28 = 30;
    a0->field_30 = 31;
    return (unsigned long long)v0;
}
