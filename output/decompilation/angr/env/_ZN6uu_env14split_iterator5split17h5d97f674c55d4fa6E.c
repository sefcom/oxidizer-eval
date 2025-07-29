long long uu_env::split_iterator::split(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8]
    int v1;  // [bp-0xb4]
    char v2;  // [bp-0xac]
    unsigned long long v3;  // [bp-0xa4]
    char v4;  // [bp-0x90], Other Possible Types: unsigned int
    char v5;  // [bp-0x8c]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]

    v9.new(a1, a2);
    v4.split(&v9);
    if (v4 == 12)
    {
        v3 = v7;
        v1 = v6;
        *((unsigned long long *)&a0->field_4[20]) = v7;
        *((void*)&a0->field_4[4]) = v6;
    }
    else
    {
        memcpy(&v2, &(char)v6, 16);
        *((int128_t *)&v0) = *((int128_t *)&v5);
        *((int128_t *)&a0->field_4[12]) = *((int128_t *)&v2);
        *((int128_t *)&a0->field_4[0]) = (int128_t)v0;
        a0->field_10 = v8;
    }
    a0->field_0 = v4;
    return a0;
}
