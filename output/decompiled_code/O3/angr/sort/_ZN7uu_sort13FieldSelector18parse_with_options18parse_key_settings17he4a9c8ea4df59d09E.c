long long uu_sort::FieldSelector::parse_with_options::parse_key_settings::he4a9c8ea4df59d09(struct_0 *a0, char a1[4], unsigned long a2, char a3[6])
{
    unsigned int v0;  // [sp-0xa4]
    unsigned long v1;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    unsigned long long v4;  // [sp-0x88]
    void* v5;  // [sp-0x80]
    unsigned int v6;  // [sp-0x6c]
    unsigned long v7;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x60]
    unsigned long long v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    char v11;  // [sp-0x48], Other Possible Types: unsigned int
    char v13[4];  // 4096
    unsigned long long v14;  // rax
    char v15[4];  // r12
    unsigned long long v16;  // rax
    char v17[4];  // r12
    unsigned int v18;  // ecx
    unsigned int v19;  // esi
    unsigned int v20;  // edx
    unsigned long long v21;  // rdx
    unsigned int *v24;  // rax
    char v27[6];  // 4096
    struct_0 *v28;  // rcx
    int v29;  // xmm0
    struct_0 *v30;  // rcx

    if (!a2)
    {
        a0->field_8 = 0;
        a0->field_0 = 0x8000000000000000;
        return v14;
    }
    v0 = 0;
    while (true)
    {
        v15 = v13;
        v16 = v15[0];
        if ((char)v16 >= 0)
        {
            v17 = &v15[1];
        }
        else
        {
            v18 = (unsigned int)v16 & 31;
            v19 = v15[1] & 63;
            if ((v16 & 255) <= 223)
            {
                v17 = &v15[2];
                v16 = v18 * 64 | v19;
            }
            else
            {
                v20 = v15[2] & 63 | v19 * 64;
                if ((v16 & 255) < 240)
                {
                    v17 = &v15[3];
                    v16 = v20 | v18 * 0x1000;
                }
                else
                {
                    v17 = v15 + 1;
                    v16 = v15[3] & 63 | v20 * 64 | (v18 & 7) * 0x40000;
                }
            }
        }
        switch (v11)
        {
        case 77:
            v21 = 3;
            goto LABEL_4c48d0;
        case 82:
            v21 = 5;
            goto LABEL_4c48d0;
        case 86:
            uu_sort::KeySettings::set_sort_mode::h295558f6afb87dae(&v1, a3, 4);
            if (v1 != 0x8000000000000000)
            {
                vvar_441{reg 224} = *((int128_t *)&v2);
                vvar_444{reg 24} = a0;
                *((void*)&v30->field_8) = v29;
                v30->field_0 = v14;
                return v14;
            }
            break;
        case 98:
            v0 = v11 | -0x100 | 1;
            break;
        case 100:
            v24 = a3[5];
            if (v24 <= 3)
            {
                v6 = *((int *)(4321232 + 0x4 * v24));
                v7 = "d";
                v8 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v9 = &v6;
                v10 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v1 = &g_5928c0;
                v2 = 3;
                v5 = 0;
                v3 = &v7;
                v4 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v11, &v1);
                v14 = *((long long *)&v11);
                if (v14 != 0x8000000000000000)
                {
                    vvar_428{reg 24} = a0;
                    *((void*)&v30->field_8) = v29;
                    v30->field_0 = v14;
                    return v14;
                }
            }
            a3[2] = 1;
            break;
        case 102:
            a3[1] = 1;
            break;
        case 103:
            v21 = 2;
            goto LABEL_4c48d0;
        case 104:
            v21 = 1;
LABEL_4c48d0:
            uu_sort::KeySettings::set_sort_mode::h295558f6afb87dae(&v1, v27, v21);
            if (v1 != 0x8000000000000000)
            {
                v28 = a0;
                *((unsigned long long *)((char *)&v28[1].field_0 + 7)) = v3;
                *((int128_t *)&v28) = *((int128_t *)&v1);
                return v14;
            }
            break;
        case 105:
            uu_sort::KeySettings::check_compatibility::h3d85f1f4827fb631(&v1, a3[5], 1, a3[2]);
            if (v1 != 0x8000000000000000)
            {
                vvar_433{reg 224} = *((int128_t *)&v2);
                vvar_436{reg 24} = a0;
                *((void*)&v30->field_8) = v29;
                v30->field_0 = v14;
                return v14;
            }
            a3[3] = 1;
            break;
        case 110:
            v21 = 0;
            goto LABEL_4c48d0;
        case 114:
            a3[4] = 1;
            if (v17 == &a1[a2])
            {
                v14 = v0 | -0x100 | (char)v0 & 1;
                a0->field_8 = v14;
                a0->field_0 = 0x8000000000000000;
                return 0;
            }
            continue;
        default:
            v11 = v16;
            v7 = &v11;
            v8 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            v1 = &g_592ae0;
            v2 = 2;
            v5 = 0;
            v3 = &v7;
            v4 = 1;
            v14 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v1);
            return v14;
        }
    }
}
