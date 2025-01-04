long long uu_tail::parse::parse_obsolete::h38d0198c01039e5a(char a0[11], unsigned long long a1[3])
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long, unsigned int
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v5;  // r14
    char *v6;  // r12
    char *v7;  // r12
    char *v8;  // rax
    char *v9;  // rbp
    char *v10;  // rdx
    char *v11;  // r13
    char *v12;  // r13
    char *v13;  // r15
    unsigned long long v14;  // cc_ndep
    unsigned long long v16;  // rax
    unsigned long long v17;  // r12
    unsigned long long v18;  // rax
    unsigned long long v19;  // r12
    unsigned int v20;  // ebp
    char v21;  // r14b
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    unsigned long long v25;  // rax
    char *v27;  // rdx
    unsigned long long v28;  // rsi
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
    v5 = v1;
    v0 = 0;
    v6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), v5);
    if (!v6)
    {
        v0 = 0;
        v8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), v5);
        if (!v8)
        {
            a0[10] = 3;
            return a0;
        }
    }
    v9 = v7;
    v13 = v12;
    if (!v13)
    {
        v2 = v6;
    }
    else
    {
        if (v13 >= v11)
        {
            if (v13 != v11)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v9 + v13)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v0, v9, v13);
        if ((char)v0)
        {
            a0[0] = 0;
            a0[10] = 2;
            return a0;
        }
        v2 = v6;
    }
    v3 = 10;
    v16 = ::0x5185a0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v13, v9, v11);
    if (!v16)
        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    v17 = v16;
    v0 = 0;
    v18 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(108, &v0), v17);
    if (v18)
    {
        v19 = v18;
        v21 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v18, v10);
        v0 = v19;
        v1 = &v10[v19];
        if (!(::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0, v23, v10)) & 255 & 255 & 255))
            goto LABEL_518e7d;
    }
    else
    {
        v0 = 0;
        v20 = 99;
        v22 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(99, &v0), v17);
        if (!v22)
        {
            v0 = 0;
            v25 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x5186e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(98, &v0), v17);
            v20 = (v25 ? 108 : 98);
        }
        v21 = ::0x5188c0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v22, v27);
        v0 = v22;
        v1 = &v27[v22];
        if (!::0x5189e0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf44ef79eb3e0c2a2((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h382008777cf9d733(&v0, v28, v10)))
        {
LABEL_518e7d:
            if (!v2)
            {
                a0[10] = 3;
                return a0;
            }
            else if (!v13)
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
        if (v20 == 98)
        {
            v29 = 0x200;
            v30 = 0;
            goto LABEL_518ea6;
        }
    }
    v30 = v31 | -0x100 | 108 == 108;
    v29 = 1;
LABEL_518ea6:
    v32 = v3;
    if ((char)amd64g_calculate_condition(0, 48, v32, v29, v14))
    {
        a0[0] = 1;
        a0[10] = 2;
        return a0;
    }
    *((unsigned long long *)&a0[0]) = v32 * v29;
    a0[8] = !v2;
    a0[9] = v30;
    a0[10] = v21;
    return a0;
}
