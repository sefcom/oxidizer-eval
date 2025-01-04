long long uu_head::parse::parse_num::h0b10a586c944e6e5(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long v6;  // rbp
    char v7;  // bpl
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    int v10;  // xmm0

    v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3f31f53537262b42(a1, a2);
    v0 = v4;
    v1 = v4 + v5;
    if (!(int)::0x4bda80::core::str::validations::next_code_point::hbd45400f08067c57(&v0))
    {
        ::0x4bdc80::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(&a0->padding_8, a1, a2);
        a0->field_0 = 1;
        return a0;
    }
    v6 = (unsigned int)v5;
    if ((unsigned int)v5 == 43 || (unsigned int)v6 == 45)
    {
        v4 = ::0x4bdb70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v4, v5);
        if (!v4)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        v7 = v6 | -0x100 | (unsigned int)v6 == 45;
    }
    else
    {
        v7 = 0;
    }
    v9 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h64aa6c7f4fac8ad0(v4, v8);
    if (!v5)
    {
        *((long long *)&a0->padding_8[0]) = 0;
    }
    else
    {
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v0, v9, v5);
        if ((int)v0 != 3)
        {
            v10 = *((int128_t *)&v0);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
            *((void*)&a0->field_0) = v10;
            return a0;
        }
        *((unsigned long long *)&a0->padding_8[0]) = v1;
    }
    a0->field_10 = v7;
    a0->field_0 = 3;
    return a0;
}
