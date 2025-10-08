long long uu_test::parser::Parser::literal(struct_0 *a0, void* a1, unsigned long long *a2)
{
    char v0;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe0]
    char *v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    void* v4;  // [bp-0xc8]
    char *v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    unsigned long long v7[1][5];  // [bp-0xa8]
    char v8;  // [bp-0x80]
    int v9;  // [bp-0x58], Other Possible Types: char
    unsigned long v10;  // [bp-0x48]
    unsigned long long v11[1][5];  // [bp-0x40]
    unsigned long long v13;  // rax

    v0.into_literal(a2);
    a1.push(&v0, &g_4e02c0);
    v7.peek(a1);
    if ((int)v7[0] == 4)
    {
        v11.next_token(a1);
        v8.next_token(a1);
        if (*((int *)&v8) == 6)
        {
            v5 = &v11;
            v6 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
            v0 = &g_417330;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v9.map_or_else(&v0);
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v10;
            *((void*)&(&a0->field_0)[1]) = v9;
            a0->field_0 = 3;
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
            return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v7);
        }
        v0.into_literal(&v8);
        a1.push(&v0, &g_4e02d8);
        a1.push(&v11, &g_4e02f0);
    }
    v13 = core::ptr::drop_in_place<uu_test::parser::Symbol>(&v7);
    a0->field_0 = 7;
    return v13;
}
