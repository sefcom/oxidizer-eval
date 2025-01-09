long long uu_truncate::parse_mode_and_size::hbf18cbb89603c372(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
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
    unsigned long long v11;  // r15
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // r14
    unsigned long long v15;  // rax
    int v17;  // xmm0

    v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha02f30b080304904(a1, a2);
    v1 = v9;
    v2 = v10 + v9;
    if (!(int)::0x4ace50::core::str::validations::next_code_point::h369b2919962b1982(&v1))
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&v6, v9, v10);
        a0[0] = 1;
        *((int128_t *)&a0[1]) = *((int128_t *)&v6);
        v12 = *((long long *)&v7);
        a0[1] = v12;
        return v12;
    }
    if ((unsigned int)v10 <= 62)
    {
        v0 = 0x5000a82000000000;
        if (((char)(*((char *)&v0 + (((unsigned int)v10 & 63) >> 3)) >> (char)((unsigned int)v10 & 63 & 7)) & 1))
        {
            v13 = ::0x4acf00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v9, v10);
            if (!v13)
                core::str::slice_error_fail::h5dbb61534404fe7e(v9, v10, 1, v10, &g_516758); /* do not return */
        }
    }
    v15 = uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v3, v11, v14);
    switch ((unsigned int)v10)
    {
    case 37:
        if (*((int *)&v3) == 3)
        {
            v12 = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    case 43:
        if (*((int *)&v3) == 3)
        {
            vvar_230{reg 16} = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    case 45:
        if (*((int *)&v3) == 3)
        {
            vvar_224{reg 16} = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    case 47:
        goto LABEL_4ae4aa;
    case 60:
        if (*((int *)&v3) == 3)
        {
            vvar_218{reg 16} = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    case 62:
        if (*((int *)&v3) == 3)
        {
            vvar_212{reg 16} = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    default:
LABEL_4ae4aa:
        if (*((int *)&v3) == 3)
        {
            vvar_236{reg 16} = core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539, *((long long *)&v4));
            a0[1] = v12;
            a0[2] = v10;
            a0[0] = 3;
            return v12;
        }
    }
    v17 = *((int128_t *)&v3);
    *((int128_t *)&a0[2]) = *((int128_t *)&v5);
    *((void*)&a0[0]) = v17;
    return v12;
}
