long long uu_od::parse_formats::parse_type_string::h10d07d9af5b5eff4(struct_0 *a0, unsigned long a1, unsigned long a2)
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
    unsigned long v14;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xb8]
    unsigned long long v16;  // [sp-0xb0]
    unsigned long v17;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xa0]
    int v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x88]
    unsigned long long v21;  // [bp-0x78]
    unsigned long long v22;  // [sp-0x71]
    unsigned long v23;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x58]
    unsigned long long v25;  // [sp-0x50]
    unsigned long v26;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x40]
    unsigned long long v28;  // [sp-0x38]
    unsigned int v30;  // edx
    unsigned int v31;  // ebp
    int v32;  // ymm0
    unsigned long long v34;  // rax
    void* v35;  // rax
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rsi
    unsigned long v38;  // r12
    unsigned long v39;  // r14
    unsigned int v40;  // ebp
    unsigned int v41;  // edx
    char v42;  // r14b
    unsigned long long v43;  // rax
    char v44;  // dl
    unsigned long long v45;  // rsi
    int v46;  // xmm0
    unsigned long long v47;  // rdx
    struct_0 *v48;  // rdi
    unsigned long long v49;  // rcx
    struct_0 *v50;  // rdi
    unsigned long long v51;  // rax
    struct_0 *v52;  // rcx
    struct_0 *v53;  // rcx

    v11 = 0;
    v12 = 8;
    v13 = 0;
    v2 = a1;
    v17 = a1;
    v18 = a1 + a2;
    if ((int)::0x4c9d60::core::str::validations::next_code_point::he77fb065cadcae6e(&v17) && v30 != 0x110000)
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
                v35 = v34 | -0x100 | 1;
                break;
            case 100:
                v35 = v34 | -0x100 | 2;
                break;
            case 102:
                v35 = v34 | -0x100 | 6;
                break;
            case 111:
                v35 = v34 | -0x100 | 3;
                break;
            case 117:
                v35 = v34 | -0x100 | 4;
                break;
            case 120:
                v35 = v34 | -0x100 | 5;
                break;
            default:
                v14 = &v1;
                v15 = v2;
                v16 = a2;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hea06bcd3a9a17200(&v7, &v14);
                v36 = v7;
                v35 = (char)v8;
                v37 = (long long)(&v8)[8];
                v3 = (long long)(&v8)[1];
                v4 = v37;
                if (v36 != 0x8000000000000000)
                {
                    v47 = v3;
                    v48 = a0;
                    v48->field_11 = v4;
                    *((unsigned long long *)&(&v48->padding_10)[1]) = v47;
                    v48->field_8 = v36;
                    v48->padding_10[0] = (char)v35;
                    v48->field_0 = 1;
                    v51 = ::0x4c9d10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v11);
                    return v51;
                }
                goto LABEL_4cb094;
            }
            v14 = &v1;
            v15 = v2;
            v16 = a2;
LABEL_4cb094:
            v38 = v35 & 4294967295;
            v39 = (((char)(v38 * 8 & 4294967295) & 63) ? 0x2010101010000 >> ((char)(v38 * 8 & 4294967295) & 63) : 0x2010101010000 >> ((char)(v38 * 8 & 4294967295) & 63));
            v40 = (!(int)::0x4c9d60::core::str::validations::next_code_point::he77fb065cadcae6e(&v17) ? 0x110000 : v30);
            v0 = 0;
            if (!(char)uu_od::parse_formats::is_format_size_char::h0a0d180eaca43b72(v40, v39 & 4294967295, &v0))
            {
                v3 = 0;
                v5 = 1;
                v6 = 0;
                v39 &= 4294967295;
                while ((char)uu_od::parse_formats::is_format_size_decimal::h164a584e4c9465fc(v40, v39 & 4294967295, &v3))
                {
                    v40 = (!(int)::0x4c9d60::core::str::validations::next_code_point::he77fb065cadcae6e(&v17) ? 0x110000 : v30);
                }
                if (v6)
                {
                    v23 = &v3;
                    v24 = v2;
                    v25 = a2;
                    if (((char)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(v5) & 1))
                    {
                        uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h4ef9f3b9a46d2b4f(&v7, &v23);
                        v43 = v7;
                        v44 = (char)v8;
                        v45 = (long long)(&v8)[8];
                        v21 = (long long)(&v8)[1];
                        v22 = v45;
                        if (v43 != 0x8000000000000000)
                        {
                            v49 = v21;
                            v50 = a0;
                            v50->field_11 = v22;
                            *((unsigned long long *)&(&v50->padding_10)[1]) = v49;
                            v50->field_8 = v43;
                            v50->padding_10[0] = v44;
                            v50->field_0 = 1;
                            ::0x4c9ca0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v3);
                            vvar_584{reg 16} = ::0x4c9d10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v11);
                            return v51;
                        }
                    }
                    v0 = v44;
                }
                ::0x4c9ca0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8afff49af932c970(&v3);
            }
            else if (!(int)::0x4c9d60::core::str::validations::next_code_point::he77fb065cadcae6e(&v17))
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
                v31 = (!(int)::0x4c9d60::core::str::validations::next_code_point::he77fb065cadcae6e(&v17) ? 0x110000 : v30);
                v42 = v39 | -0x100 | 1;
            }
            uu_od::parse_formats::od_format_type::h27bffc2364c83000(&v7, v38 & 4294967295);
            if (v7 == 3)
            {
                v27 = v2;
                v28 = a2;
                v26 = &v0;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hf33c9e4452e426c6(&v3, &v26);
                *((int128_t *)&v19) = *((int128_t *)&v3);
                v20 = v6;
                v53 = a0;
                v53->field_11 = v20;
                *((void*)&v53->field_8) = v19;
                v53->field_0 = 1;
                vvar_588{reg 16} = ::0x4c9d10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v11);
                return v51;
            }
            v46 = v8;
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            v19 = v46;
            v20 = v9;
            v9 = v20;
            v8 = v46;
            v7 = v7;
            v10 = v42;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h4ced2d03912038bd(&v11, &v7);
            v7 = v7;
        } while (v31 != 0x110000);
    }
    v51 = v13;
    v52 = a0;
    v52->field_11 = v51;
    *((int128_t *)&v52->field_8) = *((int128_t *)&v11);
    v52->field_0 = 0;
    return v51;
}
