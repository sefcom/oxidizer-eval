long long uu_sort::FieldSelector::get_selection::h67a6ce9c14dc594a(struct_0 *a0, char a1[55], unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [sp-0x3c]
    char v5;  // [sp-0x34]
    unsigned long long v7;  // r12
    void* v8;  // rcx
    unsigned long long v9;  // cc_ndep
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // r8
    unsigned long long v17;  // rdi
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rsi
    unsigned long long v21;  // xmm0lq

    v7 = a3;
    if (a1[54])
        v8 = a4;
    else
        v8 = 0;
    v10 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(a1, a2, a3, v8, a5);
    v12 = v11;
    v13 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v10, v11, a2, a3);
    if (!v13)
    {
        v16 = &g_5ffae0;
        v17 = a2;
        goto LABEL_521caa;
    }
    else
    {
        v14 = v13;
        v15 = a1[53];
        if ((unsigned int)v15 < 2)
        {
            v5 = (char)v15 == 1;
            v4 = 0x2e00110000;
            uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&v0, v14, a2, &v4);
            v18 = *((long long *)&v0);
            v10 = *((long long *)&v2);
            v12 = *((long long *)&v3);
            v15 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v10, v12, v14, v11);
            if (v15)
            {
                a0 = a0;
                a0->field_0 = v15;
                a0->field_8 = v11;
                a0->field_10 = v18;
                a0->field_18 = 4;
                return v15;
            }
            v16 = &g_5ffaf8;
            v17 = v14;
            v20 = v11;
        }
        else
        {
            if ((unsigned int)v15 != 2)
            {
                a0 = a0;
                a0->field_0 = v14;
                a0->field_8 = v11;
                a0->field_18 = 4;
                return v15;
            }
            v7 = v11;
            v10 = uu_sort::get_leading_gen::h381fabafeef8de83(v14, v11);
            v12 = v11;
            v19 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v10, v11, v14, v11);
            if (!v19)
            {
                v16 = &g_5ffb10;
                v17 = v14;
            }
            else
            {
                core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v0, v19, a2);
                if (v0)
                {
                    v15 = 0;
                    goto LABEL_521c36;
                }
                else
                {
                    v21 = *((long long *)&v1);
                    if (!((char)((CmpF(v21, v21) & 69) >> 2) & 1))
                    {
                        v15 = ((CmpF(0xfff0000000000000, v21) & 69 & 1) ? 4 - (amd64g_calculate_rflags_c(0, (unsigned long long)(CmpF(v21, 0x7ff0000000000000) & 69), 0, v9) & 1) : 2);
                    }
                    else
                    {
                        v15 = 1;
LABEL_521c36:
                    }
                }
                a0->field_0 = v15;
                a0->field_8 = v21;
                a0->field_18 = 4;
                return v15;
            }
LABEL_521caa:
            v20 = v7;
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(v17, v20, v10, v12, v16); /* do not return */
    }
}
