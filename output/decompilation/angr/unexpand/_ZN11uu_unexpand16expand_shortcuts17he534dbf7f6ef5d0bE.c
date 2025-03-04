double uu_unexpand::expand_shortcuts::he534dbf7f6ef5d0b(long long a0, long long a1, long long a2)
{
    unsigned int v0;  // [sp-0xd0]
    unsigned int v1;  // [sp-0xcc]
    char v2;  // [bp-0xc8], Other Possible Types: unsigned int, unsigned long
    unsigned long v3;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v4;  // [bp-0xb8]
    unsigned long v5;  // [sp-0xb0]
    unsigned long long v6;  // [sp-0xa8]
    void* v7;  // [sp-0xa0]
    int v8;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    void* v11;  // [sp-0x78]
    unsigned long long v12;  // [sp-0x70]
    char v13;  // [bp-0x68]
    unsigned short v14;  // [sp-0x38]
    unsigned long long v16[3];  // rax
    unsigned long long v17[3];  // r14
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // ymm0
    int v27;  // xmm0

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1ee9d91d0a67d274(&v2, a2, 0);
    if (*((long long *)&v2))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, *((long long *)&v4)); /* do not return */
    v5 = v3;
    v6 = *((long long *)&v4);
    v7 = 0;
    v8 = a1;
    v9 = a1 + a2 * 24;
    v16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&v8);
    if (!v16)
    {
        a0->field_10 = v7;
        v27 = *((int128_t *)&v5);
        *((void*)&a0->field_0) = v27;
        return (unsigned long long)((v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27);
    }
    v17 = v16;
    v0 = 0;
    v1 = 0;
    do
    {
        v18 = v17[1];
        v19 = v17[2];
        v2 = 0;
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd1511ca1e7aacce(v18, v19, ::0x4b0e60::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v2), 1))
        {
            v20 = ::0x4b0e30::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v18, v19);
            if (!v20)
                core::str::slice_error_fail::h5dbb61534404fe7e(v18, v19, 1, v19, &g_51cf48); /* do not return */
            v21 = v20;
            v2 = v21;
            v3 = v20 + v22;
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h354a0f58b173540a(core::iter::traits::iterator::Iterator::try_fold::h4425103eb2b7f21c(&v2)))
            {
                v11 = 0;
                v12 = v22;
                v14 = 1;
                v0 = ::0x4b1070::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v13, v21, v22) & 0xffffffffffffff00 | 1;
                core::iter::traits::iterator::Iterator::fold::hdc2d68cddeb53a65(&v11, &v5);
                continue;
            }
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v17);
        alloc::vec::Vec$LT$T$C$A$GT$::push::ha604323ce627ac89(&v5, &v2);
        v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(v18, v19, "--all", 5);
        if ((char)v23 || (v23 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(v18, v19, "-a--tabs=", 2), (char)v23))
            v1 = v23 & 0xffffffffffffff00 | 1;
    } while ((v17 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&v8), v17));
    if (((char)v0 & 1) && !((char)v1 & 1))
    {
        ::0x4b1000::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(&v2, "--first-onlysrc/uu/unexpand/src/unexpand.rs", 12);
        v10 = *((long long *)&v4);
        v24 = *((int128_t *)&v2);
        v8 = v24;
        alloc::vec::Vec$LT$T$C$A$GT$::push::ha604323ce627ac89(&v5, &v8);
    }
}
