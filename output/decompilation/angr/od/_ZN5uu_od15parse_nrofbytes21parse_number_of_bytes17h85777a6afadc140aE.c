long long uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x61]
    unsigned long long v1[2];  // [sp-0x60]
    unsigned int v2;  // [sp-0x54]
    unsigned int v3;  // [sp-0x50]
    char v4;  // [bp-0x48]
    unsigned long v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    unsigned long long v8[2];  // r13
    unsigned long long v9;  // r12
    unsigned int v10;  // ebp
    unsigned long v11;  // rbx
    char v12;  // bl
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v20;  // rax
    unsigned long long v22;  // cc_ndep

    v8 = a0;
    v9 = 2;
    v10 = 16;
    v12 = v11 & 0xffffffffffffff00 | 1;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, "0x", 2))
    {
        v9 = 2;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, "0X", 2))
        {
            v3 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, ::0x4d7620::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(48, &v3), v13))
            {
                v10 = 8;
                v9 = 0;
                v12 = 0;
            }
            else
            {
                v14 = ::0x4d7600::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a1, a2);
                if (v14)
                {
                    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(a0, v14, a2);
                    return v8;
                }
                core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, a2, &g_543328); /* do not return */
            }
        }
    }
    v1[0] = a0;
    v5 = a1;
    v6 = a1 + a2;
    v15 = 1;
    v2 = v10;
    if (!(int)core::str::validations::next_code_point_reverse::hff7c38eb44570652(&v5))
    {
        v16 = a2;
    }
    else
    {
        switch ((unsigned int)v13)
        {
        case 66:
            v16 = a2;
            break;
        case 69:
            v16 = a2 - (v12 ^ 1);
            v15 = 1;
            break;
        case 71:
            v16 = a2 - 1;
            v15 = 0x40000000;
            break;
        case 75: case 107:
            v16 = a2 - 1;
            v15 = 0x400;
            break;
        case 77: case 109:
            v16 = a2 - 1;
            v15 = 0x100000;
            break;
        case 80:
            v16 = a2 - 1;
            v15 = 0x4000000000000;
            break;
        case 84:
            v16 = a2 - 1;
            v15 = 0x10000000000;
            break;
        case 98:
            v16 = a2 - (v12 ^ 1);
            v15 = 1;
            break;
        default:
            v16 = a2;
            break;
        }
    }
    v17 = ::0x4d75c0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v9, v16, a1, a2);
    if (!v17)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v9, v16, &g_543340); /* do not return */
    core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&v3, v17, a2, v2);
    if ((char)v3)
    {
        v0 = *((char *)&v3 + 1);
        v8 = v1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3f1d93ee7475dcc4(&v8[1], &v0);
        v8[0] = 1;
        return v8;
    }
    v18 = v15;
    if (!((char)amd64g_calculate_condition(0, 48, v18, *((long long *)&v4), v22)))
    {
        v8 = v1;
        v8[1] = v18 * *((long long *)&v4);
        v20 = 3;
    }
    else
    {
        v8 = v1;
        ::0x4d7740::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v8[1], a1, a2);
        v20 = 2;
    }
    v8[0] = v20;
    return v8;
}
