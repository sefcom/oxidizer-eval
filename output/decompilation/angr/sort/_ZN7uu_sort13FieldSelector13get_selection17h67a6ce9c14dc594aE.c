long long uu_sort::FieldSelector::get_selection::h67a6ce9c14dc594a(struct_0 *a0, char a1[55], unsigned long long a2, unsigned long long a3, void* a4, unsigned long long a5)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [sp-0x3c]
    char v5;  // [sp-0x34]
    unsigned long long v7;  // cc_ndep
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v13;  // 4096
    unsigned long long v14;  // r12
    unsigned long long v15;  // r14
    unsigned long long v16;  // rax
    unsigned long long v17;  // xmm0lq

    v8 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(a1, a2, a3, 0, a5);
    v10 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v8, v9, a2, a3);
    if (!v10)
        core::str::slice_error_fail::h5dbb61534404fe7e(a2, v13, v8, v15, &g_5ffb10); /* do not return */
    a2 = v10;
    v11 = a1[53];
    if ((unsigned int)v11 < 2)
    {
        v5 = (char)v11 == 1;
        v4 = 0x2e00110000;
        uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&v0, a2, v9, &v4);
        v14 = *((long long *)&v0);
        v8 = *((long long *)&v2);
        v15 = *((long long *)&v3);
        v11 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v8, v15, a2, v13);
        if (!v11)
            core::str::slice_error_fail::h5dbb61534404fe7e(a2, v13, v8, v15, &g_5ffaf8); /* do not return */
        a0 = a0;
        a0->field_0 = v11;
        a0->field_8 = v9;
        a0->field_10 = v14;
    }
    else if ((unsigned int)v11 != 2)
    {
        a0 = a0;
        a0->field_0 = a2;
        a0->field_8 = v9;
    }
    else
    {
        v8 = uu_sort::get_leading_gen::h381fabafeef8de83(a2, v9);
        v16 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v8, v15, a2, v9);
        if (!v16)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(a2, v13, v8, v15, &g_5ffb10); /* do not return */
        }
        core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v0, v16, v9);
        if (v0)
        {
            v11 = 0;
            goto LABEL_521c36;
        }
        else
        {
            v17 = *((long long *)&v1);
            if (!((char)((CmpF(v17, v17) & 69) >> 2) & 1))
            {
                v11 = ((CmpF(0xfff0000000000000, v17) & 69 & 1) ? 4 - (amd64g_calculate_rflags_c(0, (unsigned long long)(CmpF(v17, 0x7ff0000000000000) & 69), 0, v7) & 1) : 2);
            }
            else
            {
                v11 = 1;
LABEL_521c36:
            }
        }
        a0->field_0 = v11;
        a0->field_8 = v17;
    }
    a0->field_18 = 4;
    return v11;
}
