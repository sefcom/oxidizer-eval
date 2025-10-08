long long uu_df::blocks::to_magnitude_and_suffix(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0[16];  // [bp-0x1c8], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1b0]
    char *v3;  // [bp-0x1a8]
    unsigned long long v4;  // [bp-0x1a0]
    void* v5;  // [bp-0x198], Other Possible Types: char *
    unsigned long long v6;  // [bp-0x190]
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
    unsigned long long v29;  // [bp-0xc0]
    unsigned long long v30;  // [bp-0xb8]
    unsigned long long v31;  // [bp-0xb0]
    unsigned long long v32;  // [bp-0xa8]
    unsigned long long v33;  // [bp-0xa0]
    unsigned long long v34;  // [bp-0x98]
    char v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    unsigned long long v37;  // [bp-0x80]
    unsigned long long v38;  // [bp-0x78]
    unsigned long long v39;  // [bp-0x70]
    unsigned long long v40;  // [bp-0x68]
    unsigned long long v41;  // [bp-0x60]
    unsigned long long v42;  // [bp-0x58]
    unsigned long long v43;  // [bp-0x50]
    unsigned long long v44;  // [bp-0x48]
    unsigned long long v45;  // [bp-0x40]
    unsigned long long v46;  // [bp-0x38]
    unsigned long long v48;  // rdi
    unsigned long v49;  // rax
    unsigned long long v50;  // r12
    unsigned long long v51;  // r13
    unsigned long long v52;  // r15
    unsigned long long v53;  // r14
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rdi
    unsigned long long v56;  // r11
    unsigned long long v57;  // r9
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r8
    unsigned long long v60;  // rax
    unsigned long long v61;  // r10
    char v62;  // cc_dep1
    char v63[16];  // rax
    unsigned long long v64;  // r8
    char v65[16];  // rax
    unsigned long long v66;  // r13
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rdx
    unsigned long long v71;  // r15
    unsigned long long v72;  // r14
    unsigned long long v73;  // r13
    unsigned long long v74;  // r12
    unsigned long long v76;  // r13
    unsigned long v78;  // rax
    unsigned long long v79;  // r12
    unsigned long long v80;  // r8
    unsigned long long v81;  // r9
    unsigned long long v82;  // rax
    unsigned long long v83;  // rcx
    char *v84;  // rax
    char *v85;  // rcx
    char *v86;  // rsi

    v48 = a3 - 2 & 4294967295;
    v49 = ((v48 & 255) < 2 ? v48 & 4294967295 : 2);
    if (!(char)v49)
    {
        v12 = 0x1000000000000000;
        v50 = 0;
        v13 = 0x4000000000000;
        v14 = 0x10000000000;
        v0 = 0x4000000;
        v9 = 0x10000;
        v11 = 64;
        v15 = 0x40000000;
        v16 = 0x100000;
        v51 = 0x400;
        v52 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v53 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v54 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v55 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v56 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v59 = "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v60 = 1;
        v61 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v58 = 1;
        v10 = 0;
        v8 = 0;
        v7 = 0;
    }
    else if ((unsigned int)v49 == 1)
    {
        v0 = 54210108;
        v7 = 0x9fd0803ce8000000;
        v9 = 54210;
        v8 = 0x1bcecceda1000000;
        v11 = 54;
        v10 = 0x35c9adc5dea00000;
        v12 = 0xde0b6b3a7640000;
        v50 = 0;
        v13 = 0x38d7ea4c68000;
        v14 = 0xe8d4a51000;
        v15 = 0x3b9aca00;
        v16 = 1000000;
        v51 = 1000;
        v52 = "YBksrc/uu/df/src/blocks.rs";
        v53 = "ZBYBksrc/uu/df/src/blocks.rs";
        v54 = "EBZBYBksrc/uu/df/src/blocks.rs";
        v55 = "PBEBZBYBksrc/uu/df/src/blocks.rs";
        v56 = "TBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "MBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v58 = 2;
        v59 = "kBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v60 = 1;
        v61 = "BKMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
    }
    else
    {
        v60 = 0;
        v62 = (char)a3 & 1;
        v51 = (((char)a3 & 1) ? 0x400 : 1000);
        *((int *)&v16) = (v62 ? 0x100000 : 1000000);
        *((int *)&v15) = (v62 ? 0x40000000 : 0x3b9aca00);
        *((int *)&v14) = (v62 ? 0x10000000000 : 0xe8d4a51000);
        *((int *)&v13) = (v62 ? 0x4000000000000 : 0x38d7ea4c68000);
        *((int *)&v12) = (v62 ? 0x1000000000000000 : 0xde0b6b3a7640000);
        *((int *)&v11) = (v62 ? 64 : 54);
        *((int *)&v10) = (v62 ? 0 : 0x35c9adc5dea00000);
        *((int *)&v9) = (v62 ? 0x10000 : 54210);
        *((int *)&v8) = (v62 ? 0 : 0x1bcecceda1000000);
        *((int *)&v0) = (v62 ? 0x4000000 : 54210108);
        *((int *)&v7) = (v62 ? 0 : 0x9fd0803ce8000000);
        v59 = (v62 ? "KMGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs" : "ksrc/uu/df/src/blocks.rs");
        v52 = "YkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v53 = "ZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v54 = "EZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v55 = "PEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v56 = "TPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v57 = "MGTPEZYkBMBGBTBPBEBZBYBksrc/uu/df/src/blocks.rs";
        v61 = 1;
        v58 = 1;
        v50 = 0;
    }
    v29 = v61;
    v30 = v60;
    v31 = v59;
    v32 = v58;
    v33 = v57;
    v34 = v58;
    v36 = v58;
    v37 = v56;
    v38 = v58;
    v39 = v55;
    v40 = v58;
    v41 = v54;
    v42 = v58;
    v43 = v53;
    v44 = v58;
    v45 = v52;
    v46 = v58;
    if ((char)_ccall(2, 16, v50 - 1 + ((v51 + -1 <= v51 ? 1 : 0) & 1), a2 ^ (unsigned long long)(char)(v51 - 1 < a1), (unsigned long long)(char)(v51 - 1 < a1)))
    {
        v59 = v16;
        if (!((char)_ccall(2, 16, v50 - v50 - (unsigned long long)(char)(v59 < v51), a2 ^ (unsigned long long)(char)(v59 - v51 < a1), (unsigned long long)(char)(v59 - v51 < a1))))
        {
            v63 = &v31;
            v8 = v51;
            v9 = v50;
            goto LABEL_46a781;
        }
        if ((char)_ccall(2, 16, v50 - v50 - (unsigned long long)(char)(v15 < v59), a2 ^ (unsigned long long)(char)(v15 - v59 < a1), (unsigned long long)(char)(v15 - v59 < a1)))
        {
            if (!((char)_ccall(2, 16, v50 - v50 - (unsigned long long)(char)(v14 < v15), a2 ^ (unsigned long long)(char)(v14 - v15 < a1), (unsigned long long)(char)(v14 - v15 < a1))))
            {
                v65 = &v35;
                v13 = v15;
                goto LABEL_46a7ac;
            }
            if (!((char)_ccall(2, 16, v50 - v50 - (unsigned long long)(char)(v13 < v14), a2 ^ (unsigned long long)(char)(v13 - v14 < a1), (unsigned long long)(char)(v13 - v14 < a1))))
            {
                v63 = &v37;
                v8 = v14;
                v9 = v50;
                goto LABEL_46a781;
            }
            if ((char)_ccall(2, 16, v50 - v50 - (unsigned long long)(char)(v12 < v13), a2 ^ (unsigned long long)(char)(v12 - v13 < a1), (unsigned long long)(char)(v12 - v13 < a1)))
            {
                v59 = v10;
                if (!((char)_ccall(2, 16, v11 - v50 - (unsigned long long)(char)(v59 < v12), a2 ^ (unsigned long long)(char)(v59 - v12 < a1), (unsigned long long)(char)(v59 - v12 < a1))))
                {
                    v63 = &v41;
                    v8 = v12;
                    v9 = v50;
                    goto LABEL_46a781;
                }
                else if ((char)_ccall(2, 16, v9 - v11 - (unsigned long long)(char)(v8 < v59), a2 ^ (unsigned long long)(char)(v8 - v59 < a1), (unsigned long long)(char)(v8 - v59 < a1)))
                {
                    if ((char)_ccall(2, 16, v0 - v9 - (unsigned long long)(char)(v7 < v8), a2 ^ (unsigned long long)(char)(v7 - v8 < a1), (unsigned long long)(char)(v7 - v8 < a1)))
                        core::panicking::panic_bounds_check(10, 10, &g_502dd8); /* do not return */
                    v63 = &v45;
LABEL_46a781:
                    *((char *[16])&v0[0]) = v63;
                    v64 = v8;
                }
                else
                {
                    *((unsigned long long **)&v0[0]) = &v43;
                    v64 = v59;
                    v9 = v11;
                }
            }
            else
            {
                v65 = &v39;
LABEL_46a7ac:
                *((char *[16])&v0[0]) = v65;
                v64 = v13;
                v9 = v50;
            }
        }
        else
        {
            *((unsigned long long **)&v0[0]) = &v33;
            v64 = v59;
            v9 = v50;
        }
    }
    else
    {
        v64 = 1;
        *((unsigned long long **)&v0[0]) = &v29;
        v9 = 0;
    }
    v66 = v64;
    v67 = __udivti3(a1, a2, v66, v9, v59, v57);
    v68 = v67;
    v25 = v69;
    v24 = v67;
    v71 = a1 - v67 * v66;
    v72 = a2 - (v66 * v69 + (v67 * v66 >> 64) + v9 * v67) - (a1 < v67 * v66);
    *((char [16])&v26) = *(v0);
    if (!v71 && !v72)
    {
        v84 = &v24;
        goto LABEL_46a910;
    }
    if ((char)_ccall(2, 16, v9, (unsigned long long)(char)(v66 < 10), (unsigned long long)(char)(v66 < 10)))
        core::panicking::panic_const::panic_const_div_by_zero(&g_502df0); /* do not return */
    v73 = v66 >> 1 | v9 * 0x8000000000000000;
    v74 = v9 >> 1;
    v76 = v73 - (v73 + v74 + ((v73 + v74 <= v73 ? 1 : 0) & 1)) % 5;
    v78 = v76 * 14757395258967641293;
    v79 = 14757395258967641293 * (v74 - (v73 < (v73 + v74 + ((v73 + v74 <= v73 ? 1 : 0) & 1)) % 5)) + (v76 * 14757395258967641293 >> 64) + v76 * 14757395258967641292;
    v82 = __udivti3(v71, v72, v78, v79, v80, v81);
    v83 = v82;
    v28 = v69;
    v27 = v83;
    if (v72 - (v69 * v78 + (v82 * v78 >> 64) + v82 * v79) - (v71 < v82 * v78) || v71 - v82 * v78)
    {
        if ((char)_ccall(2, 16, 0, v69 ^ (unsigned long long)(char)(9 < v68), (unsigned long long)(char)(9 < v68)) || (!(v83 ^ 9) && !v69))
        {
            v23 = v69 + ((v68 + 1 <= v68 ? 1 : 0) & 1);
            v22 = v68 + 1;
            v84 = &v22;
LABEL_46a910:
            v17 = v84;
            v18 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v19 = &v26;
            v20 = <&T as core::fmt::Display>::fmt;
            v1 = &g_419680;
            v2 = 2;
            v5 = 0;
            v3 = &v17;
            v4 = 2;
            v86 = &v1;
        }
        else
        {
            v23 = v69 + ((v83 + 1 <= v83 ? 1 : 0) & 1);
            v22 = v83 + 1;
            v1 = &v24;
            v2 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v85 = &v22;
LABEL_46a9e0:
            v3 = v85;
            v4 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v5 = &v26;
            v6 = <&T as core::fmt::Display>::fmt;
            v17 = &g_502da8;
            v18 = 3;
            v21 = 0;
            v19 = &v1;
            v20 = 3;
            v86 = &v17;
        }
        return a0.map_or_else(v86);
    }
    v1 = &v24;
    v2 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v85 = &v27;
    goto LABEL_46a9e0;
}
