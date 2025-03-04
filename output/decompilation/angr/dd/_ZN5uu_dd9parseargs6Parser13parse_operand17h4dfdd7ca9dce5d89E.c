long long uu_dd::parseargs::Parser::parse_operand::h4dfdd7ca9dce5d89(struct_2 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    struct_2 *v0;  // [sp-0x90]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x7f]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    struct_2 *v13;  // rbx
    unsigned long long v14;  // r14
    unsigned long long v15;  // r15
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r12
    unsigned long long v18;  // rcx
    struct_2 *v19;  // rax
    struct_0 *v20;  // rcx
    unsigned long long v21;  // r12
    struct_0 *v22;  // rcx
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx
    struct_0 *v25;  // rdx
    struct_0 *v26;  // rcx
    struct_1 *v27;  // r14
    struct_0 *v28;  // rcx
    struct_2 *v29;  // rdx
    struct_2 *v30;  // rdx
    struct_0 *v31;  // rdx
    struct_0 *v32;  // rdx
    unsigned long long v33;  // rsi
    struct_2 *v34;  // rdi
    unsigned long long v35;  // rcx
    struct_2 *v36;  // rsi

    v13 = a0;
    core::str::_$LT$impl$u20$str$GT$::split_once::h587279427cde36f1(&v8, a2, a3);
    v14 = *((long long *)&v8);
    if (!v14)
    {
        v19 = ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v13->field_8, a2, a3);
        v13->field_0 = 0;
        return v19;
    }
    v0 = a0;
    v15 = *((long long *)&v9);
    v16 = *((long long *)&v10);
    v17 = *((long long *)&v11);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "bs", 2))
    {
        uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&v1, v16, v17);
        v18 = *((long long *)&v1);
        v19 = *((long long *)&v2);
        if (v18 != 14)
        {
            vvar_546{reg 32} = v0;
            v29->field_9 = *((int128_t *)&v4);
            v29->field_0 = v18;
            *((struct_2 **)&v29->field_8) = v19;
            return v19;
        }
        v20 = a1;
        v20->field_0 = 1;
        v20->field_8 = v19;
    }
    else
    {
        v7 = v16;
        v6 = v17;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "cbs", 3))
        {
            uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&v1, v7, v6);
            v18 = *((long long *)&v1);
            v19 = *((long long *)&v2);
            if (v18 != 14)
            {
                vvar_552{reg 32} = v0;
                v29->field_9 = *((int128_t *)&v4);
                v29->field_0 = v18;
                *((struct_2 **)&v29->field_8) = v19;
                return v19;
            }
            v22 = a1;
            v22->field_30 = 1;
            v22->field_38 = v19;
        }
        else
        {
            v21 = v7;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "conv", 4))
            {
                a1->field_c0 = 1;
                uu_dd::parseargs::Parser::parse_conv_flags::h2792d84d78d66501(&v1, a1, v21, v6);
                goto LABEL_4d30d6;
            }
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "count", 5))
            {
                uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(&v1, v21, v6);
                v23 = *((long long *)&v1);
                v19 = *((long long *)&v2);
                v24 = *((long long *)&v4);
                if (v23 != 14)
                {
                    vvar_531{reg 64} = *((long long *)&v5);
                    vvar_532{reg 72} = v0;
                    v34->field_0 = v23;
                    *((struct_2 **)&v34->field_8) = v19;
                    *((unsigned long long *)&v34->field_9) = v24;
                    *((unsigned long long *)((char *)&v34->field_9 + 8)) = v33;
                    return v19;
                }
                v25 = a1;
                v25->field_60 = v19;
                v25->field_68 = v24;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "ibs", 3))
            {
                uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&v1, v21, v6);
                v18 = *((long long *)&v1);
                v19 = *((long long *)&v2);
                if (v18 != 14)
                {
                    vvar_558{reg 32} = v0;
                    v29->field_9 = *((int128_t *)&v4);
                    v29->field_0 = v18;
                    *((struct_2 **)&v29->field_8) = v19;
                    return v19;
                }
                v26 = a1;
                v26->field_10 = 1;
                v26->field_18 = v19;
            }
            else
            {
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "if", 2))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v1, v21, v6);
                    v27 = &a1->padding_70;
                    ::0x4d2380::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb99fd7eea970333f(v27);
                    goto LABEL_4d31ee;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "iflag", 5))
                {
                    uu_dd::parseargs::Parser::parse_input_flags::h12f922d383d81c43(&v1, a1, v21, v6);
                    goto LABEL_4d30d6;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "obs", 3))
                {
                    uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&v1, v21, v6);
                    v18 = *((long long *)&v1);
                    v19 = *((long long *)&v2);
                    if (v18 != 14)
                    {
                        v29 = v0;
                        v29->field_9 = *((int128_t *)&v4);
                        v29->field_0 = v18;
                        *((struct_2 **)&v29->field_8) = v19;
                        return v19;
                    }
                    v28 = a1;
                    v28->field_20 = 1;
                    v28->field_28 = v19;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "of", 2))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v1, v21, v6);
                    v27 = &a1->padding_70[24];
                    ::0x4d2380::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb99fd7eea970333f(v27);
