long long uu_uniq::Uniq::skip_fields::h4af556166553510c(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    int v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x58]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    unsigned long long v7;  // r8
    unsigned long long v8;  // r15
    unsigned long long v9;  // rax
    int v10;  // xmm0
    int v11;  // ymm0
    int v12;  // ymm0
    int v13;  // xmm0

    if (!a1)
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf1bf00d8bc4f30da(a0, a3, a4);
    v7 = a4 + a3;
    v0 = a3;
    v1 = v7;
    if (!a2)
    {
LABEL_4bcd4b:
        v9 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h836ebc17e4972660(a0, a3, v7);
        if (a2)
        {
            vvar_274{reg 16} = ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(&v2);
            return v9;
        }
        return v9;
    }
    else
    {
        v8 = ::0x4bb090::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(0);
        v9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::he72af7650f3a603a(&v0);
        if ((char)v9)
        {
            a0[0] = 0;
            a0[1] = 1;
            a0[2] = 0;
            return v9;
        }
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb69a7ce0705b3cb0(&v4, &v0, 0);
        v3 = *((long long *)&v5);
        v10 = *((int128_t *)&v4);
        v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10;
        v2 = v10;
        if (v3)
        {
            a3 = (long long)(&v2)[8];
            v7 = v3 + a3;
            v0 = a3;
            v1 = v7;
            if (!(v8 < a2))
                goto LABEL_4bcd4b;
            while (true)
            {
                v8 = ::0x4bb090::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v8);
                if ((char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::he72af7650f3a603a(&v0))
                    break;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb69a7ce0705b3cb0(&v4, &v0, 0);
                ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(&v2);
                v3 = *((long long *)&v5);
                v13 = *((int128_t *)&v4);
                v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
                v2 = v13;
                if (!v3)
                    break;
                a3 = (long long)(&v2)[8];
                v7 = v3 + a3;
                v0 = a3;
                v1 = v7;
                if (v8 >= a2)
                    goto LABEL_4bcd4b;
            }
        }
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
        v9 = ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(&v2);
        return v9;
    }
}
