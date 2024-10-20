long long uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(struct_3 *a0, struct_0 *a1, struct_2 *a2)
{
    char v0;  // [sp-0xe9]
    int v1;  // [bp-0xe8], Other Possible Types: char
    char v2;  // [sp-0xe7]
    char v3;  // [sp-0xe6]
    uint128_t v4[2];  // [sp-0xe0]
    uint128_t v5[2];  // [bp-0xd8], Other Possible Types: int
    unsigned long long *v6;  // [sp-0xc8]
    int v7;  // [sp-0xb8]
    int v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    uint128_t v11[2];  // [bp-0x80], Other Possible Types: char
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x68]
    int v14;  // [sp-0x58]
    int v15;  // [sp-0x48]
    unsigned long long v17;  // r12
    unsigned long long v18;  // rax
    int v19;  // xmm0
    int v20;  // xmm1
    int v21;  // xmm0
    int v22;  // ymm0
    int v23;  // ymm0
    int v24;  // xmm1
    int v25;  // ymm1
    int v26;  // ymm1
    struct_2 *v27;  // r14
    void* *v28;  // r12
    unsigned long long *v29;  // rax
    unsigned long long *v30;  // rcx
    void* v31;  // r13
    unsigned long v32;  // rbp
    void* *v33;  // r14
    char v34;  // bpl
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // xmm1
    uint128_t v39[2];  // rax
    int v40;  // xmm0
    int v41;  // xmm1
    uint128_t v42[2];  // rax
    int v43;  // xmm0
    int v44;  // xmm1
    unsigned int v45;  // esi
    char v46;  // dil

    if (a2 > 5)
        return uu_expr::syntax_tree::Parser::parse_simple_expression::h1816361f6b27c6d6(a0, a1);
    v17 = &a2->padding_0[1];
    uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(&v11, a1, v17);
    v19 = *((int128_t *)&v12);
    v20 = *((int128_t *)&v13);
    v7 = v19;
    v8 = v20;
    if (vvar_320)
    {
        *((void*)&a0->field_18) = v8;
        *((void*)&a0->field_8) = v7;
        a0->field_0 = 1;
        return v18;
    }
    v10 = v17;
    v21 = v7;
    v23 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
    v24 = v8;
    v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
    v5 = v24;
    v1 = v21;
    v6 = &a1->field_10->field_0;
    if (v6 < a1->field_8)
    {
        v27 = a2 * 16;
        v28 = *((long long *)(v27 + &g_56aab0));
        v9 = *((long long *)(v27 + &g_56aab8));
        while (v9)
        {
            v29 = v6 * 16;
            v30 = a1->field_0;
            v31 = *((long long *)(v30 + v29));
            v32 = *((long long *)(v30 + v29 + 8));
            v33 = 0;
            while (v32 != *((long long *)(v28 + v33 + 8)) || bcmp(v31, *((long long *)(v28 + v33)), v32))
            {
                v33 += 3;
                if ((v9 << 3) + (v9 << 4) == v33)
                {
                    vvar_358{reg 64} = (int)(&v1)[3];
                    vvar_359{reg 72} = (char)(&v1)[7];
                    a0->field_18 = (long long)v5;
                    a0[1].field_0 = (long long)(&v5)[8];
                    a0->field_8 = v1;
                    a0->padding_9[0] = v2;
                    a0->padding_9[1] = v3;
                    *((unsigned int *)&a0->padding_9[2]) = v45;
                    *((int *)&a0->padding_9[6]) = vvar_359{reg 72};
                    *((uint128_t *[2])&a0->padding_9[7]) = v4;
                    a0->field_0 = 0;
                    return v18;
                }
            }
            v34 = *((char *)(v28 + v33 + 16));
            v0 = *((char *)(v28 + v33 + 17));
            a1->field_10 = (char *)v6 + 1;
            uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(&v11, a1, v10);
            v35 = *((int128_t *)&v12);
            v36 = *((int128_t *)&v13);
            v7 = v35;
            v8 = v36;
            if (vvar_330)
            {
                *((void*)&a0->field_18) = v8;
                *((void*)&a0->field_8) = v7;
                a0->field_0 = 1;
                v18 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(&v1);
                return v18;
            }
            v37 = v7;
            v38 = v8;
            v15 = v38;
            v14 = v37;
            v39 = __rust_alloc(32, 8);
            if (!v39)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v40 = (int128_t)v1;
            v41 = (int128_t)v5;
            *((void*)&v39[1]) = v41;
            *((void*)&v39[0]) = v40;
            *((uint128_t *[2])&v11[0]) = v39;
            v42 = __rust_alloc(32, 8);
            if (!v42)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v43 = v14;
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v44 = v15;
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            *((void*)&v42[1]) = v44;
            *((void*)&v42[0]) = v43;
            v1 = 1;
            v2 = v34;
            v3 = v0;
            *((uint128_t *[2])&v4[0]) = v39;
            *((uint128_t *[2])&v5[0]) = v42;
            v6 = &a1->field_10->field_0;
            if (v6 >= a1->field_8)
                break;
        }
    }
    v18 = v1;
    v45 = (int)(&v1)[3];
    v46 = (char)(&v1)[7];
    a0->field_18 = (long long)v5;
    a0[1].field_0 = (long long)(&v5)[8];
    a0->field_8 = v18;
    a0->padding_9[0] = v2;
    a0->padding_9[1] = v3;
    *((unsigned int *)&a0->padding_9[2]) = v45;
    a0->padding_9[6] = v46;
    *((uint128_t *[2])&a0->padding_9[7]) = v4;
    a0->field_0 = 0;
    return v18;
}