LABEL_4d31ee:
                    v27->field_10 = *((long long *)&v4);
                    v27->field_0 = *((int128_t *)&v1);
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "oflag", 5))
                {
                    uu_dd::parseargs::Parser::parse_output_flags::h73e155582080adb4(&v1, a1, v21, v6);
LABEL_4d30d6:
                    v19 = *((long long *)&v1);
                    if (v19 != 14)
                    {
                        v30 = v0;
                        *((long long *)((char *)&v30->field_9 + 8)) = *((long long *)&v5);
                        *((int128_t *)&v30->field_8) = *((int128_t *)&v2);
                        v30->field_0 = v19;
                        return v19;
                    }
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "seek", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "oseek", 5))
                {
                    uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(&v1, v21, v6);
                    v23 = *((long long *)&v1);
                    v19 = *((long long *)&v2);
                    v24 = *((long long *)&v4);
                    if (v23 != 14)
                    {
                        vvar_539{reg 64} = *((long long *)&v5);
                        vvar_540{reg 72} = v0;
                        v34->field_0 = v23;
                        *((struct_2 **)&v34->field_8) = v19;
                        *((unsigned long long *)&v34->field_9) = v24;
                        *((unsigned long long *)((char *)&v34->field_9 + 8)) = v33;
                        return v19;
                    }
                    v31 = a1;
                    v31->field_50 = v19;
                    v31->field_58 = v24;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, &g_418e98, 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "iseek", 5))
                {
                    uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(&v1, v21, v6);
                    v23 = *((long long *)&v1);
                    v19 = *((long long *)&v2);
                    v24 = *((long long *)&v4);
                    if (v23 != 14)
                    {
                        v33 = *((long long *)&v5);
                        v34 = v0;
                        v34->field_0 = v23;
                        *((struct_2 **)&v34->field_8) = v19;
                        *((unsigned long long *)&v34->field_9) = v24;
                        *((unsigned long long *)((char *)&v34->field_9 + 8)) = v33;
                        return v19;
                    }
                    v32 = a1;
                    v32->field_40 = v19;
                    v32->field_48 = v24;
                }
                else
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v15, "status", 6))
                    {
                        v13 = v0;
                        vvar_523{reg 16} = ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v13->field_8, a2, a3);
                        v13->field_0 = 0;
                        return v19;
                    }
                    uu_dd::parseargs::Parser::parse_status_level::h34642a5ebdfca327(&v1, v7, v6);
                    v35 = *((long long *)&v1);
                    v19 = v2;
                    if (v35 != 14)
                    {
                        v36 = v0;
                        *((long long *)((char *)&v36->field_9 + 8)) = *((long long *)&v5);
                        *((int128_t *)&(&v36->field_8)[1]) = *((int128_t *)&v3);
                        v36->field_0 = v35;
                        v36->field_8 = (char)v19;
                        return v19;
                    }
                    a1->field_d0 = (char)v19;
                }
            }
        }
    }
    v19 = v0;
    v19->field_0 = 14;
    return v19;
}
