long long uu_expr::syntax_tree::RelationOp::eval(struct_1 *a0, unsigned int a1, struct_0 *a2, struct_2 *a3)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa0]
    char v2;  // [bp-0x88], Other Possible Types: unsigned long long
    char v3;  // [bp-0x80]
    int v4;  // [bp-0x68]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    unsigned long v9;  // r15
    int v10;  // xmm0
    unsigned long v11;  // r12
    int v12;  // xmm0

    v9 = &(&a2->padding_4)[1];
    if (a2->field_0 == 1)
    {
        v10 = *((int128_t *)v9);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)(v9 + 16));
        *((void*)&(&a0->field_0)[1]) = v10;
        a0->field_0 = 1;
        return a3.drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>();
    }
    *((int128_t *)&v5) = *((int128_t *)(v9 + 16));
    *((int128_t *)&v4) = *((int128_t *)v9);
    v11 = &(&a3->padding_1)[1];
    if ((a3->field_0 & 1))
    {
        v12 = *((int128_t *)v11);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)(v11 + 16));
        *((void*)&(&a0->field_0)[1]) = v12;
        a0->field_0 = 1;
        return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v9);
    }
    *((int128_t *)&v7) = *((int128_t *)(v11 + 16));
    *((int128_t *)&v6) = *((int128_t *)v11);
    v2.to_bigint(v9);
    v0.to_bigint(v11);
    if (((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63) | (char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)) == 1)
    {
        v0.drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(*((long long *)&v1));
        v2.drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(*((long long *)&v3));
        v2.eval_as_string(v9);
        v0.eval_as_string(v11);
        goto (long long)(g_41c9f0[a1] + (char *)&g_41c9f0[0]);
    }
    else
    {
        goto (long long)(g_41c9d8[a1] + (char *)&g_41c9d8[0]);
    }
}
