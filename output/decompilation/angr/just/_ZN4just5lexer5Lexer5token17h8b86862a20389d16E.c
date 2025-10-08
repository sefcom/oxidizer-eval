long long just::lexer::Lexer::token(struct_0 *a0, char a1)
{
    int v0;  // [bp-0x50]
    int v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    int v4;  // [bp-0x20]
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rax

    v2 = a0->field_a8[0];
    v5 = a1;
    v3 = a0->field_a0 - a0->field_a8[2];
    *((int128_t *)&v4) = *((int128_t *)&a0->field_a8[1]);
    *((uint128_t *)&v0) = a0->field_70;
    *((uint128_t *)&v1) = a0->field_80;
    a0->padding_0[72].push(&v0, &g_8303f8);
    v7 = a0->field_a0;
    a0->field_a8[2] = v7;
    *((uint128_t *)&a0->field_a8[0]) = a0->field_90;
    return v7;
}
