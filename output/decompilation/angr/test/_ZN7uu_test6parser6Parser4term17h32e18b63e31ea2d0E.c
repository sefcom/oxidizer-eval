double uu_test::parser::Parser::term(long long a0, long long a1)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    unsigned long long v3[1][5];  // [bp-0x38]
    unsigned long v5;  // xmm0lq
    unsigned long v6;  // xmm0lq

    v3.next_token(a1);
    switch (v3[0])
    {
    case 0:
        v0.lparen(a1);
        goto LABEL_457749;
    case 1:
        v0.bang(a1);
LABEL_457749:
        if ((int)v1 == 7)
        {
            *((unsigned long long *)a0) = 7;
        }
        else
        {
            v5 = (unsigned long long)v1;
            a0[16] = v2;
            *(a0) = v1;
        }
        core::ptr::drop_in_place<uu_test::parser::Symbol>(&v3);
        return v5;
    case 5:
        a1.uop(&v3);
        break;
    case 6:
        a1.push(&v3, &g_4e01e8);
        break;
    default:
        (char)v1.literal(a1, &v3);
        if ((int)v1 != 7)
        {
            a0[16] = v2;
            *(a0) = v0;
            return (unsigned long long)v0;
        }
    }
    *((unsigned long long *)a0) = 7;
    return v6;
}
