long long uu_dd::parseargs::Parser::parse_operand::hd92b6390a38bf471(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x7f]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12
    unsigned long long v16;  // rcx
    struct_0 *v17;  // rax
    struct_1 *v18;  // rcx
    unsigned long long v19;  // r12
    struct_1 *v20;  // rcx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx
    struct_1 *v23;  // rdx
    struct_1 *v24;  // rcx
    struct_2 *v25;  // r14
    struct_1 *v26;  // rcx
    struct_0 *v27;  // rdx
    struct_0 *v28;  // rdx
    struct_1 *v29;  // rdx
    struct_1 *v30;  // rdx
    unsigned long long v31;  // rsi
    struct_0 *v32;  // rdi
    unsigned long long v33;  // rcx
    struct_0 *v34;  // rsi

    core::str::_$LT$impl$u20$str$GT$::split_once::h802198d4456a2954(&v7, a2, a3);
    v12 = *((long long *)&v7);
    if (!v12)
    {
        v17 = ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&a0->field_8, a2, a3);
        a0->field_0 = 0;
        return v17;
    }
    v13 = *((long long *)&v8);
    v14 = *((long long *)&v9);
    v15 = *((long long *)&v10);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "bs", 2))
    {
        uu_dd::parseargs::Parser::parse_bytes::h50af2d015fdbc559(&v0, v14, v15);
        v16 = *((long long *)&v0);
        v17 = *((long long *)&v1);
        if (v16 != 14)
        {
            vvar_550{reg 32} = a0;
            v27->field_9 = *((int128_t *)&v3);
            v27->field_0 = v16;
            *((struct_0 **)&v27->field_8) = v17;
            return v17;
        }
        v18 = a1;
        v18->field_0 = 1;
        v18->field_8 = v17;
    }
    else
    {
        v6 = v14;
        v5 = v15;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "cbs", 3))
        {
            uu_dd::parseargs::Parser::parse_bytes::h50af2d015fdbc559(&v0, v6, v5);
            v16 = *((long long *)&v0);
            v17 = *((long long *)&v1);
            if (v16 != 14)
            {
                vvar_556{reg 32} = a0;
                v27->field_9 = *((int128_t *)&v3);
                v27->field_0 = v16;
                *((struct_0 **)&v27->field_8) = v17;
                return v17;
            }
            v20 = a1;
            v20->field_30 = 1;
            v20->field_38 = v17;
        }
        else
        {
            v19 = v6;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "conv", 4))
            {
                a1->field_c0 = 1;
                uu_dd::parseargs::Parser::parse_conv_flags::hb3f2de749a77b184(&v0, a1, v19, v5);
                goto LABEL_4d3246;
            }
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "count", 5))
            {
                uu_dd::parseargs::Parser::parse_n::hfb7281c0ba57f970(&v0, v19, v5);
                v21 = *((long long *)&v0);
                v17 = *((long long *)&v1);
                v22 = *((long long *)&v3);
                if (v21 != 14)
                {
                    vvar_535{reg 64} = *((long long *)&v4);
                    vvar_536{reg 72} = a0;
                    v32->field_0 = v21;
                    *((struct_0 **)&v32->field_8) = v17;
                    *((unsigned long long *)&v32->field_9) = v22;
                    *((unsigned long long *)((char *)&v32->field_9 + 8)) = v31;
                    return v17;
                }
                v23 = a1;
                v23->field_60 = v17;
                v23->field_68 = v22;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "ibs", 3))
            {
                uu_dd::parseargs::Parser::parse_bytes::h50af2d015fdbc559(&v0, v19, v5);
                v16 = *((long long *)&v0);
                v17 = *((long long *)&v1);
                if (v16 != 14)
                {
                    vvar_562{reg 32} = a0;
                    v27->field_9 = *((int128_t *)&v3);
                    v27->field_0 = v16;
                    *((struct_0 **)&v27->field_8) = v17;
                    return v17;
                }
                v24 = a1;
                v24->field_10 = 1;
                v24->field_18 = v17;
            }
            else
            {
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "if", 2))
                {
                    ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v0, v19, v5);
                    v25 = &a1->padding_70;
                    ::0x4d24f0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::ha427a886757baad2(v25);
                    goto LABEL_4d335e;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "iflag", 5))
                {
                    uu_dd::parseargs::Parser::parse_input_flags::h724771757cf73180(&v0, a1, v19, v5);
                    goto LABEL_4d3246;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "obs", 3))
                {
                    uu_dd::parseargs::Parser::parse_bytes::h50af2d015fdbc559(&v0, v19, v5);
                    v16 = *((long long *)&v0);
                    v17 = *((long long *)&v1);
                    if (v16 != 14)
                    {
                        v27 = a0;
                        v27->field_9 = *((int128_t *)&v3);
                        v27->field_0 = v16;
                        *((struct_0 **)&v27->field_8) = v17;
                        return v17;
                    }
                    v26 = a1;
                    v26->field_20 = 1;
                    v26->field_28 = v17;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "of", 2))
                {
                    ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v0, v19, v5);
                    v25 = &a1->padding_70[24];
                    ::0x4d24f0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::ha427a886757baad2(v25);
