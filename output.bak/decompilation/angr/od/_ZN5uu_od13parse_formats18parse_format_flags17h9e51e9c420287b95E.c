long long uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x2c8]
    int v1;  // [sp-0x198]
    unsigned long v2;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x170]
    unsigned long long v4;  // [sp-0x168]
    void* v5;  // [sp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: char, unsigned int, unsigned long long
    char v7;  // [bp-0x150], Other Possible Types: unsigned long long
    int v8;  // [sp-0x148], Other Possible Types: unsigned long long
    char v9;  // [sp-0x140]
    char v10;  // [sp-0x138]
    char v11;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x128]
    void* v13;  // [sp-0x120], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x118]
    unsigned long long v15;  // [sp-0x110]
    void* v16;  // [sp-0x108]
    unsigned long v17;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xf8]
    unsigned long long v19;  // [sp-0xf0]
    int v20;  // [sp-0xe8]
    unsigned long long v21;  // [sp-0xd8]
    int v22;  // [sp-0xc8]
    unsigned long long v23;  // [sp-0xb8]
    int v24;  // [sp-0xa8]
    unsigned long long v25;  // [sp-0x98]
    char v26;  // [bp-0x90]
    char v27;  // [bp-0x70]
    char v28;  // [bp-0x50]
    struct_1 *v30;  // r15
    unsigned long long v31;  // rsi
    void* v32;  // r14
    char *v33;  // r13
    char *v34;  // rbp
    int v35;  // ymm0
    int v36;  // ymm1
    unsigned long long v37[3];  // rax
    unsigned long long v38;  // rbx
    unsigned long long v39;  // r12
    unsigned long long v40;  // 4098
    int v41;  // xmm0
    int v42;  // xmm0
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rcx
    unsigned int v50;  // eax
    int v51;  // xmm0
    int v53;  // xmm1
    unsigned long long v54;  // 4098
    int v55;  // xmm0
    int v56;  // xmm0
    unsigned long long v57;  // 4098
    int v58;  // xmm0
    int v59;  // xmm0
    struct_0 *v60;  // rcx
    struct_0 *v61;  // rcx
    struct_0 *v62;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v17 = a1;
    v18 = a1 + a2 * 24;
    v19 = 1;
    v30 = &v7;
    v31 = 1;
    v32 = 0;
    v33 = &v11;
    v34 = &v6;
    if (!(0))
        goto LABEL_4caee0;
    while (true)
    {
        v37 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h599d6995f23da721(&v17);
        if (v37)
        {
            while (true)
            {
                if (((char)v32 & 1))
                {
                    uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v34, v37[1], v37[2]);
                    v40 = (long long)v6;
                    v41 = v30->field_0;
                    v1 = v41;
                    v2 = v30->field_10;
                    if (v40)
                    {
                        v61 = a0;
                        *((unsigned long long *)((char *)&v61->field_8 + 8)) = v2;
                        *((void*)&(&v61->field_0)[1]) = v1;
                        v61->field_0 = 1;
                        ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                        return a0;
                    }
                    v21 = v2;
                    v42 = v1;
                    v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                    v20 = v42;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v26, &v20);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v26);
                    v32 = 0;
                    v1 = v1;
                }
                else
                {
                    v38 = v37[1];
                    v39 = v37[2];
                    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v38, v39, "--", 2))
                    {
                        v6 = 0;
                        v1 = v1;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v38, v39, ::0x4ca390::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, v34), v43))
                        {
                            v14 = 0;
                            v15 = 1;
                            v16 = 0;
                            v11 = v38;
                            v12 = v39 + v38;
                            v13 = 1;
                            v44 = 1;
                            while (true)
                            {
                                v13 = v13;
                                if (v44)
                                {
                                    v13 = 0;
                                    if (!(!::0x4ca750::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(v33, v44)) || !((unsigned int)v45) || !((unsigned int)v43 != 0x110000))
                                        break;
                                }
                                else
                                {
                                    v45 = ::0x4ca910::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc19b1af496d38725(v33);
                                    v46 = v45 & 4294967295;
                                    v13 = v13;
                                    v13 = v13;
                                    if ((unsigned int)v46 == 0x110000)
                                        break;
                                }
                                v48 = v47;
                                v44 = v13;
                                if (((char)v32 & 1))
                                {
                                    v50 = ::0x4ca700::alloc::string::String::push::h859ae11851fd8b8e(&v14, v48 & 4294967295) | -0x100 | v32 & 255;
                                    goto LABEL_4cb172;
                                }
                                v49 = v48 - 65 & 4294967295;
                                if ((unsigned int)v49 <= 54)
                                {
                                    v50 = v45 | -0x100 | 1;
                                    if (v49 == 51)
                                        goto LABEL_4cb172;
                                    v0 = 18016597533007873;
                                    v13 = v44;
                                    if (((char)(*((char *)&v0 + ((v49 & 63) >> 3)) >> (char)(v49 & 63 & 7)) & 1))
                                        break;
                                }
                                uu_od::parse_formats::od_argument_traditional_format::h14da6a638cd1f622(&v1, v48 & 4294967295);
                                if ((int)v1 != 3)
                                {
                                    v51 = v1;
                                    v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                                    v53 = *((int128_t *)&v2);
                                    v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                                    v8 = v53;
                                    v6 = v51;
                                    v10 = 0;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v3, v34);
                                }
                                v50 = (unsigned int)v32;
LABEL_4cb172:
                                v32 = v50;
                                v13 = v44;
                            }
                            if (v16)
                            {
                                uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v34, v15, v16);
                                v57 = (long long)v6;
                                v58 = v30->field_0;
                                v1 = v58;
                                v2 = v30->field_10;
                                if (v57)
                                {
                                    v62 = a0;
                                    *((unsigned long long *)((char *)&v62->field_8 + 8)) = v2;
                                    *((void*)&(&v62->field_0)[1]) = v1;
                                    v62->field_0 = 1;
                                    ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v14);
                                    ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                                    return a0;
                                }
                                v25 = v2;
                                v59 = v1;
                                v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                                v24 = v59;
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v28, &v24);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v28);
                                v32 = 0;
                            }
                            ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v14);
                            v1 = v1;
                        }
                    }
                    else
                    {
                        if (v39 == 2)
                            goto LABEL_4cb2ec;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v38, v39, "--format=", 9))
                        {
                            v7 = v38;
                            v8 = v38 + v39;
                            v9 = 0;
                            v6 = 1;
                            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hb93a52d6c1b4019e(v33, v34);
                            uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v34, v12, v13);
                            v54 = v6;
                            v55 = v30->field_0;
                            v1 = v55;
                            v2 = v30->field_10;
                            if (v54)
                            {
                                v60 = a0;
                                *((unsigned long long *)((char *)&v60->field_8 + 8)) = v2;
                                *((void*)&(&v60->field_0)[1]) = v1;
                                v60->field_0 = 1;
                                ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v11);
                                ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                                return a0;
                            }
                            v23 = v2;
                            v56 = v1;
                            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                            v22 = v56;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v27, &v22);
                            v33 = &v11;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v27);
                            ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v11);
                        }
                        v32 = ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v38, v39, "--format", 8) ? v32 & 4294967295 & 4294967295 : 1);
                        v1 = v1;
                    }
                }
                v1 = v1;
                v31 = v19;
                if (!v31)
                    break;
LABEL_4caee0:
                v19 = 0;
                v37 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hb9a07d8be83b1a58(&v17, v31);
                if (!v37)
                    goto LABEL_4cb2e6;
            }
        }
        else
        {
LABEL_4cb2e6:
            if (((char)v32 & 1))
            {
                ::0x4ca590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v6);
                v61 = a0;
                *((unsigned long long *)((char *)&v61->field_8 + 8)) = v8;
                *((void*)&(&v61->field_0)[1]) = v1;
                v61->field_0 = 1;
                ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                return a0;
            }
LABEL_4cb2ec:
            if (!v5)
            {
                *((uint128_t *)&v8) = g_541ae0;
                *((uint128_t *)&v6) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE;
                v10 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v3, &v6);
                break;
            }
        }
    }
    vvar_920{reg 24} = a0;
    *((void* *)((char *)&a0->field_8 + 8)) = v5;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
    a0->field_0 = 0;
    return a0;
}
