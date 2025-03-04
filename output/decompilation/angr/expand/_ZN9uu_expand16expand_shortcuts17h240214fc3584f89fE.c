double uu_expand::expand_shortcuts::h240214fc3584f89f(long long a0, long long a1)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned int
    int v1;  // [bp-0x108], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x100]
    unsigned long long v3;  // [sp-0xf8]
    unsigned long v4;  // [sp-0xf0]
    unsigned long long v5;  // [sp-0xe8]
    void* v6;  // [sp-0xe0]
    int v7;  // [sp-0xd8]
    unsigned long long v8;  // [sp-0xc8]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xa8]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x80]
    void* v14;  // [sp-0x78]
    unsigned long long v15;  // [sp-0x70]
    char v16;  // [bp-0x68]
    unsigned short v17;  // [sp-0x38]
    int v20;  // xmm0
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rbp
    unsigned long long v23;  // rax
    unsigned long long v24;  // r14
    unsigned long long v25;  // rdx
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // ymm0

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4fa3e7992e01de79(&v9, a1->field_10, 0);
    if (*((long long *)&v9))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v4, *((long long *)&v11)); /* do not return */
    v4 = *((long long *)&v10);
    v5 = *((long long *)&v11);
    v6 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfba173770346ed42(&v9, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&v12, &v9);
    if (*((long long *)&v12) == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h4d437b6322f8f627(&v9);
        a0->field_10 = v6;
        v27 = *((int128_t *)&v4);
        *((void*)&a0->field_0) = v27;
        return (unsigned long long)(v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27);
    }
    do
    {
        v20 = *((int128_t *)&v12);
        v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        v7 = v20;
        v8 = *((long long *)&v13);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, (long long)(&v7)[8], *((long long *)&v13));
        if (!(long long)v1)
        {
            v21 = v2;
            v22 = v3;
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(v21, v22, ::0x4b0af0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
            {
                v23 = ::0x4b0a60::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v21, v22);
                if (!v23)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v21, v22, 1, v22, &g_51cd98); /* do not return */
                v24 = v23;
                v1 = v24;
                v2 = v23 + v25;
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::haae63640452d575a(core::iter::traits::iterator::Iterator::try_fold::he2bcc8d1435e77c9(&v0)))
                {
                    ::0x4b0dd0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v16, v24, v25);
                    v14 = 0;
                    v15 = v25;
                    v17 = 1;
                    core::iter::traits::iterator::Iterator::fold::hb40c1509fd5bc5ab(&v14, &v4);
                    ::0x4afcd0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb2344d26e01de240(&v7);
                    continue;
                }
            }
        }
        v3 = v8;
        v26 = v7;
        v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
        v1 = v26;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h14b381994cf5b407(&v4, &v0);
    } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&v12, &v9), *((long long *)&v12) != 0x8000000000000000));
}
