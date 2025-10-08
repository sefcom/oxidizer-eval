long long just::attribute::Attribute::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x178]
    int v1;  // [bp-0x177]
    int v2;  // [bp-0x167]
    int v3;  // [bp-0x157]
    char v4;  // [bp-0x147]
    unsigned long v5;  // [bp-0x138]
    char v6;  // [bp-0x130]
    char v7;  // [bp-0x12f]
    char v8;  // [bp-0x12c]
    unsigned long long v9;  // [bp-0x100]
    unsigned long long v10;  // [bp-0xf8]
    unsigned long long v11;  // [bp-0xf0]
    unsigned long long v13;  // rdi
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rsi

    v13 = a1.lexeme();
    v15 = v14;
    v13.from_str(v14);
    if ((char)v13.from_str(v14) == 20)
    {
        v10 = a1.lexeme();
        v11 = v14;
        v9 = 9223372036854775872;
        v0.error(a1, &v9);
        *((unsigned long *)&a0->field_31[0]) = v5;
        *((int128_t *)((char *)&a0->field_21 + 1)) = *((int128_t *)&v4);
        *((void*)((char *)&a0->field_11 + 1)) = v3;
        *((void*)((char *)&a0->field_1 + 1)) = v2;
        *((void*)&(&a0->field_0)[1]) = v1;
        *((int *)&a0->field_31[12]) = *((int *)&v8);
        *((int *)&a0->field_31[9]) = *((int *)&v7);
        a0->field_0 = v0;
        a0->field_31[8] = v6;
        return core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(a2);
    }
    goto (long long)(g_46a348[v13.from_str(v14) & 4294967295] + (char *)&g_46a348[0]);
}
