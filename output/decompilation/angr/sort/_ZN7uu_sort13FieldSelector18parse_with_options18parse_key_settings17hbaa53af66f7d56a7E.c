long long uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(struct_0 *a0, unsigned long a1, unsigned long a2, char a3[5])
{
    unsigned long long v0[3];  // [bp-0x88], Other Possible Types: unsigned long long, unsigned long
    char v1;  // [bp-0x80], Other Possible Types: unsigned long long
    struct struct_1 **v2;  // [sp-0x78], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    unsigned int v5;  // [sp-0x54]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    char *v8;  // [sp-0x40]
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbp
    char v13;  // bpl
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx
    unsigned long long v17;  // rdx
    char v19[5];  // 4096
    char v20[5];  // 4096
    struct_0 *v23;  // rcx
    struct_0 *v24;  // rcx

    v6 = a1;
    v7 = a2 + a1;
    v11 = ::0x51b9d0::core::str::validations::next_code_point::h7a92bc82d8dec435(&v6);
    if (!(unsigned int)v11)
    {
        v13 = 0;
    }
    else
    {
        v12 = 0;
        do
        {
            switch (v5)
            {
            case 77:
                v17 = 3;
                goto LABEL_521953;
            case 82:
                v15 = 5;
LABEL_5218a2:
                uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(v0, v19, v15);
                v11 = v0;
                if (v11 != 0x8000000000000000)
                {
                    v23 = a0;
                    *((int128_t *)&v23->field_8) = *((int128_t *)&v1);
                    v23->field_0 = v11;
                    return v11;
                }
            case 86:
                v15 = 4;
                goto LABEL_5218a2;
            case 98:
                v12 = v12 & 0xffffffffffffff00 | 1;
                break;
            case 100:
                uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(v0, a3);
                if (v0 != 0x8000000000000000)
                {
                    vvar_275{reg 24} = a0;
                    *((unsigned long *)((char *)&v24[1].field_0 + 7)) = v2;
                    *((int128_t *)&v24) = *((int128_t *)&v0);
                    return v11;
                }
            case 102:
                a3[1] = 1;
                break;
            case 103:
                v17 = 2;
LABEL_521953:
                uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(v0, v20, v17);
                if (v0 != 0x8000000000000000)
                {
                    v11 = v2;
                    v24 = a0;
                    *((unsigned long long *)((char *)&v24[1].field_0 + 7)) = v11;
                    *((int128_t *)&v24) = *((int128_t *)&v0);
                    return v11;
                }
            case 104:
                v17 = 1;
                goto LABEL_521953;
            case 105:
                uu_sort::KeySettings::set_ignore_non_printing::h0e99c66f0992ecc6(v0, a3);
                if (v0 != 0x8000000000000000)
                {
                    vvar_270{reg 24} = a0;
                    *((unsigned long *)((char *)&v24[1].field_0 + 7)) = v2;
                    *((int128_t *)&v24) = *((int128_t *)&v0);
                    return v11;
                }
            case 110:
                v15 = 0;
                goto LABEL_5218a2;
            case 114:
                a3[4] = 1;
                break;
            default:
                v5 = v14;
                v8 = &v5;
                v9 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v0 = &g_5ffac0;
                v1 = 2;
                v4 = 0;
                v2 = &v8;
                v3 = 1;
                v11 = ::0x51c910::core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b();
                return v11;
            }
            v11 = ::0x51b9d0::core::str::validations::next_code_point::h7a92bc82d8dec435(&v6);
        } while ((unsigned int)v11);
        v13 = v12 & 0xffffffffffffff00 | 1;
    }
    a0->field_8 = v13;
    a0->field_0 = 0x8000000000000000;
    return v11;
}
