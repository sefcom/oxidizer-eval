long long uu_expr::syntax_tree::Parser::parse_simple_expression::h3f444cf083c8ff9f(struct_2 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    char v1;  // [bp-0x110]
    int v2;  // [bp-0x108], Other Possible Types: char
    char v3;  // [bp-0x100]
    int v4;  // [bp-0xe8], Other Possible Types: unsigned long
    int v5;  // [sp-0xd8]
    int v6;  // [sp-0xc8]
    int v7;  // [sp-0xb8]
    unsigned int v8;  // [sp-0xa0]
    char v9;  // [sp-0x9c]
    int v10;  // [sp-0x98]
    int v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x70]
    int v13;  // [sp-0x68]
    int v14;  // [sp-0x58]
    int v15;  // [sp-0x48]
    int v16;  // [sp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // r12
    unsigned long long v21;  // rcx
    unsigned long long v22;  // 4098
    int v23;  // xmm1
    unsigned long long v24;  // 4098
    int v25;  // xmm1
    unsigned long long v26;  // 4098
    int v27;  // xmm1
    unsigned long long v28;  // rax
    unsigned long long v29;  // 4098
    int v30;  // xmm1
    unsigned long long v31;  // 4098
    int v32;  // xmm1
    char v33;  // sil
    int v34;  // xmm0
    unsigned long long v35;  // 4098
    int v36;  // xmm1
    unsigned long long v37;  // 4098
    int v38;  // xmm1
    unsigned long long v39;  // 4098
    int v40;  // xmm1
    int v41;  // xmm0
    int v42;  // xmm0
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rax
    unsigned long v45;  // rsi
    unsigned long long v46;  // 4098
    int v47;  // xmm1
    int v48;  // xmm0
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rdi
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rax
    struct_2 *v53;  // rcx
    unsigned long long *v54;  // rdi
    unsigned long long *v55;  // rax

    uu_expr::syntax_tree::Parser::next::he8924565b55ea562(&v0, a1);
    v18 = *((long long *)&v0);
    v19 = *((long long *)&v1);
    v20 = *((long long *)&v2);
    if (v18 != 7)
    {
        v21 = *((long long *)&v3);
        *((unsigned long long *)&a0->field_8) = v18;
        a0->field_10 = v19;
        a0->field_18 = v20;
        a0[1].field_0 = v21;
        a0->field_0 = 1;
        return v18;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "matchsubstrindexlength()", 5))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v22 = *((long long *)&v0);
        v23 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v23;
        if (v22)
        {
            vvar_730{reg 224} = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v48;
            a0->field_0 = 1;
            return v18;
        }
        v11 = v5;
        *((int128_t *)&v10) = (int128_t)v4;
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v24 = *((long long *)&v0);
        v25 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v25;
        if (!v24)
        {
            v7 = v5;
            *((int128_t *)&v6) = (int128_t)v4;
            v2 = v11;
            v0 = v10;
            v28 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
            v4 = v28;
            v2 = v7;
            v0 = v6;
            v18 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
            a0->field_8 = 1;
            a0->padding_9[0] = 2;
            a0->padding_9[1] = 0;
            *((unsigned int *)&a0->padding_9[2]) = v8;
            a0->padding_9[6] = v9;
            a0->field_10 = v28;
            a0->field_18 = v18;
            a0[1].field_0 = v44;
            a0->field_0 = 0;
            return v18;
        }
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "substrindexlength()", 6))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v26 = *((long long *)&v0);
        v27 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v27;
        if (v26)
        {
            vvar_736{reg 224} = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v48;
            a0->field_0 = 1;
            return v18;
        }
        v14 = v5;
        *((int128_t *)&v13) = (int128_t)v4;
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v29 = *((long long *)&v0);
        v30 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v30;
        if (v29)
        {
            v34 = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v34;
            a0->field_0 = 1;
        }
        else
        {
            v11 = v5;
            *((int128_t *)&v10) = (int128_t)v4;
            uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
            v35 = *((long long *)&v0);
            v36 = *((int128_t *)&v3);
            *((int128_t *)&v4) = *((int128_t *)&v1);
            v5 = v36;
            if (!v35)
            {
                v7 = v5;
                *((int128_t *)&v6) = (int128_t)v4;
                v2 = v14;
                v0 = v13;
                v28 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
                v12 = v28;
                v2 = v11;
                v0 = v10;
                v18 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
                v4 = v18;
                v2 = v7;
                v0 = v6;
                v44 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
                a0->field_8 = 1;
                a0->padding_9[0] = 2;
                a0->padding_9[1] = v33;
                *((unsigned int *)&a0->padding_9[2]) = v8;
                a0->padding_9[6] = v9;
                a0->field_10 = v28;
                a0->field_18 = v18;
                a0[1].field_0 = v44;
                a0->field_0 = 0;
                return v18;
            }
            v41 = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v41;
            a0->field_0 = 1;
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(&v10);
        }
        v43 = &v13;
        v18 = core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(v43);
        return v18;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "indexlength()", 5))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v31 = *((long long *)&v0);
        v32 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v32;
        if (v31)
        {
            vvar_742{reg 224} = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v48;
            a0->field_0 = 1;
            return v18;
        }
        v11 = v5;
        *((int128_t *)&v10) = (int128_t)v4;
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v37 = *((long long *)&v0);
        v38 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v38;
        if (!v37)
        {
            v7 = v5;
            *((int128_t *)&v6) = (int128_t)v4;
            v2 = v11;
            v0 = v10;
            v28 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
            v4 = v28;
            v2 = v7;
            v0 = v6;
            v18 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v0);
            v33 = v45 | -0x100 | 1;
            a0->field_8 = 1;
            a0->padding_9[0] = 2;
            a0->padding_9[1] = v33;
            *((unsigned int *)&a0->padding_9[2]) = v8;
            a0->padding_9[6] = v9;
            a0->field_10 = v28;
            a0->field_18 = v18;
            a0[1].field_0 = v44;
            a0->field_0 = 0;
            return v18;
        }
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "length()", 6))
    {
        uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v39 = *((long long *)&v0);
        v40 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v40;
        if (v39)
        {
            vvar_724{reg 224} = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v48;
            a0->field_0 = 1;
            return v18;
        }
        v16 = v5;
        *((int128_t *)&v15) = (int128_t)v4;
        v18 = alloc::boxed::Box$LT$T$GT$::new::hb03005d2591d7956(&v15);
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v33;
        *((unsigned int *)&a0->padding_9[2]) = v8;
        a0->padding_9[6] = v9;
        a0->field_10 = v28;
        a0->field_18 = v18;
        a0[1].field_0 = v44;
        a0->field_0 = 0;
        return v18;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "+-*/%:matchsubstrindexlength()", 1))
    {
        uu_expr::syntax_tree::Parser::next::he8924565b55ea562(&v0, a1);
        v18 = *((long long *)&v0);
        v19 = *((long long *)&v1);
        v20 = *((long long *)&v2);
        if (v18 != 7)
        {
            v21 = *((long long *)&v3);
            *((unsigned long long *)&a0->field_8) = v18;
            a0->field_10 = v19;
            a0->field_18 = v20;
            a0[1].field_0 = v21;
            a0->field_0 = 1;
            return v18;
        }
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h45458f0c81c4a31c(&v0, v19, v20);
        v28 = *((long long *)&v0);
        v18 = *((long long *)&v1);
        v44 = *((long long *)&v2);
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v33;
        *((unsigned int *)&a0->padding_9[2]) = v8;
        a0->padding_9[6] = v9;
        a0->field_10 = v28;
        a0->field_18 = v18;
        a0[1].field_0 = v44;
        a0->field_0 = 0;
        return v18;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v19, v20, "()", 1))
    {
        v18 = uu_expr::syntax_tree::Parser::parse_expression::h0147c71a2da64be6(&v0, a1);
        v46 = *((long long *)&v0);
        v47 = *((int128_t *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v5 = v47;
        if (v46)
        {
            v48 = (int128_t)v4;
            *((void*)&a0->field_18) = v5;
            *((void*)&a0->field_8) = v48;
            a0->field_0 = 1;
            return v18;
        }
        v7 = v5;
        *((int128_t *)&v6) = (int128_t)v4;
        uu_expr::syntax_tree::Parser::next::he8924565b55ea562(&v0, a1);
        v49 = *((long long *)&v0);
        v50 = *((long long *)&v1);
        v51 = *((long long *)&v2);
        if (v49 != 7)
        {
            v52 = *((long long *)&v3);
            *((unsigned long long *)&a0->field_8) = v49;
            a0->field_10 = v50;
            a0->field_18 = v51;
            v53 = 32;
        }
        else
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h653a153253bfecb1(v50, v51, ")", 1))
            {
                v33 = (char)(&v6)[2];
                v8 = (int)(&v6)[3];
                v9 = (char)(&v6)[7];
                v28 = (long long)(&v6)[8];
                v18 = (long long)v7;
                v44 = (long long)(&v7)[8];
                a0->field_8 = 1;
                a0->padding_9[0] = 2;
                a0->padding_9[1] = v33;
                *((unsigned int *)&a0->padding_9[2]) = v8;
                a0->padding_9[6] = v9;
                a0->field_10 = v28;
                a0->field_18 = v18;
                a0[1].field_0 = v44;
                a0->field_0 = 0;
                return v18;
            }
            v54 = a1->field_10 - 1;
            if (v54 >= a1->field_8)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v55 = a1->field_0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h45458f0c81c4a31c(&v0, *((long long *)((char *)v55 + 0x10 * v54)), *((long long *)(8 + (char *)v55 + 0x10 * v54)));
            a0[1].field_0 = *((long long *)&v2);
            *((void*)&a0->field_10) = v0;
            v52 = 6;
            v53 = 8;
        }
        *((unsigned long long *)(a0 + v53)) = v52;
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(v43);
        return v18;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h45458f0c81c4a31c(&v0, v19, v20);
        a0->field_8 = 1;
        a0->padding_9[0] = 2;
        a0->padding_9[1] = v33;
        *((unsigned int *)&a0->padding_9[2]) = v8;
        a0->padding_9[6] = v9;
        a0->field_10 = v28;
        a0->field_18 = v18;
        a0[1].field_0 = v44;
        a0->field_0 = 0;
        return v18;
    }
    v42 = (int128_t)v4;
    *((void*)&a0->field_18) = v5;
    *((void*)&a0->field_8) = v42;
    a0->field_0 = 1;
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hc91ad76878fd327d(v43);
    return v18;
}
