long long uu_sort::FieldSelector::parse::h64208e6c3e169fa3(struct_1 *a0, struct_0 *a1, struct_0 *a2, char a3[153])
{
    char v0;  // [sp-0xc9]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [sp-0xc0], Other Possible Types: char [153], unsigned long long
    unsigned int v3;  // [sp-0xb8]
    unsigned short v4;  // [sp-0xb4]
    char v5;  // [bp-0xb0]
    struct_0 *v6;  // [sp-0xa8], Other Possible Types: unsigned long
    char v7[153];  // [sp-0xa0], Other Possible Types: void*, struct_0 *, unsigned long, unsigned long long
    struct_0 *v8;  // [sp-0x98], Other Possible Types: char, unsigned long
    char v9;  // [bp-0x97]
    char v10;  // [bp-0x93]
    char v11;  // [bp-0x91]
    unsigned long v12;  // [sp-0x90], Other Possible Types: unsigned long long
    struct_0 *v13;  // [sp-0x88]
    unsigned long v14;  // [sp-0x80], Other Possible Types: unsigned long long
    char v15;  // [bp-0x68]
    char v16;  // [bp-0x60]
    char v17;  // [bp-0x58]
    char v18;  // [bp-0x57]
    char v19;  // [bp-0x53]
    char v20;  // [bp-0x51]
    unsigned long long v21;  // [sp-0x48]
    char *v22;  // [sp-0x40]
    unsigned long long v23;  // [sp-0x38]
    struct_0 *v27;  // r12
    unsigned long long v28;  // rdx
    char *v29;  // rsi
    char *v30;  // rcx
    char *v31;  // rcx
    struct_0 *v33;  // r14
    struct_0 *v34;  // r12
    struct_0 *v35;  // rbx
    struct_0 *v37;  // r14
    struct_0 *v38;  // r12
    struct_0 *v39;  // r14
    char *v40;  // rdx
    unsigned long long v41;  // r13
    char *v42;  // rbp
    unsigned long long v44;  // rbx
    unsigned long long v45;  // rax
    char *v46;  // rsi
    char *v47;  // rdx
    char *v48;  // rdx
    struct_0 *v49;  // rax
    struct_0 *v50;  // rax
    struct_0 *v51;  // r14
    unsigned long long v52;  // r12
    unsigned long v53;  // r12
    unsigned long long v54;  // r13
    unsigned long long v55;  // r8
    struct_0 *v56;  // r10
    unsigned long long v57;  // r11
    struct_0 *v58;  // r10
    unsigned long long v59;  // r11
    unsigned long long v60;  // r9
    void* v61;  // r13
    unsigned long v62;  // r9
    unsigned long long v63;  // r9
    unsigned long long v64;  // r11
    unsigned long long v67;  // r11
    char v68[153];  // rdi
    char v69;  // al
    unsigned long long v70;  // rcx
    unsigned long long v73;  // rax
    char v74;  // al
    char v75;  // al
    unsigned long long v76;  // r11
    unsigned long long v79;  // r13
    struct_0 *v80;  // r14
    unsigned long long v81;  // r12
    uint128_t v82[4];  // rax
    int v83;  // xmm0
    int v84;  // xmm1
    int v85;  // xmm2

    *((char *[153])&v2[0]) = a3;
    do
    {
        v27 = 0;
        v28 = a2 - v27;
        v29 = v27 + a1;
        if (v28 > 15)
        {
            if (!(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(44, v29) == 1))
                goto LABEL_4c4173;
            goto LABEL_4c4154;
        }
        if (a2 == v27)
        {
LABEL_4c4173:
            v35 = 0;
            goto LABEL_4c4178;
        }
        v30 = 0;
        while (*((char *)(v29 + v30)) != 44)
        {
            v30 += 1;
            if (v28 == v30)
                goto LABEL_4c4173;
        }
LABEL_4c4154:
        v33 = v27 + v31 + 1;
        v34 = v27 + v31;
        if (v34 < a2 && *((char *)(a1 + v34)) == 44)
            goto LABEL_4c417d;
    } while (v33 <= a2);
    v35 = 0;
LABEL_4c4178:
LABEL_4c417d:
    v39 = v37;
    uu_sort::FieldSelector::split_key_options::hc947d9537a6ecf5a(&v5, a1, v38);
    v40 = v6;
    v41 = v8;
    v42 = vvar_79{reg 56};
    v40 = v40;
    if (v39 <= a2)
    {
        do
        {
            v45 = a2 - v39;
            v46 = a1 + v39;
            if (v45 <= 15)
            {
                if (a2 == v39)
                    break;
                v47 = 0;
                while (*((char *)(v46 + v47)) != 44)
                {
                    v47 += 1;
                    if (v45 == v47)
                        goto LABEL_4c4252;
                }
            }
            else if (!(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(44, v46) == 1))
            {
                break;
            }
            v49 = v39 + v48;
            if (v49 < a2 && *((char *)(a1 + v49)) == 44)
                goto LABEL_4c4255;
            v39 = v39 + v48 + 1;
        } while (v39 <= a2);
LABEL_4c4252:
    }
LABEL_4c4255:
    uu_sort::FieldSelector::split_key_options::hc947d9537a6ecf5a(&v5, v33 + a1, v50 - v33);
    v44 = *((long long *)&v5);
    v22 = v6;
    if (!v41)
    {
        if (!v44)
        {
            v51 = v39 | -0x100 | 1;
        }
        else
        {
            if (!(!v21))
                goto LABEL_4c4295;
            v51 = 0;
        }
        v53 = v2[125];
        uu_sort::KeyPosition::new::h62507b899aef70b1(&v5, v42, v40, 1, v53 & 4294967295);
        v54 = *((int *)&v9) | (*((short *)&v10) | v11 * 0x10000) * 0x100000000;
        v55 = v6;
        v56 = v7;
        v57 = v8;
        if (*((long long *)&v5))
        {
            v60 = v57 & 4294967295;
            goto LABEL_4c4660;
        }
        v1 = v53;
        v63 = v62 | -0x100 | 2;
        v67 = v64;
        if (v56)
        {
            v68 = v2;
            v69 = v68[152];
            v70 = v68[130] * 0x100000000 | v68[128] * 0x1000000 | v68[126] * 0x100 + v1 | v68[127] * 0x10000;
            if (v55 == 1)
            {
                a0->field_0 = v53;
                a0->field_8 = v51;
                a0->field_10 = 2 | v42 * 0x100;
                a0->field_18 = 1;
                a0->field_20 = v56;
                a0->field_28 = v76;
                *((unsigned int *)&(&a0->field_28)[1]) = v54;
                *((char *)&a0->field_29 + 3) = v54 >> 48;
                *((unsigned short *)((char *)&a0->field_29 + 1)) = v54 >> 32;
                *((unsigned int *)&a0->field_2d) = v70;
                *((char *)&a0->field_30) = v70 >> 32;
                *((char *)&a0->field_30 + 1) = v75;
                *((char *)&a0->field_30 + 2) = 0;
                *((char *)&a0->field_30 + 3) = (v69 < 2 | (((char)(v63 & 4294967295) ^ 2) || (char)v67)) & v69 != 2;
                return a0;
            }
LABEL_4c4769:
            a0->field_0 = v53;
            a0->field_8 = v51;
            a0->field_10 = 2 | v42 * 0x100;
            a0->field_18 = v55;
            a0->field_20 = v56;
            a0->field_28 = v76;
            *((unsigned int *)&(&a0->field_28)[1]) = v54;
            *((char *)&a0->field_29 + 3) = v54 >> 48;
            *((unsigned short *)((char *)&a0->field_29 + 1)) = v54 >> 32;
            *((unsigned int *)&a0->field_2d) = v70;
            *((char *)&a0->field_30) = v70 >> 32;
            *((char *)&a0->field_30 + 1) = v75;
            *((char *)&a0->field_30 + 2) = 0;
            *((char *)&a0->field_30 + 3) = (v69 < 2 | (((char)(v63 & 4294967295) ^ 2) || (char)v67)) & v69 != 2;
            return a0;
        }
    }
    else
    {
LABEL_4c4295:
        v21 = v8;
        *((char *[153])&v2[0]) = v7;
        v51 = 0x8000000000000000;
        v4 = 0x600;
        v3 = 0;
        uu_sort::FieldSelector::parse_with_options::parse_key_settings::he4a9c8ea4df59d09(&v15, v7, v41, &v3);
        v52 = *((long long *)&v15);
        if (v52 != 0x8000000000000000)
        {
LABEL_4c440d:
            v58 = *((long long *)&v16);
            v60 = v17;
            v61 = *((int *)&v18) | (*((short *)&v19) | v20 * 0x10000) * 0x100000000;
            goto LABEL_4c4660;
        }
        else
        {
            uu_sort::KeyPosition::new::h62507b899aef70b1(&v5, v42, v40, 1, v16);
            v52 = v6;
            v58 = v7;
            v59 = v8;
            v54 = *((int *)&v9) | (*((short *)&v10) | v11 * 0x10000) * 0x100000000;
            if (*((long long *)&v5))
            {
                v60 = v59 & 4294967295;
                goto LABEL_4c4660;
            }
            if (!v44)
                goto LABEL_4c45ab;
            v23 = v52;
            v0 = v59;
            v56 = v58;
            uu_sort::FieldSelector::parse_with_options::parse_key_settings::he4a9c8ea4df59d09(&v15, v2, v21, &v3);
            v52 = *((long long *)&v15);
            if (!(v52 == 0x8000000000000000))
                goto LABEL_4c440d;
            uu_sort::KeyPosition::new::h62507b899aef70b1(&v5, v44, v22, 0, v16);
            v52 = v6;
            v58 = v7;
            v60 = v8;
            v42 = *((int *)((char *)&v8 + 1)) | (*((short *)&(&v9)[4]) | v11 * 0x10000) * 0x100000000;
            v59 = v0;
            if (!(!*((long long *)&v5)))
                goto LABEL_4c4660;
LABEL_4c45ab:
            if (v56)
            {
                v73 = v4 * 0x100000000;
                v70 = v3 | v73;
                v74 = v73 >> 40;
                v55 = v23;
                if (v55 == 1)
                {
                    a0->field_0 = v53;
                    a0->field_8 = v51;
                    a0->field_10 = 2 | v42 * 0x100;
                    a0->field_18 = v55;
                    a0->field_20 = v56;
                    a0->field_28 = v76;
                    *((unsigned int *)&(&a0->field_28)[1]) = v54;
                    *((char *)&a0->field_29 + 3) = v54 >> 48;
                    *((unsigned short *)((char *)&a0->field_29 + 1)) = v54 >> 32;
                    *((unsigned int *)&a0->field_2d) = v70;
                    *((char *)&a0->field_30) = v70 >> 32;
                    *((char *)&a0->field_30 + 1) = v75;
                    *((char *)&a0->field_30 + 2) = 0;
                    *((char *)&a0->field_30 + 3) = (v69 < 2 | (((char)(v63 & 4294967295) ^ 2) || (char)v67)) & v69 != 2;
                    return a0;
                }
                goto LABEL_4c4769;
            }
        }
    }
    v52 = 59;
    v58 = __rust_alloc(59, 1);
    if (!v58)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    *((int128_t *)((char *)&v58->field_20 + 11)) = 133485624513146996785960933456865752169;
    v58->field_20 = 146793563363748825717793806262549553253;
    v58->field_10 = 138842676100815432793774417478815391858;
    *((int128_t *)&v58->field_0) = 134856349688948118446018713040161500777;
    v60 = v62 | -0x100 | 59;
    v61 = 0;
LABEL_4c4660:
    if (!a2)
    {
        v79 = 1;
    }
    else
    {
        if (a2 < 0)
        {
            v2 = 0;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v2 = 1;
        v79 = __rust_alloc(a2, 1);
        if (!v79)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v60 = v60 & 4294967295 & 4294967295;
    }
    memcpy(v7, a1, a2);
    v12 = v81;
    v13 = v80;
    v14 = v60 & 4294967295 | v61 * 0x100;
    v6 = a2;
    v7 = v79;
    v8 = a2;
    v5 = 3;
    v82 = __rust_alloc(64, 8);
    if (v82)
    {
        v83 = *((int128_t *)&v5);
        v84 = *((int128_t *)&v7);
        v85 = *((int128_t *)&v12);
        v82[3] = *((int128_t *)&v14);
        *((void*)&v82[2]) = v85;
        *((void*)&v82[1]) = v84;
        *((void*)&v82[0]) = v83;
        a0->field_0 = v82;
        a0->field_8 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
        *((char *)&a0->field_30 + 3) = (v69 < 2 | (((char)(v63 & 4294967295) ^ 2) || (char)v67)) & v69 != 2;
        return a0;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
