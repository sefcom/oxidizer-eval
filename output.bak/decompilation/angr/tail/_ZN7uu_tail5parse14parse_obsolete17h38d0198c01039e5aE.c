long long uu_tail::parse::parse_obsolete::h38d0198c01039e5a(char a0[11], unsigned long long a1[3])
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long, unsigned int
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    char v2;  // [bp-0x48]
    char *v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v6;  // r14
    unsigned long long v7;  // r15
    char *v8;  // r12
    char *v9;  // r12
    char *v10;  // rax
    char *v11;  // rbp
    char *v12;  // rdx
    char *v13;  // r13
    char *v14;  // r13
    char *v15;  // r15
    unsigned long long v16;  // cc_ndep
    unsigned long long v18;  // rax
    unsigned long long v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // r12
    unsigned int v22;  // ebp
    char v23;  // r14b
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    char *v28;  // rdx
    unsigned long long v29;  // rdx
    char v30;  // cl
    unsigned long v31;  // rcx
    unsigned long long v32;  // rax

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1[1], a1[2]);
    if (*((long long *)&v0))
    {
        a0[0] = 3;
        a0[10] = 2;
        return a0;
    }
    v6 = v1;
    v7 = *((long long *)&v2);
    v0 = 0;
    v8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), v6, v7);
    if (!v8)
    {
        v0 = 0;
        v10 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), v6, v7);
        if (!v10)
        {
            a0[10] = 3;
            return a0;
        }
    }
    v11 = v9;
    v15 = v14;
    if (!v15)
    {
        v3 = v8;
    }
    else
    {
        if (v15 >= v13)
        {
            if (v15 != v13)
                core::str::slice_error_fail::h5dbb61534404fe7e(v11, v13, 0, v15, &g_5bcb50); /* do not return */
        }
        else
        {
            if (*((char *)(v11 + v15)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(v11, v13, 0, v15, &g_5bcb50); /* do not return */
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v0, v11, v15);
        if ((char)v0)
        {
            a0[0] = 0;
            a0[10] = 2;
            return a0;
        }
        v3 = v8;
    }
    v4 = 10;
    v18 = ::0x5185a0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v15, v11, v13);
    if (!v18)
        core::str::slice_error_fail::h5dbb61534404fe7e(v11, v13, v15, v13, &g_5bcb68); /* do not return */
    v19 = v18;
    v0 = 0;
    v20 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(108, &v0), v19, v12);
    if (v20)
    {
        v21 = v20;
        v23 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v20, v12);
        v0 = v21;
        v1 = &v12[v21];
        if (!(::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0)) & 255 & 255 & 255))
            goto LABEL_518e7d;
    }
    else
    {
        v0 = 0;
        v22 = 99;
        v24 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(99, &v0), v19, v12);
        if (!v24)
        {
            v0 = 0;
            v26 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(98, &v0), v19, v12);
            v22 = (v26 ? 108 : 98);
        }
        v23 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v24, v28);
        v0 = v24;
        v1 = &v28[v24];
        if (!::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2(core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0)))
        {
LABEL_518e7d:
            if (!v3)
            {
                a0[10] = 3;
                return a0;
            }
            else if (!v15)
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
        if (v22 == 98)
        {
            v29 = 0x200;
            v30 = 0;
            goto LABEL_518ea6;
        }
    }
    v30 = v31 | -0x100 | 108 == 108;
    v29 = 1;
LABEL_518ea6:
    v32 = v4;
    if ((char)amd64g_calculate_condition(0, 48, v32, v29, v16))
    {
        a0[0] = 1;
        a0[10] = 2;
        return a0;
    }
    *((unsigned long long *)&a0[0]) = v32 * v29;
    a0[8] = !v3;
    a0[9] = v30;
    a0[10] = v23;
    return a0;
}
