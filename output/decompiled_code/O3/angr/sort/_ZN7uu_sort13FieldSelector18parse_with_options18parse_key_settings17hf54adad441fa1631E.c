long long uu_sort::FieldSelector::parse_with_options::parse_key_settings::hf54adad441fa1631(struct_0 *a0, unsigned long a1, unsigned long a2, char a3[5])
{
    unsigned long long v0[3];  // [bp-0x88], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x80]
    unsigned long v2;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    unsigned int v5;  // [sp-0x54]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v11;  // rax
    void* v12;  // rbp
    char v13;  // bpl
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx
    char v18[5];  // 4096
    struct_0 *v21;  // rcx
    struct_0 *v22;  // rcx

    v6 = a1;
    v7 = a2 + a1;
    v11 = ::0x51aa10::core::str::validations::next_code_point::ha495357e3a03d0c9(&v6);
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
                v15 = 3;
                break;
            case 82:
                v15 = 5;
                break;
            case 86:
                uu_sort::KeySettings::set_sort_mode::h5551bd5bfe071230(v0, a3, 4);
                v11 = v0;
                if (v11 != 0x8000000000000000)
                {
                    v22 = a0;
                    *((int128_t *)&v22->field_8) = *((int128_t *)&v1);
                    v22->field_0 = v11;
                    return v11;
                }
            case 98:
                v12 = v12 | -0x100 | 1;
                goto LABEL_520930;
            case 100:
                uu_sort::KeySettings::set_dictionary_order::hd254598d99f75590(v0, a3);
                goto LABEL_520925;
            case 102:
                a3[1] = 1;
                goto LABEL_520930;
            case 103:
                v15 = 2;
                break;
            case 104:
                v15 = 1;
                uu_sort::KeySettings::set_sort_mode::h5551bd5bfe071230(v0, v18, v15);
LABEL_520925:
                if (v0 != 0x8000000000000000)
                {
                    v11 = v2;
                    v21 = a0;
                    *((unsigned long long *)((char *)&v21[1].field_0 + 7)) = v11;
                    *((int128_t *)&v21) = *((int128_t *)&v0);
                    return v11;
                }
            case 105:
                uu_sort::KeySettings::set_ignore_non_printing::hdf450c1a010b425c(v0, a3);
                goto LABEL_520925;
            case 110:
                v15 = 0;
                break;
            case 114:
                a3[4] = 1;
                goto LABEL_520930;
            default:
                v5 = v14;
                v8 = &v5;
                v9 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v0 = &g_5fef98;
                v1 = 2;
                v4 = 0;
                v2 = &v8;
                v3 = 1;
                v11 = ::0x51b950::core::option::Option$LT$T$GT$::map_or_else::hf7c47f284adcb320(a0, v0);
                return v11;
            }
LABEL_520930:
            v11 = ::0x51aa10::core::str::validations::next_code_point::ha495357e3a03d0c9(&v6);
        } while ((unsigned int)v11);
        v13 = v12 | -0x100 | 1;
    }
    a0->field_8 = v13;
    a0->field_0 = 0x8000000000000000;
    return v11;
}
