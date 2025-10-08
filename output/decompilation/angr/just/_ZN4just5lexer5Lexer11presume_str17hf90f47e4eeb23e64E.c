long long just::lexer::Lexer::presume_str(struct_0 *a0, void* a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    int v3;  // [bp-0x60]
    int v4;  // [bp-0x50]
    int v5;  // [bp-0x40]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v0 = a2;
    v1 = a3 + a2;
    v9 = core::str::validations::next_code_point(&v0);
    if (((char)v9 & 1))
    {
        do
        {
            v10 = v2.presume(a1, a2);
            if (v7 != 37)
            {
                *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v6);
                *((void*)&a0->field_30) = v5;
                *((void*)&a0->field_20) = v4;
                *((void*)&a0->field_10) = v3;
                *((void*)&a0->field_0) = v2;
                return v10;
            }
            v9 = core::str::validations::next_code_point(&v0);
        } while (((char)v9 & 1));
    }
    a0->field_40[8] = 37;
    return v9;
}
