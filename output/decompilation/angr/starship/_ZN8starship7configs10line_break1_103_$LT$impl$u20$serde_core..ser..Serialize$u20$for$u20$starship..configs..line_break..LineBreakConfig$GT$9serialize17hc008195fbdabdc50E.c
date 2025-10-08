long long starship::configs::line_break::_::<impl serde_core::ser::Serialize for starship::configs::line_break::LineBreakConfig>::serialize(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xe8], Other Possible Types: char
    char v3;  // [bp-0xe0]
    int v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    int v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    int v15;  // [bp-0x60]
    int v16;  // [bp-0x50]
    int v17;  // [bp-0x40]
    char v18;  // [bp-0x30]
    unsigned long long v19;  // [bp-0x20]
    int v21;  // xmm0

    (char)v2.serialize_struct();
    memcpy(&v0, &v3, 16);
    v1 = v5;
    if (*((long long *)&v2) == 0x8000000000000000)
    {
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 9223372036854775814;
        return v1;
    }
    v19 = v10;
    memcpy(&v18, &v9, 16);
    v17 = v8;
    v16 = v7;
    v15 = v6;
    memcpy(&v12, &v0, 16);
    v14 = v1;
    v11 = *((long long *)&v2);
    (char)v2.serialize_field(&v11, "disabled", 8, a1);
    if (*((long long *)&v2) != 9223372036854775813)
    {
        *((long long *)((char *)&a0->field_8 + 8)) = (long long)v4;
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v2;
        a0->field_0 = 9223372036854775814;
        return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v11);
    }
    v10 = v19;
    memcpy(&v9, &v18, 16);
    v8 = v17;
    v21 = *((int128_t *)&v11);
    memcpy(&v7, &v16, 16);
    v6 = v15;
    *((int128_t *)&v4) = *((int128_t *)&v13);
    v2 = v21;
    return a0.end(&(char)v2);
}
