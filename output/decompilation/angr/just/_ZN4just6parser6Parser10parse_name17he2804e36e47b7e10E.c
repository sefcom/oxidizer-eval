double just::parser::Parser::parse_name(long long a0, long long a1)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    char v5;  // [bp-0x10]
    unsigned long v7;  // xmm0lq

    v0.expect(a1, 24);
    if (v5 != 37)
    {
        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v4);
        *((void*)&a0->field_30) = v3;
        *((void*)&a0->field_20) = v2;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return (unsigned long long)v0;
    }
    a0.from_identifier(&v0);
    a0->field_40[8] = 37;
    return v7;
}
