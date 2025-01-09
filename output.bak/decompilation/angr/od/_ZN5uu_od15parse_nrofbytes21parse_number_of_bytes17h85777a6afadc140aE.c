long long uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x61]
    unsigned int v1;  // [sp-0x54]
    unsigned int v2;  // [sp-0x50]
    char v3;  // [bp-0x48]
    unsigned long v4;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x38]
    unsigned long long v7;  // r12
    unsigned int v8;  // ebp
    unsigned long v9;  // rbx
    char v10;  // bl
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r13
    unsigned long long v16;  // rbp
    unsigned long long v25;  // rbp
    unsigned long long v26;  // cc_ndep
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v30;  // rax

    v7 = 2;
    v8 = 16;
    v10 = v9 | -0x100 | 1;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, "0x", 2))
    {
        v7 = 2;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, "0X", 2))
        {
            v2 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, ::0x4d7620::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(48, &v2), v11))
            {
                v8 = 8;
                v7 = 0;
                v10 = 0;
            }
            else
            {
                v12 = ::0x4d7600::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a1, a2);
                if (v12)
                {
                    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(a0, v12, v11);
                    return a0;
                }
                core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, a2, &g_543328); /* do not return */
            }
        }
    }
    v4 = a1;
    v5 = a1 + a2;
    v13 = 1;
    v1 = v8;
    if ((int)core::str::validations::next_code_point_reverse::hff7c38eb44570652(&v4))
    {
        switch ((unsigned int)v11)
        {
        case 66:
            break;
        case 69:
            v13 = 1;
            v16 = a2 - (v10 ^ 1);
            break;
        case 71:
            v13 = 0x40000000;
            v16 = a2 - 1;
            break;
        case 75: case 107:
            v13 = 0x400;
            v16 = a2 - 1;
            break;
        case 77: case 109:
            v13 = 0x100000;
            v16 = a2 - 1;
            break;
        case 80:
            v13 = 0x4000000000000;
            v16 = a2 - 1;
            break;
        case 84:
            v13 = 0x10000000000;
            v16 = a2 - 1;
            break;
        case 98:
            v13 = 1;
            v16 = a2 - (v10 ^ 1);
            break;
        default:
            v16 = a2;
            break;
        }
    }
    v25 = v16;
    v27 = ::0x4d75c0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v7, v25, a1, a2);
    if (!v27)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v7, v25, &g_543340); /* do not return */
    core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&v2, v27, v11, v1);
    if ((char)v2)
    {
        v0 = *((char *)&v2 + 1);
        a0 = a0;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3f1d93ee7475dcc4(&a0[1], &v0);
        a0[0] = 1;
        return a0;
    }
    v28 = v13;
    if (!((char)amd64g_calculate_condition(0, 48, v28, *((long long *)&v3), v26)))
    {
        a0 = a0;
        a0[1] = v28 * *((long long *)&v3);
        v30 = 3;
    }
    else
    {
        a0 = a0;
        ::0x4d7740::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&a0[1], a1, a2);
        v30 = 2;
    }
    a0[0] = v30;
    return a0;
}
