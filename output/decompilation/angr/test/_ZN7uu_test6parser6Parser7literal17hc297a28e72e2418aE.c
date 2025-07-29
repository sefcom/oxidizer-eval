long long uu_test::parser::Parser::literal(struct_1 *a0, void* a1, unsigned long long *a2)
{
    int v0;  // [bp-0x118], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x110]
    int v2;  // [bp-0x108], Other Possible Types: char *
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8], Other Possible Types: char
    int v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    int v11;  // [bp-0x88], Other Possible Types: char
    int v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    int v14;  // [bp-0x60], Other Possible Types: char
    unsigned long v15;  // [bp-0x50]
    unsigned long long v16[2];  // [bp-0x48]
    int v17;  // [bp-0x38]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v20;  // rax

    v0.into_literal(a2);
    a1.push(&v0, &g_56ed80);
    v10.peek(a1);
    if (*((int *)&v10) == 4)
    {
        v11.next_token(a1);
        v7.next_token(a1);
        if (*((int *)&v7) == 6)
        {
            v5 = &v11;
            v6 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
            v0 = &g_42db30;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v14.map_or_else(&v0);
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v15;
            *((void*)&(&a0->field_0)[1]) = v14;
            a0->field_0 = 3;
            ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v7);
            ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
            return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v10);
        }
        v18 = v9;
        v17 = v8;
        *((void*)v16) = v7;
        v0.into_literal(&v16);
        a1.push(&v0, &g_56ed98);
        v4 = v13;
        v2 = v12;
        v0 = v11;
        a1.push(&v0, &g_56edb0);
    }
    v20 = ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v10);
    a0->field_0 = 7;
    return v20;
}
