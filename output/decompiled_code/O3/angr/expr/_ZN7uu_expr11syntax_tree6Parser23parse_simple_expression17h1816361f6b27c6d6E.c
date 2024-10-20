long long uu_expr::syntax_tree::Parser::parse_simple_expression::h1816361f6b27c6d6(struct_0 *a0, struct_2 *a1)
{
    uint128_t v0[2];  // [bp-0x1a8], Other Possible Types: int
    int v1;  // [sp-0x198]
    unsigned long long v2[4];  // [bp-0x188], Other Possible Types: uint128_t [2], unsigned long
    char v3;  // [bp-0x180]
    char v4;  // [bp-0x178]
    char v5;  // [bp-0x170]
    unsigned int v6;  // [sp-0x160]
    char v7;  // [sp-0x15c]
    int v8;  // [sp-0x158]
    int v9;  // [sp-0x148]
    int v10;  // [sp-0x138]
    int v11;  // [sp-0x128]
    int v12;  // [sp-0x118]
    int v13;  // [sp-0x108]
    int v14;  // [sp-0xf8]
    int v15;  // [sp-0xe8]
    int v16;  // [sp-0xd8]
    int v17;  // [sp-0xc8]
    int v18;  // [sp-0xb8]
    int v19;  // [sp-0xa8]
    int v20;  // [sp-0x98]
    int v21;  // [sp-0x88]
    int v22;  // [sp-0x78]
    int v23;  // [sp-0x68]
    int v24;  // [sp-0x58]
    int v25;  // [sp-0x48]
    unsigned long long v27;  // rax
    struct struct_1 **v28;  // rdi
    struct struct_1 **v29;  // rcx
    struct struct_1 **v30;  // rdx
    char v31[5];  // rax
    unsigned long long v32;  // rdx
    struct struct_1 **v33;  // rdi
    struct struct_1 **v34;  // rax
    struct struct_1 **v35;  // rdi
    void* v36;  // r15
    unsigned long v37;  // r14
    unsigned long long v38;  // r12
    struct_2 *v39;  // r14
    uint128_t v40[2];  // rax
    struct_2 *v41;  // r14
    int v42;  // xmm1
    unsigned long long v43;  // rcx
    int v44;  // xmm1
    int v45;  // xmm1
    int v46;  // xmm1
    int v47;  // xmm1
    int v48;  // xmm1
    unsigned long long v49;  // rsi
    char *v50;  // rcx
    unsigned long long v51;  // rdx
    int v52;  // xmm0
    uint128_t v53[2];  // r15
    char v54;  // cl
    int v55;  // xmm1
    unsigned long v56;  // rcx
    uint128_t v57[2];  // rax
    int v58;  // xmm0
    unsigned long long v59;  // rax
    int v61;  // xmm1
    int v62;  // xmm0
    unsigned long long v63;  // rdi
    int v64;  // xmm1
    int v65;  // xmm0
    int v66;  // xmm0
    char v67;  // sil
    char v68;  // dl
    struct struct_1 **v69;  // rdi
    struct struct_1 **v70;  // rax
    unsigned long v71;  // rsi
    unsigned long v72;  // rdx
    unsigned long v73;  // rcx
    unsigned long v74;  // rcx
    unsigned long v75;  // rsi
    unsigned long v76;  // rcx

    v27 = a1->field_8;
    v28 = a1->field_10;
    if (v28 < v27)
    {
        v29 = a1->field_0;
        v30 = v28 * 16;
        a1->field_10 = (char *)v28 + 1;
        v31 = *((long long *)(v29 + v30));
        v32 = *((long long *)(v29 + v30 + 8));
        switch (v32)
        {
        case 1:
            switch (v31[0])
            {
            case 43:
                uu_expr::syntax_tree::Parser::next::h5515c0901d579a62(v2, a1);
                v40 = v2;
                v31 = *((long long *)&v3);
                v32 = *((long long *)&v4);
                if (v40 != 7)
                {
                    v43 = *((long long *)&v5);
                    *((uint128_t *[2])&a0->field_8) = v40;
                    a0->field_10 = v31;
                    a0->field_18 = v32;
                    a0[1].field_0 = v43;
                    a0->field_0 = 1;
                    return v40;
                }
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd806ab0e60b0edfb(v2, v31, v32);
                v53 = *((long long *)&v3);
                v40 = *((long long *)&v4);
                a0->field_8 = 0;
                a0->padding_9[0] = v67;
                a0->padding_9[1] = v68;
                *((unsigned int *)&a0->padding_9[2]) = v6;
                a0->padding_9[6] = v7;
                a0->field_10 = v57;
                a0->field_18 = v53;
                a0[1].field_0 = v40;
                a0->field_0 = 0;
                return v40;
            case 40:
                v41 = a1;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v44 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v44;
                if (vvar_713)
                {
                    vvar_844{reg 224} = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v52;
                    a0->field_0 = 1;
                    return v40;
                }
                v9 = v1;
                *((int128_t *)&v8) = (int128_t)v0;
                uu_expr::syntax_tree::Parser::next::h5515c0901d579a62(v2, v41);
                v49 = v2;
                v50 = *((long long *)&v3);
                v51 = *((long long *)&(&v3)[8]);
                if (v49 != 7)
                {
                    v59 = *((long long *)&v5);
                    *((unsigned long long *)&a0->field_8) = v49;
                    a0->field_10 = v50;
                    a0->field_18 = v51;
                    a0[1].field_0 = v59;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                    return v40;
                }
                if (!(v51 == 1) || !(*(v50) == 41))
                {
                    v69 = (char *)&v41->field_10->field_0 + 1;
                    if (v69 < v41->field_8)
                    {
                        v70 = v41->field_0;
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd806ab0e60b0edfb(v2, *((long long *)((char *)v70 + 0x10 * v69)), *((long long *)(8 + (char *)v70 + 0x10 * v69)));
                        a0[1].field_0 = *((long long *)&(&v3)[8]);
                        *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
                        *((long long *)&a0->field_8) = 6;
                        a0->field_0 = 1;
                        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                        return v40;
                    }
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                v54 = (char)v8;
                v67 = (char)(&v8)[1];
                v68 = (char)(&v8)[2];
                v6 = (int)(&v8)[3];
                v7 = (char)(&v8)[7];
                v57 = (long long)(&v8)[8];
                v53 = (long long)v9;
                v40 = (long long)(&v9)[8];
                break;
            default:
LABEL_4ff9bd:
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd806ab0e60b0edfb(v2, v31, v32);
                a0->field_8 = 0;
                a0->padding_9[0] = v67;
                a0->padding_9[1] = v68;
                *((unsigned int *)&a0->padding_9[2]) = v6;
                a0->padding_9[6] = v7;
                a0->field_10 = v57;
                a0->field_18 = v53;
                a0[1].field_0 = v40;
                a0->field_0 = 0;
                return v40;
            }
        case 6:
            if (!(*((short *)&v31[4]) ^ 29300) && !(1935832435 ^ *((int *)&v31[0])))
            {
                v39 = a1;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v42 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v42;
                if (vvar_710)
                {
                    vvar_838{reg 224} = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v52;
                    a0->field_0 = 1;
                    return v40;
                }
                v13 = v1;
                *((int128_t *)&v12) = (int128_t)v0;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, v39, NULL);
                v48 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v48;
                if (vvar_740)
                {
                    v58 = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v58;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                    return v40;
                }
                v15 = v1;
                *((int128_t *)&v14) = (int128_t)v0;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, v39, NULL);
                v64 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v64;
                if (vvar_761)
                {
                    v66 = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v66;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(&v14);
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                    return v40;
                }
                v21 = v1;
                *((int128_t *)&v20) = (int128_t)v0;
                v57 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v57[1]) = v13;
                *((void*)&v57[0]) = v12;
                *((uint128_t *[2])&v0[0]) = v57;
                v53 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v53[1]) = v15;
                *((void*)&v53[0]) = v14;
                *((uint128_t *[2])&v2[0]) = v53;
                v40 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v40[1]) = v21;
                *((void*)&v40[0]) = v20;
                v54 = v76 | -0x100 | 2;
                break;
            }
            else
            {
                if (!(!(*((short *)&v31[4]) ^ 26740) && !(1735288172 ^ *((int *)&v31[0]))))
                    goto LABEL_4ff9bd;
                v40 = uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v46 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v46;
                if (vvar_720)
                {
                    v52 = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v52;
                    a0->field_0 = 1;
                    return v40;
                }
                v25 = v1;
                *((int128_t *)&v24) = (int128_t)v0;
                v40 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v40[1]) = v25;
                *((void*)&v40[0]) = v24;
                v54 = v56 | -0x100 | 3;
                break;
            }
        case 5:
            if (!(v31[4] ^ 104) && !(1668571501 ^ *((int *)&v31[0])))
            {
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v45 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v45;
                if (vvar_717)
                {
                    vvar_826{reg 224} = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v52;
                    a0->field_0 = 1;
                    return v40;
                }
                v11 = v1;
                *((int128_t *)&v10) = (int128_t)v0;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v55 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v55;
                if (vvar_749)
                {
                    v62 = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v62;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                    return v40;
                }
                v19 = v1;
                *((int128_t *)&v18) = (int128_t)v0;
                v57 = __rust_alloc(32, 8);
                if (!v57)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *((void*)&v57[1]) = v11;
                *((void*)&v57[0]) = v10;
                *((uint128_t *[2])&v2[0]) = v57;
                v40 = __rust_alloc(32, 8);
                if (!v40)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *((void*)&v40[1]) = v19;
                *((void*)&v40[0]) = v18;
                v54 = v74 | -0x100 | 1;
                v67 = v75 | -0x100 | 2;
                v68 = 0;
                break;
            }
            else
            {
                if (!(!(v31[4] ^ 120) && !(1701080681 ^ *((int *)&v31[0]))))
                    goto LABEL_4ff9bd;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v47 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v47;
                if (vvar_730)
                {
                    vvar_832{reg 224} = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v52;
                    a0->field_0 = 1;
                    return v40;
                }
                v17 = v1;
                *((int128_t *)&v16) = (int128_t)v0;
                uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(v2, a1, NULL);
                v61 = *((int128_t *)&v5);
                *((int128_t *)&v0) = *((int128_t *)&v3);
                v1 = v61;
                if (vvar_755)
                {
                    v65 = (int128_t)v0;
                    *((void*)&a0->field_18) = v1;
                    *((void*)&a0->field_8) = v65;
                    a0->field_0 = 1;
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(v63);
                    return v40;
                }
                v23 = v1;
                *((int128_t *)&v22) = (int128_t)v0;
                v57 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v57[1]) = v17;
                *((void*)&v57[0]) = v16;
                *((uint128_t *[2])&v2[0]) = v57;
                v40 = alloc::alloc::exchange_malloc::hfb1e4e27cc1d1260();
                *((void*)&v40[1]) = v23;
                *((void*)&v40[0]) = v22;
                v67 = v71 | -0x100 | 2;
                v68 = v72 | -0x100 | 1;
                v54 = v73 | -0x100 | 1;
                break;
            }
        default:
