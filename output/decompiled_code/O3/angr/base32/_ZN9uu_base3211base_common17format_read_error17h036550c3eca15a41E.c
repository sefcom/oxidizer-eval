long long uu_base32::base_common::format_read_error::h036550c3eca15a41(unsigned long long a0, char a1)
{
    char v0;  // [sp-0xd9]
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd0]
    void* v3;  // [sp-0xc8]
    char v4;  // [bp-0xc0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa8]
    void* v8;  // [sp-0xa0]
    int v9;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v10;  // [sp-0x80]
    int v11;  // [sp-0x78]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [sp-0x48]
    unsigned long long v16;  // [sp-0x40]
    void* v17;  // [sp-0x38]
    unsigned long long v19;  // r14
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rdx
    int v25;  // ymm0
    int v26;  // ymm1
    int v27;  // xmm0
    int v28;  // xmm1
    unsigned int v29;  // eax
    unsigned long long v30;  // rsi

    v0 = a1;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb893337f426b3917(&v12, &v0);
    v19 = *((long long *)&v14);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h8af99a07f87bdc0c(&v4, v19, 0);
    if (v4)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v1 = v5;
    v2 = v6;
    v3 = 0;
    v15 = *((long long *)&v13);
    v16 = v19 + v15;
    v17 = 0;
    v22 = ::0x4c11a0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v15, v20, v21);
    if ((unsigned int)v21 == 0x110000)
    {
        v9 = &v1;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_54a5b0;
        v5 = 1;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7c2a51b30d484005(a0, &v4);
        ::0x4bfec0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd9de25fd040e2fda(&v1);
        ::0x4bfec0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd9de25fd040e2fda(&v12);
        return a0;
    }
    do
    {
        v23 = v24;
        if (v22)
        {
            ::0x4c0f40::alloc::string::String::push::h859ae11851fd8b8e(&v1, v23 & 4294967295, v23);
        }
        else
        {
            core::unicode::unicode_data::conversions::to_upper::h75a19f004959258f(&v9, v23 & 4294967295);
            core::char::CaseMappingIter::new::h3810fcac66648f70(&v4, &v9, v21);
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
                ::0x4c0f40::alloc::string::String::push::h859ae11851fd8b8e(&v1, v29, v21);
            }
            core::ptr::drop_in_place$LT$core..char..ToUppercase$GT$::hc26b67f8ebbb16a9();
        }
    } while ((v22 = ::0x4c11a0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v15, v30, v21), v24 = v21, (unsigned int)v21 != 0x110000));
}