LABEL_4d335e:
                    v25->field_10 = *((long long *)&v3);
                    v25->field_0 = *((int128_t *)&v0);
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "oflag", 5))
                {
                    uu_dd::parseargs::Parser::parse_output_flags::hb62eb494f3e1c9ed(&v0, a1, v19, v5);
LABEL_4d3246:
                    v17 = *((long long *)&v0);
                    if (v17 != 14)
                    {
                        v28 = a0;
                        *((long long *)((char *)&v28->field_9 + 8)) = *((long long *)&v4);
                        *((int128_t *)&v28->field_8) = *((int128_t *)&v1);
                        v28->field_0 = v17;
                        return v17;
                    }
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "seek", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "oseek", 5))
                {
                    uu_dd::parseargs::Parser::parse_n::hfb7281c0ba57f970(&v0, v19, v5);
                    v21 = *((long long *)&v0);
                    v17 = *((long long *)&v1);
                    v22 = *((long long *)&v3);
                    if (v21 != 14)
                    {
                        vvar_543{reg 64} = *((long long *)&v4);
                        vvar_544{reg 72} = a0;
                        v32->field_0 = v21;
                        *((struct_0 **)&v32->field_8) = v17;
                        *((unsigned long long *)&v32->field_9) = v22;
                        *((unsigned long long *)((char *)&v32->field_9 + 8)) = v31;
                        return v17;
                    }
                    v29 = a1;
                    v29->field_50 = v17;
                    v29->field_58 = v22;
                }
                else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, &g_418f98, 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "iseek", 5))
                {
                    uu_dd::parseargs::Parser::parse_n::hfb7281c0ba57f970(&v0, v19, v5);
                    v21 = *((long long *)&v0);
                    v17 = *((long long *)&v1);
                    v22 = *((long long *)&v3);
                    if (v21 != 14)
                    {
                        v31 = *((long long *)&v4);
                        v32 = a0;
                        v32->field_0 = v21;
                        *((struct_0 **)&v32->field_8) = v17;
                        *((unsigned long long *)&v32->field_9) = v22;
                        *((unsigned long long *)((char *)&v32->field_9 + 8)) = v31;
                        return v17;
                    }
                    v30 = a1;
                    v30->field_40 = v17;
                    v30->field_48 = v22;
                }
                else
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v12, v13, "status", 6))
                    {
                        vvar_527{reg 16} = ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&a0->field_8, a2, a3);
                        a0->field_0 = 0;
                        return v17;
                    }
                    uu_dd::parseargs::Parser::parse_status_level::hc4c21eef4d8f7725(&v0, v6, v5);
                    v33 = *((long long *)&v0);
                    v17 = v1;
                    if (v33 != 14)
                    {
                        v34 = a0;
                        *((long long *)((char *)&v34->field_9 + 8)) = *((long long *)&v4);
                        *((int128_t *)&(&v34->field_8)[1]) = *((int128_t *)&v2);
                        v34->field_0 = v33;
                        v34->field_8 = (char)v17;
                        return v17;
                    }
                    a1->field_d0 = (char)v17;
                }
            }
        }
    }
    v17 = a0;
    v17->field_0 = 14;
    return v17;
}
