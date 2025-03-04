long long uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(struct_1 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x2c8]
    int v1;  // [sp-0x198]
    unsigned long v2;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x170]
    unsigned long long v4;  // [sp-0x168]
    void* v5;  // [sp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: unsigned int, unsigned long long, char
    int v7;  // [sp-0x158]
    unsigned long long v8;  // [sp-0x150]
    int v9;  // [sp-0x148], Other Possible Types: unsigned long
    char v10;  // [sp-0x140]
    char v11;  // [sp-0x138]
    char v12;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x128]
    unsigned long long v14;  // [sp-0x120]
    void* v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x110]
    void* v17;  // [sp-0x108]
    unsigned long v18;  // [sp-0x100]
    unsigned long long v19;  // [sp-0xf8]
    unsigned long long v20;  // [sp-0xf0]
    int v21;  // [sp-0xe8]
    unsigned long long v22;  // [sp-0xd8]
    int v23;  // [sp-0xc8]
    unsigned long long v24;  // [sp-0xb8]
    int v25;  // [sp-0xa8]
    unsigned long long v26;  // [sp-0x98]
    char v27;  // [bp-0x90]
    char v28;  // [bp-0x70]
    char v29;  // [bp-0x50]
    struct_0 *v31;  // r15
    unsigned long long v32;  // rsi
    void* v33;  // r14
    char *v34;  // r13
    char *v35;  // rbp
    int v36;  // ymm0
    int v37;  // ymm1
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // rbx
    unsigned long long v40;  // r12
    unsigned long long v41;  // 4098
    int v42;  // xmm0
    int v43;  // xmm0
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rcx
    unsigned int v51;  // eax
    int v52;  // xmm0
    int v53;  // xmm1
    unsigned long long v54;  // 4098
    int v55;  // xmm0
    int v56;  // xmm0
    unsigned long long v57;  // 4098
    int v58;  // xmm0
    int v59;  // xmm0
    struct_1 *v60;  // rcx
    struct_1 *v61;  // rcx
    struct_1 *v62;  // rcx
    struct_1 *v63;  // rcx
    struct_1 *v64;  // rax

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v18 = a1;
    v19 = a1 + a2 * 24;
    v20 = 1;
    v31 = &v6;
    v32 = 1;
    v33 = 0;
    v34 = &v12;
    v35 = &v6;
    if (!(0))
        goto LABEL_4caee0;
    while (true)
    {
        v38 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h599d6995f23da721(&v18);
        if (v38)
        {
            while (true)
            {
                if (((char)v33 & 1))
                {
                    uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v35, v38[1], v38[2]);
                    v41 = *((long long *)&v6);
                    v42 = v31->field_0;
                    v1 = v42;
                    v2 = v31->field_10;
                    if (v41)
                    {
                        v61 = a0;
                        *((unsigned long *)((char *)&v61->field_8 + 8)) = v2;
                        *((void*)&(&v61->field_0)[1]) = v1;
                        v61->field_0 = 1;
                        ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                        v64 = a0;
                        return v64;
                    }
                    v22 = v2;
                    v43 = v1;
                    v36 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                    v21 = v43;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v27, &v21);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v27);
                    v33 = 0;
                    v1 = v1;
                }
                else
                {
                    v39 = v38[1];
                    v40 = v38[2];
                    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v39, v40, "--", 2))
                    {
                        v6 = 0;
                        v1 = v1;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v39, v40, ::0x4ca390::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, v35), v44))
                        {
                            v15 = 0;
                            v16 = 1;
                            v17 = 0;
                            v12 = v39;
                            v13 = v40 + v39;
                            v14 = 1;
                            v45 = 1;
                            while (true)
                            {
                                if (v45)
                                {
                                    v14 = 0;
                                    if (!(!::0x4ca750::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(v34, v45)) || !((unsigned int)v46) || !((unsigned int)v44 != 0x110000))
                                        break;
                                }
                                else
                                {
                                    v46 = ::0x4ca910::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc19b1af496d38725(v34);
                                    v47 = v46 & 4294967295;
                                    if ((unsigned int)v47 == 0x110000)
                                        break;
                                }
                                v49 = v48;
                                if (((char)v33 & 1))
                                {
                                    v51 = ::0x4ca700::alloc::string::String::push::h859ae11851fd8b8e(&v15, v49 & 4294967295) & 0xffffffffffffff00 | v33 & 255;
                                    goto LABEL_4cb172;
                                }
                                v50 = v49 - 65 & 4294967295;
                                if ((unsigned int)v50 <= 54)
                                {
                                    v51 = v46 & 0xffffffffffffff00 | 1;
                                    if (v50 == 51)
                                        goto LABEL_4cb172;
                                    v0 = 18016597533007873;
                                    if (((char)(*((char *)&v0 + ((v50 & 63) >> 3)) >> (char)(v50 & 63 & 7)) & 1))
                                        break;
                                }
                                uu_od::parse_formats::od_argument_traditional_format::h14da6a638cd1f622(&v1, v49 & 4294967295);
                                if ((int)v1 != 3)
                                {
                                    v52 = v1;
                                    v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                                    v53 = *((int128_t *)&v2);
                                    v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                                    v9 = v53;
                                    v6 = v52;
                                    v11 = 0;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v3, v35);
                                }
                                v51 = (unsigned int)v33;
LABEL_4cb172:
                                v45 = v14;
                                v33 = v51;
                            }
                            if (v17)
                            {
                                uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v35, v16, v17);
                                v57 = (long long)v6;
                                v58 = v31->field_0;
                                v1 = v58;
                                v2 = v31->field_10;
                                if (v57)
                                {
                                    v62 = a0;
                                    *((unsigned long long *)((char *)&v62->field_8 + 8)) = v2;
                                    *((void*)&(&v62->field_0)[1]) = v1;
                                    v62->field_0 = 1;
                                    ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v15);
                                    ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                                    return v64;
                                }
                                v26 = v2;
                                v59 = v1;
                                v36 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                                v25 = v59;
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v29, &v25);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v29);
                                v33 = 0;
                            }
                            ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v15);
                            v1 = v1;
                        }
                    }
                    else
                    {
                        if (v40 == 2)
                            goto LABEL_4cb2ec;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v39, v40, "--format=", 9))
                        {
                            v8 = v39;
                            v9 = v39 + v40;
                            v10 = 0;
                            v6 = 1;
                            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hb93a52d6c1b4019e(v34, v35);
                            uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(v35, v13, v14);
                            v54 = v6;
                            v55 = v31->field_0;
                            v1 = v55;
                            v2 = v31->field_10;
                            if (v54)
                            {
                                v60 = a0;
                                *((unsigned long long *)((char *)&v60->field_8 + 8)) = v2;
                                *((void*)&(&v60->field_0)[1]) = v1;
                                v60->field_0 = 1;
                                ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v12);
                                ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                                return v64;
                            }
                            v24 = v2;
                            v56 = v1;
                            v36 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
                            v23 = v56;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&v28, &v23);
                            v34 = &v12;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&v3, &v28);
                            ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v12);
                        }
                        v33 = ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v39, v40, "--format", 8) ? v33 & 4294967295 & 4294967295 : 1);
                        v1 = v1;
                    }
                }
                v1 = v1;
                v32 = v20;
                if (!v32)
                    break;
LABEL_4caee0:
                v20 = 0;
                v38 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hb9a07d8be83b1a58(&v18, v32);
                if (!v38)
                    goto LABEL_4cb2e6;
            }
        }
        else
        {
LABEL_4cb2e6:
            if (((char)v33 & 1))
            {
                ::0x4ca590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v6);
                v61 = a0;
                *((unsigned long *)((char *)&v61->field_8 + 8)) = v9;
                *((void*)&(&v61->field_0)[1]) = v1;
                v61->field_0 = 1;
                ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v3);
                return v64;
            }
LABEL_4cb2ec:
            if (!v5)
            {
                *((uint128_t *)&v9) = g_541ae0;
                *((uint128_t *)&v7) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE;
                v11 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v3, &v6);
                break;
            }
        }
    }
    *((void* *)((char *)&a0->field_8 + 8)) = v5;
    vvar_915{reg 16} = v63;
    *((int128_t *)(vvar_915{reg 16} + 8)) = *((int128_t *)&v3);
    *((unsigned long long *)vvar_915{reg 16}) = 0;
    return v64;
}
