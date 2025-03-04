long long uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0xd8], Other Possible Types: unsigned long
    int v1;  // [sp-0xc8]
    char v2;  // [bp-0xb8]
    int v4;  // [bp-0xa8], Other Possible Types: unsigned long
    int v5;  // [bp-0x98], Other Possible Types: char
    int v6;  // [sp-0x98]
    int v7;  // [sp-0x88]
    unsigned long long v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x60]
    int v10;  // [sp-0x58]
    int v11;  // [sp-0x48]
    void* v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15;  // rax
    unsigned long long v16;  // 4098
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // ymm0
    int v22;  // ymm0
    int v23;  // xmm1
    int v24;  // ymm1
    int v25;  // ymm1
    char *v26;  // rbx
    unsigned long long v27;  // 4098
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm0
    int v31;  // xmm1
    int v32;  // xmm0
    int v33;  // xmm1
    unsigned long long v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm1
    char v37;  // dl
    int v38;  // xmm0
    int v39;  // xmm0

    v13 = a1;
    if (a2 > 5)
        return uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(a0, a1);
    v14 = a2 + 1;
    v15 = uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(&v5, a1, v14);
    v16 = *((long long *)&v5);
    v17 = *((int128_t *)&v5);
    v18 = *((int128_t *)&v5);
    v0 = v17;
    v1 = v18;
    if (v16)
    {
        v19 = (int128_t)v0;
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v19;
        a0->field_0 = 1;
        return v15;
    }
    v20 = (int128_t)v0;
    v22 = (v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
    v23 = v1;
    v25 = (v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
    v4 = v23;
    *((void*)&v2) = v20;
    v26 = &v5;
    v9 = a1;
    v8 = v14;
    while (true)
    {
        v15 = uu_expr::syntax_tree::Parser::parse_op::hcd25fd2e93ef8ca6(v13, a2);
        if ((char)v15 == 3)
        {
            v38 = *((int128_t *)&v2);
            *((int128_t *)((char *)&a0->field_8 + 8)) = (int128_t)v4;
            *((void*)&(&a0->field_0)[1]) = v38;
            a0->field_0 = 0;
            return v15;
        }
        uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(v26, v13, v14);
        v27 = *((long long *)&v5);
        v28 = *((int128_t *)&v5);
        v29 = *((int128_t *)&v5);
        v0 = v28;
        v1 = v29;
        if (v27)
        {
            v39 = (int128_t)v0;
            *((void*)((char *)&a0->field_8 + 8)) = v1;
            *((void*)&(&a0->field_0)[1]) = v39;
            a0->field_0 = 1;
            v15 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&v2);
            return v15;
        }
        v30 = (int128_t)v0;
        v31 = v1;
        v11 = v31;
        v10 = v30;
        v32 = *((int128_t *)&v2);
        v33 = (int128_t)v4;
        v7 = v33;
        v6 = v32;
        v34 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(v26);
        v0 = v34;
        v35 = v10;
        v22 = (((v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        v36 = v11;
        v25 = (((v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
        v5 = v36;
        v5 = v35;
        v2 = 1;
        v2 = v15 & 4294967295 & 4294967295;
        v2 = v37;
        *((unsigned long long *)&v2) = v34;
        *((double *)&v4) = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(v26);
        v14 = v8;
        v13 = v9;
    }
}
