long long uu_test::parser::Parser::maybe_boolop(struct_0 *a0, void* a1)
{
    unsigned long long v0[2];  // [bp-0xd8]
    char v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xb8]
    int v3;  // [bp-0xa8], Other Possible Types: char
    char v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    int v7;  // [bp-0x58], Other Possible Types: char
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x30], Other Possible Types: char
    char v10;  // [bp-0x20]
    unsigned long long v12;  // rax
    int v13;  // xmm1

    v12 = a1.peek_is_boolop();
    if ((char)v12)
    {
        v3.next_token(a1);
        v6.peek(a1);
        if (*((int *)&v6) == 6)
        {
            v2 = v5;
            memcpy(&v1, &v4, 16);
            *((void*)v0) = v3;
            v7.into_literal(&v0);
            v9.literal(a1, &v7);
            if (*((int *)&v9) != 7)
            {
                a0->field_10 = *((int128_t *)&v10);
                *((void*)&a0->field_0) = v9;
                return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
            }
            v12 = ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
        }
        else
        {
            ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
            v2 = v5;
            memcpy(&v1, &v4, 16);
            *((void*)v0) = v3;
            v12 = v7.boolop(a1, &v0);
            if (*((int *)&v7) != 7)
            {
                *((void*)v0) = v7;
                a0->field_10 = *((int128_t *)&v8);
                *((unsigned long long [2])&a0->field_0) = v0;
                return v12;
            }
            v12 = v0.maybe_boolop(a1);
            if ((int)v0[0] != 7)
            {
                *(&v0) = v0;
                *((void*)&a0->field_10) = v13;
                *((unsigned long long [2])&a0->field_0) = v0;
                return v12;
            }
        }
    }
    *((unsigned long long *)&a0->field_0) = 7;
    return v12;
}
