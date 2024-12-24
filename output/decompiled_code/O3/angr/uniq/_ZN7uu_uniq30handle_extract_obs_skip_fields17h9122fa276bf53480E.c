long long uu_uniq::handle_extract_obs_skip_fields::h9122fa276bf53480(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3[3])
{
    char v0;  // [sp-0xca]
    char v1;  // [sp-0xc9]
    int v2;  // [bp-0xc8], Other Possible Types: char
    unsigned long v3;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xa8]
    unsigned long long v5;  // [sp-0xa0]
    void* v6;  // [sp-0x98]
    char v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    unsigned long v12;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x58]
    unsigned long long v14;  // [sp-0x50]
    unsigned long long v15;  // [sp-0x48]
    unsigned long long v16;  // [sp-0x40]
    char v17;  // [bp-0x38]
    char v18;  // [bp-0x28]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax

    v4 = 0;
    v5 = 4;
    v6 = 0;
    v1 = 0;
    v0 = 0;
    v12 = a1;
    v13 = a1 + a2;
    v14 = &v0;
    v15 = &v1;
    v16 = &v4;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h214a0c9f2872a7a3(&v7, &v12, a2);
    v20 = v6;
    if (!v20)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v2, a1, a2);
        a0[2] = v3;
        *((void*)&a0[0]) = v2;
    }
    else
    {
        if (v0)
        {
            ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a3);
            a3[0] = 0x8000000000000000;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h432582854ea1f5fb(&v10, v5, v5 + v20 * 4);
            if (a3[0] != 0x8000000000000000)
                ::0x4bc5a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h0f0d2094bc602c9e(&v10, ::0x4bc450::core::slice::iter::Iter$LT$T$GT$::make_slice::hbbf62df6b2cbabad(a3[1], a3[2] + a3[1]), v21);
            v3 = *((long long *)&v11);
            *((int128_t *)&v2) = *((int128_t *)&v10);
            ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a3);
            a3[2] = v3;
            *((void*)&a3[0]) = v2;
        }
        v22 = *((long long *)&v9);
        if (v22 <= 1)
        {
            a0[0] = 0x8000000000000000;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h432582854ea1f5fb(&v17, *((long long *)&v8), *((long long *)&v8) + v22 * 4);
            a0[2] = *((long long *)&v18);
            *((int128_t *)&a0[0]) = *((int128_t *)&v17);
        }
    }
    ::0x4bb480::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h877a7afa2a516d50(&v7);
    return ::0x4bb480::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h877a7afa2a516d50(&v4);
}
