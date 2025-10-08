long long uu_test::parser::Parser::maybe_boolop(void* a0, void* a1)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    char v1;  // [bp-0xa8]
    unsigned long long v2[1][5];  // [bp-0x90]
    int v3;  // [bp-0x68], Other Possible Types: char
    int v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v7 = a1.peek_is_boolop();
    if (!(char)v7)
    {
        *((unsigned long long *)a0) = 7;
        return v7;
    }
    v5.next_token(a1);
    v2.peek(a1);
    if ((int)v2[0] == 6)
    {
        v0.into_literal(&v5);
        v3.literal(a1, &v0);
        if (*((int *)&v3) != 7)
        {
            a0[16] = v4;
            *(a0) = v3;
            return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v2);
        }
        v8 = core::ptr::drop_in_place<uu_test::parser::Symbol>(&v2);
        *((unsigned long long *)a0) = 7;
        return v8;
    }
    else
    {
        core::ptr::drop_in_place<uu_test::parser::Symbol>(&v2);
        v7 = v0.boolop(a1, &v5);
        if (*((int *)&v0) == 7)
        {
            v7 = v0.maybe_boolop(a1);
            if (*((int *)&v0) == 7)
            {
                *((unsigned long long *)a0) = 7;
                return v7;
            }
        }
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *(a0) = v0;
        return v7;
    }
}
