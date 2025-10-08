long long uu_expr::syntax_tree::Parser<S>::parse_simple_expression(void* a0, unsigned long long a1[3])
{
    int v0;  // [bp-0x178], Other Possible Types: char
    unsigned long long v1;  // [bp-0x170]
    int v2;  // [bp-0x168], Other Possible Types: char
    char v3;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x158]
    int v5;  // [bp-0x148], Other Possible Types: unsigned long long
    int v6;  // [bp-0x148]
    int v7;  // [bp-0x140]
    char v8;  // [bp-0x138], Other Possible Types: unsigned long long
    int v9;  // [sp-0x130]
    unsigned long long v10;  // [bp-0x128]
    unsigned long long v11;  // [bp-0x120]
    int v12;  // [bp-0x118]
    int v13;  // [bp-0x110]
    int v14;  // [bp-0x108], Other Possible Types: char
    unsigned long long v15;  // [bp-0x100]
    int v16;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v17;  // [bp-0xf8]
    int v18;  // [bp-0xf0]
    int v19;  // [bp-0xe8], Other Possible Types: char
    char v20;  // [bp-0xe0]
    char v21;  // [bp-0xd8]
    int v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xc8]
    unsigned long long v24;  // [bp-0xc0]
    int v25;  // [bp-0xb8]
    unsigned long v26;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0xb0], Other Possible Types: unsigned short
    int v28;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    int v29;  // [bp-0x98], Other Possible Types: char
    unsigned long long v30;  // [bp-0x88]
    unsigned long long v31;  // [bp-0x80]
    char v32;  // [bp-0x78]
    char v33;  // [bp-0x68]
    unsigned long long v34;  // [bp-0x58]
    char v35;  // [bp-0x50]
    int v36;  // [bp-0x40]
    unsigned long long v38;  // rax
    unsigned long long v39;  // r12
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    int v42;  // xmm0
    int v43;  // xmm0
    unsigned long long v44;  // r14
    int v45;  // xmm0
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // rax
    char *v50;  // rdi
    int v51;  // xmm0
    int v52;  // xmm0
    int v53;  // xmm0
    unsigned long long v54;  // r13
    unsigned long long v55;  // rax
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    char *v63;  // rdi
    unsigned long long v64;  // rcx
    int v65;  // xmm1
    unsigned long v66;  // rdi
    unsigned long long v68;  // rdx
    unsigned long v69;  // rdi
    unsigned long long v71;  // rdx
    unsigned long long v73;  // rax
    int v74;  // xmm0

    (char)v0.next(a1);
    v38 = *((long long *)&v0);
    v39 = *((long long *)&v2);
    if (v38 != 13)
    {
        *((unsigned long long *)&a0[8]) = v38;
        *((unsigned long long *)&a0[16]) = v1;
        *((unsigned long long *)&a0[24]) = v39;
        *((unsigned long long *)&a0[32]) = v3;
        *((unsigned long long *)a0) = 9223372036854775813;
        return v38;
    }
    else if ((char)v1.equal(v39, "matchsubstrindexlength+()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 5))
    {
        uu_expr::syntax_tree::Parser<S>::parse_expression();
        v40 = *((long long *)&v0);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        memcpy(&v8, &v3, 16);
        if (v40 == 9223372036854775813)
        {
            v61 = (int128_t)v6;
            *((int128_t *)&a0[24]) = *((int128_t *)&v8);
            a0[8] = v61;
            *((unsigned long long *)a0) = 9223372036854775813;
            return v40;
        }
        memcpy(&v14, &v8, 16);
        *((int128_t *)&v12) = (int128_t)v6;
        v11 = v40;
        uu_expr::syntax_tree::Parser<S>::parse_expression();
        v41 = *((long long *)&v0);
        *((int128_t *)&v17) = *((int128_t *)&v1);
        memcpy(&v19, &v3, 16);
        if (v41 == 9223372036854775813)
        {
LABEL_49b727:
            v56 = (int128_t)v17;
            v56 = (int128_t)v17;
            v57 = v19;
            a0[24] = v19;
            a0[8] = v56;
            *((unsigned long long *)a0) = 9223372036854775813;
            v11 = v11;
            v50 = &v11;
            return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
        }
        v42 = (int128_t)v17;
        v9 = v19;
        v7 = v42;
        v5 = v41;
        v4 = v15;
        v43 = *((int128_t *)&v11);
        *((int128_t *)&v2) = (int128_t)v13;
        v0 = v43;
        v44 = (char)v0.new();
        v16 = v44;
        v4 = v10;
        v45 = *((int128_t *)&v5);
        *((int128_t *)&v2) = (int128_t)(&v7)[8];
        v0 = v45;
        v46 = (char)v0.new();
        v27 = 2;
        goto LABEL_49ba18;
        goto LABEL_49ba18;
    }
    else
    {
        if ((char)v1.equal(v39, "substrindexlength+()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 6))
        {
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v40 = *((long long *)&v0);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            memcpy(&v8, &v3, 16);
            if (v40 == 9223372036854775813)
            {
                v61 = (int128_t)v6;
                *((int128_t *)&a0[24]) = *((int128_t *)&v8);
                a0[8] = v61;
                *((unsigned long long *)a0) = 9223372036854775813;
                return v40;
            }
            memcpy(&v20, &v8, 16);
            *((int128_t *)&v18) = (int128_t)v6;
            v16 = v40;
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v47 = *((long long *)&v0);
            *((int128_t *)&v5) = *((int128_t *)&v1);
            memcpy(&v8, &v3, 16);
            if (v47 == 9223372036854775813)
            {
                v48 = (int128_t)v5;
                *((int128_t *)&a0[24]) = *((int128_t *)&v8);
                a0[8] = v48;
                *((unsigned long long *)a0) = 9223372036854775813;
                return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v50);
            }
            memcpy(&v14, &v8, 16);
            *((int128_t *)&v12) = (int128_t)v5;
            v11 = v47;
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v49 = *((long long *)&v0);
            memcpy(&v28, &v1, 16);
            memcpy(&v29, &v3, 16);
            if (v49 == 9223372036854775813)
            {
                a0[24] = v29;
                a0[8] = v28;
                *((unsigned long long *)a0) = 9223372036854775813;
                core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
                v50 = &v16;
                return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v50);
            }
            v9 = v29;
            v7 = v28;
            v5 = v49;
            v4 = *((long long *)&v21);
            v51 = *((int128_t *)&v16);
            v2 = v19;
            v0 = v51;
            *((double *)&v30) = (char)v0.new();
            v4 = v15;
            v52 = *((int128_t *)&v11);
            *((int128_t *)&v2) = (int128_t)v13;
            v0 = v52;
            *((double *)&v28) = (char)v0.new();
            v4 = v10;
            v53 = *((int128_t *)&v5);
            *((int128_t *)&v2) = (int128_t)(&v7)[8];
            v0 = v53;
            v24 = v30;
            v26 = v28;
            *((double *)&v27) = (char)v0.new();
            v54 = 9223372036854775811;
        }
        else if ((char)v1.equal(v39, "indexlength+()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 5))
        {
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v40 = *((long long *)&v0);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            memcpy(&v8, &v3, 16);
            if (v40 == 9223372036854775813)
            {
                v61 = (int128_t)v6;
                *((int128_t *)&a0[24]) = *((int128_t *)&v8);
                a0[8] = v61;
                *((unsigned long long *)a0) = 9223372036854775813;
                return v40;
            }
            memcpy(&v14, &v8, 16);
            *((int128_t *)&v12) = (int128_t)v6;
            v11 = v40;
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v55 = *((long long *)&v0);
            *((int128_t *)&v17) = *((int128_t *)&v1);
            memcpy(&(char)v19, &v3, 16);
            if (v55 == 9223372036854775813)
                goto LABEL_49b727;
            v58 = (int128_t)v17;
            v9 = v19;
            v7 = v58;
            v5 = v55;
            v4 = v15;
            v59 = *((int128_t *)&v11);
            *((int128_t *)&v2) = (int128_t)v13;
            v0 = v59;
            v44 = (char)v0.new();
            v16 = v44;
            v4 = v10;
            v60 = *((int128_t *)&v5);
            *((int128_t *)&v2) = (int128_t)(&v7)[8];
            v0 = v60;
            v46 = (char)v0.new();
            v27 = 258;
LABEL_49ba18:
            v24 = v44;
            v26 = v46;
            v54 = 9223372036854775810;
        }
        else if ((char)v1.equal(v39, "length+()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 6))
        {
            uu_expr::syntax_tree::Parser<S>::parse_expression();
            v40 = *((long long *)&v0);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            memcpy(&v8, &v3, 16);
            if (v40 == 9223372036854775813)
            {
                v61 = (int128_t)v6;
                *((int128_t *)&a0[24]) = *((int128_t *)&v8);
                a0[8] = v61;
                *((unsigned long long *)a0) = 9223372036854775813;
                return v40;
            }
            v31 = v40;
            memcpy(&v32, &v6, 16);
            memcpy(&v33, &v8, 16);
            *((double *)&v24) = v31.new();
            v54 = 9223372036854775812;
        }
        else
        {
            if ((char)v1.equal(v39, "+()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 1))
            {
                (char)v0.next(a1);
                v38 = *((long long *)&v0);
                v39 = *((long long *)&v2);
                if (v38 != 13)
                {
                    v64 = v3;
                    *((unsigned long long *)&a0[8]) = v38;
                    *((unsigned long long *)&a0[16]) = v1;
                    *((unsigned long long *)&a0[24]) = v39;
                    *((unsigned long long *)&a0[32]) = v64;
                    *((unsigned long long *)a0) = 9223372036854775813;
                    return v38;
                }
                v63 = &(char)v24;
            }
            else
            {
                if ((char)v1.equal(v39, "()/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 1))
                {
                    uu_expr::syntax_tree::Parser<S>::parse_expression();
                    v40 = *((long long *)&v0);
                    *((int128_t *)&v16) = *((int128_t *)&v1);
                    memcpy(&(char)v19, &(char)v3, 16);
                    if (v40 == 9223372036854775813)
                    {
                        v61 = (int128_t)v16;
                        a0[24] = v19;
                        a0[8] = v61;
                        *((unsigned long long *)a0) = 9223372036854775813;
                        return v40;
                    }
                    v34 = v40;
                    memcpy(&v35, &(char)v16, 16);
                    v36 = v19;
                    (char)v6.evaluated(&v34);
                    v40 = v5;
                    memcpy(&v28, &v7, 16);
                    memcpy(&v29, &(char)v9, 16);
                    if (v40 == 9223372036854775813)
                    {
                        a0[24] = v29;
                        a0[8] = v28;
                        *((unsigned long long *)a0) = 9223372036854775813;
                        return v40;
                    }
                    v14 = v29;
                    v12 = v28;
                    v11 = v40;
                    (char)v0.next(a1);
                    if (*((long long *)&v0) == 1)
                    {
                        v69 = a1[2] - 1;
                        if (v69 >= a1[1])
                            core::panicking::panic_bounds_check(v69, a1[1], &g_549908); /* do not return */
                        (char)v6.to_vec(*((long long *)(a1[0] + v69 * 24 + 8)).as_ref(*((long long *)(a1[0] + v69 * 24 + 16))), v71);
                        *((unsigned long long *)&a0[32]) = v8;
                        *((int128_t *)&a0[16]) = (int128_t)v6;
                        *((unsigned long long *)&a0[8]) = 6;
                        *((unsigned long long *)a0) = 9223372036854775813;
                        core::ptr::drop_in_place<uu_expr::ExprError>(&(char)v0);
                        v50 = &v11;
                        return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
                    }
                    else if ((int)*((long long *)&v0) != 13)
                    {
                        v56 = *((int128_t *)&v0);
                        v57 = (int128_t)v2;
                        a0[24] = v57;
                        a0[8] = v56;
                        *((unsigned long long *)a0) = 9223372036854775813;
                        v11 = v11;
                        v50 = &v11;
                        return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
                    }
                    else if ((char)v1.equal((&v1)[1], ")/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:", 1))
                    {
                        v65 = (int128_t)(&v12)[8];
                        *((int128_t *)&v22) = *((int128_t *)&v11);
                        v25 = v65;
                        v73 = uu_expr::syntax_tree::get_next_id();
                        v74 = (int128_t)v22;
                        *((int128_t *)&a0[16]) = *((int128_t *)&v26);
                        *(a0) = v74;
                        *((unsigned int *)&a0[32]) = v73;
                        return v73;
                    }
                    else
                    {
                        v66 = a1[2] - 1;
                        if (v66 >= a1[1])
                            core::panicking::panic_bounds_check(v66, a1[1], &g_5498f0); /* do not return */
                        (char)v6.to_vec(*((long long *)(a1[0] + v66 * 24 + 8)).as_ref(*((long long *)(a1[0] + v66 * 24 + 16))), v68);
                        *((unsigned long long *)&a0[32]) = v8;
                        *((int128_t *)&a0[16]) = (int128_t)v6;
                        *((unsigned long long *)&a0[8]) = 7;
                        *((unsigned long long *)a0) = 9223372036854775813;
                        v11 = v11;
                        v50 = &v11;
                        return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
                    }
                }
                v63 = &(char)v24;
            }
            v63.to_vec(v1, v39);
            v54 = 9223372036854775809;
        }
        v23 = v54;
        v73 = uu_expr::syntax_tree::get_next_id();
        v74 = (int128_t)v22;
        *((int128_t *)&a0[16]) = *((int128_t *)&v26);
        *(a0) = v74;
        *((unsigned int *)&a0[32]) = v73;
        return v73;
    }
}
