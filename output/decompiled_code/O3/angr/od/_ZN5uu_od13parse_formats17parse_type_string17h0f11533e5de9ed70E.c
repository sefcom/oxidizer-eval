long long uu_od::parse_formats::parse_type_string::h0f11533e5de9ed70(struct_0 *a0, char a1[4], unsigned long a2)
{
    unsigned int v0;  // [sp-0x278]
    char v1;  // [sp-0x149]
    unsigned long long v2;  // [bp-0x148]
    unsigned long v3;  // [sp-0x141], Other Possible Types: unsigned long long
    char v4;  // [bp-0x138]
    void* v5;  // [sp-0x128]
    unsigned long long v6;  // [sp-0x120]
    void* v7;  // [sp-0x118], Other Possible Types: unsigned long long
    void* v8;  // [sp-0xf8]
    unsigned long long v9;  // [sp-0xf0]
    void* v10;  // [sp-0xe8]
    unsigned int v11;  // [sp-0xdc]
    void* v12;  // [sp-0xd8]
    char v13[4];  // [sp-0xd0]
    unsigned long long v14;  // [sp-0xc8]
    char v15;  // [sp-0xc0]
    unsigned long v16;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xb0]
    unsigned long long v18;  // [sp-0xa8]
    unsigned long long v19;  // [sp-0xa0]
    void* v20;  // [sp-0x98]
    void* v21;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    int v22;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x78]
    char v24;  // [bp-0x70], Other Possible Types: unsigned long
    char v25;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    char v26;  // [bp-0x60], Other Possible Types: unsigned long long
    char v27;  // [bp-0x5f]
    unsigned long v28;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x50]
    unsigned long v30;  // [bp-0x48]
    unsigned long long v31;  // [sp-0x41]
    char v33[4];  // rsi
    unsigned long long v34;  // r15
    char v35[4];  // r12
    unsigned int v36;  // eax
    unsigned int v37;  // edx
    unsigned int v38;  // ecx
    struct_0 *v39;  // rcx
    unsigned long long v40;  // rax
    char v41[4];  // rbx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r14
    unsigned long long v44;  // rcx
    struct_0 *v45;  // rsi
    unsigned long long v46;  // r15
    char v47[4];  // rbx
    char v48[4];  // r12
    unsigned int v49;  // ecx
    unsigned int v50;  // edi
    unsigned int v51;  // esi
    char v52[4];  // r12
    char v53[4];  // r12
    char v54[4];  // r12
    char v55[4];  // r12
    unsigned long long v56;  // rax
    unsigned long long v57;  // r15
    unsigned long long v58;  // r13
    unsigned int v59;  // eax
    unsigned int v60;  // edx
    unsigned int v61;  // ecx
    char v62[4];  // r12
    unsigned int v63;  // eax
    unsigned int v64;  // edx
    unsigned int v65;  // ecx
    char v66;  // dl
    unsigned long long v67;  // rax
    char v68;  // r13b
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rcx
    struct_0 *v71;  // rsi
    char v72;  // r15b

    v8 = 0;
    v9 = 8;
    v10 = 0;
    if (a2)
    {
        v33 = a1;
        v34 = v33[0];
        if ((char)v34 >= 0)
        {
            v35 = &v33[1];
            goto LABEL_4992ce;
        }
        v36 = (unsigned int)v34 & 31;
        v37 = v33[1] & 63;
        if ((v34 & 255) <= 223)
        {
            v35 = &v33[2];
            v34 = v36 * 64 | v37;
            goto LABEL_4992ce;
        }
        v38 = v33[2] & 63 | v37 * 64;
        if ((v34 & 255) <= 239)
        {
            v35 = &v33[3];
            v34 = v38 | v36 * 0x1000;
            goto LABEL_4992ce;
        }
        else
        {
            v34 = v33[3] & 63 | v38 * 64 | (v36 & 7) * 0x40000;
            if ((unsigned int)v34 != 0x110000)
            {
                v33 = a1;
                v35 = v33 + 1;
LABEL_4992ce:
                v41 = &v33[a2];
                v11 = v34;
                switch (v11)
                {
                case 102:
                    break;
                case 117:
                    goto LABEL_499490;
                case 120:
                    goto LABEL_499490;
                case 97:
                    break;
                case 111:
LABEL_499490:
                    break;
                default:
                    v12 = 0;
                    *(&v13) = a1;
                    v14 = a2;
                    v15 = 1;
                    v21 = &v11;
                    v22 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                    v23 = &v12;
                    v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v16 = &g_503358;
                    v17 = 2;
                    v20 = 0;
                    v18 = &v21;
                    v19 = 2;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v16);
                    v42 = v25;
                    v43 = v26;
                    v2 = *((long long *)&v27);
                    v3 = v28;
                    if (v42 != 0x8000000000000000)
                    {
                        v44 = v2;
                        v45 = a0;
                        v45->field_11 = v3;
                        *((unsigned long long *)&(&v45->field_10)[1]) = v44;
                        v45->field_8 = v42;
                        v45->field_10 = v43;
                        v45->field_0 = 1;
                        goto LABEL_499de8;
                    }
                    else
                    {
                        v0 = 124;
                        break;
                    }
                }
                if (v35 == v41)
                {
                    v46 = 0x110000;
                }
                else
                {
                    v46 = v35[0];
                    if ((char)v46 >= 0)
                    {
                        v48 = &v35[1];
                    }
                    else
                    {
                        v49 = (unsigned int)v46 & 31;
                        v50 = v35[1] & 63;
                        if ((v46 & 255) <= 223)
                        {
                            v52 = &v35[2];
                            v46 = v49 * 64 | v50;
                        }
                        else
                        {
                            v51 = v35[2] & 63 | v50 * 64;
                            if ((v46 & 255) < 240)
                            {
                                v54 = &v35[3];
                                v46 = v51 | v49 * 0x1000;
                            }
                            else
                            {
                                v53 = v35 + 1;
                                v46 = v35[3] & 63 | v51 * 64 | (v49 & 7) * 0x40000;
                            }
                        }
                    }
                }
                v55 = v47;
                v1 = 0;
                if (!2)
                    goto LABEL_499587;
                switch ((unsigned int)v46)
                {
                case 70:
                    v1 = 4;
                    v57 = v55[0];
                    if ((char)v57 >= 0)
                    {
                        v55 = &v55[1];
                        if ((unsigned int)v57 == 122)
                            goto LABEL_4998ca;
                        break;
                    }
                    else
                    {
                        v63 = (unsigned int)v57 & 31;
                        v64 = v55[1] & 63;
                        if ((v57 & 255) <= 223)
                        {
                            v55 = &v55[2];
                            v46 = v63 * 64 | v64;
                            goto LABEL_4998c0;
                        }
                        v65 = v55[2] & 63 | v64 * 64;
                        if ((v57 & 255) < 240)
                        {
                            v55 = &v55[3];
                            if ((v65 | v63 << 12) == 122)
                                goto LABEL_4998ca;
                            break;
                        }
                        else
                        {
                            v55 += 1;
                            if ((v55[3] & 63 | v65 << 6 | (v63 & 7) << 18) == 122)
                            {
LABEL_4998ca:
                                if (v55 != v41)
                                    v72 = v55[0];
                            }
                        }
                    }
                default:
LABEL_499587:
                    v5 = 0;
                    v6 = 1;
                    v7 = 0;
                    if (10 <= (unsigned int)(v46 - 48))
                    {
LABEL_4997d0:
                        goto LABEL_4997d3;
                    }
                    else
                    {
                        v56 = 1;
                        do
                        {
                            v58 = v56;
                            if (v7 - 1 == v5)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h275c396a68023b70(&v5);
                            *((char *)(v6 + v58 - 1)) = v46;
                            v7 = v58;
                            if (v55 == v41)
                            {
                                v46 = 0x110000;
                                break;
                            }
                            v46 = v55[0];
                            if ((char)v46 >= 0)
                            {
                                v55 = &v55[1];
                            }
                            else
                            {
                                v59 = (unsigned int)v46 & 31;
                                v60 = v55[1] & 63;
                                if ((v46 & 255) <= 223)
                                {
                                    v55 = &v55[2];
                                    v46 = v59 * 64 | v60;
                                }
                                else
                                {
                                    v61 = v55[2] & 63 | v60 * 64;
                                    if ((v46 & 255) < 240)
                                    {
                                        v55 = &v55[3];
                                        v46 = v61 | v59 * 0x1000;
                                    }
                                    else
                                    {
                                        v55 += 1;
                                        v46 = v55[3] & 63 | v61 * 64 | (v59 & 7) * 0x40000;
                                    }
                                }
                            }
                            v56 = v7 + 1;
                        } while ((unsigned int)(v46 - 48) < 10);
                        v55 = v62;
                        if (!v7)
                            goto LABEL_4997d0;
                        if (!((char)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(v6, v7) & 1))
                        {
                            v1 = v66;
                        }
                        else
                        {
                            v21 = 0;
                            *((int128_t *)&v22) = *((int128_t *)&v6);
                            v24 = 1;
                            v12 = 0;
                            *(&v13) = a1;
                            v14 = a2;
                            v15 = 1;
                            v25 = &v21;
                            v26 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v28 = &v12;
                            v29 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v16 = &g_503378;
                            v17 = 2;
                            v20 = 0;
                            v18 = &v25;
                            v19 = 2;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v2, &v16);
                            v67 = v2;
                            v68 = *((char *)&v3 + 1);
                            v69 = *((long long *)&v4);
                            v30 = v3;
                            v31 = v69;
                            if (v67 == 0x8000000000000000)
                            {
                                v1 = v68;
                            }
                            else
                            {
                                v70 = v30;
                                v71 = a0;
                                v71->field_11 = v31;
                                *((unsigned long long *)&(&v71->field_10)[1]) = v70;
                                v71->field_8 = v67;
                                v71->field_10 = v1;
                                v71->field_0 = 1;
                                if (v5)
                                    __rust_dealloc(v6);
LABEL_499de8:
                                v40 = v8;
                                if (v40)
                                {
                                    v40 = __rust_dealloc(v9);
                                    return v40;
                                }
                                return v40;
                            }
                        }
LABEL_4997d3:
                        if (!v5)
                        {
LABEL_4998c0:
                            if ((unsigned int)v46 == 122)
                                goto LABEL_4998ca;
                            break;
                        }
                        else
                        {
                            __rust_dealloc(v6);
                            if ((unsigned int)v46 == 122)
                                goto LABEL_4998ca;
                            break;
                        }
                    }
                }
            }
        }
    }
    v39 = a0;
    v39->field_11 = v10;
    v39->field_8 = v8;
    v40 = v9;
    *((unsigned long long *)&v39->field_10) = v40;
    v39->field_0 = 0;
    return v40;
}
