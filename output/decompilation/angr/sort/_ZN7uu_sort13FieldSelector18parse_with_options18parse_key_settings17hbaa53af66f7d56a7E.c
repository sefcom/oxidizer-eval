long long uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(struct_0 *a0, unsigned long a1, unsigned long a2, char a3[5])
{
    struct_0 *v0;  // [sp-0x90]
    unsigned long long v1[3];  // [sp-0x88], Other Possible Types: unsigned long
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    struct struct_1 **v3;  // [sp-0x78], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x70]
    void* v5;  // [sp-0x68]
    unsigned int v6;  // [sp-0x54]
    unsigned long v7;  // [sp-0x50]
    unsigned long long v8;  // [sp-0x48]
    char *v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    struct_0 *v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbp
    char v15;  // bpl
    unsigned long long v16;  // rdx
    char v17[5];  // rsi
    unsigned long long v18;  // rdx
    char v19[5];  // rsi
    unsigned long long v20;  // rdx
    struct_0 *v21;  // rcx
    struct_0 *v22;  // rcx

    v12 = a0;
    v7 = a1;
    v8 = a2 + a1;
    v13 = ::0x51b9d0::core::str::validations::next_code_point::h7a92bc82d8dec435(&v7);
    if (!(unsigned int)v13)
    {
        v15 = 0;
    }
    else
    {
        v0 = a0;
        v14 = 0;
        do
        {
            switch ((unsigned int)v16)
            {
            case 77:
                v19 = a3;
                v20 = 3;
LABEL_521953:
                uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(v1, v19, v20);
                if (v1 != 0x8000000000000000)
                {
                    v13 = v3;
                    v22 = v0;
                    *((unsigned long long *)((char *)&v22[1].field_0 + 7)) = v13;
                    *((int128_t *)&v22) = *((int128_t *)&v1);
                    return v13;
                }
            case 82:
                v17 = a3;
                v18 = 5;
                goto LABEL_5218a2;
            case 86:
                v17 = a3;
                v18 = 4;
                goto LABEL_5218a2;
            case 98:
                v14 = v14 & 0xffffffffffffff00 | 1;
                break;
            case 100:
                uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(v1, a3);
                if (v1 != 0x8000000000000000)
                {
                    vvar_265{reg 24} = v0;
                    *((unsigned long *)((char *)&v22[1].field_0 + 7)) = v3;
                    *((int128_t *)&v22) = *((int128_t *)&v1);
                    return v13;
                }
            case 102:
                a3[1] = 1;
                break;
            case 103:
                v19 = a3;
                v20 = 2;
                goto LABEL_521953;
            case 104:
                v19 = a3;
                v20 = 1;
                goto LABEL_521953;
            case 105:
                uu_sort::KeySettings::set_ignore_non_printing::h0e99c66f0992ecc6(v1, a3);
                if (v1 != 0x8000000000000000)
                {
                    vvar_260{reg 24} = v0;
                    *((unsigned long *)((char *)&v22[1].field_0 + 7)) = v3;
                    *((int128_t *)&v22) = *((int128_t *)&v1);
                    return v13;
                }
            case 110:
                v17 = a3;
                v18 = 0;
LABEL_5218a2:
                uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(v1, v17, v18);
                v13 = v1;
                if (v13 != 0x8000000000000000)
                {
                    v21 = v0;
                    *((int128_t *)&v21->field_8) = *((int128_t *)&v2);
                    v21->field_0 = v13;
                    return v13;
                }
            case 114:
                a3[4] = 1;
                break;
            default:
                v6 = v16;
                v9 = &v6;
                v10 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                *((char **)v1) = &g_5ffac0;
                v2 = 2;
                v5 = 0;
                v3 = &v9;
                v4 = 1;
                v13 = ::0x51c910::core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(v0, v1);
                return v13;
            }
            v13 = ::0x51b9d0::core::str::validations::next_code_point::h7a92bc82d8dec435(&v7);
        } while ((unsigned int)v13);
        v15 = v14 & 0xffffffffffffff00 | 1;
        v12 = v0;
    }
    v12->field_8 = v15;
    v12->field_0 = 0x8000000000000000;
    return v13;
}