LABEL_4ff9bd:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd806ab0e60b0edfb(v2, v31, v32);
            a0->field_8 = 0;
            a0->padding_9[0] = v67;
            a0->padding_9[1] = v68;
            *((unsigned int *)&a0->padding_9[2]) = v6;
            a0->padding_9[6] = v7;
            a0->field_10 = v57;
            a0->field_18 = v53;
            a0[1].field_0 = v40;
            a0->field_0 = 0;
            return v40;
        }
        a0->field_8 = v54;
        a0->padding_9[0] = v67;
        a0->padding_9[1] = v68;
        *((unsigned int *)&a0->padding_9[2]) = v6;
        a0->padding_9[6] = v7;
        a0->field_10 = v57;
        a0->field_18 = v53;
        a0[1].field_0 = v40;
        a0->field_0 = 0;
        return v40;
    }
    else
    {
        v33 = (char *)v28 + 1;
        if (v33 >= v27)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v34 = a1->field_0;
        v35 = v33 * 16;
        v36 = *((long long *)(v34 + v35));
        v37 = *((long long *)(v34 + v35 + 8));
        if (!v37)
        {
            ::libc.so.0::memcpy(v38, v36, v37);
            *((long long *)&a0->field_8) = 1;
            a0->field_10 = v37;
            a0->field_18 = 1;
            a0[1].field_0 = v37;
            a0->field_0 = 1;
            return v40;
        }
        if (v37 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v38 = __rust_alloc(v37, 1);
        if (v38)
        {
            v40 = ::libc.so.0::memcpy(v38, v36, v37);
            *((long long *)&a0->field_8) = 1;
            a0->field_10 = v37;
            a0->field_18 = v38;
            a0[1].field_0 = v37;
            a0->field_0 = 1;
            return v40;
        }
    }
}
