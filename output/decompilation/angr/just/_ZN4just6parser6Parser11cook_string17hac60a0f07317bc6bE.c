char just::parser::Parser::cook_string(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x198]
    void* v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x120]
    void* v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    unsigned long long v7;  // rax

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v0 = 9223372036854775809;
    v4 = a2;
    v5 = a3 + a2;
    if (!((char)core::str::validations::next_code_point(&v4) & 1))
    {
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v1);
        a0->field_48 = 37;
        return core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v0);
    }
    v7 = 1;
    goto (long long)(g_46aadc[v7] + (char *)&g_46aadc[0]);
}
