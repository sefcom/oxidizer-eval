double uu_expand::expand_shortcuts::h240214fc3584f89f(long long a0, long long a1)
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
    int v27;  // xmm0
    int v28;  // xmm0

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4fa3e7992e01de79(&v8, a1->field_10, 0);
    if (*((long long *)&v8))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, *((long long *)&v10)); /* do not return */
    v3 = *((long long *)&v9);
    v4 = *((long long *)&v10);
    v5 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfba173770346ed42(&v8, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&v11, &v8);
    if (*((long long *)&v11) == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$::h4d437b6322f8f627(&v8);
        a0->field_10 = v5;
        v28 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v28;
        return (unsigned long long)(v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28);
    }
    do
    {
        v20 = *((int128_t *)&v11);
        v21 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        v6 = v20;
        v7 = *((long long *)&v12);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, (long long)(&v6)[8], *((long long *)&v12));
        if (!(long long)v0)
        {
            v22 = v1;
            v23 = v2;
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(v22, v23, ::0x4b0af0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
            {
                v24 = ::0x4b0a60::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v22, v23);
                if (!v24)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v22, v23, 1, v23, &g_51cd98); /* do not return */
                v25 = v24;
                v0 = v25;
                v1 = v24 + v26;
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::haae63640452d575a(core::iter::traits::iterator::Iterator::try_fold::he2bcc8d1435e77c9(&v0)))
                {
                    ::0x4b0dd0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v15, v25, v26);
                    v13 = 0;
                    v14 = v26;
                    v16 = 1;
                    core::iter::traits::iterator::Iterator::fold::hb40c1509fd5bc5ab(&v13, &v3);
                    ::0x4afcd0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb2344d26e01de240();
                    continue;
                }
            }
        }
        v2 = v7;
        v27 = v6;
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        v0 = v27;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h14b381994cf5b407(&v3, &v0);
    } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75a5837736690158(&v11, &v8), *((long long *)&v11) != 0x8000000000000000));
}
