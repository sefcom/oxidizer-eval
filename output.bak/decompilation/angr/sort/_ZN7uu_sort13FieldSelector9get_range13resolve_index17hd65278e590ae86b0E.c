long long uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned long long a3, struct_0 *a4)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v2;  // [sp-0x30]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    void* v7;  // r14
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi

    v4 = a4->field_0;
    if (a2 && v4 > a3)
        return 3;
    v6 = a4->field_8;
    if (!v6)
    {
        if (!a2)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5ffb68); /* do not return */
        v8 = v4 - 1;
        if (v8 < a3)
        {
            v5 = 1 + (a2[1 + 2 * v8] < 1);
            return v5;
        }
        core::panicking::panic_bounds_check::h25a5330941572dd1(v8, a3, &g_5ffb80); /* do not return */
    }
    if (v4 == 1)
    {
        v7 = 0;
        if (!a4->field_10)
            goto LABEL_521f06;
    }
    else
    {
        if (!a2)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5ffb98); /* do not return */
        v9 = v4 - 1;
        if (v9 >= a3)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v9, a3, &g_5ffbb0); /* do not return */
        v7 = a2[2 * v9];
        if (!a4->field_10)
        {
LABEL_521f06:
            v13 = ::0x51bd00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v7, a0, a1);
            if (!v13)
                core::str::slice_error_fail::h5dbb61534404fe7e(a0, a1, v7, a1, &g_5ffbe0); /* do not return */
            v2 = 0;
            v0 = v13;
            v1 = v13 + v11;
            if (core::iter::traits::iterator::Iterator::advance_by::hf1b9bd9a791e7d45(&v0, v6 - 1))
                v14 = 0x110000;
            else
                v14 = (unsigned int)v11;
            v5 = (-0x100 | a1 <= core::option::Option$LT$T$GT$::map_or::h0a742836e118e24e(::0x51d730::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0), v14, v11) + v7) * 3;
            return v5;
        }
    }
    v10 = ::0x51bd00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v7, a0, a1);
    if (!v10)
        core::str::slice_error_fail::h5dbb61534404fe7e(a0, a1, v7, a1, &g_5ffbc8); /* do not return */
    v2 = 0;
    v0 = v10;
    v1 = v10 + v11;
    v7 += core::option::Option$LT$T$GT$::map_or::h7394a4af2de8fef7(core::iter::traits::iterator::Iterator::try_fold::hebbd1e5cdfe1aaa4(&v0), (unsigned int)v11, v11);
    goto LABEL_521f06;
}
