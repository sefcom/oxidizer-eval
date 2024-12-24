double uu_expand::expand_shortcuts::hb71e34400dac2201(long long a0, long long a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char, unsigned int, unsigned long
    unsigned long long v1;  // [sp-0x100]
    unsigned long long v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0]
    int v6;  // [sp-0xd8]
    unsigned long long v7;  // [sp-0xc8]
    char v8;  // [bp-0xb8]
    char v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0x90]
    char v12;  // [bp-0x80]
    void* v13;  // [sp-0x78]
    unsigned long long v14;  // [sp-0x70]
    char v15;  // [bp-0x68]
    unsigned short v16;  // [sp-0x38]
    int v19;  // ymm0
    int v20;  // xmm0
    int v21;  // ymm0
    unsigned long long v22;  // rbx
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    int v29;  // xmm0
    int v30;  // xmm0

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hb8b7de9bc76b68d9(&v8, a1->field_10, 0);
    if (*((long long *)&v8))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = *((long long *)&v9);
    v4 = *((long long *)&v10);
    v5 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf4fff6751030b1ac(&v8, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89508fdfcf78aab2(&v11, &v8);
    if (*((long long *)&v11) == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::ha710d4e8042b7075(&v8);
        a0->field_10 = v5;
        v30 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v30;
        return (unsigned long long)(v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30);
    }
    do
    {
        v20 = *((int128_t *)&v11);
        v21 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        v6 = v20;
        v7 = *((long long *)&v12);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, (long long)(&v6)[8], *((long long *)&v12));
        if (!*((long long *)&v0))
        {
            v22 = v1;
            v23 = v2;
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdf3b467a6fe135d2(v22, v23, ::0x4b1600::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
            {
                v24 = ::0x4b1570::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v22, v23);
                if (!v24)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                v25 = v24;
                v0 = v25;
                v1 = v24 + v26;
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h53c4c73022b3f974((unsigned int)core::iter::traits::iterator::Iterator::try_fold::he8afb773839b9c72(&v0, v27, v26)))
                {
                    ::0x4b18e0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v15, v25, v26);
                    v13 = 0;
                    v14 = v26;
                    v16 = 1;
                    core::iter::traits::iterator::Iterator::fold::hfb6ee0fe10ba1521(&v13, &v3, v26);
                    ::0x4b07e0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h001a0dcdda2ba675(&v6);
                    continue;
                }
            }
        }
        v2 = v7;
        v29 = v6;
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
        v0 = v29;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h62ee49ac348520af(&v3, &v0, v28);
    } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89508fdfcf78aab2(&v11, &v8), *((long long *)&v11) != 0x8000000000000000));
}
