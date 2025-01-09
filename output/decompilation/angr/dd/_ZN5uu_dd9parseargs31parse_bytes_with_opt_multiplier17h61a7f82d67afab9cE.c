long long uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0x98]
    void* v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    char v9;  // [bp-0x68]
    unsigned short v10;  // [sp-0x38]
    struct_1 *v12;  // rax
    struct_0 *v13;  // rax
    char *v14;  // rax
    unsigned long long v15;  // r12
    unsigned long long v17;  // r13
    unsigned long long v19;  // r13
    unsigned long long v20;  // cc_ndep
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rax
    struct_0 *v24;  // rdx

    ::0x4d2600::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v9, 120, a1, a2);
    v7 = 0;
    v8 = a2;
    v10 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h96366f3336c0a79d(&v0, &v7);
    if (*((long long *)&v2) == 1)
    {
        v12 = *((long long *)&v1);
        uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(a0, a1, a2, v12->field_0, v12->field_8);
        v13 = ::0x4d2300::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf4edae12fbccf23e(&v0);
        return v13;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h532aa9ace314f175(&v6, &v0);
    v14 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&v6);
    if (!v14)
    {
        v15 = 1;
    }
    else
    {
        v15 = 1;
        do
        {
            v17 = v19;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v14, v17, "0", 1))
                uu_dd::parseargs::show_zero_multiplier_warning::hbe4ec55817d90dd4();
            uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(&v3, a1, a2, v14, v17);
            v21 = *((long long *)&v3);
            v22 = *((long long *)&v4);
            if (v21 != 14)
            {
                v24 = a0;
                v24->field_10 = *((int128_t *)&v5);
                v24->field_0 = v21;
                v24->field_8 = v22;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&v6);
                return v13;
            }
            v23 = v15;
            if ((char)amd64g_calculate_condition(0, 48, v23, v22, v20))
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v3, a1, a2);
                v22 = *((long long *)&v3);
                v24 = a0;
                v24->field_10 = *((int128_t *)&v4);
                v21 = 13;
                v24->field_0 = v21;
                v24->field_8 = v22;
                v13 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&v6);
                return v13;
            }
            v15 = v23 * v22;
            v14 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&v6);
        } while (v14);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&v6);
    v13 = a0;
    v13->field_8 = v15;
    v13->field_0 = 14;
    return v13;
}
