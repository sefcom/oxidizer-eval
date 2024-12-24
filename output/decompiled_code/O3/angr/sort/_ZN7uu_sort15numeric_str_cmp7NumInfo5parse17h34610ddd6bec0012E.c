long long uu_sort::numeric_str_cmp::NumInfo::parse::h34610ddd6bec0012(struct_1 *a0, unsigned long a1, void* a2, struct_0 *a3)
{
    void* v1;  // [sp-0x80], Other Possible Types: struct_0 *
    unsigned int v2;  // [sp-0x78]
    unsigned int v3;  // [sp-0x74]
    struct_0 *v4;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long v5;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x60]
    void* v7;  // [sp-0x58]
    struct_0 *v8;  // [sp-0x50]
    struct_1 *v9;  // [sp-0x40]
    struct_0 *v10;  // [sp-0x38]
    struct_0 *v12;  // rbx
    struct_1 *v13;  // r15
    unsigned long v15;  // rdx
    char v16;  // cl
    struct_0 *v17;  // r12
    unsigned long long v18;  // r13
    unsigned int v19;  // ecx
    unsigned long long v20;  // rax
    unsigned long long v21;  // r14
    void* v22;  // r15
    struct_0 *v23;  // rax
    struct_0 *v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rsi
    unsigned long long v43;  // rdx
    struct_0 *v44;  // rax
    struct_0 *v45;  // rcx
    struct_0 *v46;  // rbp
    char v47;  // bpl
    char v48;  // bpl
    char v49;  // bpl
    unsigned long long v50;  // r14
    unsigned long long v54;  // rsi
    struct_0 *v56;  // rcx
    struct_0 *v57;  // r12
    unsigned long long v58;  // rcx
    struct_0 *v59;  // r15
    char v60;  // bpl
    unsigned long long v61;  // r14
    unsigned long long v63;  // rdx
    char v66;  // cl
    char v67;  // dl
    struct_0 *v92;  // rax
    unsigned long long v96;  // rdx

    v12 = a3;
    v13 = a0;
    v5 = a1;
    v6 = a1 + a2;
    v7 = 0;
    if ((unsigned int)v15 == 0x110000)
    {
        v16 = 0;
    }
    else
    {
        v17 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, a1 + a2, a2);
        v18 = v15 & 4294967295;
        v19 = a3->field_0;
        v20 = a3->field_4;
        v3 = v20;
        v4 = v19;
        v10 = a3;
        if ((unsigned int)v20 != 0x110000)
        {
            v9 = a0;
            if (v19 != 0x110000)
            {
                v2 = v2;
                v21 = -1;
                v8 = 0;
                v24 = 0;
                v1 = 0;
                v22 = 0;
            }
            else
            {
                v2 = v2;
                v21 = -1;
                v4 = 0;
                v23 = 0;
                v1 = 0;
                v22 = 0;
                while (true)
                {
                    v17 = v17;
                    v23 = v18 - 9 & 4294967295;
                    if (!((unsigned int)v23 >= 5) || !((unsigned int)v18 != 32))
                        goto LABEL_55ffa9;
                    if ((unsigned int)v18 <= 127)
                    {
                        if (!((unsigned int)v23 >= 5) || !((unsigned int)v18 != 32))
                            goto LABEL_55ffcb;
                        v2 = 0;
                        goto LABEL_55ffa9;
                    }
                    else
                    {
                        v23 = ::0x55dff0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v18 & 4294967295);
                        if (!((unsigned int)v23 >= 5) || !((unsigned int)v18 != 32))
                            goto LABEL_55ffa9;
                    }
LABEL_55ffcb:
                    if ((unsigned int)v18 == v3)
                    {
                        if (!(!((char)v4 & 1)))
                            goto LABEL_0x56058e;
                        v4 = v23 | -0x100 | 1;
                        goto LABEL_55ffa9;
                    }
                    if ((unsigned int)(v18 - 58) < -10)
                        goto LABEL_0x560551;
                    v44 = v22 - 1;
                    v45 = v4;
                    v46 = v45 & 4294967295;
                    v47 = (char)v46 & 1;
                    v48 = v46 | -0x100 | v47;
                    if ((unsigned int)v18 != 48 || !v44)
                    {
                        goto LABEL_560059;
                    }
                    else
                    {
                        if (!v47)
                        {
                            v1 = v44 | -0x100 | 1;
                        }
                        else
                        {
                            v50 = v21 - 1;
LABEL_560059:
                            v21 = (v49 ^ 1) + v50;
                            v22 = (unsigned int)v18 != 48 | !v44;
                            v17 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v54, v50);
                            if ((unsigned int)v15 == 0x110000)
                                goto LABEL_0x5604ee;
                            v18 = v15 & 4294967295;
                            while (true)
                            {
                                v12 = v57;
                                if ((unsigned int)v18 == v3)
                                {
                                    v1 = v56 | -0x100 | 1;
                                    if (!(!v47))
                                        goto LABEL_0x560591;
                                    v4 = v17 | -0x100 | 1;
                                    goto LABEL_55ffa9;
                                }
                                else
                                {
                                    v58 = v18 - 58 & 4294967295;
                                    if ((unsigned int)v58 < -10)
                                        goto LABEL_0x560374;
                                    v59 = v22 - 1;
                                    if (!((unsigned int)v18 != 48 || !v59))
                                    {
                                        if (v47)
                                        {
                                            v61 = v21 - 1;
                                        }
                                        else
                                        {
                                            v1 = v17 | -0x100 | 1;
                                            v22 = 0;
                                            goto LABEL_55ffa9;
                                        }
                                    }
                                    v63 = v61;
                                    v21 = (v60 ^ 1) + v63;
                                    v66 = !v59;
                                    v67 = (unsigned int)v18 != 48;
                                    v22 = v67 | v66;
                                    v17 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v54, v63 | -0x100 | v67 | -0x100 | v67 | v66);
                                    v18 = v15 & 4294967295;
                                }
                            }
                        }
LABEL_55ffa9:
                        v23 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v54, v43);
                        v18 = v15 & 4294967295;
                    }
                }
            }
        }
        else if (v19 != 0x110000)
        {
            v9 = a0;
            v2 = v20 | -0x100 | 1;
            v21 = -1;
            v1 = 0;
            v22 = 0;
        }
        else
        {
            v2 = v20 | -0x100 | 1;
            v1 = 0;
            do
            {
                v25 = v26;
                if (false)
                {
LABEL_55ff18:
                    v27 = v18 - 58 & 4294967295;
                    if ((unsigned int)v27 < -10)
                        goto LABEL_0x5605d7;
                    if ((unsigned int)v18 == 48)
                    {
                        v1 = v27 | -0x100 | 1;
                        goto LABEL_55fef9;
                    }
                    else
                    {
                        v92 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v28, v25);
                        if ((unsigned int)v15 == 0x110000)
                        {
                            v21 = 0;
                        }
                        else
                        {
                            v18 = v15 & 4294967295;
                            v21 = 0;
                            if ((unsigned int)(v18 - 58) < -10)
                            {
LABEL_560589:
                            }
                            else
                            {
                                while (true)
                                {
                                    v21 += 1;
                                    v92 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v28, v96);
                                    if ((unsigned int)v15 == 0x110000)
                                        break;
                                    v18 = v15 & 4294967295;
                                    if ((unsigned int)(v18 - 58) < -10)
                                        goto LABEL_560589;
                                }
                            }
                        }
                    }
                }
                if (!((unsigned int)v23 >= 5) || !((unsigned int)v18 != 32))
                    goto LABEL_55fef9;
                if ((unsigned int)v18 > 127)
                {
                    if (!(char)::0x55dff0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v18 & 4294967295))
                        goto LABEL_0x5605d7;
                    else
                        goto LABEL_55fef9;
                }
                else
                {
                    if (!((unsigned int)v23 >= 5) || !((unsigned int)v18 != 32))
                        goto LABEL_55ff18;
                    v2 = 0;
                }
LABEL_55fef9:
                v17 = ::0x55f950::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v5, v28, v25);
                v18 = v15 & 4294967295;
            } while ((unsigned int)v15 != 0x110000);
            v16 = (char)v1;
        }
    }
}
