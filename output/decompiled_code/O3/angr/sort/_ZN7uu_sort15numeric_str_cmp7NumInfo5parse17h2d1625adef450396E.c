long long uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(struct_0 *a0, unsigned long a1, void* a2, struct_1 *a3)
{
    unsigned long long v0;  // [sp-0x1a8]
    char v1;  // [sp-0x85]
    unsigned int v2;  // [sp-0x84]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    unsigned long v6;  // [bp-0x60]
    unsigned long v7;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x48]
    void* v9;  // [sp-0x40]
    void* v11;  // rax
    unsigned long v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned int v14;  // r12d
    unsigned int v15;  // r14d
    unsigned int v16;  // ebp
    void* v17;  // r13
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    char v27;  // al
    unsigned long long v32;  // r15
    unsigned long v33;  // rcx
    unsigned long long v34;  // r15
    unsigned int v35;  // r12d
    unsigned long long v36;  // r12
    unsigned long long v37;  // r15

    v1 = 0;
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7, a1 + a2, a2);
    if ((unsigned int)v12 == 0x110000)
    {
        v13 = 0;
    }
    else
    {
        v14 = v12;
        v15 = a3->field_0;
        v16 = a3->field_4;
        v2 = v11 | -0x100 | 1;
        v3 = -1;
        v13 = 0;
        v17 = 0;
        do
        {
            v18 = v20;
            v17 = v17;
            if (v17 == 1)
            {
                while (true)
                {
                    if (false)
                        break;
                    if (!(v14 - 9 >= 5) || !(v14 != 32))
                    {
LABEL_570952:
                        v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7, v19, v21);
                        v14 = v12;
                        if ((unsigned int)v12 == 0x110000)
                        {
                            v2 = v2;
                            vvar_737{stack -132} = v2;
                            a0->field_0 = v3;
                            a0->field_8 = (char)v2 & 1;
                            a0->field_10 = v4;
                            a0->field_18 = a2;
                            return a0;
                        }
                    }
                    else if (v14 > 127)
                    {
                        if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                            goto LABEL_570952;
                        break;
                    }
                    else if (v14 == 45)
                    {
                        v2 = 0;
                        goto LABEL_570952;
                    }
                }
                if (v15 != 0x110000 && v15 == v14)
                {
LABEL_570950:
                    goto LABEL_570952;
                }
                v24 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v14, &v1, v16);
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                    goto LABEL_570b99;
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                    goto LABEL_570950;
                v27 = v24 | -0x100 | v14 == 48;
                goto LABEL_570abb;
            }
            v13 = v13;
            if (v14 - 9 >= 5 && v14 != 32)
            {
                if (v14 >= 128)
                {
                    if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                        goto LABEL_570a02;
                    goto LABEL_570a23;
                }
                else if (v14 == 45)
                {
                    v2 = 0;
                }
            }
LABEL_570a02:
            v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7, v19, v22);
            v14 = v12;
            if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                continue;
            break;
LABEL_570a23:
            if (v15 != 0x110000 && v15 == v14)
            {
LABEL_570a00:
                goto LABEL_570a02;
            }
            v26 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v14, &v1, v16);
            if (!(char)v26)
            {
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14) & 255 & 255 & 255)))
                    goto LABEL_570a00;
                if (v14 != 48)
                {
                    v27 = 0;
                }
                else if (!v1)
                {
                    v13 = v26 | -0x100 | 1;
                    goto LABEL_570a00;
                }
                else
                {
                    v3 -= 1;
                    v27 = v26 | -0x100 | 1;
                    goto LABEL_570ae7;
                }
            }
            else
            {
                if (!v17)
                {
                    if (!((char)v6 & 1))
                        v11 = 0;
                    a0->field_0 = 0;
                    a0->field_8 = 1;
                    a0->field_10 = v4;
                    a0->field_18 = v37;
                    return a0;
                }
LABEL_570b99:
                if (a3->field_8)
                {
                    v36 = v35 - 69;
                    if ((unsigned int)v36 <= 38)
                    {
                        v0 = 274881087813;
                        if (((char)(*((char *)&v0 + ((v36 & 63) >> 3)) >> (char)(v36 & 63 & 7)) & 1))
                            v34 += 1;
                    }
                }
                a0->field_0 = v3;
                a0->field_8 = 1;
                a0->field_10 = v4;
                a0->field_18 = v37;
                return a0;
            }
LABEL_570abb:
LABEL_570ae7:
            v3 += 1 ^ 1;
            v4 = v32;
            v17 = v17 == 1 | v27 ^ 1;
            v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7, v4, v3 + (1 ^ 1));
            v14 = v12;
            v13 = v33 | -0x100 | 1;
        } while ((unsigned int)v12 != 0x110000);
        v2 = v2;
        if (v17)
        {
            v2 = v2;
            a0->field_0 = v3;
            a0->field_8 = (char)v2 & 1;
            a0->field_10 = v4;
            a0->field_18 = a2;
            return a0;
        }
    }
    if (!((char)v13 & 1))
        a2 = 0;
    a0->field_0 = 0;
    a0->field_8 = (char)v2 & 1;
    a0->field_10 = v4;
    a0->field_18 = a2;
    return a0;
}
