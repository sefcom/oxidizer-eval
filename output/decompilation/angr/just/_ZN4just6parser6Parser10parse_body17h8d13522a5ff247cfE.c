long long just::parser::Parser::parse_body(void* a0, unsigned long long a1[12])
{
    unsigned int v0;  // [bp-0x200]
    unsigned int v1;  // [bp-0x1fd]
    int v2;  // [bp-0x1f8], Other Possible Types: char, unsigned long long
    int v3;  // [bp-0x1f0]
    void* v4;  // [bp-0x1e8], Other Possible Types: char
    int v5;  // [bp-0x1e7]
    unsigned long long v6;  // [bp-0x1e0]
    int v7;  // [bp-0x1e0]
    char v8;  // [bp-0x1d8]
    int v9;  // [bp-0x1d0]
    char v10;  // [bp-0x1c8]
    int v11;  // [bp-0x1c0]
    char v12;  // [bp-0x1b8]
    int v13;  // [bp-0x1b7]
    unsigned int v14;  // [bp-0x1b4]
    unsigned int v15;  // [bp-0x1af]
    unsigned int v16;  // [bp-0x1ac]
    int v18;  // [bp-0x1a0]
    int v19;  // [bp-0x190]
    unsigned long long v20;  // [bp-0x180]
    void* v21;  // [bp-0x178]
    unsigned long long v22;  // [bp-0x170]
    void* v23;  // [bp-0x168]
    void* v24;  // [bp-0x160]
    unsigned long long v25;  // [bp-0x158]
    void* v26;  // [bp-0x150]
    int v27;  // [bp-0x148]
    int v28;  // [bp-0x138], Other Possible Types: char
    int v29;  // [bp-0x128], Other Possible Types: char
    int v30;  // [bp-0x118], Other Possible Types: char
    int v31;  // [bp-0x108], Other Possible Types: char
    int v32;  // [bp-0xf8], Other Possible Types: char
    int v33;  // [bp-0xe8], Other Possible Types: char
    int v34;  // [bp-0xd8], Other Possible Types: char
    int v35;  // [bp-0xc8]
    int v36;  // [bp-0xb8], Other Possible Types: unsigned int, unsigned long long
    unsigned int v37;  // [bp-0xb5]
    int v38;  // [bp-0xb0]
    int v39;  // [bp-0xa8]
    int v40;  // [bp-0xa0]
    int v41;  // [bp-0x98]
    int v42;  // [bp-0x90]
    int v43;  // [bp-0x88]
    int v44;  // [bp-0x80]
    int v45;  // [bp-0x78]
    int v46;  // [bp-0x70]
    int v47;  // [bp-0x60]
    int v48;  // [bp-0x50]
    unsigned long long v49;  // [bp-0x40]
    unsigned long v51;  // rax
    int v52;  // ymm0, Other Possible Types: uint256_t
    uint256_t v53;  // ymm1
    uint256_t v54;  // ymm2
    uint256_t v55;  // ymm3
    unsigned long long v56;  // rbp
    char v57;  // al
    char v58;  // cl
    uint256_t v59;  // ymm0
    uint256_t v60;  // ymm1
    uint256_t v61;  // ymm2
    uint256_t v62;  // ymm3
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm0
    unsigned long long v67;  // rcx
    int v68;  // xmm0
    unsigned long long v69;  // rdx
    int v70;  // xmm1
    int v71;  // xmm2
    unsigned int v72;  // edi
    int v73;  // xmm0
    int v74;  // xmm1
    int v75;  // xmm2
    unsigned int v76;  // edx
    unsigned int v77;  // edx
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    int v82;  // xmm4
    void* v83;  // r15
    char v91;  // cl
    int v92;  // xmm0
    int v93;  // xmm1
    int v94;  // xmm2
    int v97;  // [bp-0x1c7]

    v21 = 0;
    v22 = 8;
    v23 = 0;
    v2.accepted(a1, 25);
    v51 = v2;
    if (v91 == 37)
    {
        if (((char)v51 & 1))
        {
            while (true)
            {
                v2.accepted(a1, 17);
                v51 = v2;
                if (v91 != 37)
                    break;
                if (((char)v51 & 1))
                {
                    v23 = 0;
                    *((unsigned long long *)&a0[16]) = 0;
                    *((int128_t *)a0) = *((int128_t *)&v21);
                    *((char *)&a0[72]) = 37;
                    return 8;
                }
                v24 = 0;
                v25 = 8;
                v26 = 0;
                v56 = (a1[11] < a1[4] ? *((long long *)(a1[3] + a1[11] * 72 + 48)) : 0);
                v2.accepted(a1, 20);
                v57 = v2;
                if (v91 != 37)
                {
                    v58 = v91;
                    *((long long *)&a0[64]) = *((long long *)&v12);
                    v73 = (int128_t)(&v2)[1];
                    v74 = (int128_t)v5;
                    v75 = *((int128_t *)&(&v8)[1]);
                    *((int128_t *)&a0[49]) = *((int128_t *)&(&v10)[1]);
                    a0[33] = v75;
                    a0[17] = v74;
                    a0[1] = v73;
                    *((int *)&a0[73]) = *((int *)&(&v91)[1]);
                    *((unsigned int *)&a0[76]) = v16;
                    *((char *)a0) = v57;
                    *((char *)&a0[72]) = v91;
                    core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                    return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                }
                if (!(v2 & 1))
                {
                    while (true)
                    {
                        v2.accepted(a1, 20);
                        v57 = v2;
                        v58 = v91;
                        if (v91 != 37)
                        {
                            v58 = v91;
                            *((long long *)&a0[64]) = *((long long *)&v12);
                            v73 = (int128_t)(&v2)[1];
                            v74 = (int128_t)v5;
                            v75 = *((int128_t *)&(&v8)[1]);
                            *((int128_t *)&a0[49]) = *((int128_t *)&(&v10)[1]);
                            a0[33] = v75;
                            a0[17] = v74;
                            a0[1] = v73;
                            *((int *)&a0[73]) = *((int *)&(&v91)[1]);
                            *((unsigned int *)&a0[76]) = v16;
                            *((char *)a0) = v57;
                            *((char *)&a0[72]) = v91;
                            core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                            return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                        }
                        if ((v2 & 1) || a1.next_is(17))
                            break;
                        v2.accept(a1, 34);
                        v59 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v2);
                        v60 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v4);
                        v61 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v8);
                        v62 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v10);
                        memcpy(&v27, &v2, 16);
                        memcpy(&v28, &v4, 16);
                        memcpy(&v29, &v8, 16);
                        memcpy(&v30, &v10, 16);
                        v0 = (int)v13;
                        v1 = v14;
                        if (v91 != 37)
                        {
                            v76 = *((int *)&(&v91)[1]);
                            *((unsigned int *)&a0[76]) = v16;
                            *((unsigned int *)&a0[73]) = v76;
                            a0[48] = v30;
                            a0[32] = v29;
                            a0[16] = v28;
                            *(a0) = v27;
                            v77 = v0;
                            *((unsigned int *)&a0[68]) = v1;
                            *((unsigned int *)&a0[65]) = v77;
                            *((char *)&a0[64]) = v12;
                            *((char *)&a0[72]) = v91;
                            core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                            return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                        }
                        else if (v12 != 37)
                        {
                            v52 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
                            v53 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
                            v54 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
                            v55 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
                            v11 = v30;
                            v9 = v29;
                            v7 = v28;
                            v3 = v27;
                            v16 = v1;
                            v15 = v0;
                            v91 = v12;
                            v2 = 18;
                            v24.push(&v2, &g_830970);
                        }
                        else
                        {
                            v2.accepted(a1, 27);
                            v57 = v2;
                            v58 = v91;
                            if (v91 != 37)
                            {
                                v58 = v91;
                                *((long long *)&a0[64]) = *((long long *)&v12);
                                v73 = (int128_t)(&v2)[1];
                                v74 = (int128_t)v5;
                                v75 = *((int128_t *)&(&v8)[1]);
                                *((int128_t *)&a0[49]) = *((int128_t *)&(&v10)[1]);
                                a0[33] = v75;
                                a0[17] = v74;
                                a0[1] = v73;
                                *((int *)&a0[73]) = *((int *)&(&v91)[1]);
                                *((unsigned int *)&a0[76]) = v16;
                                *((char *)a0) = v57;
                                *((char *)&a0[72]) = v91;
                                core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                                return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                            }
                            else if ((v2 & 1))
                            {
                                v2.parse_expression(a1);
                                v63 = *((long long *)&v2);
                                memcpy(&v31, &v3, 16);
                                memcpy(&v32, &v6, 16);
                                memcpy(&v33, &v9, 16);
                                memcpy(&v34, &v10, 16);
                                memcpy(&v35, &v91, 16);
                                if (v63 == 18)
                                {
                                    a0[64] = v35;
                                    a0[48] = v34;
                                    a0[32] = v33;
                                    a0[16] = v32;
                                    *(a0) = v31;
                                    core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                                    return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                                }
                                v49 = v20;
                                v64 = v18;
                                v65 = v19;
                                v48 = v65;
                                v47 = v64;
                                v66 = v35;
                                v46 = v66;
                                v52 = ((((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&(&v2)[8])) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v91)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                                v53 = ((v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v6)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
                                v54 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&(&v8)[8])) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                                v55 = (v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&(&v10)[8])) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                                v44 = v34;
                                v42 = v33;
                                v40 = v32;
                                v38 = v31;
                                v36 = v63;
                                v24.push(&(char)v36, &g_830988);
                                v2.expect(a1, 26);
                                if (v91 != 37)
                                {
                                    v67 = *((long long *)&v2);
                                    v68 = *((int128_t *)&(&v2)[8]);
                                    v69 = *((long long *)&(&v10)[8]);
                                    v36 = (int)v13;
                                    v37 = v14;
                                    *((unsigned int *)&a0[76]) = v16;
                                    *((int *)&a0[73]) = *((int *)&(&v91)[1]);
                                    v70 = *((int128_t *)&v6);
                                    v71 = *((int128_t *)&(&v8)[8]);
                                    v72 = v36;
                                    *((unsigned int *)&a0[68]) = v37;
                                    *((unsigned int *)&a0[65]) = v72;
                                    *((unsigned long long *)a0) = v67;
                                    a0[8] = v68;
                                    a0[24] = v70;
                                    a0[40] = v71;
                                    *((unsigned long long *)&a0[56]) = v69;
                                    *((char *)&a0[64]) = v12;
                                    *((char *)&a0[72]) = v91;
                                    core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                                    return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                                }
                            }
                            else
                            {
                                v2.unexpected_token(a1);
                                v78 = *((int128_t *)&v91);
                                v45 = v78;
                                v79 = *((int128_t *)&(&v2)[8]);
                                v80 = *((int128_t *)&v6);
                                v81 = *((int128_t *)&(&v8)[8]);
                                v82 = *((int128_t *)&(&v10)[8]);
                                v43 = v82;
                                v41 = v81;
                                v39 = v80;
                                v36 = v79;
                                a0[64] = v78;
                                a0[48] = v82;
                                a0[32] = v81;
                                a0[16] = v80;
                                *(a0) = v79;
                                core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v24);
                                return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
                            }
                        }
                    }
                }
                v4 = 0;
                v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v24);
                *((int128_t *)&v2) = *((int128_t *)&v24);
                v6 = v56;
                v21.push(&v2);
            }
        }
        else
        {
            v83 = 0;
            v23 = v83;
            *((void* *)&a0[16]) = v83;
            *((int128_t *)a0) = *((int128_t *)&v21);
            *((char *)&a0[72]) = 37;
            return v51;
        }
    }
    *((long long *)&a0[64]) = *((long long *)&v12);
    v92 = (int128_t)(&v2)[1];
    v93 = (int128_t)v5;
    v94 = *((int128_t *)&(&v8)[1]);
    *((int128_t *)&a0[49]) = (int128_t)v97;
    a0[33] = v94;
    a0[17] = v93;
    a0[1] = v92;
    *((int *)&a0[73]) = *((int *)&(&v91)[1]);
    *((unsigned int *)&a0[76]) = v16;
    *((char *)a0) = v51;
    *((char *)&a0[72]) = v91;
    return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v21);
}
