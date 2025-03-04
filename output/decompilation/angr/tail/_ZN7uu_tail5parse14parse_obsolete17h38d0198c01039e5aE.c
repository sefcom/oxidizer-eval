long long uu_tail::parse::parse_obsolete::h38d0198c01039e5a(char a0[11], unsigned long long a1[3])
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long, unsigned int
    unsigned int v1;  // [bp-0x58]
    unsigned long v2;  // [sp-0x50], Other Possible Types: unsigned long long
    char v3;  // [bp-0x48]
    char *v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x38]
    unsigned long long v7;  // r14
    unsigned long long v8;  // r15
    char *v9;  // r12
    char *v10;  // rdx
    char *v11;  // r13
    char *v12;  // rbp
    char *v13;  // rax
    char *v14;  // r15
    unsigned long long v15;  // cc_ndep
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // r12
    unsigned int v21;  // ebp
    char v22;  // r14b
    unsigned long long v23;  // rax
    unsigned long long v24;  // r13
    char *v25;  // rsi
    unsigned long long v26;  // rax
    char *v27;  // rdx
    unsigned long long v28;  // rdx
    char v29;  // cl
    unsigned long v30;  // rcx
    unsigned long long v31;  // rax

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1[1], a1[2]);
    if (*((long long *)&v0))
    {
        a0[0] = 3;
        a0[10] = 2;
        return a0;
    }
    v7 = v2;
    v8 = *((long long *)&v3);
    v1 = 0;
    v9 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), v7, v8);
    if (v9)
    {
        v11 = v10;
        v12 = v9;
    }
    else
    {
        v1 = 0;
        v13 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), v7, v8);
        if (!v13)
        {
            a0[10] = 3;
            return a0;
        }
        v12 = v13;
        v11 = v10;
    }
    v14 = v10;
    if (!core::str::_$LT$impl$u20$str$GT$::find::h006ca70e4214af13(v12, v11))
        v14 = v11;
    if (!v14)
    {
        v4 = v9;
        v16 = 10;
    }
    else
    {
        if (v14 >= v11)
        {
            if (v14 != v11)
                core::str::slice_error_fail::h5dbb61534404fe7e(v12, v11, 0, v14, &g_5bcb50); /* do not return */
        }
        else
        {
            if (*((char *)(v12 + v14)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(v12, v11, 0, v14, &g_5bcb50); /* do not return */
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v0, v12, v14);
        if ((char)v1)
        {
            a0[0] = 0;
            a0[10] = 2;
            return a0;
        }
        v4 = v9;
        v16 = v2;
    }
    v5 = v16;
    v17 = ::0x5185a0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v14, v12, v11);
    if (!v17)
        core::str::slice_error_fail::h5dbb61534404fe7e(v12, v11, v14, v11, &g_5bcb68); /* do not return */
    v18 = v17;
    v0 = 0;
    v19 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(108, &v0), v18, v10);
    if (v19)
    {
        v20 = v19;
        v22 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v19, v10);
        v0 = v20;
        v2 = &v10[v20];
        if (!(::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0)) & 255 & 255 & 255))
            goto LABEL_518e7d;
        v21 = 108;
        v25 = v4;
    }
    else
    {
        v0 = 0;
        v21 = 99;
        v23 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(99, &v0), v18, v10);
        if (v23)
        {
            v24 = v23;
        }
        else
        {
            v0 = 0;
            v26 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(98, &v0), v18, v10);
            v21 = (v26 ? 98 : 108);
            if (v26)
                v18 = v26;
            v24 = v18;
        }
        v22 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v24, v27);
        v0 = v24;
        v2 = &v27[v24];
        if (!::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0)))
        {
LABEL_518e7d:
            if (!v4)
            {
                a0[10] = 3;
                return a0;
            }
            else if (!v14)
            {
                a0[10] = 3;
                return a0;
            }
            else
            {
                a0[0] = 2;
                a0[10] = 2;
                return a0;
            }
        }
        v25 = v4;
        if (v21 == 98)
        {
            v28 = 0x200;
            v29 = 0;
            goto LABEL_518ea6;
        }
    }
    v29 = v30 & 0xffffffffffffff00 | v21 == 108;
    v28 = 1;
LABEL_518ea6:
    v31 = v5;
    if ((char)amd64g_calculate_condition(0, 48, v31, v28, v15))
    {
        a0[0] = 1;
        a0[10] = 2;
        return a0;
    }
    *((unsigned long long *)&a0[0]) = v31 * v28;
    a0[8] = !v25;
    a0[9] = v29;
    a0[10] = v22;
    return a0;
}
