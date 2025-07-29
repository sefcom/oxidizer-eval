long long uu_join::State::read_line(struct_0 *a0, unsigned long long a1[11], unsigned long long a2)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    int v6;  // [bp-0x50], Other Possible Types: char
    int v7;  // [bp-0x40], Other Possible Types: char
    char v8;  // [bp-0x30]
    unsigned long long v10;  // rax

    v0.next(&a1[5]);
    if (v0 == 9223372036854775809)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return v0;
    }
    a1[10] = a1[10] + 1;
    if (v0 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->padding_1[7]) = v1;
        *((unsigned long long *)&a0->field_0) = 9223372036854775809;
        return v0;
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    v6.new(&v3, a2, a1[9]);
    v10 = *((long long *)&v7);
    if (v10 > a1[9])
        a1[9] = v10;
    a0->field_20 = *((int128_t *)&v8);
    *((void*)&a0->field_10) = v7;
    *((void*)&a0->field_0) = v6;
    return v10;
}
