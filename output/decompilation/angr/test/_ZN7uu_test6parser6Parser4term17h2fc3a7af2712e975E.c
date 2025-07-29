double uu_test::parser::Parser::term(long long a0, long long a1)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    int v1;  // [bp-0x88]
    int v2;  // [bp-0x78], Other Possible Types: char
    unsigned long long v3;  // [bp-0x68]
    int v4;  // [bp-0x60], Other Possible Types: char
    char v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x40]
    int v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x18]
    int v11;  // xmm0
    unsigned long v12;  // xmm0lq
    unsigned long v13;  // xmm0lq
    int v14;  // xmm0
    int v15;  // xmm0

    v4.next_token(a1);
    switch (*((long long *)&v4))
    {
    case 0:
        v0.lparen(a1);
        goto LABEL_49bd0b;
    case 1:
        v0.bang(a1);
LABEL_49bd0b:
        if ((int)v1 == 7)
        {
            *((unsigned long long *)&a0->field_0) = 7;
        }
        else
        {
            v13 = (unsigned long long)v1;
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v1;
        }
        ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v4);
        return v13;
    case 5:
        v3 = v6;
        v11 = v4;
        v12 = (unsigned long long)v11;
        memcpy(&v2, &v5, 16);
        v0 = v11;
        a1.uop(&v0);
        break;
    case 6:
        v3 = v6;
        v14 = v4;
        v12 = (unsigned long long)v14;
        memcpy(&(char)v2, &v5, 16);
        v0 = v14;
        a1.push(&v0, &g_56ec90);
        break;
    default:
        v9 = v6;
        v15 = v4;
        v12 = (unsigned long long)v15;
        memcpy(&v8, &v5, 16);
        v7 = v15;
        (char)v0.literal(a1, &v7);
        if ((int)v1 != 7)
        {
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v0;
            return (unsigned long long)v0;
        }
    }
    *((unsigned long long *)&a0->field_0) = 7;
    return v12;
}
