double uu_unexpand::expand_shortcuts::h0e39da5a4378fbe3(long long a0, long long a1, long long a2)
{
    unsigned int v0;  // [sp-0xd0]
    unsigned int v1;  // [sp-0xcc]
    char v2;  // [bp-0xc8], Other Possible Types: unsigned int, unsigned long
    unsigned long v3;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v4;  // [bp-0xb8]
    unsigned long v5;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa8]
    void* v7;  // [sp-0xa0]
    int v8;  // [sp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    void* v11;  // [sp-0x78]
    unsigned long long v12;  // [sp-0x70]
    char v13;  // [bp-0x68]
    unsigned short v14;  // [sp-0x38]
    unsigned long long v16[3];  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // ymm0
    int v27;  // xmm0

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h8948bfdec44fdaf0(&v2, a2, 0);
    if (*((long long *)&v2))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = v3;
    v6 = *((long long *)&v4);
    v7 = 0;
    v8 = a1;
    v9 = a1 + a2 * 24;
    v16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0154df9052922002(&v8);
    if (!v16)
    {
        a0->field_10 = v7;
        v27 = *((int128_t *)&v5);
        *((void*)&a0->field_0) = v27;
        return (unsigned long long)(v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27);
    }
    v1 = 0;
    v0 = 0;
    do
    {
        v17 = v16[1];
        v18 = v16[2];
        v2 = 0;
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hd591b87460f79b50(v17, v18, ::0x4b1d90::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v2), 1))
        {
            v19 = ::0x4b1d60::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v17, v18);
            if (!v19)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v20 = v19;
            v2 = v20;
            v3 = v19 + v21;
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5ee87b9542c9bd6f((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h0fb82b25cd82ae12(&v2, v22, v21)))
            {
                v11 = 0;
                v12 = v21;
                v14 = 1;
                v0 = ::0x4b1fa0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v13, v20, v21) | -0x100 | 1;
                core::iter::traits::iterator::Iterator::fold::h804e987dc781e583(&v11, &v5, v21);
                continue;
            }
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v16);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h67d147374ccc1fec(&v5, &v2);
        v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2f9e813c50ba3d83(v17, v18, "--all", 5);
        if ((char)v23 || (v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2f9e813c50ba3d83(v17, v18, "-a--tabs=", 2), (char)v23))
            v1 = v23 | -0x100 | 1;
    } while ((v16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0154df9052922002(&v8), v16));
    if (((char)v0 & 1) && !((char)v1 & 1))
    {
        ::0x4b1f30::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d6d0dd04207d7d2(&v2, "--first-onlysrc/uu/unexpand/src/unexpand.rs", 12);
        v10 = *((long long *)&v4);
        v24 = *((int128_t *)&v2);
        v8 = v24;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h67d147374ccc1fec(&v5, &v8);
    }
}
