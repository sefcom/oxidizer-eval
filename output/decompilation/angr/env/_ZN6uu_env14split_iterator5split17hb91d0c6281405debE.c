long long uu_env::split_iterator::split(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned int
    char v1;  // [bp-0x8c]
    int v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    int v5;  // [bp-0x68], Other Possible Types: char
    int v6;  // [bp-0x64]
    char v7;  // [bp-0x5c]
    unsigned long long v8;  // [bp-0x54]

    v5.new(a1, a2);
    v0.split(&v5);
    if (v0 == 12)
    {
        v8 = v3;
        v6 = v2;
        *((unsigned long long *)&a0->field_4[20]) = v3;
        *((void*)&a0->field_4[4]) = v2;
    }
    else
    {
        memcpy(&v7, &(char)v2, 16);
        *((int128_t *)&v5) = *((int128_t *)&v1);
        *((int128_t *)&a0->field_4[12]) = *((int128_t *)&v7);
        *((int128_t *)&a0->field_4[0]) = (int128_t)v5;
        *((unsigned long *)&a0->field_8) = v4;
    }
    a0->field_0 = v0;
    return a0;
}
