long long just::analyzer::Analyzer::resolve_alias(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    int v0;  // [bp-0xd8], Other Possible Types: char
    int v1;  // [bp-0xc8]
    int v2;  // [bp-0xb8]
    int v3;  // [bp-0xa8]
    int v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x88]
    int v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v11;  // rax
    unsigned long v12;  // r15
    unsigned long long v13;  // rdx

    v11 = a3->field_0[1].resolve_recipe(a3->field_8, a1, a2);
    if (!v11)
    {
        v12 = &a3->field_10;
        v8 = v12.lexeme();
        v9 = v13;
        *((unsigned long long [2])&v6) = a3->field_0;
        v7 = a3->field_8;
        v5 = 9223372036854775871;
        v0.error(v12, &v5);
        *((void*)&a0->field_40) = v4;
        *((void*)&a0->field_30) = v3;
        *((void*)&a0->field_20) = v2;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        a0->field_60 = 37;
        return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3 + 3);
    }
    return a0.resolve(a3, v11);
}
