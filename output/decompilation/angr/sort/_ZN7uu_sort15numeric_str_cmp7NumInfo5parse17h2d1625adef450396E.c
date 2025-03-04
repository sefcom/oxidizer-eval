long long uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(struct_0 *a0, unsigned long a1, unsigned long a2, struct_1 *a3)
{
    unsigned long long v0;  // [sp-0x1a8]
    char v1;  // [sp-0x85]
    unsigned int v2;  // [sp-0x84]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    struct_0 *v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    unsigned long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    void* v11;  // [sp-0x40]
    void* v13;  // r14
    struct_0 *v14;  // rbx
    unsigned long long v15;  // rax
    unsigned int v16;  // edx
    unsigned long long v17;  // rcx
    unsigned int v18;  // r14d
    unsigned int v19;  // ebp
    void* v20;  // r13
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    char v23;  // al
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdi
    void* v27;  // r15, Other Possible Types: unsigned long long
    unsigned long v28;  // rcx
    unsigned int v29;  // r12d
    void* v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // r12
    unsigned long long v34;  // rdx

    v13 = a2;
    v14 = a0;
    v1 = 0;
    v9 = a1;
    v10 = a1 + a2;
    v11 = 0;
    v15 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v9);
    if (v16 == 0x110000)
    {
        v17 = 0;
    }
    else
    {
        v27 = v15;
        v29 = v16;
        v8 = a2;
        v6 = a0;
        v18 = a3->field_0;
        v19 = a3->field_4;
        v2 = v15 & 0xffffffffffffff00 | 1;
        v3 = 18446744073709551615;
        v17 = 0;
        v20 = 0;
        do
        {
            v5 = v20;
            if (v20 == 1)
            {
                while (true)
                {
                    if (!(v29 - 9 >= 5) || !(v29 != 32))
                    {
LABEL_570952:
                        v27 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v9);
                        v29 = v16;
                        if (v16 == 0x110000)
                        {
                            v2 = v2;
                            vvar_718{stack -132} = v2;
                            v14->field_0 = v31;
                            v14->field_8 = (char)v2 & 1;
                            v14->field_10 = v32;
                            v14->field_18 = v13;
                            return v14;
                        }
                    }
                    else if (v29 > 127)
                    {
                        if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v29) & 255 & 255 & 255)))
                            goto LABEL_570952;
                        break;
                    }
                    else if (v29 == 45)
                    {
                        v2 = 0;
                        goto LABEL_570952;
                    }
                }
                if (v18 != 0x110000 && v18 == v29)
                {
LABEL_570950:
                    goto LABEL_570952;
                }
                v21 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v29, &v1, v19);
                if (!(!(v21 & 255 & 255)))
                    goto LABEL_570b99;
                if (!(v19 == 0x110000 || v29 != v19))
                    goto LABEL_570950;
                v23 = v21 & 0xffffffffffffff00 | v29 == 48;
                goto LABEL_570abb;
            }
            v7 = v17;
            if (v29 - 9 >= 5 && v29 != 32)
            {
                if (v29 >= 128)
                {
                    if (!(!(::0x56ebd0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v29) & 255 & 255 & 255)))
                        goto LABEL_570a02;
                    goto LABEL_570a23;
                }
                else if (v29 == 45)
                {
                    v2 = 0;
                }
            }
LABEL_570a02:
            v27 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v9);
            v29 = v16;
            if (!(v16 == 0x110000))
                continue;
            v20 = v5;
            v17 = v7;
            break;
LABEL_570a23:
            if (v18 != 0x110000 && v18 == v29)
            {
LABEL_570a00:
                goto LABEL_570a02;
            }
            v22 = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(v29, &v1, v19);
            if (!(char)v22)
            {
                if (v19 != 0x110000 && v29 == v19)
                    goto LABEL_570a00;
                if (v29 != 48)
                {
                    v23 = 0;
                }
                else if (v1)
                {
                    v24 = v3 - 1;
                    v23 = v22 & 0xffffffffffffff00 | 1;
                    v25 = v4;
                    v26 = v5;
                    goto LABEL_570ae7;
                }
                else
                {
                    v7 = v22 & 0xffffffffffffff00 | 1;
                    goto LABEL_570a00;
                }
            }
            else
            {
                if (!v5)
                {
                    if (!((char)v7 & 1))
                        v27 = 0;
                    v34 = v27;
                    v14 = v6;
                    v14->field_0 = 0;
                    v14->field_8 = 1;
                    v14->field_10 = v34;
                    v14->field_18 = v27;
                    return v14;
                }
LABEL_570b99:
                v14 = v6;
                if (a3->field_8)
                {
                    v33 = v29 - 69;
                    if ((unsigned int)v33 <= 38)
                    {
                        v0 = 274881087813;
                        if (((char)(*((char *)&v0 + ((v33 & 63) >> 3)) >> (char)(v33 & 63 & 7)) & 1))
                            v27 += 1;
                    }
                }
                v34 = v4;
                v14->field_0 = v3;
                v14->field_8 = 1;
                v14->field_10 = v34;
                v14->field_18 = v27;
                return v14;
            }
LABEL_570abb:
            v24 = v3;
            v25 = v4;
            v26 = v5;
LABEL_570ae7:
            v3 = v24 + (1 ^ 1);
            v27 = v25;
            if (v26 != 1)
                v25 = v27;
            v4 = v25;
            v20 = v26 == 1 | v23 ^ 1;
            v27 = ::0x5703b0::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v9);
            v29 = v16;
            v17 = v28 & 0xffffffffffffff00 | 1;
        } while (v16 != 0x110000);
        v14 = v6;
        v13 = v8;
        v2 = v2;
        if (v20)
        {
            v2 = v2;
            v31 = v3;
            v32 = v4;
            v14->field_0 = v31;
            v14->field_8 = (char)v2 & 1;
            v14->field_10 = v32;
            v14->field_18 = v13;
            return v14;
        }
    }
    v31 = 0;
    if (!((char)v17 & 1))
        v13 = 0;
    v32 = v13;
    v14->field_0 = v31;
    v14->field_8 = (char)v2 & 1;
    v14->field_10 = v32;
    v14->field_18 = v13;
    return v14;
}
