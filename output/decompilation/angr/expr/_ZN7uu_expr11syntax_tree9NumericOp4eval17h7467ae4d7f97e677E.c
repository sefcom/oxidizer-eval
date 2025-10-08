long long uu_expr::syntax_tree::NumericOp::eval(struct_1 *a0, unsigned int a1, struct_0 *a2, struct_2 *a3)
{
    int v0;  // [bp-0xd8], Other Possible Types: char
    char v1;  // [bp-0xc8]
    int v2;  // [bp-0xc0]
    char v3;  // [bp-0xb0]
    int v4;  // [bp-0x98]
    char v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    char v7;  // [bp-0x68]
    unsigned long v9;  // rsi
    int v10;  // xmm0
    int v11;  // xmm1
    unsigned long v12;  // rsi
    int v13;  // xmm0
    int v14;  // xmm1

    v9 = &(&a2->padding_4)[1];
    if (a2->field_0 == 1)
    {
        v10 = *((int128_t *)v9);
        v11 = *((int128_t *)(v9 + 16));
    }
    else
    {
        v1.eval_as_bigint(v9);
        v10 = v2;
        memcpy(&v0, &v3, 16);
        if (*((int *)&v1) != 1)
        {
            memcpy(&v7, &v0, 16);
            v6 = v10;
            v12 = &(&a3->padding_1)[1];
            if ((a3->field_0 & 1))
            {
                v13 = *((int128_t *)v12);
                v14 = *((int128_t *)(v12 + 16));
            }
            else
            {
                v1.eval_as_bigint(v12);
                memcpy(&v10, &v2, 16);
                memcpy(&v0, &v3, 16);
                if (*((int *)&v1) == 1)
                {
                    v13 = v10;
                    v14 = v0;
                }
                else
                {
                    memcpy(&v5, &v0, 16);
                    v4 = v10;
                    goto (long long)(g_41ca08[a1] + (char *)&g_41ca08[0]);
                }
            }
            *((void*)((char *)&a0->field_8 + 8)) = v14;
            *((void*)&(&a0->field_0)[1]) = v13;
            a0->field_0 = 1;
            return (unsigned long long)core::ptr::drop_in_place<num_bigint::bigint::BigInt>((long long)v6, (long long)(&v6)[8]);
        }
    }
    *((void*)((char *)&a0->field_8 + 8)) = v11;
    *((void*)&(&a0->field_0)[1]) = v10;
    a0->field_0 = 1;
    return a3.drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>();
}
