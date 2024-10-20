int uu_numfmt::format::format_string::h91b72a3073ebf9f1()
{
    void* v0;  // [sp-0x268], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x260], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x258]
    char v3;  // [sp-0x250]
    char v4;  // [sp-0x238], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0x230], Other Possible Types: unsigned long long
    char v6;  // [bp-0x228]
    unsigned long v7;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x1f0]
    void* v9;  // [sp-0x1e0], Other Possible Types: unsigned long long
    char v10;  // [bp-0x1d8]
    char v11;  // [bp-0x1d0]
    char v12;  // [bp-0x1c7]
    unsigned long v15;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x1b0]
    unsigned long long v17;  // [sp-0x1a8]
    unsigned long long v18;  // [sp-0x1a0]
    void* v19;  // [sp-0x198]
    unsigned long long v20;  // [sp-0x138]
    char v21;  // [bp-0x130]
    char v22;  // [bp-0x128]
    struct_1 *v23;  // [sp-0x108]
    unsigned long long v24;  // [sp-0xf8]
    unsigned long long v25;  // [sp-0xf0]
    unsigned long v27;  // r9
    unsigned long v28;  // r8
    struct_3 *v29;  // rcx
    void* v30;  // r12
    unsigned long v31;  // rdx
    char *v32;  // rsi
    unsigned long long v33;  // r13
    unsigned long long v34;  // r15
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rax
    char *v39;  // r12
    unsigned long long v40;  // rax
    char *v41;  // rdx
    char *v42;  // rdx
    unsigned long long v43;  // rbx
    unsigned long long v44;  // r14
    char v45[4];  // rax
    unsigned long long v46;  // rdx
    unsigned int v47;  // esi
    unsigned int v48;  // r8d
    unsigned int v49;  // edi
    unsigned long long v50;  // r13
    struct_2 *v51;  // rax
    unsigned long long v54;  // rax
    struct_0 *v55;  // rcx
    int v57;  // ymm1
    unsigned long long v59;  // rbx
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rsi
    unsigned int v64;  // edx
    unsigned long long v65;  // rbx
    void* v66;  // rcx
    char v67;  // al
    char *v68;  // rcx
    int v69;  // ymm1
    int v70;  // ymm1
    int v71;  // ymm1
    unsigned long long v72;  // r12
    int v73;  // ymm0
    int v74;  // ymm0
    char v75;  // al
    unsigned long long v76;  // rax
    unsigned int v77;  // ecx
    int v78;  // ymm1
    unsigned long long v79[4];  // rdx
    unsigned int v80;  // edx

    v20 = v27;
    v25 = v28;
    v24 = v29->field_88;
    if (v24 != 0x8000000000000000)
    {
        v30 = v29->field_98;
        if (v31 < v30)
        {
            v30 = 0;
        }
        else if (bcmp(v29->field_90, v31 - v30 + v32, v30))
        {
            v30 = 0;
        }
        v33 = v31 - v30;
    }
    if (v29->field_10)
    {
        v9 = v29->field_18;
        v34 = v29->field_b0;
        goto LABEL_492620;
    }
    v34 = v29->field_b0;
    v9 = 0;
    if ((char)v34 == 5 && v29->field_b1 == 5)
    {
        v9 = 0;
        while (true)
        {
            v37 = v36;
            v38 = v33 - v37;
            v39 = &v32[v37];
            if (v38 <= 15)
            {
                v34 = v34 | -0x100 | 5;
                if (v33 == v37)
                    goto LABEL_492620;
                v41 = 0;
                while (*((char *)(v39 + v41)) != 46)
                {
                    v41 += 1;
                    if (v38 == v41)
                        goto LABEL_492620;
                }
            }
            v40 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(46, v39);
            if (v40 != 1)
                break;
            v40 = &v42[v37 + 1];
            v37 = &v42[v37];
            if (!(v37 < v33) || !(*((char *)(v42 + v39)) == 46))
            {
                v34 = v34 | -0x100 | 5;
                v43 = v40;
                if (v33 < v43)
                    goto LABEL_492620;
            }
            else
            {
                if (!(v43 == v33))
                    goto LABEL_49323f;
                v23 = &v29->padding_0;
                v44 = v29->field_a0;
                v34 = v34 | -0x100 | 5;
                v9 = 0;
LABEL_492638:
                v54 = v32[1 + v33];
                if (v55 != v32)
                {
                    v60 = v55->field_-3;
                    if ((char)v60 < 0)
                    {
                        v61 = v55->field_-2;
                        if ((char)v61 >= 192)
                        {
                            v64 = (unsigned int)v61 & 31;
                        }
                        else
                        {
                            v62 = v55[1].field_-4;
                            v64 = (unsigned int)v61 & 63 | ((char)v62 < 192 ? (unsigned int)v62 & 63 | (v55[1].field_-3 & 7) * 64 : (unsigned int)v62 & 15) * 64;
                        }
                        v60 = (unsigned int)v60 & 63 | v64 * 64;
                    }
                    switch ((unsigned int)v60)
                    {
                    case 69:
                        break;
                    case 71:
                        break;
                    case 75:
                        v65 = -0x100 | (char)v54 == 105;
                        v66 = ~(v65);
                        v67 = 0;
LABEL_49292b:
                        v68 = v66 + v33;
                        if (v66 + v33)
                        {
                            if (v68 >= v33)
                            {
                                if (!v67)
                                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            else
                            {
                                if (*((char *)(v32 + v68)) <= 191)
                                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                        }
                        core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v21, v32, v68);
                        if (!v21)
                        {
                            v57 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)&v22);
                        }
                        else
                        {
                            v0 = 0;
                            v1 = v32;
                            v2 = v33;
                            v3 = 1;
                            v7 = &v0;
                            v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v15 = &g_4fb070;
                            v16 = 1;
                            v19 = 0;
                            v17 = &v7;
                            v18 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v4, &v15);
                            v50 = v4;
                            v57 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v5;
                            if (v50 != 0x8000000000000000)
                            {
                                v72 = *((long long *)&v6);
                                v59 = (v72 & 4294967295 & 4294967295) >> 8 & 4294967295;
                                v76 = (v59 & 4294967295 & 4294967295) * 0x100 & 4294967295 | 18 | (v72 >> 16) * 0x10000;
                                v79[1] = v50;
                                v79[2] = (unsigned long long)v78;
                                v79[3] = v76;
                                v79[0] = 1;
                                return;
                            }
                        }
LABEL_492a6c:
                        v74 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | MulV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v44) - 0x45300000000000004330000000000000), (uint128_t)v57);
                        v7 = (unsigned long long)v74;
                        v75 = v34 - 2 & 4294967295;
                        if ((char)v65 != 2)
                        {
                            v77 = (v75 < 4 ? v75 : 2);
                            goto *((int *)(4319408 + vvar_235{reg 24} * 4)) + 4319408;
                        }
                        else
                        {
                            if (!(v75 < 4 & v75 != 2))
                            {
                                v0 = &v7;
                                v1 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                                v15 = &g_4fb080;
                                v16 = 2;
                                v19 = 0;
                                v17 = &v0;
                                v18 = 1;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v4, &v15);
                                v50 = v4;
                                if (v50 != 0x8000000000000000)
                                {
                                    v76 = *((long long *)&v6);
                                    v78 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v5) & 340282366920938463463374607431768211455;
                                    v79[1] = v50;
                                    v79[2] = (unsigned long long)v78;
                                    v79[3] = v76;
                                    v79[0] = 1;
                                    return;
                                }
                            }
                            v0 = 0x706050403020100;
                            v80 = (v23->field_b1 - 2 < 4 ? v23->field_b1 - 2 : 2);
                            goto *((int *)(0x41e900 + vvar_218{reg 32} * 4)) + 0x41e900;
                        }
                    case 77:
                        break;
                    case 80:
                        break;
                    case 84:
                        break;
                    case 89:
                        break;
                    case 90:
                        break;
                    default:
                        if ((char)v54 != 105 && (unsigned int)v60 - 58 >= -10)
                        {
                            v66 = 0;
                            v65 = v37 | -0x100 | 2;
                            v67 = v54 | -0x100 | 1;
                            goto LABEL_49292b;
                        }
                    }
                }
                v0 = 0;
                v1 = v32;
                v2 = v33;
                v3 = 1;
                v4 = &v0;
                v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v15 = &g_4fb060;
                v16 = 1;
                v19 = 0;
                v17 = &v4;
                v18 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v10, &v15);
                v57 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)&v11);
                v59 = v12;
                if (*((long long *)&v10) != 0x8000000000000000)
                {
                    v79[1] = v50;
                    v79[2] = (unsigned long long)v78;
                    v79[3] = v76;
                    v79[0] = 1;
                    return;
                }
                goto LABEL_492a6c;
            }
        }
        if (!v40)
        {
            v34 = v34 | -0x100 | 5;
            v9 = v40;
            goto LABEL_492620;
        }
