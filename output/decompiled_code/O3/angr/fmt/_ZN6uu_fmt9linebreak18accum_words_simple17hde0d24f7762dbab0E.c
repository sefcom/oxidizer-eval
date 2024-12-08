long long uu_fmt::linebreak::accum_words_simple::hde0d24f7762dbab0(struct_1 *a0, struct_3 *a1, unsigned int a2, char a3, struct_0 *a4)
{
    unsigned long long v0;  // [sp-0x38]
    struct_2 *v2;  // rbp
    void* v3;  // rbx
    char v5;  // cl
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    struct_1 *v11;  // rcx
    unsigned long long v12;  // rdx

    v0 = a4->field_28;
    v2 = a1->field_0;
    v3 = 0;
    v5 = a4->field_3a;
    if (!(!a1->field_30) || !(!v5))
        v3 = (v5 & a3 | a4->field_38) + 1;
    v6 = a2 + v0 + uu_fmt::linebreak::BreakArgs::compute_width::hbd5b338d9dc376c7(v2, a4, a2, 0) + v3;
    v7 = a1->field_18;
    if (v6 <= v2->field_30)
    {
        v8 = uu_fmt::linebreak::write_with_spaces::hefcd2792f0a5737a(a4->field_10, a4->field_18, v3, v7);
        if (!v8)
        {
            v10 = a4->field_39;
            v11 = a0;
            v11->field_0 = v6;
            v11->field_8 = v10;
            return v10;
        }
    }
    else
    {
        v8 = uu_fmt::linebreak::write_newline::hff877272ddbfd5de(a1->field_8, a1->field_10, v7);
        if (!v8)
        {
            v9 = ::0x4bc5d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a4->field_20, a4->field_10, a4->field_18);
            if (!v9)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v8 = uu_fmt::linebreak::write_with_spaces::hefcd2792f0a5737a(v9, v12, 0, v7);
            if (!v8)
            {
                v10 = a4->field_39;
                v11 = a0;
                v11->field_0 = v0 + a1->field_28;
                v11->field_8 = v10;
                return v10;
            }
        }
    }
    v11 = a0;
    v11->field_0 = v8;
    v10 = v8 | -0x100 | 2;
    v11->field_8 = v10;
    return v10;
}
