long long forc_crypto::keys::vanity::HexMatcher::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x78]
    char v1;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    int v4;  // [bp-0x50], Other Possible Types: char
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x28]

    alloc::str::<impl str>::to_lowercase(&v4, a1, a2);
    alloc::str::<impl str>::to_lowercase(&v6, a3, a4);
    v0 = v5;
    memcpy(&v1, &v6, 16);
    v3 = *((long long *)&v7);
    a0->field_20 = v2;
    a0->field_28 = v3;
    a0->field_10 = v0;
    a0->field_18 = v1;
    *((void*)&a0->field_0) = v4;
    return a0;
}