LABEL_49323f:
        v45 = &v32[v40];
        v9 = 0;
        do
        {
            v46 = v45[0];
            if ((char)v46 >= 0)
            {
                v45 = &v45[1];
            }
            else
            {
                v47 = (unsigned int)v46 & 31;
                v48 = v45[1] & 63;
                if ((v46 & 255) <= 223)
                {
                    v45 = &v45[2];
                    v46 = v47 * 64 | v48;
                }
                else
                {
                    v49 = v45[2] & 63 | v48 * 64;
                    if ((v46 & 255) < 240)
                    {
                        v45 = &v45[3];
                        v46 = v49 | v47 * 0x1000;
                    }
                    else
                    {
                        v46 = v45[3] & 63 | v49 * 64 | (v47 & 7) * 0x40000;
                        if ((unsigned int)v46 != 0x110000)
                        {
                            v45 += 1;
                        }
                        else
                        {
                            v34 = v34 | -0x100 | 5;
                            break;
                        }
                    }
                }
            }
        } while ((v34 = v34 | -0x100 | 5, (unsigned int)v46 - 48 <= 9 && (v9 += 1, v45 != v32 + v33)));
    }
LABEL_492620:
    if (v33)
    {
        v23 = &v29->padding_0;
        v44 = v29->field_a0;
        goto LABEL_492638;
    }
    else
    {
        v51 = __rust_alloc(18, 1);
        if (v51)
        {
            v51->field_0 = 42838769310113416591687283243360874089;
            v51->field_10 = 10023;
            v79[1] = v50;
            v79[2] = (unsigned long long)v78;
            v79[3] = v76;
            v79[0] = 1;
            return;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
