long long uu_head::parse::parse_num::h0b10a586c944e6e5(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r14
    unsigned long v7;  // rbp
    unsigned long long v8;  // rax
    char v9;  // bpl
    unsigned long long v10;  // rax
    int v11;  // xmm0

    v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3f31f53537262b42(a1, a2);
    v6 = v5;
    v0 = v4;
    v1 = v4 + v5;
    if (!(int)::0x4bda80::core::str::validations::next_code_point::hbd45400f08067c57(&v0))
    {
        ::0x4bdc80::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(&a0->padding_8, a1, a2);
        a0->field_0 = 1;
        return a0;
    }
    v7 = (unsigned int)v5;
    if ((unsigned int)v5 == 43 || (unsigned int)v7 == 45)
    {
        v8 = ::0x4bdb70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v4, v5);
        if (!v8)
            core::str::slice_error_fail::h5dbb61534404fe7e(v4, v5, 1, v5, &g_52d098); /* do not return */
        v9 = v7 & 0xffffffffffffff00 | (unsigned int)v7 == 45;
        v4 = v8;
        v6 = v5;
    }
    else
    {
        v9 = 0;
    }
    v10 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h64aa6c7f4fac8ad0(v4, v6, 48);
    if (!v5)
    {
        *((unsigned long long *)&a0->padding_8[0]) = 0;
    }
    else
    {
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, v10, a2);
        if ((int)v0 != 3)
        {
            v11 = *((int128_t *)&v0);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
            *((void*)&a0->field_0) = v11;
            return a0;
        }
        *((unsigned long long *)&a0->padding_8[0]) = v1;
    }
    a0->field_10 = v9;
    a0->field_0 = 3;
    return a0;
}
