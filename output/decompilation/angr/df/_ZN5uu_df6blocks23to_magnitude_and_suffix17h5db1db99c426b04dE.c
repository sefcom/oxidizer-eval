long long uu_df::blocks::to_magnitude_and_suffix(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0[16];  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1b8]
    char *v2;  // [bp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1a8]
    char *v4;  // [bp-0x1a0]
    unsigned long long v5;  // [bp-0x198]
    void* v6;  // [bp-0x190], Other Possible Types: char *
    unsigned long long v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x180]
    unsigned long long v9;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x170]
    unsigned long long v11;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x160]
    unsigned long long v13;  // [bp-0x158]
    unsigned long long v14;  // [bp-0x150]
    unsigned long long v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    char *v17;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x130]
    char *v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x120]
    void* v21;  // [bp-0x118]
    unsigned long v22;  // [bp-0x108]
    unsigned long long v23;  // [bp-0x100]
    unsigned long long v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xf0]
    int v26;  // [bp-0xe8]
    unsigned long long v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd0]
    unsigned long long v29;  // [bp-0xc8]
    unsigned long long v30;  // [bp-0xc0]
    unsigned long long v31;  // [bp-0xb8]
    unsigned long long v32;  // [bp-0xb0]
    char v33;  // [bp-0xa8]
    unsigned long long v34;  // [bp-0xa0]
    unsigned long long v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x90]
    unsigned long long v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x80]
    unsigned long long v39;  // [bp-0x78]
    unsigned long long v40;  // [bp-0x70]
    unsigned long long v41;  // [bp-0x68]
    unsigned long long v42;  // [bp-0x60]
    unsigned long long v43;  // [bp-0x58]
    unsigned long long v44;  // [bp-0x50]
    unsigned long long v45;  // [bp-0x48]
    unsigned long long v46;  // [bp-0x40]
    unsigned long long v48;  // r8
    unsigned long long v49;  // rax
    unsigned long long v50;  // cc_ndep
    void* v51;  // r12
    unsigned long long v52;  // r11
    unsigned long long v53;  // r13
    unsigned long long v54;  // r15
    unsigned long long v55;  // r14
    unsigned long long v56;  // rcx
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r9
    unsigned long long v60;  // r10
    unsigned long long v61;  // r8
    unsigned long long v62;  // rax
    char v63;  // cc_dep1
    char v64[16];  // rax
    char v65[16];  // rax
    unsigned long long v68;  // r13
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rdx
    unsigned long long v73;  // r15
    unsigned long long v74;  // r14
    unsigned long long v75;  // r13
    unsigned long long v76;  // r12
    unsigned long long v78;  // r13
    unsigned long v80;  // rax
    unsigned long long v81;  // r12
    unsigned long long v82;  // r8
    unsigned long long v83;  // r9
    unsigned long long v84;  // rax
    unsigned long long v85;  // rcx
    char *v86;  // rax
    char *v87;  // rcx
    char *v88;  // rsi

    v48 = a3 - 2 & 4294967295;
    if ((v48 & 255) < 2)
        v49 = v48 & 4294967295;
    else
        v49 = 2;
    if (!(char)v49)
    {
        v13 = 0x1000000000000000;
        v51 = 0;
        v14 = 0x4000000000000;
        v15 = 0x10000000000;
        v27 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v0 = 0x4000000;
        v10 = 0x10000;
        v12 = 64;
        v16 = 0x40000000;
        v52 = 0x100000;
        v53 = 0x400;
        v54 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v55 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v56 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v58 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v59 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v61 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v62 = 1;
        v60 = 1;
        v11 = 0;
        v9 = 0;
        v8 = 0;
    }
    else if ((unsigned int)v49 == 1)
    {
        v0 = 54210108;
        v8 = 0x9fd0803ce8000000;
        v10 = 54210;
        v9 = 0x1bcecceda1000000;
        v12 = 54;
        v11 = 0x35c9adc5dea00000;
        v13 = 0xde0b6b3a7640000;
        v51 = 0;
        v14 = 0x38d7ea4c68000;
        v15 = 0xe8d4a51000;
        v27 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v16 = 0x3b9aca00;
        v52 = 1000000;
        v53 = 1000;
        v54 = "YBksrc/uu/df/src/blocks.rs";
        v55 = "ZBYBksrc/uu/df/src/blocks.rs";
        v56 = "EBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "PBEBZBYBksrc/uu/df/src/blocks.rs";
        v58 = "TBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v59 = "MBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v60 = 2;
        v61 = "kBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v62 = 1;
    }
    else
    {
        v62 = 0;
        v63 = (char)a3 & 1;
        v53 = (((char)a3 & 1) ? 0x400 : 1000);
        v52 = (v63 ? 0x100000 : 1000000);
        *((int *)&v16) = (v63 ? 0x40000000 : 0x3b9aca00);
        *((int *)&v15) = (v63 ? 0x10000000000 : 0xe8d4a51000);
        *((int *)&v14) = (v63 ? 0x4000000000000 : 0x38d7ea4c68000);
        *((int *)&v13) = (v63 ? 0x1000000000000000 : 0xde0b6b3a7640000);
        *((int *)&v12) = (v63 ? 64 : 54);
        *((int *)&v11) = (v63 ? 0 : 0x35c9adc5dea00000);
        *((int *)&v10) = (v63 ? 0x10000 : 54210);
        *((int *)&v9) = (v63 ? 0 : 0x1bcecceda1000000);
        *((int *)&v0) = (v63 ? 0x4000000 : 54210108);
        *((int *)&v8) = (v63 ? 0 : 0x9fd0803ce8000000);
        v27 = 1;
        v61 = (v63 ? "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs" : "ksrc/uu/df/src/blocks.rs");
        v54 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v55 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v56 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v58 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v59 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v60 = 1;
        v51 = 0;
    }
    v28 = v62;
    v29 = v61;
    v30 = v60;
    v31 = v59;
    v32 = v60;
    v34 = v60;
    v35 = v58;
    v36 = v60;
    v37 = v57;
    v38 = v60;
    v39 = v56;
    v40 = v60;
    v41 = v55;
    v42 = v60;
    v43 = v54;
    v44 = v60;
    if ((char)amd64g_calculate_condition(2, 16, v51 - 1 + (amd64g_calculate_rflags_c(4, v53, 18446744073709551615, v50) & 1), a2 ^ (unsigned long long)(char)(v53 - 1 < a1), (unsigned long long)(char)(v53 - 1 < a1)))
    {
        if (!((char)amd64g_calculate_condition(2, 16, v51 - v51 - (unsigned long long)(char)(v52 < v53), a2 ^ (unsigned long long)(char)(v52 - v53 < a1), (unsigned long long)(char)(v52 - v53 < a1))))
        {
            v64 = &v29;
            v9 = v53;
            v10 = v51;
            goto LABEL_4bda45;
        }
        if ((char)amd64g_calculate_condition(2, 16, v51 - v51 - (unsigned long long)(char)(v16 < v52), a2 ^ (unsigned long long)(char)(v16 - v52 < a1), (unsigned long long)(char)(v16 - v52 < a1)))
        {
            if (!((char)amd64g_calculate_condition(2, 16, v51 - v51 - (unsigned long long)(char)(v15 < v16), a2 ^ (unsigned long long)(char)(v15 - v16 < a1), (unsigned long long)(char)(v15 - v16 < a1))))
            {
                v65 = &v33;
                v52 = v16;
                goto LABEL_4bda72;
            }
            if (!((char)amd64g_calculate_condition(2, 16, v51 - v51 - (unsigned long long)(char)(v14 < v15), a2 ^ (unsigned long long)(char)(v14 - v15 < a1), (unsigned long long)(char)(v14 - v15 < a1))))
            {
                v64 = &v35;
                v9 = v15;
                v10 = v51;
                goto LABEL_4bda45;
            }
            if ((char)amd64g_calculate_condition(2, 16, v51 - v51 - (unsigned long long)(char)(v13 < v14), a2 ^ (unsigned long long)(char)(v13 - v14 < a1), (unsigned long long)(char)(v13 - v14 < a1)))
            {
                v61 = v11;
                if (!((char)amd64g_calculate_condition(2, 16, v12 - v51 - (unsigned long long)(char)(v61 < v13), a2 ^ (unsigned long long)(char)(v61 - v13 < a1), (unsigned long long)(char)(v61 - v13 < a1))))
                {
                    v64 = &v39;
                    v9 = v13;
                    v10 = v51;
                    goto LABEL_4bda45;
                }
                else if ((char)amd64g_calculate_condition(2, 16, v10 - v12 - (unsigned long long)(char)(v9 < v61), a2 ^ (unsigned long long)(char)(v9 - v61 < a1), (unsigned long long)(char)(v9 - v61 < a1)))
                {
                    if ((char)amd64g_calculate_condition(2, 16, v0 - v10 - (unsigned long long)(char)(v8 < v9), a2 ^ (unsigned long long)(char)(v8 - v9 < a1), (unsigned long long)(char)(v8 - v9 < a1)))
                        core::panicking::panic_bounds_check(10, 10, &g_59ce98); /* do not return */
                    v64 = &v43;
LABEL_4bda45:
                    *((char *[16])&v0[0]) = v64;
                    v52 = v9;
                }
                else
                {
                    *((unsigned long long **)&v0[0]) = &v41;
                    v52 = v61;
                    v10 = v12;
                }
            }
            else
            {
                v65 = &v37;
                v52 = v14;
LABEL_4bda72:
                *((char *[16])&v0[0]) = v65;
                v10 = v51;
            }
        }
        else
        {
            *((unsigned long long **)&v0[0]) = &v31;
            v10 = v51;
        }
    }
    else
    {
        v52 = 1;
        *((unsigned long long **)&v0[0]) = &v27;
        v10 = 0;
    }
    v68 = v52;
    v69 = __udivti3(a1, a2, v68, v10, v61, v59);
    v70 = v69;
    v25 = v71;
    v24 = v69;
    v73 = a1 - v69 * v68;
    v74 = a2 - (v68 * v71 + (v69 * v68 >> 64) + v10 * v69) - (a1 < v69 * v68);
    *((char [16])&v26) = *(v0);
    if (!v73 && !v74)
    {
        v86 = &v24;
        goto LABEL_4bdbd8;
    }
    if ((char)amd64g_calculate_condition(2, 16, v10, (unsigned long long)(char)(v68 < 10), (unsigned long long)(char)(v68 < 10)))
        core::panicking::panic_const::panic_const_div_by_zero(&g_59ceb0); /* do not return */
    v75 = v68 >> 1 | v10 * 0x8000000000000000;
    v76 = v10 >> 1;
    v78 = v75 - (v75 + v76 + ((v75 + v76 <= v75 ? 1 : 0) & 1)) % 5;
    v80 = v78 * 14757395258967641293;
    v81 = 14757395258967641293 * (v76 - (v75 < (v75 + v76 + ((v75 + v76 <= v75 ? 1 : 0) & 1)) % 5)) + (v78 * 14757395258967641293 >> 64) + v78 * 14757395258967641292;
    v84 = __udivti3(v73, v74, v80, v81, v82, v83);
    v85 = v84;
    v46 = v71;
    v45 = v85;
    if (v74 - (v71 * v80 + (v84 * v80 >> 64) + v84 * v81) - (v73 < v84 * v80) || v73 - v84 * v80)
    {
        if ((char)amd64g_calculate_condition(2, 16, 0, v71 ^ (unsigned long long)(char)(9 < v70), (unsigned long long)(char)(9 < v70)) || (!(v85 ^ 9) && !v71))
        {
            v23 = v71 + ((v70 + 1 <= v70 ? 1 : 0) & 1);
            v22 = v70 + 1;
            v86 = &v22;
LABEL_4bdbd8:
            v17 = v86;
            v18 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v19 = &v26;
            v20 = <&T as core::fmt::Display>::fmt;
            v2 = &g_417758;
            v3 = 2;
            v6 = 0;
            v4 = &v17;
            v5 = 2;
            v88 = &v2;
        }
        else
        {
            v23 = v71 + ((v85 + 1 <= v85 ? 1 : 0) & 1);
            v22 = v85 + 1;
            v2 = &v24;
            v3 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v87 = &v22;
LABEL_4bdca8:
            v4 = v87;
            v5 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v6 = &v26;
            v7 = <&T as core::fmt::Display>::fmt;
            v17 = &g_59ce68;
            v18 = 3;
            v21 = 0;
            v19 = &v2;
            v20 = 3;
            v88 = &v17;
        }
        v1.map_or_else(v88);
        return a0;
    }
    v2 = &v24;
    v3 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v87 = &v45;
    goto LABEL_4bdca8;
}
