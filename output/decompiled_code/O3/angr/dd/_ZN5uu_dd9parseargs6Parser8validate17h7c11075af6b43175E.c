double uu_dd::parseargs::Parser::validate::h7c11075af6b43175(long long a0, long long a1)
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
    unsigned long long v23;  // rdx
    int v24;  // ymm0
    void* v25;  // r12
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
    unsigned long long v47;  // rdx
    char v48;  // r12b
    unsigned long long v49;  // r13
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    int v52;  // ymm1
    unsigned long long v53;  // rax
    unsigned long long v54;  // rcx
    char v55;  // dl
    unsigned long long v62;  // rsi
    unsigned long long v69;  // rdi
    unsigned long long *v70;  // r11
    unsigned long long v71;  // r9
    unsigned long long v72;  // r8
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0

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
    v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
    v21 = a1->field_a6;
    v22 = a1->field_a7;
    if ((char)v10)
    {
        if (!(!v12) || !(!v11))
        {
            a0->field_8 = 1;
            a0->field_0 = 3;
            core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
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
            goto LABEL_4d2e2a;
        }
        v23 = 2;
        if (!v14)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = 0;
            goto LABEL_4d2e2a;
        }
    }
    if (v11)
    {
        if (v12)
        {
            a0->field_8 = 1;
            a0->field_0 = 3;
            core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
            return (unsigned long long)v24;
        }
        if (!v13)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = v26 | -0x100 | 1;
            goto LABEL_4d2e2a;
        }
        v23 = 2;
        if (!v14)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = v29 | -0x100 | 1;
            goto LABEL_4d2e2a;
        }
    }
    else if (v12)
    {
        if (!v13)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = v27 | -0x100 | 2;
            goto LABEL_4d2e2a;
        }
        v23 = 2;
        if (!v14)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = v30 | -0x100 | 2;
            goto LABEL_4d2db6;
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
            v25 = v28 | -0x100 | 3;
            goto LABEL_4d2e2a;
        }
        v23 = 2;
        if (!v14)
        {
            v3 = v17;
            v0 = v16;
            v1 = v22;
            v2 = v21;
            v6 = v18;
            v25 = v31 | -0x100 | 3;
LABEL_4d2db6:
LABEL_4d2e2a:
            v32 = (unsigned int)v25;
            v34 = v6;
            v35 = InterleaveLOV(v34, v34);
            v36 = CmpEQV(0, v35);
            v37 = (unsigned long long)(v36 >> 64) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16) CONCAT (unsigned short)((unsigned int)v36 >> 16);
            v38 = v37 | v36;
            v39 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
            v40 = 340282366920938463463374607431768211455 ^ v38;
            v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 340282366920938463463374607431768211455 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
            v43 = (unsigned int)((unsigned long long)v40 >> 32) & 65535;
            v44 = v2;
            v45 = v1;
            v46 = v0;
            if (((char)v43 & 1))
            {
                a0->field_8 = 4;
                a0->field_0 = 3;
                core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
                return (unsigned long long)v24;
            }
            if (!a1->field_30)
            {
                if (!(!v15 && !v4))
                {
                    a0->field_8 = 9;
                    a0->field_0 = 3;
                    core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
                    return (unsigned long long)v24;
                }
                v0 = v46;
                v1 = v45;
                v2 = v44;
                v47 = 2;
LABEL_4d2f46:
                v49 = v5;
                uu_dd::parseargs::conversion_mode::h6bc7be64ebc3f754(&v7, uu_dd::parseargs::get_ctable::ha693ab90c9779ba7(v32, (!v14) * 2), v47, v43, v10 & 4294967295, v49 & 4294967295);
                v50 = a1->field_0;
                if (v50)
                {
                    v51 = a1->field_8;
                    v52 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
                }
                else
                {
                    v53 = 0x200;
                    v51 = 0x200;
                    if (a1->field_10)
                        v51 = a1->field_18;
                    v52 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
                    if (a1->field_20)
                        v53 = a1->field_28;
                }
                v54 = v53;
                v55 = 1;
                if (v50)
                    v55 = a1->field_b0;
                v62 = a1->field_48 * 1;
                v69 = a1->field_58 * 1;
                v70 = (char *)&a1->field_b0 + 1;
                v71 = a1->field_60;
                v72 = a1->field_68;
                if (!v71)
                {
                    v71 = (&a1->field_af)[5];
                }
                else if ((unsigned int)v71 == 1)
                {
                    v71 = 1;
                }
                a0->field_20 = a1->field_80;
                v73 = a1->field_70;
                *((void*)&a0->field_10) = v73;
                *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)((char *)&a1->field_88 + 8));
                v74 = *((int128_t *)&(&a1->field_80)[1]);
                *((void*)&(&a0->field_20)[1]) = v74;
                v75 = *((int128_t *)&a1->field_a8);
                *((void*)&a0->field_38) = v75;
                *((unsigned long long *)((char *)&a0->field_80 + 6)) = *(v70);
                *((long long *)((char *)&a0->field_88 + 5)) = *((long long *)((char *)v70 + 7));
                *((long long *)&a0->field_50) = *((long long *)&v8);
                v76 = *((int128_t *)&v7);
                *((void*)&a0->field_40) = v76;
                a0->field_0 = v71;
                a0->field_8 = v72;
                *((char *)&a0->field_50 + 8) = v49;
                *((char *)&a0->field_50 + 9) = 32;
                *((char *)&a0->field_50 + 10) = v0;
                *((char *)&a0->field_50 + 11) = v48;
                a0->field_60 = v51;
                *((unsigned long long *)&a0->field_68) = v54;
                a0->field_70 = v62;
                a0->field_78 = v69;
                *((unsigned int *)&a0->field_80) = (unsigned int)v52;
                *((char *)&a0->field_80 + 4) = v2;
                *((char *)&a0->field_80 + 5) = v1;
                a0->field_95 = v55;
                (&a0->field_95)[1] = a1->field_c0;
                return (unsigned long long)(v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76);
            }
            v43 = a1->field_38;
            if (!(char)v25)
            {
                v0 = v46;
                v1 = v45;
                v2 = v44;
                v47 = 1;
                goto LABEL_4d2f46;
            }
            if (v32 != 3)
            {
LABEL_4d2ec7:
                v0 = v46;
                v1 = v45;
                v2 = v44;
                v47 = 0;
                goto LABEL_4d2f46;
            }
            else
            {
                if (!v4)
                {
                    v0 = v46;
                    v1 = v45;
                    v2 = v44;
                    v47 = 1 + (v15 < 1);
                    goto LABEL_4d2f46;
                }
                v23 = 3;
                if (!v15)
                    goto LABEL_4d2ec7;
            }
        }
    }
    a0->field_8 = v23;
    a0->field_0 = 3;
    core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
    return (unsigned long long)v24;
}
