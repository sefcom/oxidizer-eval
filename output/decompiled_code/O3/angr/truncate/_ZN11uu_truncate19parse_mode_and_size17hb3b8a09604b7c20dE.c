long long uu_truncate::parse_mode_and_size::hb3b8a09604b7c20d(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x188]
    unsigned long v1;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // r15
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v13;  // rax
    int v15;  // xmm0

    v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h32e9d067735cfa6a(a1, a2);
    v1 = v9;
    v2 = v10 + v9;
    if (!(int)::0x4ace90::core::str::validations::next_code_point::h0f3039ef3e354189(&v1))
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d40d22c4f0f04ac(&v6, v9, v10);
        a0[0] = 1;
        *((int128_t *)&a0[1]) = *((int128_t *)&v6);
        v11 = *((long long *)&v7);
        a0[1] = v11;
        return v11;
    }
    if ((unsigned int)v10 <= 62)
    {
        v0 = 0x5000a82000000000;
        if (((char)(*((char *)&v0 + (((unsigned int)v10 & 63) >> 3)) >> (char)((unsigned int)v10 & 63 & 7)) & 1))
        {
            v9 = ::0x4acf40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v9, v10);
            if (!v9)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    v13 = uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v3, v9, v12);
    switch ((unsigned int)v10)
    {
    case 37:
        if (*((int *)&v3) == 3)
        {
            v11 = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    case 43:
        if (*((int *)&v3) == 3)
        {
            vvar_221{reg 16} = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    case 45:
        if (*((int *)&v3) == 3)
        {
            vvar_227{reg 16} = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    case 47:
        goto LABEL_4ae4ea;
    case 60:
        if (*((int *)&v3) == 3)
        {
            vvar_215{reg 16} = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    case 62:
        if (*((int *)&v3) == 3)
        {
            vvar_209{reg 16} = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    default:
LABEL_4ae4ea:
        if (*((int *)&v3) == 3)
        {
            vvar_233{reg 16} = core::ops::function::FnOnce::call_once::h71d5d0712305825a(uu_truncate::TruncateMode::RoundUp::h68a9fe63e667ba89, *((long long *)&v4));
            a0[1] = v11;
            a0[2] = v10;
            a0[0] = 3;
            return v11;
        }
    }
    v15 = *((int128_t *)&v3);
    *((int128_t *)&a0[2]) = *((int128_t *)&v5);
    *((void*)&a0[0]) = v15;
    return v11;
}
