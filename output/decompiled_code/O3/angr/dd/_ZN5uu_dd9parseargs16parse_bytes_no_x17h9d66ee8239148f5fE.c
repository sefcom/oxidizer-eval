long long uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(struct_0 *a0, unsigned long long a1, unsigned long long a2, char *a3, unsigned long long a4)
{
    unsigned long long v0[2];  // [bp-0xa0]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    void* v3;  // [sp-0x70]
    void* v4;  // [sp-0x60]
    unsigned short v5;  // [sp-0x50]
    char v6;  // [sp-0x4e]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax
    char *v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rax
    struct_0 *v15;  // rbx
    char *v16;  // rdx
    char *v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rcx
    struct_0 *v20;  // r14
    unsigned long long v21;  // rcx
    struct_0 *v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long v24;  // cc_ndep
    unsigned long long v25;  // rax
    unsigned long v26;  // cc_ndep
    unsigned long long v27;  // rax
    unsigned long v28;  // cc_ndep

    v5 = 257;
    v6 = 0;
    v3 = 0;
    v4 = 0;
    v10 = core::str::_$LT$impl$u20$str$GT$::rfind::h94ded9ee8a390a12(a3, a4);
    v11 = core::str::_$LT$impl$u20$str$GT$::rfind::h94ded9ee8a390a12(a3, a4);
    if (!core::str::_$LT$impl$u20$str$GT$::find::he16eb61bb7887aec(a3, a4))
    {
        if (!v10)
        {
            if (!v11)
            {
                uucore::parser::parse_size::Parser::parse_u64::ha54ade59619f41e4(v0, &v3, a3, a4);
                v21 = v0[0];
                v20 = a0;
                if (v21 < 2)
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v7, a1, a2);
                    *((long long *)((char *)&v20->field_10 + 8)) = *((long long *)&v8);
                    *((int128_t *)&v20->field_8) = *((int128_t *)&v7);
                    v20->field_0 = 13;
                    v14 = core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hdd273fc407a2ace4(v0);
                    return v14;
                }
                v25 = -1;
                if ((unsigned int)v21 != 2)
                    v25 = *((long long *)&v1);
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hdd273fc407a2ace4(v0);
                v27 = v25;
                v23 = v27 * 1;
                if ((char)amd64g_calculate_condition(0, 48, v27, 1, v28))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v20->field_8, a1, a2);
                    v20->field_0 = 8;
                    return 8;
                }
            }
            else
            {
                uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(v0, a3, a4, v17);
                v19 = v0[0];
                v14 = *((long long *)&v1);
                v20 = a0;
                if (v19 != 14)
                {
                    v20->field_10 = *((int128_t *)&v2);
                    v20->field_0 = v19;
                    v20->field_8 = v14;
                    return v14;
                }
                v23 = v14 * 0x200;
                if ((char)amd64g_calculate_condition(0, 48, v14, 0x200, v24))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v20->field_8, a1, a2);
                    v20->field_0 = 8;
                    return 8;
                }
            }
            v20->field_8 = v23;
            v20->field_0 = 14;
            return 8;
        }
        if (v11)
        {
            v15 = a0;
            v14 = ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v15->field_8, a1, a2);
            v15->field_0 = 7;
            return v14;
        }
        uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(v0, a3, a4, v16);
        v13 = v0[0];
        v14 = *((long long *)&v1);
        if (v13 != 14)
        {
            vvar_322{reg 32} = a0;
            v22->field_10 = *((int128_t *)&v2);
            v22->field_0 = v13;
            v22->field_8 = v14;
            return v14;
        }
        v18 = 2;
    }
    else
    {
        if (!(!v10) || !(!v11))
        {
            ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v15->field_8, a1, a2);
            a0->field_0 = 7;
            return v14;
        }
        uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(v0, a3, a4, v12);
        v13 = v0[0];
        v14 = *((long long *)&v1);
        if (v13 != 14)
        {
            v22 = a0;
            v22->field_10 = *((int128_t *)&v2);
            v22->field_0 = v13;
            v22->field_8 = v14;
            return v14;
        }
        v18 = 1;
    }
    v20 = a0;
    v23 = v14 * v18;
    if ((char)amd64g_calculate_condition(0, 48, v14, v18, v26))
    {
        ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v20->field_8, a1, a2);
        v20->field_0 = 8;
        return 8;
    }
    v20->field_8 = v23;
    v20->field_0 = 14;
    return 8;
}
