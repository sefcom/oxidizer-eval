long long uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(struct_0 *a0, unsigned long a1, void* a2, struct_1 *a3)
{
    unsigned long long v0;  // [sp-0x1a8]
    char v1;  // [sp-0x85]
    unsigned int v2;  // [sp-0x84]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    unsigned long v6;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x48]
    void* v9;  // [sp-0x40]
    void* v11;  // rax
    unsigned int v12;  // edx
    unsigned long long v13;  // rcx
    unsigned int v14;  // r14d
    unsigned int v15;  // ebp
    void* v16;  // r13
    unsigned int v18;  // r12d
    unsigned int v19;  // r12d
    unsigned int v20;  // r12d
    unsigned int v21;  // r12d
    unsigned int v22;  // r12d
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    char v25;  // al
    unsigned long long v26;  // rdi
    unsigned long long v30;  // r15
    unsigned long v31;  // rcx
    unsigned long long v32;  // r12
    unsigned long long v33;  // r15

    v1 = 0;
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7);
    if (v12 == 0x110000)
    {
        v13 = 0;
    }
    else
    {
        v14 = a3->field_0;
        v15 = a3->field_4;
        v2 = v11 & 0xffffffffffffff00 | 1;
        v3 = 18446744073709551615;
        v13 = 0;
        v16 = 0;
        do
        {
            v18 = v19;
            v16 = v16;
            if (v16 == 1)
            {
                while (true)
                {
                    v22 = v20;
                    if (false)
                        break;
                    if (!(v22 - 9 >= 5) || !(v22 != 32))
                    {
LABEL_570952:
                        v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7);
                        if (v12 == 0x110000)
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
                    else if (v22 > 127)
                    {
                        if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                            goto LABEL_570952;
                        break;
                    }
                    else if (v22 == 45)
                    {
                        v2 = 0;
                        goto LABEL_570952;
                    }
                }
                if (v14 != 0x110000 && v14 == v22)
                {
LABEL_570950:
                    goto LABEL_570952;
                }
                v23 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v22, &v1, v15);
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                    goto LABEL_570b99;
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                    goto LABEL_570950;
                v25 = v23 & 0xffffffffffffff00 | v22 == 48;
                goto LABEL_570abb;
            }
            v6 = v13;
            v22 = v21;
            if (v22 - 9 >= 5 && v22 != 32)
            {
                if (v22 >= 128)
                {
                    if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                        goto LABEL_570a02;
                    goto LABEL_570a23;
                }
                else if (v22 == 45)
                {
                    v2 = 0;
                }
            }
LABEL_570a02:
            v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7);
            if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                continue;
            break;
LABEL_570a23:
            if (v14 != 0x110000 && v14 == v22)
            {
LABEL_570a00:
                goto LABEL_570a02;
            }
            v24 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v22, &v1, v15);
            if (!(char)v24)
            {
                if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22) & 255 & 255 & 255)))
                    goto LABEL_570a00;
                if (v22 != 48)
                {
                    v25 = 0;
                }
                else if (!v1)
                {
                    v13 = v24 & 0xffffffffffffff00 | 1;
                    goto LABEL_570a00;
                }
                else
                {
                    v3 -= 1;
                    v25 = v24 & 0xffffffffffffff00 | 1;
                    goto LABEL_570ae7;
                }
            }
            else
            {
                if (!v16)
                {
                    if (!((char)v6 & 1))
                        v11 = 0;
                    a0->field_0 = 0;
                    a0->field_8 = 1;
                    a0->field_10 = v4;
                    a0->field_18 = v33;
                    return a0;
                }
LABEL_570b99:
                if (a3->field_8)
                {
                    v32 = v22 - 69;
                    if ((unsigned int)v32 <= 38)
                    {
                        v0 = 274881087813;
                        if (((char)(*((char *)&v0 + ((v32 & 63) >> 3)) >> (char)(v32 & 63 & 7)) & 1))
                            v11 += 1;
                    }
                }
                a0->field_0 = v3;
                a0->field_8 = 1;
                a0->field_10 = v4;
                a0->field_18 = v33;
                return a0;
            }
LABEL_570abb:
LABEL_570ae7:
            v3 += 1 ^ 1;
            v4 = v30;
            v16 = v26 == 1 | v25 ^ 1;
            v11 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v7);
            v13 = v31 & 0xffffffffffffff00 | 1;
        } while (v12 != 0x110000);
        v2 = v2;
        if (v16)
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
