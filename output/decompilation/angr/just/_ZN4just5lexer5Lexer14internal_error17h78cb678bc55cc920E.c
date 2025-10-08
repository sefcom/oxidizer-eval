long long just::lexer::Lexer::internal_error(void* a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xa8]
    int v2;  // [bp-0xa0]
    void* v3;  // [bp-0x90]
    int v4;  // [bp-0x88]
    char v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char v7;  // [bp-0x68]

    v5 = 35;
    v3 = 0;
    *((int128_t *)&v4) = *((int128_t *)((char *)&a1->field_88 + 8));
    *((uint128_t *)&v0) = a1->field_70;
    v1 = a1->field_80;
    *((int128_t *)&v2) = *((int128_t *)&(&a1->field_80)[1]);
    v7.call_mut(a2);
    v6 = 9223372036854775848;
    return a0.new(&v0, &v6);
}
