long long uu_fmt::linebreak::accum_words_simple::h022aba843f8dc50f(struct_0 *a0, struct_3 *a1, unsigned int a2, char a3, struct_1 *a4)
{
    unsigned long long v0;  // [sp-0x38]
    struct_2 *v2;  // rbp
    void* v3;  // rbx
    char v5;  // cl
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    struct_0 *v14;  // rcx
    unsigned long long v15;  // rdx

    v0 = a4->field_28;
    v2 = a1->field_0;
    v3 = 0;
    v5 = a4->field_3a;
    if (!(!a1->field_30) || !(!v5))
        v3 = (v5 & a3 | a4->field_38) + 1;
    v6 = a2 + v0 + uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(v2, a4, a2, 0) + v3;
    v7 = a1->field_18;
    if (v6 <= v2->field_30)
    {
        v8 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(a4->field_10, a4->field_18, v3, v7);
        if (!v8)
        {
            v13 = a4->field_39;
            v14 = a0;
            v14->field_0 = v6;
            v14->field_8 = v13;
            return v13;
        }
    }
    else
    {
        v8 = uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(a1->field_8, a1->field_10, v7);
        if (!v8)
        {
            v9 = a4->field_10;
            v10 = a4->field_18;
            v11 = a4->field_20;
            v12 = ::0x4bad70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v11, v9, v10);
            if (!v12)
                core::str::slice_error_fail::h5dbb61534404fe7e(v9, v10, v11, v10, &g_526828); /* do not return */
            v8 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(v12, v15, 0, v7);
            if (!v8)
            {
                v13 = a4->field_39;
                v14 = a0;
                v14->field_0 = v0 + a1->field_28;
                v14->field_8 = v13;
                return v13;
            }
        }
    }
    v14 = a0;
    v14->field_0 = v8;
    v13 = v8 & 0xffffffffffffff00 | 2;
    v14->field_8 = v13;
    return v13;
}
