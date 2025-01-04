int uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d()
{
    int v0;  // [sp-0x108]
    int v1;  // [sp-0xf8]
    char v2;  // [bp-0xe8]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0xb0]
    int v5;  // [bp-0x98], Other Possible Types: char
    char v6;  // [bp-0x90]
    int v7;  // [sp-0x88]
    char v8;  // [bp-0x80]
    int v9;  // [sp-0x68]
    int v10;  // [sp-0x58]
    int v11;  // [sp-0x48]
    int v12;  // [sp-0x38]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // 4098
    struct_0 *v16;  // rdi
    unsigned long long v17;  // rcx
    unsigned long long v18;  // 4098

    uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&v5, v14);
    v15 = *((long long *)&v5);
    *((int128_t *)&v0) = *((int128_t *)&v6);
    *((int128_t *)&v1) = *((int128_t *)&v8);
    if (v15)
    {
        *((void*)((char *)&v16->field_8 + 8)) = v1;
        *((void*)&(&v16->field_0)[1]) = v0;
        v16->field_0 = 1;
    }
    else
    {
        v10 = v1;
        v9 = v0;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&v5, v17);
        v18 = *((long long *)&v5);
        *((int128_t *)&v0) = *((int128_t *)&v6);
        *((int128_t *)&v1) = *((int128_t *)&v8);
        if (!v18)
        {
            v12 = v1;
            v11 = v0;
            uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&v2, &v9);
            uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&v0, &v11);
            if (*((long long *)&v2) != 0x8000000000000000 && (long long)v0 != 0x8000000000000000)
                goto *((int *)(4583484 + vvar_28{reg 64} * 4)) + 4583484;
            v7 = v10;
            v5 = v9;
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&v3, &v5);
            v7 = v12;
            v5 = v11;
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&v4, &v5);
            goto *((int *)(4583508 + vvar_28{reg 64} * 4)) + 4583508;
        }
        else
        {
            *((void*)((char *)&v16->field_8 + 8)) = v1;
            *((void*)&(&v16->field_0)[1]) = v0;
            v16->field_0 = 1;
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&v9);
        }
    }
    return;
}
