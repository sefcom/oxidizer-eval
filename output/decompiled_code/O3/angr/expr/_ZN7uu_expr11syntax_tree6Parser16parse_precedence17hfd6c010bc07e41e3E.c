long long uu_expr::syntax_tree::Parser::parse_precedence::hfd6c010bc07e41e3(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0xd8], Other Possible Types: unsigned long
    int v1;  // [sp-0xc8]
    char v2;  // [bp-0xb8]
    char v3;  // [sp-0xb7]
    char v4;  // [sp-0xb6]
    unsigned long long v5;  // [sp-0xb0]
    int v6;  // [bp-0xa8], Other Possible Types: unsigned long
    int v7;  // [bp-0x98], Other Possible Types: char
    char v8;  // [bp-0x90]
    int v9;  // [sp-0x88]
    char v10;  // [bp-0x80]
    unsigned long long v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    unsigned long long v15;  // r13
    unsigned long long v16;  // rax
    unsigned long long v17;  // 4098
    int v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // ymm0
    int v23;  // ymm0
    int v24;  // xmm1
    int v25;  // ymm1
    int v26;  // ymm1
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r13
    unsigned long long v29;  // 4096
    void* v30;  // r12
    unsigned long long v32;  // 4098
    int v33;  // xmm0
    int v34;  // xmm1
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // xmm1
    unsigned long long v39;  // rax
    int v40;  // xmm0
    int v41;  // xmm1
    char v42;  // dl
    int v44;  // xmm0
    int v45;  // xmm0

    if (a2 > 5)
        return uu_expr::syntax_tree::Parser::parse_simple_expression::h3f444cf083c8ff9f(a0, a1);
    v15 = a2 + 1;
    v16 = uu_expr::syntax_tree::Parser::parse_precedence::hfd6c010bc07e41e3(&v7, a1, v15);
    v17 = *((long long *)&v7);
    v18 = *((int128_t *)&v8);
    v19 = *((int128_t *)&v10);
    v0 = v18;
    v1 = v19;
    if (v17)
    {
        v20 = (int128_t)v0;
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v20;
        a0->field_0 = 1;
        return v16;
    }
    v21 = (int128_t)v0;
    v23 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
    v24 = v1;
    v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
    v6 = v24;
    *((void*)&v2) = v21;
    v27 = &v7;
    v11 = v15;
    while (true)
    {
        v30 = v29;
        v16 = uu_expr::syntax_tree::Parser::parse_op::h2895e27b44b1e69c(v30, a2);
        if ((char)v16 == 3)
        {
            v44 = *((int128_t *)&v2);
            *((int128_t *)((char *)&a0->field_8 + 8)) = (int128_t)v6;
            *((void*)&(&a0->field_0)[1]) = v44;
            a0->field_0 = 0;
            return v16;
        }
        uu_expr::syntax_tree::Parser::parse_precedence::hfd6c010bc07e41e3(v27, v30, v28);
        v32 = (long long)v7;
        v33 = *((int128_t *)&v8);
        v34 = *((int128_t *)&v10);
        v0 = v33;
        v1 = v34;
        if (v32)
        {
            v45 = (int128_t)v0;
            *((void*)((char *)&a0->field_8 + 8)) = v1;
            *((void*)&(&a0->field_0)[1]) = v45;
            a0->field_0 = 1;
            v16 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(&v2);
            return v16;
        }
        v35 = (int128_t)v0;
        v36 = v1;
        v13 = v36;
        v12 = v35;
        v37 = *((int128_t *)&v2);
        v38 = (int128_t)v6;
        v9 = v38;
        v7 = v37;
        v39 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(v27);
        v0 = v39;
        v40 = v12;
        v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v41 = v13;
        v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
        v9 = v41;
        v7 = v40;
        v2 = 1;
        v3 = v16 & 4294967295 & 4294967295;
        v4 = v42;
        v5 = v39;
        *((double *)&v6) = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(v27);
        v28 = v11;
    }
}
