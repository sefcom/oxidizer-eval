long long uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [sp-0x135]
    unsigned int v1;  // [sp-0x134]
    void* v2;  // [bp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long v3;  // [bp-0x111]
    unsigned long long v4;  // [sp-0x110]
    void* v5;  // [sp-0x108]
    unsigned long long v6;  // [sp-0x100], Other Possible Types: unsigned long
    int v7;  // [sp-0xf8]
    unsigned long long v8;  // [sp-0xe8]
    char v9;  // [sp-0xe0]
    void* v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xd0]
    void* v12;  // [sp-0xc8]
    char *v13;  // [sp-0xc0]
    unsigned long long v14;  // [sp-0xb8]
    unsigned long long v15;  // [sp-0xb0]
    unsigned long v16;  // [sp-0xa8]
    unsigned long long v17;  // [sp-0xa0]
    int v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x88]
    unsigned long long v20;  // [bp-0x78]
    unsigned long long v21;  // [sp-0x71]
    char *v22;  // [sp-0x60]
    unsigned long long v23;  // [sp-0x58]
    unsigned long long v24;  // [sp-0x50]
    char *v25;  // [sp-0x48]
    unsigned long long v26;  // [sp-0x40]
    unsigned long long v27;  // [sp-0x38]
    unsigned int v29;  // edx
    unsigned int v30;  // ebp
    int v31;  // ymm0
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rsi
    unsigned long long v37;  // r12
    unsigned long long v38;  // r14
    char v39;  // r14b
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rax
    char v42;  // dl
    unsigned long long v43;  // rsi
    int v44;  // xmm0
    unsigned long long v45;  // rdx
    struct_0 *v46;  // rdi
    unsigned long long v47;  // rcx
    struct_0 *v48;  // rdi
    unsigned long long v49;  // rax
    struct_0 *v50;  // rcx
    struct_0 *v51;  // rcx

    v10 = 0;
    v11 = 8;
    v12 = 0;
    v16 = a1;
    v17 = a1 + a2;
    if ((int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v16))
    {
        v30 = v29;
        if (v29 != 0x110000)
        {
            do
            {
                v6 = v6;
                v1 = v30;
                v32 = v30 - 97;
                switch ((unsigned int)v32)
                {
                case 0:
                    v34 = 0;
                    break;
                case 2:
                    v34 = v33 & 0xffffffffffffff00 | 1;
                    break;
                case 3:
                    v34 = v33 & 0xffffffffffffff00 | 2;
                    break;
                case 5:
                    v34 = v33 & 0xffffffffffffff00 | 6;
                    break;
                case 14:
                    v34 = v33 & 0xffffffffffffff00 | 3;
                    break;
                case 20:
                    v34 = v33 & 0xffffffffffffff00 | 4;
                    break;
                case 23:
                    v34 = v33 & 0xffffffffffffff00 | 5;
                    break;
                default:
                    v13 = &v1;
                    v14 = a1;
                    v15 = a2;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6dc8de7beca6039(&v6, &v13);
                    v35 = v6;
                    v34 = (char)v7;
                    v36 = (long long)(&v7)[8];
                    v2 = (long long)(&v7)[1];
                    v3 = v36;
                    if (v35 != 0x8000000000000000)
                    {
                        v45 = v2;
                        v46 = a0;
                        v46->field_11 = v3;
                        *((unsigned long long *)&(&v46->padding_10)[1]) = v45;
                        v46->field_8 = v35;
                        v46->padding_10[0] = v34;
                        v46->field_0 = 1;
                        v49 = ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v10);
                        return v49;
                    }
                    goto LABEL_4cb614;
                }
                v13 = &v1;
                v14 = a1;
                v15 = a2;
LABEL_4cb614:
                v37 = v34 & 4294967295;
                v38 = (((char)(v37 * 8 & 4294967295) & 63) ? 0x2010101010000 >> ((char)(v37 * 8 & 4294967295) & 63) : 0x2010101010000 >> ((char)(v37 * 8 & 4294967295) & 63));
                v30 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v16) ? 0x110000 : v29);
                v0 = 0;
                if (!(char)uu_od::parse_formats::is_format_size_char::h42f5b1cb8010d6dd(v30, v38 & 4294967295, &v0))
                {
                    v2 = 0;
                    v4 = 1;
                    v5 = 0;
                    v38 &= 4294967295;
                    while ((char)uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(v30, v38 & 4294967295, &v2))
                    {
                        v30 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v16) ? 0x110000 : v29);
                    }
                    v40 = v5;
                    if (v40)
                    {
                        v22 = &v2;
                        v23 = a1;
                        v24 = a2;
                        if (((char)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(v4, v40) & 1))
                        {
                            uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h65fc53be62888ca5(&v6, &v22);
                            v41 = v6;
                            v42 = (char)v7;
                            v43 = (long long)(&v7)[8];
                            v20 = (long long)(&v7)[1];
                            v21 = v43;
                            if (v41 != 0x8000000000000000)
                            {
                                v47 = v20;
                                v48 = a0;
                                v48->field_11 = v21;
                                *((unsigned long long *)&(&v48->padding_10)[1]) = v47;
                                v48->field_8 = v41;
                                v48->padding_10[0] = v42;
                                v48->field_0 = 1;
                                ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v2);
                                vvar_578{reg 16} = ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v10);
                                return v49;
                            }
                        }
                        v0 = v42;
                    }
                    ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v2);
                }
                else if ((int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v16))
                {
                    v30 = v29;
                }
                else
                {
                    v39 = 0;
                    v30 = 0x110000;
                    continue;
                }
                if (v30 != 122)
                {
                    v39 = 0;
                }
                else
                {
                    v30 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v16) ? 0x110000 : v29);
                    v39 = v38 & 0xffffffffffffff00 | 1;
                }
                uu_od::parse_formats::od_format_type::h6c27c20666861ca9(&v6, v37 & 4294967295);
                if (v6 == 3)
                {
                    v26 = a1;
                    v27 = a2;
                    v25 = &v0;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6eb34f6de81c0fa(&v2, &v25);
                    *((int128_t *)&v18) = *((int128_t *)&v2);
                    v19 = v5;
                    v51 = a0;
                    v51->field_11 = v19;
                    *((void*)&v51->field_8) = v18;
                    v51->field_0 = 1;
                    vvar_582{reg 16} = ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v10);
                    return v49;
                }
                v44 = v7;
                v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v18 = v44;
                v19 = v8;
                v8 = v19;
                v7 = v44;
                v6 = v6;
                v9 = v39;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v10, &v6);
                v6 = v6;
            } while (v30 != 0x110000);
        }
    }
    v49 = v12;
    v50 = a0;
    v50->field_11 = v49;
    *((int128_t *)&v50->field_8) = *((int128_t *)&v10);
    v50->field_0 = 0;
    return v49;
}
