long long uu_sort::FieldSelector::get_selection::h67a6ce9c14dc594a(struct_0 *a0, char a1[55], unsigned long long a2, unsigned long long a3, void* a4, unsigned long long a5)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [sp-0x3c]
    char v5;  // [sp-0x34]
    unsigned long long v7;  // cc_ndep
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // xmm0lq

    v9 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(uu_sort::FieldSelector::get_range::h94d5816cf09723a2(a1, a2, a3, 0, a5), v8, a2, a3);
    if (!v9)
        goto LABEL_521cc8;
    v10 = v9;
    v11 = a1[53];
    if ((unsigned int)v11 < 2)
    {
        v5 = (char)v11 == 1;
        v4 = 0x2e00110000;
        uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&v0, v10, v8, &v4);
        v12 = *((long long *)&v0);
        v11 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(*((long long *)&v2), *((long long *)&v3), v10, v8);
        if (!v11)
        {
            goto LABEL_521cc8;
        }
        else
        {
            a0 = a0;
            a0->field_0 = v11;
            a0->field_8 = v8;
            a0->field_10 = v12;
        }
    }
    else if ((unsigned int)v11 != 2)
    {
        a0 = a0;
        a0->field_0 = v10;
        a0->field_8 = v8;
    }
    else
    {
        v13 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(uu_sort::get_leading_gen::h381fabafeef8de83(v10, v8, v8), v8, v10, v8);
        if (!v13)
        {
LABEL_521cc8:
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v0, v13, v8);
        if (v0)
        {
            v11 = 0;
            goto LABEL_521c36;
        }
        else
        {
            v14 = *((long long *)&v1);
            if (!((char)((CmpF(v14, v14) & 69) >> 2) & 1))
            {
                v11 = ((CmpF(-0x10000000000000, v14) & 69 & 1) ? 4 - (amd64g_calculate_rflags_c(0, (unsigned long long)(unsigned int)(CmpF(v14, 0x7ff0000000000000) & 69), 0, v7) & 1) : 2);
            }
            else
            {
                v11 = 1;
LABEL_521c36:
            }
        }
        a0->field_0 = v11;
        a0->field_8 = v14;
    }
    a0->field_18 = 4;
    return v11;
}
