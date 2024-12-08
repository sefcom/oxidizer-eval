long long uu_expr::syntax_tree::Parser::parse::h0b17f4705410fed5(struct_0 *a0, unsigned long long a1[3])
{
    int v0;  // [sp-0x78]
    int v1;  // [sp-0x68]
    int v2;  // [sp-0x58]
    int v3;  // [sp-0x48]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v9;  // 4098
    unsigned long long v10;  // rsi

    if (!a1[1])
    {
        a0->field_8 = 3;
    }
    else
    {
        v8 = uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v4, a1);
        v9 = *((long long *)&v4);
        *((int128_t *)&v2) = *((int128_t *)&v5);
        *((int128_t *)&v3) = *((int128_t *)&v6);
        if (v9)
        {
            *((void*)((char *)&a0->field_10 + 8)) = v3;
            *((void*)&a0->field_8) = v2;
        }
        else
        {
            v1 = v3;
            v0 = v2;
            v10 = a1[2];
            if (v10 >= a1[1])
            {
                *((void*)((char *)&a0->field_10 + 8)) = v1;
                *((void*)&a0->field_8) = v0;
                a0->field_0 = 0;
                return v8;
            }
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h46745804a890b657(&v4, v10 * 16 + a1[0]);
            *((long long *)&a0->field_18) = *((long long *)&(&v5)[8]);
            a0->field_10 = *((int128_t *)&v4);
            a0->field_8 = 0;
            a0->field_0 = 1;
            v8 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(&v0);
            return v8;
        }
    }
    a0->field_0 = 1;
    return v8;
}
