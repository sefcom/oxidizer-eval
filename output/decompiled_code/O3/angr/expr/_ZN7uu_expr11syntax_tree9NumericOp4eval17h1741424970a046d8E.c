long long uu_expr::syntax_tree::NumericOp::eval::h1741424970a046d8(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [sp-0x138]
    int v1;  // [sp-0x128]
    char v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    char v4;  // [bp-0x100]
    char v5;  // [bp-0xe8]
    char v6;  // [bp-0xe0]
    char v7;  // [bp-0xd0]
    int v8;  // [sp-0xb8]
    int v9;  // [sp-0xa8]
    int v10;  // [sp-0x98]
    int v11;  // [sp-0x88]
    int v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    int v14;  // [sp-0x38]
    int v15;  // [sp-0x28]
    unsigned long long v17;  // rax
    unsigned long long v18;  // 4098
    unsigned long long v19;  // 4098
    unsigned long long v20;  // 4098
    unsigned long long v21;  // 4098

    v17 = uu_expr::syntax_tree::AstNode::eval::h53a202b5ea478805(&v5, a2);
    v18 = *((long long *)&v5);
    *((int128_t *)&v12) = *((int128_t *)&v6);
    *((int128_t *)&v13) = *((int128_t *)&v7);
    if (!v18)
    {
        v17 = uu_expr::syntax_tree::NumOrStr::eval_as_bigint::h4949018605eec7c2(&v2, &v12);
        v19 = *((long long *)&v2);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        if (!v19)
        {
            v11 = v1;
            v10 = v0;
            uu_expr::syntax_tree::AstNode::eval::h53a202b5ea478805(&v5, a3);
            v20 = *((long long *)&v5);
            *((int128_t *)&v14) = *((int128_t *)&v6);
            *((int128_t *)&v15) = *((int128_t *)&v7);
            if (!v20)
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_bigint::h4949018605eec7c2(&v2, &v14);
                v21 = *((long long *)&v2);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                *((int128_t *)&v1) = *((int128_t *)&v4);
                if (!v21)
                {
                    v9 = v1;
                    v8 = v0;
                    goto *((int *)(4623948 + vvar_1 * 4)) + 4623948;
                }
            }
            *((void*)((char *)&a0->field_8 + 8)) = v15;
            *((void*)&(&a0->field_0)[1]) = v14;
            a0->field_0 = 1;
            v17 = core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd219186aba67ade8(&v10);
            return v17;
        }
    }
    *((void*)((char *)&a0->field_8 + 8)) = v13;
    *((void*)&(&a0->field_0)[1]) = v12;
    a0->field_0 = 1;
    return v17;
}
