long long uu_cp::Attributes::parse_iter::hb7d919deb8d9a156(struct_4 *a0, struct_1 *a1)
{
    char v0;  // [sp-0x195]
    char v1;  // [sp-0x194]
    char v2;  // [sp-0x193]
    char v3;  // [sp-0x192]
    char v4;  // [bp-0x191]
    void* v5;  // [sp-0x190]
    unsigned int v6;  // [sp-0x188]
    unsigned int v7;  // [sp-0x184]
    unsigned int v8;  // [sp-0x180]
    unsigned int v9;  // [sp-0x17c]
    void* v10;  // [sp-0x178], Other Possible Types: unsigned long
    void* v11;  // [sp-0x170], Other Possible Types: unsigned long
    void* v12;  // [sp-0x168], Other Possible Types: unsigned long
    void* v13;  // [sp-0x160], Other Possible Types: unsigned long
    void* v14;  // [sp-0x158], Other Possible Types: unsigned long
    void* v15;  // [sp-0x150], Other Possible Types: unsigned long
    char v16;  // [bp-0x148], Other Possible Types: unsigned long
    void* v17;  // [sp-0x140], Other Possible Types: unsigned long
    void* v18;  // [sp-0x138], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0x130]
    char v20;  // [bp-0x128], Other Possible Types: unsigned long
    char v21;  // [bp-0x120]
    char v22;  // [bp-0x11f]
    char v23;  // [bp-0x11e]
    char v24;  // [bp-0x11d]
    char v25;  // [bp-0x11c]
    char v26;  // [bp-0x11b]
    char v27;  // [bp-0x11a]
    char v28;  // [bp-0x119]
    char v29;  // [bp-0x118]
    char v30;  // [bp-0x117]
    char v31;  // [bp-0x116]
    char v32;  // [bp-0x115]
    char v33;  // [bp-0x114]
    char v34;  // [bp-0x10c]
    unsigned long long v35;  // [sp-0x108]
    unsigned long long v36;  // [sp-0xf8]
    unsigned long long v37;  // [sp-0xf0]
    unsigned long long v38;  // [sp-0xe8]
    struct struct_0 **v39;  // [sp-0xe0]
    char v40;  // [bp-0xd8]
    char v41;  // [bp-0xd0]
    char v42;  // [bp-0xc8]
    unsigned long v43;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v44;  // [sp-0xb8]
    void* v45;  // [sp-0xb0]
    struct_3 *v46;  // [sp-0xa8]
    unsigned long long v47;  // [sp-0xa0]
    char v48;  // [sp-0x98]
    unsigned long v49;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v50;  // [sp-0x88]
    unsigned long long v51;  // [sp-0x80]
    unsigned long long v52;  // [sp-0x78]
    void* v53;  // [sp-0x70]
    unsigned long long v54;  // [sp-0x60]
    unsigned int v55;  // [sp-0x58]
    struct struct_0 **v60;  // r12
    void* v62;  // r13
    void* v63;  // rbx
    void* v64;  // r15
    void* v65;  // rbp
    unsigned long long v66[3];  // rax
    struct_3 *v67;  // r14
    unsigned long long v68;  // rax
    unsigned long v69;  // r9
    unsigned long long v70;  // r9
    unsigned long v71;  // r11
    unsigned long long v72;  // r11
    unsigned long v73;  // r10
    unsigned long long v74;  // r10
    unsigned long v75;  // rdi
    char v76;  // dil
    unsigned long v77;  // r8
    unsigned long long v78;  // r8
    unsigned long long v79;  // rcx
    unsigned long long v80;  // r15
    unsigned long long v81;  // r13
    unsigned long long v82;  // rbp
    char v83;  // dl
    char v84;  // dl
    unsigned long long v85;  // rdx
    unsigned int v86;  // esi
    unsigned long long v87;  // r14
    unsigned long long v88;  // rcx
    unsigned long long v89;  // rdi
    unsigned int v91;  // r8d
    unsigned int v92;  // r9d
    unsigned int v93;  // r10d
    unsigned long long v95;  // rdx
    unsigned int v97;  // r11d
    unsigned long long v100;  // rdx
    unsigned int v104;  // esi
    struct_4 *v107;  // rax

    v60 = a1->field_8;
    v38 = a1->field_18;
    if (v60 == v38)
    {
        v15 = 0;
        v65 = 0;
        v10 = 0;
        v18 = 0;
        v13 = 0;
        v17 = 0;
        v12 = 0;
        v64 = 0;
        v11 = 0;
        v63 = 0;
        v14 = 0;
        v62 = 0;
        if (!(!v19))
            goto LABEL_4b4753;
    }
    else
    {
        v35 = a1->field_0;
        v19 = a1->field_10;
        v62 = 0;
        v14 = 0;
        v63 = 0;
        v11 = 0;
        v64 = 0;
        v12 = 0;
        v17 = 0;
        v13 = 0;
        v18 = 0;
        v10 = 0;
        v65 = 0;
        v15 = 0;
        do
        {
            v39 = v60;
            v66 = *(v39);
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v40, v66[1], v66[2]);
            v67 = *((long long *)&v41);
            v68 = *((long long *)&v42);
            v37 = v63;
            if (v68 != 3)
            {
                v6 = 0;
                v5 = 0;
                switch (v68)
                {
                case 4:
                    v79 = &v5;
                case 5:
                    v79 = &v6;
                    if ((!(!((char)v67->field_3 ^ 115)) || !(!(*((int *)&v67->field_0) ^ 1802398060))) && (v79 = &v6, !(!((unsigned int)(char)(char)v67->field_3 ^ 114)) || !(!(*((int *)&v67->field_0) ^ 1953784184))))
                        goto LABEL_4b4255;
                    else
                        goto LABEL_4b4653;
                case 7:
                    v79 = &v5;
                    if (!(*((int *)&(&v67->padding_2)[1]) ^ 1954047348) && !(*((int *)&v67->field_0) ^ 1953394531))
                        goto LABEL_4b4653;
                    else
                        goto LABEL_4b4255;
                case 9:
                    v79 = &v5;
                    if (!((unsigned long long)v67->padding_7 ^ 112) && !(*((long long *)&v67->field_0) ^ 7595447706725545839))
                        goto LABEL_4b4653;
                    else
                        goto LABEL_4b4255;
                case 10:
                    v79 = &v5;
                    if (!(*((short *)&v67->padding_7) ^ 29552) && !(*((long long *)&v67->field_0) ^ 7881708861846808948))
                        goto LABEL_4b4653;
                    else
                        goto LABEL_4b4255;
                default:
LABEL_4b4255:
                    v16 = v65;
                    v20 = v62;
                    v45 = 0;
                    v46 = v67;
                    v47 = v68;
                    v48 = 1;
                    v43 = &v45;
                    v44 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v49 = &g_555290;
                    v50 = 1;
                    v53 = 0;
                    v51 = &v43;
                    v52 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v49);
                    v3 = v21;
                    v76 = v22;
                    v74 = v23;
                    v1 = v24;
                    v72 = v25;
                    v2 = v26;
                    v9 = v27;
                    v7 = v28;
                    v70 = v29;
                    v0 = v30;
                    v78 = v31;
                    v8 = v32;
                    v54 = *((long long *)&v33);
                    v55 = *((int *)&v34);
                    v36 = 9;
                    break;
                }
                switch (*((int *)&v67->field_0))
                {
                case 1701080941:
LABEL_4b4653:
                    *((short *)v79) = 257;
                    v3 = (char)v5;
                    v76 = *((char *)&v5 + 1);
                    v74 = *((char *)&v5 + 2);
                    v1 = *((char *)&v5 + 3);
                    v72 = *((char *)&v5 + 4);
                    v2 = *((char *)&v5 + 5);
                    v9 = *((char *)&v5 + 6);
                    v7 = *((char *)&v5 + 7);
                    v70 = (char)v6;
                    v0 = *((char *)&v6 + 1);
                    v78 = *((char *)&v6 + 2);
                    v8 = *((char *)&v6 + 3);
                    if (*((long long *)&v40))
                    {
                        v76 = v76;
                        v16 = v64;
                        __rust_dealloc(v67);
                        v78 = v78 & 4294967295 & 4294967295;
                        v74 = v74 & 4294967295 & 4294967295;
                        v70 = v70 & 4294967295 & 4294967295;
                        v80 = v16;
                        v72 = v72 & 4294967295 & 4294967295;
                    }
                    continue;
                case 1802398060:
                    v79 = &v6;
                default:
                    v79 = &v6;
                }
            }
            else
            {
                if (!(!(unsigned short)((unsigned int)v67->padding_2 ^ 108) && !(unsigned short)(v67->field_0 ^ 27745)))
                    goto LABEL_4b4255;
                v16 = v65;
                v20 = v62;
                v36 = 13;
                v70 = v69 | -0x100 | 1;
                v7 = 0;
                v9 = 0;
                v2 = 1;
                v72 = v71 | -0x100 | 1;
                v1 = 1;
                v74 = v73 | -0x100 | 1;
                v76 = v75 | -0x100 | 1;
                v3 = 1;
                v0 = 1;
                v78 = v77 | -0x100 | 1;
                v8 = 0;
                if (*((long long *)&v40))
                {
                    v76 = 1;
                    __rust_dealloc(v67);
                    v78 = v78 & 4294967295 & 4294967295;
                    v74 = v74 & 4294967295 & 4294967295;
                    v70 = v70 & 4294967295 & 4294967295;
                    v72 = v72 & 4294967295 & 4294967295;
                }
                v81 = v20;
                v82 = v16;
            }
            v83 = (char)v14;
            if (!((~(v83) | !v3) & 1))
                v83 = v37 - 1 & 4294967295 | -0x100 | (char)(v37 - 1 & 4294967295) == v76;
            v16 = v83;
            v84 = (char)v13;
            if (!((~(v84) | !(char)v9) & 1))
                v84 = (unsigned int)v18 - 1 | -0x100 | (char)((unsigned int)v18 - 1) == (char)v7;
            v20 = v84;
            v85 = v12;
            if (!((~((char)(v85 & 4294967295)) | !(v72 & 255 & 255)) & 1))
                v85 = v85 | -0x100 | (char)((unsigned int)v17 - 1) == v2;
            v86 = (unsigned int)v11;
            v87 = v86;
            if (!((~((char)v86) | !(v74 & 255 & 255)) & 1))
                v87 = v87 | -0x100 | (char)(v80 - 1 & 4294967295) == v1;
            v88 = v10;
            if (!((~((char)(v88 & 4294967295)) | !(v70 & 255 & 255)) & 1))
                v88 = v88 | -0x100 | (char)(v82 - 1 & 4294967295) == v0;
            v4 = v76;
            v89 = v15;
            if (!((~((char)(v89 & 4294967295)) | !(v78 & 255 & 255)) & 1))
                v89 = v89 | -0x100 | (char)(v81 - 1 & 4294967295) == (char)v8;
            v60 = v39 + 1;
            v91 = (((char)v88 & 1) ? (char)v10 : (unsigned int)(-0x100 | (v70 & 255 & 255)));
            if (((char)v88 & 1))
                v65 = v82 & 4294967295 & 4294967295;
            else
                v65 = v0;
            v92 = (((char)v87 & 1) ? (char)v11 : (unsigned int)(-0x100 | (v74 & 255 & 255)));
            if (((char)v87 & 1))
                v64 = v80 & 4294967295 & 4294967295;
            else
                v64 = v1;
            v93 = (((char)v85 & 1) ? (char)v12 : (unsigned int)(-0x100 | (v72 & 255 & 255)));
            if (((char)v85 & 1))
                v95 = (char)v17;
            else
                v95 = v2;
            v17 = v95;
            v97 = ((v20 & 1) ? (char)v13 : (unsigned int)(-0x100 | (char)v9));
            if (!(v20 & 1))
                v100 = (char)v7;
            else
                v100 = (char)v18;
            v18 = v100;
            v63 = ((v16 & 1) ? v37 & 4294967295 & 4294967295 : v4);
            if (!((char)v89 & 1))
                v62 = (char)v8;
            else
                v62 = v81 & 4294967295 & 4294967295;
            v104 = (((char)v89 & 1) ? (char)v15 : (unsigned int)(-0x100 | (v78 & 255 & 255)));
            v10 = v91;
            v11 = v92;
            v12 = v93;
            v13 = v97;
            *((int *)&v14) = ((v16 & 1) ? (char)v14 : (-0x100 | v3) & 4294967295 & 4294967295);
            v15 = v104;
        } while (v60 != v38);
        v15 = v15 | -0x100 | (char)v15 & 1;
        v10 = v10 | -0x100 | (char)v10 & 1;
        v13 = v13 | -0x100 | (char)v13 & 1;
        v12 = v12 | -0x100 | (char)v12 & 1;
        v11 = v11 | -0x100 | (char)v11 & 1;
        v14 = v14 | -0x100 | (char)v14 & 1;
        if (v19)
        {
LABEL_4b4753:
            __rust_dealloc(v35);
        }
    }
    v107 = a0;
    v107->field_8 = (char)v14;
    v107->field_9 = (char)v63;
    v107->field_a = (char)v11;
    v107->field_b = (char)v64;
    v107->field_c = (char)v12;
    v107->field_d = (char)v17;
    v107->field_e = (char)v13;
    v107->field_f = (char)v18;
    v107->field_10 = (char)v10;
    v107->field_11 = (char)v65;
    v107->field_12 = (char)v15;
    v107->field_13 = (char)v62;
    v107->field_0 = 13;
    return v107;
}
