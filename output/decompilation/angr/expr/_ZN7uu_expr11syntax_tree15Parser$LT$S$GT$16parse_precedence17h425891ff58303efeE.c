long long uu_expr::syntax_tree::Parser<S>::parse_precedence(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    int v2;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8], Other Possible Types: char
    char v5;  // [bp-0xe7]
    unsigned int v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xd8]
    int v9;  // [bp-0xd8]
    char v10;  // [bp-0xd0]
    int v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xa8]
    int v15;  // [bp-0xa8]
    int v16;  // [bp-0xa0]
    char v17;  // [bp-0x98]
    int v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x78]
    int v20;  // [bp-0x68], Other Possible Types: char
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long v24;  // [bp-0x38]
    unsigned long long v26;  // r15
    unsigned long long v27;  // rbx
    int v28;  // xmm0
    int v29;  // xmm0
    int v30;  // xmm0
    int v31;  // ymm0
    uint256_t v32;  // ymm0
    char *v33;  // r12
    char v34;  // al
    uint256_t v35;  // ymm0
    int v36;  // xmm0
    unsigned int v37;  // eax
    int v38;  // xmm0
    int v39;  // xmm0
    char v40;  // dl
    unsigned long long v41;  // rax
    int v42;  // xmm0
    int v43;  // xmm0

    v26 = a1;
    if (a2 > 5)
        return a0.parse_simple_expression(a1);
    v27 = a2;
    v24 = a2 + 1;
    v7.parse_precedence(a1, a2 + 1);
    v28 = *((int128_t *)&v10);
    v15 = v28;
    memcpy(&v17, &v12, 16);
    if (v7 == 9223372036854775813)
    {
        v29 = (int128_t)v15;
        *((int128_t *)&v0[24]) = *((int128_t *)&v17);
        v0[8] = v29;
        *((unsigned long long *)v0) = 9223372036854775813;
        return a0;
    }
    v30 = (int128_t)v15;
    v32 = ((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v12)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
    *((int128_t *)&v4) = *((int128_t *)&v17);
    v2 = v30;
    v1 = v7;
    v33 = &v7;
    v21 = 9223372036854775810;
    v23 = a2;
    v22 = a1;
    while (true)
    {
        v7 = v27;
        v34 = v26.accept(v33);
        if (v34 == 3)
        {
            v41 = (long long)(&v4)[8];
            *((unsigned long long *)&v0[32]) = v41;
            v42 = *((int128_t *)&v1);
            *((int128_t *)&v0[16]) = *((int128_t *)&v3);
            *(v0) = v42;
            return v41;
        }
        v33.parse_precedence(v26, v24);
        v35 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10);
        memcpy(&v19, &v10, 16);
        memcpy(&v20, &v12, 16);
        if (v7 == 9223372036854775813)
        {
            v43 = *((int128_t *)&v19);
            v0[24] = v20;
            v0[8] = v43;
            *((long long *)v0) = 9223372036854775813;
            return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v1);
        }
        v36 = *((int128_t *)&v19);
        v18 = v20;
        v16 = v36;
        v14 = v7;
        v37 = uu_expr::syntax_tree::get_next_id();
        v13 = (long long)(&v4)[8];
        v38 = *((int128_t *)&v1);
        *((int128_t *)&v11) = *((int128_t *)&v3);
        v8 = v38;
        *((double *)&v19) = v33.new();
        v13 = (long long)(&v18)[8];
        v39 = *((int128_t *)&v14);
        v32 = ((v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        *((int128_t *)&v11) = (int128_t)(&v16)[8];
        v9 = v39;
        v1 = 9223372036854775810;
        v2 = v19;
        *((double *)&v3) = v33.new();
        v4 = v34;
        v5 = v40;
        v6 = v37;
        v26 = v22;
        v27 = v23;
    }
}
