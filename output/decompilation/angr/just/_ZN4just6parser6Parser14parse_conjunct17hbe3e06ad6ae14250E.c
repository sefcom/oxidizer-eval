long long just::parser::Parser::parse_conjunct(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x2f8], Other Possible Types: char
    char v1;  // [bp-0x2f0]
    int v2;  // [bp-0x2e8]
    char v3;  // [bp-0x2e0]
    int v4;  // [bp-0x2d8]
    char v5;  // [bp-0x2d0]
    char v6;  // [bp-0x2c8]
    char v7;  // [bp-0x2c7]
    char v8;  // [bp-0x2c0]
    int v9;  // [bp-0x2b8]
    char v10;  // [bp-0x2b0]
    char v11;  // [bp-0x2af]
    unsigned int v12;  // [bp-0x2ac]
    int v13;  // [bp-0x2a8]
    char v14;  // [bp-0x2a0]
    int v15;  // [bp-0x298]
    char v16;  // [bp-0x290]
    int v17;  // [bp-0x288]
    char v18;  // [bp-0x280]
    unsigned long long v19;  // [bp-0x270]
    void* v20;  // [bp-0x268]
    int v21;  // [bp-0x258], Other Possible Types: char
    int v22;  // [bp-0x248], Other Possible Types: char
    int v23;  // [bp-0x238], Other Possible Types: char
    int v24;  // [bp-0x228], Other Possible Types: char
    char v25;  // [bp-0x218], Other Possible Types: unsigned long
    int v26;  // [bp-0x210]
    int v27;  // [bp-0x208]
    int v28;  // [bp-0x200]
    char v29;  // [bp-0x1f8]
    int v30;  // [bp-0x1f0]
    int v31;  // [bp-0x1e8]
    int v32;  // [bp-0x1e0]
    int v33;  // [bp-0x1d8], Other Possible Types: char
    char v34;  // [bp-0x1d0]
    char v35;  // [bp-0x1c8]
    int v36;  // [bp-0x1c0]
    int v37;  // [bp-0x1b0]
    unsigned long long v38;  // [bp-0x1a0]
    unsigned long long v39;  // [bp-0x198]
    char v40;  // [bp-0x190]
    char v41;  // [bp-0x180]
    char v42;  // [bp-0x170]
    char v43;  // [bp-0x160]
    char v44;  // [bp-0x150]
    char v45;  // [bp-0x140]
    char v46;  // [bp-0x130]
    unsigned long long v47;  // [bp-0x120]
    unsigned long long v48;  // [bp-0x118]
    char v49;  // [bp-0x110]
    int v50;  // [bp-0x100]
    int v51;  // [bp-0xf0]
    int v52;  // [bp-0xe0]
    char v53;  // [bp-0xd0]
    char v54;  // [bp-0xc0]
    char v55;  // [bp-0xb0]
    unsigned long long v56;  // [bp-0xa0]
    unsigned long long v57;  // [bp-0x98]
    char v58;  // [bp-0x90]
    int v59;  // [bp-0x80]
    int v60;  // [bp-0x70]
    int v61;  // [bp-0x60]
    char v62;  // [bp-0x50]
    char v63;  // [bp-0x40]
    char v64;  // [bp-0x30]
    unsigned long long v65;  // [bp-0x20]
    unsigned long v67;  // rax
    char v68;  // cl
    unsigned long long v69;  // rax
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    unsigned long long v73;  // rax
    int v74;  // xmm0
    int v75;  // xmm0
    unsigned long v76;  // rax
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm0
    unsigned long long v80;  // rax
    int v81;  // xmm0
    int v82;  // xmm1
    int v83;  // xmm0
    unsigned long long v84;  // rax
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    int v88;  // xmm0
    int v89;  // xmm1
    int v90;  // xmm2
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm2

    v0.accepted_keyword(a1, 13);
    v67 = v0;
    v68 = (char)v9;
    if ((char)v9 == 37)
    {
        if (((char)v67 & 1))
            return a0.parse_conditional(a1);
        v0.accepted(a1, 32);
        v67 = v0;
        if (v10 != 37)
            goto LABEL_67b61e;
        if (((char)v67 & 1))
        {
            v20 = 0;
            v0.parse_conjunct(a1);
            v69 = *((long long *)&v0);
            memcpy(&v25, &v1, 16);
            *((int128_t *)&v27) = *((int128_t *)&v3);
            memcpy(&v29, &v5, 16);
            *((int128_t *)&v31) = *((int128_t *)&v8);
            memcpy(&v33, &(char)v9, 16);
            if (v69 != 18)
            {
                v47 = *((long long *)&v18);
                memcpy(&v46, &v16, 16);
                memcpy(&v45, &v14, 16);
                v39 = v69;
                memcpy(&v40, &v25, 16);
                memcpy(&v41, &v27, 16);
                memcpy(&v42, &v29, 16);
                memcpy(&v43, &v31, 16);
                memcpy(&v44, &v33, 16);
                v73 = v39.new();
                *((unsigned long long *)a0) = 14;
                *((unsigned long long *)&a0[8]) = v73;
                *((unsigned long long *)&a0[16]) = 0;
                return v73;
            }
            a0[72] = v33;
            v70 = *((int128_t *)&v25);
            v71 = (int128_t)v27;
            v72 = *((int128_t *)&v29);
            *((int128_t *)&a0[56]) = (int128_t)v31;
            a0[40] = v72;
            a0[24] = v71;
            a0[8] = v70;
            *((unsigned long long *)a0) = 18;
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<just::expression::Expression>>>(&v20);
        }
        v0.parse_value(a1);
        v67 = *((long long *)&v0);
        memcpy(&(char)v20, &(char)v0, 16);
        memcpy(&v21, &v3, 16);
        memcpy(&v22, &(char)v4, 16);
        memcpy(&v23, &v8, 16);
        memcpy(&v24, &(char)v9, 16);
        if (v67 == 18)
        {
            a0[72] = v24;
            v74 = *((int128_t *)&v20);
            a0[56] = v23;
            a0[40] = v22;
            a0[24] = v21;
            a0[8] = v74;
        }
        else
        {
            v38 = *((long long *)&v18);
            v75 = *((int128_t *)&v14);
            *((int128_t *)&v37) = *((int128_t *)&v16);
            v36 = v75;
            *((int128_t *)&v26) = *((int128_t *)&v20);
            v28 = v21;
            v30 = v22;
            v32 = v23;
            memcpy(&v34, &v24, 16);
            v25 = v67;
            v0.accepted(a1, 32);
            v76 = v0;
            if ((char)v9 == 37)
            {
                if (((char)v76 & 1))
                {
                    *((int128_t *)&v17) = (int128_t)(&v37)[8];
                    *((int128_t *)&v15) = (int128_t)(&v36)[8];
                    *((int128_t *)&v13) = *((int128_t *)&v35);
                    v9 = v33;
                    v77 = *((int128_t *)&v25);
                    v78 = (int128_t)(&v26)[8];
                    memcpy(&v6, &(char)v30, 16);
                    *((int128_t *)&v4) = (int128_t)(&v28)[8];
                    v2 = v78;
                    v0 = v77;
                    *((double *)&v19) = v0.new();
                    v0.parse_conjunct(a1);
                    memcpy(&(char)v20, &(char)v0, 16);
                    memcpy(&v21, &v3, 16);
                    memcpy(&v22, &(char)v4, 16);
                    memcpy(&v23, &v8, 16);
                    memcpy(&v24, &(char)v9, 16);
                    if ((long long)v0 != 18)
                    {
                        v56 = (long long)(&v17)[8];
                        memcpy(&v55, &v16, 16);
                        memcpy(&v54, &v14, 16);
                        v48 = (long long)v0;
                        memcpy(&v49, &v20, 16);
                        v50 = v21;
                        v51 = v22;
                        v52 = v23;
                        memcpy(&v53, &v24, 16);
                        v80 = v48.new();
                        *((unsigned long long *)a0) = 14;
                        *((unsigned long long *)&a0[8]) = v80;
                        *((unsigned long long *)&a0[16]) = v19;
                        return v80;
                    }
                    a0[72] = v24;
                    v79 = *((int128_t *)&v20);
                    a0[56] = v23;
                    a0[40] = v22;
                    a0[24] = v21;
                    a0[8] = v79;
                    *((unsigned long long *)a0) = 18;
                    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<just::expression::Expression>>>(&v19);
                }
                else
                {
                    v0.accepted(a1, 30);
                    v76 = v0;
                    if ((char)v9 == 37)
                    {
                        if (((char)v76 & 1))
                        {
                            *((int128_t *)&v17) = (int128_t)(&v37)[8];
                            *((int128_t *)&v15) = (int128_t)(&v36)[8];
                            *((int128_t *)&v13) = *((int128_t *)&v35);
                            v9 = v33;
                            v81 = *((int128_t *)&v25);
                            v82 = (int128_t)(&v26)[8];
                            memcpy(&v6, &(char)v30, 16);
                            *((int128_t *)&v4) = (int128_t)(&v28)[8];
                            v2 = v82;
                            v0 = v81;
                            *((double *)&v19) = v0.new();
                            v0.parse_conjunct(a1);
                            memcpy(&(char)v20, &(char)v0, 16);
                            memcpy(&v21, &v3, 16);
                            memcpy(&v22, &(char)v4, 16);
                            memcpy(&v23, &v8, 16);
                            memcpy(&v24, &(char)v9, 16);
                            if ((long long)v0 != 18)
                            {
                                v65 = (long long)(&v17)[8];
                                memcpy(&v64, &v16, 16);
                                memcpy(&v63, &v14, 16);
                                v57 = (long long)v0;
                                memcpy(&v58, &v20, 16);
                                v59 = v21;
                                v60 = v22;
                                v61 = v23;
                                memcpy(&v62, &v24, 16);
                                v84 = v57.new();
                                *((unsigned long long *)a0) = 11;
                                *((unsigned long long *)&a0[8]) = v19;
                                *((unsigned long long *)&a0[16]) = v84;
                                return v84;
                            }
                            a0[72] = v24;
                            v83 = *((int128_t *)&v20);
                            a0[56] = v23;
                            a0[40] = v22;
                            a0[24] = v21;
                            a0[8] = v83;
                            *((unsigned long long *)a0) = 18;
                            return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v19);
                        }
                        else
                        {
                            *((int128_t *)&a0[112]) = (int128_t)(&v37)[8];
                            *((int128_t *)&a0[96]) = (int128_t)(&v36)[8];
                            *((int128_t *)&a0[80]) = *((int128_t *)&v35);
                            a0[64] = v33;
                            v85 = *((int128_t *)&v25);
                            v86 = (int128_t)(&v26)[8];
                            v87 = (int128_t)(&v28)[8];
                            *((int128_t *)&a0[48]) = (int128_t)(&v30)[8];
                            a0[32] = v87;
                            a0[16] = v86;
                            *(a0) = v85;
                            return v76;
                        }
                    }
                }
            }
            *((long long *)&a0[72]) = (long long)v9;
            v88 = (int128_t)v0;
            v89 = (int128_t)v2;
            v90 = (int128_t)v4;
            *((int128_t *)&a0[57]) = *((int128_t *)&v7);
            a0[41] = v90;
            a0[25] = v89;
            a0[9] = v88;
            *((int *)&a0[81]) = *((int *)&v11);
            *((unsigned int *)&a0[84]) = v12;
            *((char *)&a0[8]) = v76;
            *((char *)&a0[80]) = v10;
            *((unsigned long long *)a0) = 18;
            return core::ptr::drop_in_place<just::expression::Expression>(&v25);
        }
    }
    else
    {
LABEL_67b61e:
        *((long long *)&a0[72]) = (long long)v9;
        v91 = (int128_t)v0;
        v92 = (int128_t)v2;
        v93 = (int128_t)v4;
        *((int128_t *)&a0[57]) = *((int128_t *)&v7);
        a0[41] = v93;
        a0[25] = v92;
        a0[9] = v91;
        *((int *)&a0[81]) = *((int *)&v11);
        *((unsigned int *)&a0[84]) = v12;
        *((char *)&a0[8]) = v67;
        *((char *)&a0[80]) = v10;
    }
    *((unsigned long long *)a0) = 18;
    return v67;
}
