long long uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(struct_2 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    char v1;  // [bp-0x110]
    int v2;  // [sp-0x108], Other Possible Types: char
    char v3;  // [bp-0x100]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xe8], Other Possible Types: unsigned long
    int v6;  // [bp-0xe8]
    int v7;  // [sp-0xd8]
    int v8;  // [sp-0xc8]
    int v9;  // [sp-0xb8]
    unsigned int v10;  // [sp-0xa0]
    char v11;  // [sp-0x9c]
    int v12;  // [sp-0x98]
    int v13;  // [sp-0x98]
    int v14;  // [sp-0x88]
    unsigned long long v15;  // [sp-0x70]
    int v16;  // [sp-0x68]
    int v17;  // [sp-0x58]
    int v18;  // [sp-0x48]
    int v19;  // [sp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // r15
    unsigned long long v23;  // r12
    unsigned long long v24;  // rcx
    unsigned long long v25;  // 4098
    int v26;  // xmm1
    unsigned long long v27;  // 4098
    int v28;  // xmm1
    unsigned long long v29;  // 4098
    int v30;  // xmm1
    unsigned long long v31;  // r14
    unsigned long long v32;  // 4098
    int v33;  // xmm1
    unsigned long long v34;  // 4098
    int v35;  // xmm1
    char v36;  // sil
    int v37;  // xmm0
    unsigned long long v38;  // 4098
    int v39;  // xmm1
    unsigned long long v40;  // 4098
    int v41;  // xmm1
    unsigned long long v42;  // 4098
    int v43;  // xmm1
    int v44;  // xmm0
    int v45;  // xmm0
    char *v46;  // rdi
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rdx
    unsigned long v49;  // rsi
    unsigned long long v50;  // rcx
    unsigned long long v51;  // 4098
    int v52;  // xmm1
    int v53;  // xmm0
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rdi
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rax
    struct_2 *v58;  // rcx
    unsigned long long v60;  // rdi
    unsigned long long *v61;  // rax

    uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&v0, a1);
    v21 = *((long long *)&v0);
    v22 = *((long long *)&v1);
    v23 = *((long long *)&v2);
    if (v21 != 7)
    {
        v24 = *((long long *)&v3);
        *((unsigned long long *)&a0->field_8) = v21;
        a0->field_10 = v22;
        a0->field_18 = v23;
        a0[1].field_0 = v24;
        a0->field_0 = 1;
        return v21;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "matchsubstrindexlength()", 5))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v25 = *((long long *)&v0);
        v26 = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v7 = v26;
        if (v25)
        {
            vvar_695{reg 224} = (int128_t)v6;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v53;
            a0->field_0 = 1;
            return v21;
        }
        v14 = v7;
        *((int128_t *)&v12) = (int128_t)v6;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v27 = *((long long *)&v0);
        v28 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v7 = v28;
        if (!v27)
        {
            v9 = v7;
            *((int128_t *)&v8) = (int128_t)v4;
            v2 = v14;
            v0 = v12;
            v31 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
            v5 = v31;
            v2 = v9;
            v0 = v8;
            v21 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
            a0->field_8 = 1;
            a0->padding_9[0] = 2;
            a0->padding_9[1] = 0;
            *((unsigned int *)&a0->padding_9[2]) = v10;
            a0->padding_9[6] = v11;
            a0->field_10 = v31;
            a0->field_18 = v21;
            a0[1].field_0 = v50;
            a0->field_0 = 0;
            return v21;
        }
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "substrindexlength()", 6))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v29 = *((long long *)&v0);
        v30 = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v7 = v30;
        if (v29)
        {
            vvar_701{reg 224} = (int128_t)v6;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v53;
            a0->field_0 = 1;
            return v21;
        }
        v17 = v7;
        *((int128_t *)&v16) = (int128_t)v6;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v32 = *((long long *)&v0);
        v33 = *((int128_t *)&v3);
        *((int128_t *)&v5) = *((int128_t *)&v1);
        v7 = v33;
        if (v32)
        {
            v37 = (int128_t)v5;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v37;
            a0->field_0 = 1;
        }
        else
        {
            v14 = v7;
            *((int128_t *)&v13) = (int128_t)v5;
            uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
            v38 = *((long long *)&v0);
            v39 = *((int128_t *)&v3);
            *((int128_t *)&v5) = *((int128_t *)&v1);
            v7 = v39;
            if (!v38)
            {
                v9 = v7;
                *((int128_t *)&v8) = (int128_t)v5;
                v2 = v17;
                v0 = v16;
                v31 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
                v15 = v31;
                v2 = v14;
                v0 = v13;
                v21 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
                v5 = v21;
                v2 = v9;
                v0 = v8;
                v50 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
                a0->field_8 = 1;
                a0->padding_9[0] = 2;
                a0->padding_9[1] = v36;
                *((unsigned int *)&a0->padding_9[2]) = v10;
                a0->padding_9[6] = v11;
                a0->field_10 = v31;
                a0->field_18 = v21;
                a0[1].field_0 = v50;
                a0->field_0 = 0;
                return v21;
            }
            v44 = (int128_t)v5;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v44;
            a0->field_0 = 1;
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&v13);
        }
        v46 = &v16;
        v21 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(v46);
        return v21;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "indexlength()", 5))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v34 = *((long long *)&v0);
        v35 = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v7 = v35;
        if (v34)
        {
            vvar_707{reg 224} = (int128_t)v6;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v53;
            a0->field_0 = 1;
            return v21;
        }
        v14 = v7;
        *((int128_t *)&v12) = (int128_t)v6;
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v40 = *((long long *)&v0);
        v41 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v7 = v41;
        if (!v40)
        {
            v9 = v7;
            *((int128_t *)&v8) = (int128_t)v4;
            v2 = v14;
            v0 = v12;
            v31 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
            v5 = v31;
            v2 = v9;
            v0 = v8;
            v21 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v0);
            v36 = v49 & 0xffffffffffffff00 | 1;
            a0->field_8 = 1;
            a0->padding_9[0] = 2;
            a0->padding_9[1] = v36;
            *((unsigned int *)&a0->padding_9[2]) = v10;
            a0->padding_9[6] = v11;
            a0->field_10 = v31;
            a0->field_18 = v21;
            a0[1].field_0 = v50;
            a0->field_0 = 0;
            return v21;
        }
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "length()", 6))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v42 = *((long long *)&v0);
        v43 = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v7 = v43;
        if (v42)
        {
            vvar_689{reg 224} = (int128_t)v6;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v53;
            a0->field_0 = 1;
            return v21;
        }
        v19 = v7;
        *((int128_t *)&v18) = (int128_t)v6;
        v21 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&v18);
        v31 = v21;
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v36;
        *((unsigned int *)&a0->padding_9[2]) = v10;
        a0->padding_9[6] = v11;
        a0->field_10 = v31;
        a0->field_18 = v21;
        a0[1].field_0 = v50;
        a0->field_0 = 0;
        return v21;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "+-*/%:matchsubstrindexlength()", 1))
    {
        uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&v0, a1);
        v21 = *((long long *)&v0);
        v47 = *((long long *)&v1);
        v48 = *((long long *)&v2);
        if (v21 != 7)
        {
            v24 = *((long long *)&v3);
            *((unsigned long long *)&a0->field_8) = v21;
            a0->field_10 = v47;
            a0->field_18 = v48;
            a0[1].field_0 = v24;
            a0->field_0 = 1;
            return v21;
        }
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&v0, v47, v48);
        v31 = *((long long *)&v0);
        v21 = *((long long *)&v1);
        v50 = *((long long *)&v2);
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v36;
        *((unsigned int *)&a0->padding_9[2]) = v10;
        a0->padding_9[6] = v11;
        a0->field_10 = v31;
        a0->field_18 = v21;
        a0[1].field_0 = v50;
        a0->field_0 = 0;
        return v21;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v22, v23, "()", 1))
    {
        v21 = uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&v0, a1);
        v51 = *((long long *)&v0);
        v52 = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v7 = v52;
        if (v51)
        {
            v53 = (int128_t)v6;
            *((void*)&a0->field_18) = v7;
            *((void*)&a0->field_8) = v53;
            a0->field_0 = 1;
            return v21;
        }
        v9 = v7;
        *((int128_t *)&v8) = (int128_t)v6;
        uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(&v0, a1);
        v54 = *((long long *)&v0);
        v55 = *((long long *)&v1);
        v56 = *((long long *)&v2);
        if (v54 != 7)
        {
            v57 = *((long long *)&v3);
            *((unsigned long long *)&a0->field_8) = v54;
            a0->field_10 = v55;
            a0->field_18 = v56;
            v58 = 32;
        }
        else
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v55, v56, ")", 1))
            {
                v36 = (char)(&v8)[2];
                v10 = (int)(&v8)[3];
                v11 = (char)(&v8)[7];
                v31 = (long long)(&v8)[8];
                v21 = (long long)v9;
                v50 = (long long)(&v9)[8];
                a0->field_8 = 1;
                a0->padding_9[0] = 2;
                a0->padding_9[1] = v36;
                *((unsigned int *)&a0->padding_9[2]) = v10;
                a0->padding_9[6] = v11;
                a0->field_10 = v31;
                a0->field_18 = v21;
                a0[1].field_0 = v50;
                a0->field_0 = 0;
                return v21;
            }
            v60 = a1->field_10 - 1;
            if (v60 >= a1->field_8)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v60, a1->field_8, &g_5a32b0); /* do not return */
            v61 = a1->field_0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&v0, v61[2 * v60], v61[1 + 2 * v60]);
            a0[1].field_0 = *((long long *)&v2);
            *((void*)&a0->field_10) = v0;
            v57 = 6;
            v58 = 8;
        }
        *((unsigned long long *)(a0 + v58)) = v57;
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(v46);
        return v21;
    }
    else
    {
        v47 = v22;
        v48 = v23;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&v0, v47, v48);
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v36;
        *((unsigned int *)&a0->padding_9[2]) = v10;
        a0->padding_9[6] = v11;
        a0->field_10 = v31;
        a0->field_18 = v21;
        a0[1].field_0 = v50;
        a0->field_0 = 0;
        return v21;
    }
    v45 = (int128_t)v4;
    *((void*)&a0->field_18) = v7;
    *((void*)&a0->field_8) = v45;
    a0->field_0 = 1;
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(v46);
    return v21;
}
