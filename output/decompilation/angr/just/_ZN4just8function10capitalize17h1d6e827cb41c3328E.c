long long just::function::capitalize(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68]
    int v6;  // [bp-0x5c]
    char v7;  // [bp-0x50]
    unsigned long long v9;  // rax
    unsigned int v10;  // edx
    unsigned int v11;  // edx
    unsigned int v12;  // edx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a2;
    v4 = a3 + a2;
    v5 = 0;
    v9 = v3.next();
    if (v10 != 0x110000)
    {
        do
        {
            v12 = v11;
            if (v9)
            {
                core::unicode::unicode_data::conversions::to_lower(&v6, v12);
                v7.new(&v6);
                v0.extend(&v7);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_upper(&v6, v12);
                v7.new(&v6);
                v0.extend(&v7);
            }
            v9 = v3.next();
            v10 = v10;
        } while (v10 != 0x110000);
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
    a0->field_0 = 0;
    return a0;
}
