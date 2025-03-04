double uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(long long a0, long long a1)
{
    char v0;  // [sp-0x5e]
    char v1;  // [sp-0x5d]
    char v2;  // [sp-0x5c]
    char v3;  // [sp-0x5b]
    char v4;  // [sp-0x5a]
    char v5;  // [sp-0x59]
    int v6;  // [sp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // r13
    char v11;  // dil
    char v12;  // sil
    char v13;  // cl
    char v14;  // al
    char v15;  // r15b
    char v16;  // r10b
    char v17;  // r11b
    int v18;  // xmm0
    int v19;  // ymm0
    int v20;  // ymm0
    char v21;  // r8b
    char v22;  // r9b
    int v24;  // ymm0
    unsigned long long v25;  // r12
    unsigned long v26;  // r12
    unsigned long v27;  // r12
    unsigned long v28;  // r12
    unsigned long v29;  // r12
    unsigned long v30;  // r12
    unsigned long v31;  // r12
    unsigned int v32;  // ebp
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // ymm0
    int v40;  // xmm1
    int v41;  // ymm1
    int v42;  // ymm1
    unsigned long long v43;  // rcx
    char v44;  // sil
    char v45;  // dil
    char v46;  // r8b
    char v47;  // r9b
    char v48;  // r12b
    unsigned long long v49;  // rdx
    unsigned long long v50;  // r13
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rax
    unsigned long long v53;  // rcx
    int v54;  // ymm1
    char v55;  // dl
    unsigned long long v56;  // rsi
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdi
    unsigned long long v61;  // rdi
    unsigned long long *v62;  // r11
    unsigned long long v63;  // r9
    unsigned long long v64;  // r8
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // xmm0

    v10 = (char)a1->field_98;
    v11 = *((char *)&a1->field_98 + 1);
    v12 = *((char *)&a1->field_98 + 2);
    v13 = *((char *)&a1->field_98 + 3);
    v14 = *((char *)&a1->field_98 + 4);
    v4 = *((char *)&a1->field_98 + 5);
    v15 = *((char *)&a1->field_98 + 6);
    v16 = *((char *)&a1->field_98 + 7);
    v5 = a1->field_a0;
    v17 = a1->field_a1;
    v18 = *((int *)&a1->field_a2);
    v20 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
    v21 = a1->field_a6;
    v22 = a1->field_a7;
    if ((char)v10)
    {
        if (!(!v12) || !(!v11))
        {
            a0->field_8 = 1;
            a0->field_0 = 3;
            core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
            return (unsigned long long)v24;
        }
        if (!v13)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = 0;
            goto LABEL_4d2cba;
        }
        else if (!v14)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = 0;
            goto LABEL_4d2cba;
        }
        else
        {
            a0->field_8 = 2;
            a0->field_0 = 3;
            core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
            return (unsigned long long)v24;
        }
        goto LABEL_4d2cba;
    }
    else
    {
        if (v11)
        {
            if (v12)
            {
                a0->field_8 = 1;
                a0->field_0 = 3;
                core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
                return (unsigned long long)v24;
            }
            if (!v13)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v26 & 0xffffffffffffff00 | 1;
                goto LABEL_4d2cba;
            }
            else if (!v14)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v29 & 0xffffffffffffff00 | 1;
                goto LABEL_4d2cba;
            }
            else
            {
                a0->field_8 = 2;
                a0->field_0 = 3;
                core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
                return (unsigned long long)v24;
            }
            goto LABEL_4d2cba;
        }
        if (v12)
        {
            if (!v13)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v27 & 0xffffffffffffff00 | 2;
                goto LABEL_4d2cba;
            }
            if (!v14)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v30 & 0xffffffffffffff00 | 2;
                goto LABEL_4d2c46;
            }
        }
        else
        {
            if (!v13)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v28 & 0xffffffffffffff00 | 3;
                goto LABEL_4d2cba;
            }
            if (!v14)
            {
                v3 = v17;
                v0 = v16;
                v1 = v22;
                v2 = v21;
                v6 = v18;
                v25 = v31 & 0xffffffffffffff00 | 3;
LABEL_4d2c46:
LABEL_4d2cba:
                v32 = v25;
                v34 = v6;
                v35 = InterleaveLOV(v34, v34);
                v36 = CmpEQV(0, v35);
                v37 = (unsigned long long)(v36 >> 64) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16);
                v38 = v37 | v36;
                v39 = (((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                v40 = 340282366920938463463374607431768211455 ^ v38;
                v42 = ((v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 340282366920938463463374607431768211455) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                v43 = (unsigned int)((unsigned long long)v40 >> 32) & 65535;
                v44 = v2;
                v45 = v1;
                v46 = v0;
                v47 = v3;
                if (((char)v43 & 1))
                {
                    a0->field_8 = 4;
                    a0->field_0 = 3;
                    core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
                    return (unsigned long long)v24;
                }
                if (!a1->field_30)
                {
                    if (!(!v15 && !v4))
                    {
                        a0->field_8 = 9;
                        a0->field_0 = 3;
                        core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
                        return (unsigned long long)v24;
                    }
                    v48 = v47;
                    v0 = v46;
                    v1 = v45;
                    v2 = v44;
                    v49 = 2;
LABEL_4d2dd6:
                    v50 = v5;
                    uu_dd::parseargs::conversion_mode::h18084a71126044cd(&v7, uu_dd::parseargs::get_ctable::h8e7446a764b1d972(v32, (!v14) * 2), v49, v43, v10 & 4294967295, v50 & 4294967295);
                    v51 = a1->field_0;
                    if (v51)
                    {
                        v52 = a1->field_8;
                        v53 = v52;
                        v54 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
                    }
                    else
                    {
                        v53 = 0x200;
                        v52 = 0x200;
                        if (a1->field_10)
                            v52 = a1->field_18;
                        v54 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
                        if (a1->field_20)
                            v53 = a1->field_28;
                    }
                    v55 = 1;
                    if (v51)
                        v55 = a1->field_b0;
                    v56 = v52;
                    if ((&a1->field_af)[6])
                        v56 = 1;
                    if (a1->field_40)
                        v56 = v52;
                    if (a1->field_40)
                        v56 = 1;
                    v58 = a1->field_48 * v56;
                    v59 = v53;
                    if (*((char *)&a1->field_b0 + 15))
                        v59 = 1;
                    if (a1->field_50)
                        v59 = v53;
                    if (a1->field_50)
                        v59 = 1;
                    v61 = a1->field_58 * v59;
                    v62 = (char *)&a1->field_b0 + 1;
                    v63 = a1->field_60;
                    v64 = a1->field_68;
                    if (!v63)
                    {
                        v63 = (&a1->field_af)[5];
                    }
                    else if ((unsigned int)v63 == 1)
                    {
                        v63 = 1;
                    }
                    a0->field_20 = a1->field_80;
                    v65 = a1->field_70;
                    *((void*)&a0->field_10) = v65;
                    *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)((char *)&a1->field_88 + 8));
                    v66 = *((int128_t *)&(&a1->field_80)[1]);
                    *((void*)&(&a0->field_20)[1]) = v66;
                    v67 = *((int128_t *)&a1->field_a8);
                    *((void*)&a0->field_38) = v67;
                    *((unsigned long long *)((char *)&a0->field_80 + 6)) = *(v62);
                    *((long long *)((char *)&a0->field_88 + 5)) = *((long long *)((char *)v62 + 7));
                    *((long long *)&a0->field_50) = *((long long *)&v8);
                    v68 = *((int128_t *)&v7);
                    *((void*)&a0->field_40) = v68;
                    a0->field_0 = v63;
                    a0->field_8 = v64;
                    *((char *)&a0->field_50 + 8) = v50;
                    *((char *)&a0->field_50 + 9) = 32;
                    *((char *)&a0->field_50 + 10) = v0;
                    *((char *)&a0->field_50 + 11) = v48;
                    a0->field_60 = v52;
                    *((unsigned long long *)&a0->field_68) = v53;
                    a0->field_70 = v58;
                    a0->field_78 = v61;
                    *((unsigned int *)&a0->field_80) = (unsigned int)v54;
                    *((char *)&a0->field_80 + 4) = v2;
                    *((char *)&a0->field_80 + 5) = v1;
                    a0->field_95 = v55;
                    (&a0->field_95)[1] = a1->field_c0;
                    return (unsigned long long)((((((((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68);
                }
                v43 = a1->field_38;
                if (!(char)v25)
                {
                    v48 = v47;
                    v0 = v46;
                    v1 = v45;
                    v2 = v44;
                    v49 = 1;
                    goto LABEL_4d2dd6;
                }
                if (v32 == 3)
                {
                    if (!v4)
                    {
                        v48 = v47;
                        v0 = v46;
                        v1 = v45;
                        v2 = v44;
                        v49 = 1 + (v15 < 1);
                        goto LABEL_4d2dd6;
                    }
                    else if (v15)
                    {
                        a0->field_8 = 3;
                        a0->field_0 = 3;
                        core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
                        return (unsigned long long)v24;
                    }
                }
                v48 = v47;
                v0 = v46;
                v1 = v45;
                v2 = v44;
                v49 = 0;
                goto LABEL_4d2dd6;
            }
        }
        a0->field_8 = 2;
        a0->field_0 = 3;
        core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(a1);
        return (unsigned long long)v24;
    }
}
