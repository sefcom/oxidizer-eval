long long uu_od::parse_inputs::parse_inputs::hebff3277c624567d(unsigned long long a0[6], unsigned long long a1, struct struct_2 *a2[5])
{
    char v0;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    struct struct_2 **v1;  // [sp-0xd0], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [sp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0xc0]
    unsigned long long v4;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0xb0]
    void* v6;  // [sp-0xa8]
    char v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    unsigned long long v9;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    char v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    char v19;  // [bp-0x38]
    struct struct_2 **v21;  // r12
    struct_0 *v22;  // r14
    unsigned long long v23;  // r15
    struct_0 *v24;  // r13
    unsigned long long v25[3];  // rax
    char *v26;  // r12
    unsigned long v27;  // r15
    unsigned long long v28[3];  // r15
    char *v29;  // rax
    unsigned long long v30;  // rax
    char *v31;  // rax
    unsigned long long v32[2];  // rax
    unsigned long long v33;  // rbp
    unsigned long long v34;  // r12
    char *v35;  // rax
    unsigned long long v36;  // rdx
    struct struct_2 **v37;  // r12
    char *v40;  // r12
    unsigned long v41;  // r15
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rbp

    a2[3](&v7);
    v21 = a2[4];
    if (!(char)v21(a1, &g_504988, 1))
    {
        v23 = v9;
        v24 = v23 - 1;
        if (v24 >= 2)
        {
            if (!v23)
            {
                if (!*((long long *)&v7))
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h17e708641bb979b7(&v7);
                v32 = *((long long *)&v8);
                v32[0] = "-invalid label: too many inputs after --traditional: ";
                v32[1] = 1;
                v9 = 1;
                v23 = 1;
            }
        }
        else
        {
            if (!(char)v21(a1, &g_504998, 6) && (v22 = *((long long *)&v8), uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v0, *((long long *)((char *)v22 + 0x10 * (unsigned long long)v24)), *((long long *)(8 + (char *)v22 + 0x10 * (unsigned long long)v24))), !v0))
            {
                if (v23 != 1)
                {
                    if (!(v23 == 2))
                        goto LABEL_4a02c2;
                    ::0x4a00b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd5d1e77b91dce17a(&v2, v22->field_0, v22->field_8);
LABEL_4a06ab:
                    a0[2] = v4;
                    *((int128_t *)&a0[0]) = *((int128_t *)&v2);
                    a0[3] = v1;
                    a0[4] = 0;
                    goto LABEL_4a0600;
                }
                else if (v22->field_8 && v22->field_0->field_0 == 43)
                {
                    ::0x4a00b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd5d1e77b91dce17a(&v2, "-invalid label: too many inputs after --traditional: ", 1);
                    goto LABEL_4a06ab;
                }
            }
        }
LABEL_4a02c2:
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hba1a56ae0437b852(&v2, *((long long *)&v8), v23 * 16 + *((long long *)&v8));
        a0[2] = v4;
        *((int128_t *)&a0[0]) = *((int128_t *)&v2);
        a0[4] = 2;
        if (*((long long *)&v7))
        {
            v22 = *((long long *)&v8);
            __rust_dealloc(v22);
            return a0;
        }
        return a0;
    }
    else
    {
        v22 = *((long long *)&v8);
        switch (v9)
        {
        case 0:
            v25 = __rust_alloc(24, 8);
            if (!v25)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v28 = v25;
            v29 = __rust_alloc(1, 1);
            if (!v29)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *(v29) = 45;
            v28[0] = 1;
            v28[1] = v29;
            v28[2] = 1;
            a0[0] = 1;
            a0[1] = v28;
            a0[2] = 1;
            a0[4] = 2;
            break;
            break;
        case 1:
            uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v0, v22->field_0, v22->field_8);
            if (v0)
            {
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1fc18ab204dab77d(&v2, v22, &v22->field_10);
                v36 = 2;
            }
            else
            {
                v31 = __rust_alloc(1, 1);
                if (!v31)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *(v31) = 45;
                v36 = 0;
                v37 = v1;
            }
            a0[0] = 1;
            a0[1] = v31;
            a0[2] = 1;
            a0[3] = v37;
            a0[4] = v36;
            break;
        case 2:
            v26 = v22->field_0;
            v27 = v22->field_8;
            uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v14, v26, v27);
            uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v12, v22->field_10, v22->field_18);
            v30 = *((long long *)&v12);
            if (!*((long long *)&v14) && !v30)
            {
                v33 = *((long long *)&v15);
                v34 = *((long long *)&v13);
                v35 = __rust_alloc(1, 1);
                if (!v35)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *(v35) = 45;
                a0[0] = 1;
                a0[1] = v35;
                a0[2] = 1;
                a0[3] = v33;
                a0[4] = 1;
                a0[5] = v34;
                break;
            }
            if (v30)
            {
                v0 = &v22->field_10;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v2 = &g_5049f8;
                v3 = 1;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v2);
                goto LABEL_4a05f8;
            }
            if (!v27)
            {
                v44 = 1;
                goto LABEL_4a072f;
            }
            v10 = *((long long *)&v13);
            if (v27 >= 0)
            {
                v44 = __rust_alloc(v27, 1);
                if (!v44)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4a072f:
                memcpy(v44, v26, v27);
                a0[0] = v27;
                a0[1] = v44;
                a0[2] = v27;
                a0[3] = v10;
                a0[4] = 0;
                break;
            }
        case 3:
            uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v16, v22->field_10, v22->field_18);
            uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(&v18, v22->field_20, v22->field_28);
            if (*((long long *)&v16))
            {
                v0 = &v22->field_10;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v2 = &g_5049f8;
                v3 = 1;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v2);
                goto LABEL_4a05f8;
            }
            if (*((long long *)&v18))
            {
                v0 = &v22->field_20;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v2 = &g_504a08;
                v3 = 1;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v2);
LABEL_4a05f8:
                a0[4] = 3;
                break;
            }
            v40 = v22->field_0;
            v41 = v22->field_8;
            v10 = *((long long *)&v17);
            if (!v41)
            {
                v45 = 1;
                goto LABEL_4a075f;
            }
            v11 = *((long long *)&v19);
            if (v41 >= 0)
            {
                v45 = __rust_alloc(v41, 1);
                if (!v45)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4a075f:
                memcpy(v45, v40, v41);
                a0[0] = v41;
                a0[1] = v45;
                a0[2] = v41;
                a0[3] = v10;
                a0[4] = 1;
                a0[5] = v11;
                break;
LABEL_4a0600:
                if (*((long long *)&v7))
                {
                    __rust_dealloc(v22);
                    return a0;
                }
                return a0;
            }
        default:
            v0 = v22 + 1;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            v2 = &g_504a18;
            v3 = 1;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v2);
            goto LABEL_4a05f8;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
