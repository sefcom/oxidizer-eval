long long uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [sp-0x135]
    unsigned int v1;  // [sp-0x134]
    unsigned long long v2;  // [sp-0x128]
    void* v3;  // [bp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [bp-0x111]
    unsigned long long v5;  // [sp-0x110]
    void* v6;  // [sp-0x108]
    unsigned long v7;  // [sp-0x100], Other Possible Types: unsigned long long
    int v8;  // [sp-0xf8]
    unsigned long long v9;  // [sp-0xe8]
    char v10;  // [sp-0xe0]
    void* v11;  // [sp-0xd8]
    unsigned long long v12;  // [sp-0xd0]
    void* v13;  // [sp-0xc8]
    char *v14;  // [sp-0xc0]
    unsigned long long v15;  // [sp-0xb8]
    unsigned long long v16;  // [sp-0xb0]
    unsigned long v17;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xa0]
    int v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x88]
    unsigned long long v21;  // [bp-0x78]
    unsigned long long v22;  // [sp-0x71]
    char *v23;  // [sp-0x60]
    unsigned long long v24;  // [sp-0x58]
    unsigned long long v25;  // [sp-0x50]
    char *v26;  // [sp-0x48]
    unsigned long long v27;  // [sp-0x40]
    unsigned long long v28;  // [sp-0x38]
    unsigned int v30;  // edx
    unsigned int v31;  // ebp
    int v32;  // ymm0
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // r12
    unsigned long long v39;  // r14
    unsigned int v40;  // ebp
    unsigned int v41;  // edx
    char v42;  // r14b
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rax
    char v45;  // dl
    unsigned long long v46;  // rsi
    int v47;  // xmm0
    unsigned long long v48;  // rdx
    struct_0 *v49;  // rdi
    unsigned long long v50;  // rcx
    struct_0 *v51;  // rdi
    unsigned long long v52;  // rax
    struct_0 *v53;  // rcx
    struct_0 *v54;  // rcx

    v11 = 0;
    v12 = 8;
    v13 = 0;
    v2 = a1;
    v17 = a1;
    v18 = a1 + a2;
    if ((int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v17) && v30 != 0x110000)
    {
        do
        {
            v7 = v7;
            v1 = v31;
            switch (v1)
            {
            case 97:
                v35 = 0;
                break;
            case 99:
                v35 = v34 & 0xffffffffffffff00 | 1;
                break;
            case 100:
                v35 = v34 & 0xffffffffffffff00 | 2;
                break;
            case 102:
                v35 = v34 & 0xffffffffffffff00 | 6;
                break;
            case 111:
                v35 = v34 & 0xffffffffffffff00 | 3;
                break;
            case 117:
                v35 = v34 & 0xffffffffffffff00 | 4;
                break;
            case 120:
                v35 = v34 & 0xffffffffffffff00 | 5;
                break;
            default:
                v14 = &v1;
                v15 = v2;
                v16 = a2;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6dc8de7beca6039(&v7, &v14);
                v36 = v7;
                v35 = (char)v8;
                v37 = (long long)(&v8)[8];
                v3 = (long long)(&v8)[1];
                v4 = v37;
                if (v36 != 0x8000000000000000)
                {
                    v48 = v3;
                    v49 = a0;
                    v49->field_11 = v4;
                    *((unsigned long long *)&(&v49->padding_10)[1]) = v48;
                    v49->field_8 = v36;
                    v49->padding_10[0] = v35;
                    v49->field_0 = 1;
                    v52 = ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v11);
                    return v52;
                }
                goto LABEL_4cb614;
            }
            v14 = &v1;
            v15 = v2;
            v16 = a2;
LABEL_4cb614:
            v38 = v35 & 4294967295;
            v39 = (((char)(v38 * 8 & 4294967295) & 63) ? 0x2010101010000 >> ((char)(v38 * 8 & 4294967295) & 63) : 0x2010101010000 >> ((char)(v38 * 8 & 4294967295) & 63));
            v40 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v17) ? 0x110000 : v30);
            v0 = 0;
            if (!(char)uu_od::parse_formats::is_format_size_char::h42f5b1cb8010d6dd(v40, v39 & 4294967295, &v0))
            {
                v3 = 0;
                v5 = 1;
                v6 = 0;
                v39 &= 4294967295;
                while ((char)uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(v40, v39 & 4294967295, &v3))
                {
                    v40 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v17) ? 0x110000 : v30);
                }
                v43 = v6;
                if (v43)
                {
                    v23 = &v3;
                    v24 = v2;
                    v25 = a2;
                    if (((char)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(v5, v43) & 1))
                    {
                        uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h65fc53be62888ca5(&v7, &v23);
                        v44 = v7;
                        v45 = (char)v8;
                        v46 = (long long)(&v8)[8];
                        v21 = (long long)(&v8)[1];
                        v22 = v46;
                        if (v44 != 0x8000000000000000)
                        {
                            v50 = v21;
                            v51 = a0;
                            v51->field_11 = v22;
                            *((unsigned long long *)&(&v51->padding_10)[1]) = v50;
                            v51->field_8 = v44;
                            v51->padding_10[0] = v45;
                            v51->field_0 = 1;
                            ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v3);
                            ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v11);
                            return v52;
                        }
                    }
                    v0 = v45;
                }
                ::0x4ca220::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v3);
            }
            else if (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v17))
            {
                v42 = 0;
                v31 = 0x110000;
                continue;
            }
            v31 = v41;
            if (v31 != 122)
            {
                v42 = 0;
            }
            else
            {
                v31 = (!(int)::0x4ca2e0::core::str::validations::next_code_point::h6c42fc7883874c6b(&v17) ? 0x110000 : v30);
                v42 = v39 & 0xffffffffffffff00 | 1;
            }
            uu_od::parse_formats::od_format_type::h6c27c20666861ca9(&v7, v38 & 4294967295);
            if (v7 == 3)
            {
                v27 = v2;
                v28 = a2;
                v26 = &v0;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6eb34f6de81c0fa(&v3, &v26);
                *((int128_t *)&v19) = *((int128_t *)&v3);
                v20 = v6;
                v54 = a0;
                v54->field_11 = v20;
                *((void*)&v54->field_8) = v19;
                v54->field_0 = 1;
                ::0x4ca290::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v11);
                return v52;
            }
            v47 = v8;
            v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v19 = v47;
            v20 = v9;
            v9 = v20;
            v8 = v47;
            v7 = v7;
            v10 = v42;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&v11, &v7);
            v7 = v7;
        } while (v31 != 0x110000);
    }
    v52 = v13;
    v53 = a0;
    v53->field_11 = v52;
    *((int128_t *)&v53->field_8) = *((int128_t *)&v11);
    v53->field_0 = 0;
    return v52;
}
