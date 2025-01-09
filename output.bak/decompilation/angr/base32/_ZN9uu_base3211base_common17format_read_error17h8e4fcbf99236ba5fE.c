long long uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f()
{
    char v0;  // [sp-0xd9]
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd0]
    void* v3;  // [sp-0xc8]
    char v4;  // [bp-0xc0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0xb8], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0xb0], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0xa8]
    void* v8;  // [sp-0xa0]
    char *v9;  // [bp-0x88]
    unsigned long long v10;  // [sp-0x80]
    char *v11;  // [sp-0x78]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [sp-0x48]
    unsigned long long v16;  // [sp-0x40]
    void* v17;  // [sp-0x38]
    char v19;  // sil
    unsigned long long v20;  // r14
    unsigned long long v21;  // rax
    unsigned int v22;  // edx
    unsigned int v23;  // edx
    unsigned int v24;  // edx
    int v25;  // ymm0
    int v26;  // ymm1
    char *v27;  // xmm0
    char *v28;  // xmm1
    unsigned int v29;  // eax
    unsigned long v30;  // rdi

    v0 = v19;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7bd6b561c7dd34ea(&v12, &v0);
    v20 = *((long long *)&v14);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h82af769b21b92444(&v4, v20, 0);
    if (v4)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v1, v6); /* do not return */
    v1 = v5;
    v2 = v6;
    v3 = 0;
    v15 = *((long long *)&v13);
    v16 = v20 + v15;
    v17 = 0;
    v21 = ::0x4c0ef0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v15);
    if (v22 == 0x110000)
    {
        v9 = &v1;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_549910;
        v5 = 1;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b();
        ::0x4bfc10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&v1);
        ::0x4bfc10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&v12);
        return v30;
    }
    do
    {
        v23 = v24;
        if (v21)
        {
            ::0x4c0c90::alloc::string::String::push::h859ae11851fd8b8e(&v1, v23);
        }
        else
        {
            core::unicode::unicode_data::conversions::to_upper::h75a19f004959258f(&v9, v23);
            core::char::CaseMappingIter::new::h3810fcac66648f70(&v4, &v9);
            v27 = *((int128_t *)&v4);
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
            v28 = *((int128_t *)&v6);
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
            v11 = v28;
            v9 = v27;
            while (true)
            {
                v29 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc58afee2023a2b2b(&v9);
                if (v29 == 0x110000)
                    break;
                ::0x4c0c90::alloc::string::String::push::h859ae11851fd8b8e(&v1, v29);
            }
            core::ptr::drop_in_place$LT$core..char..ToUppercase$GT$::h43adcbb5a5b65b60();
        }
    } while ((v21 = ::0x4c0ef0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v15), v24 = v22, v22 != 0x110000));
}
