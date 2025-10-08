void fish::text_face::parse_text_face_and_options(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x240]
    unsigned int v2;  // [bp-0x23c]
    void* v3;  // [bp-0x238]
    unsigned int v5;  // [bp-0x22c]
    unsigned int v7;  // [bp-0x228]
    unsigned int v9;  // [bp-0x224]
    unsigned int v10;  // [bp-0x220]
    unsigned int v11;  // [bp-0x220]
    unsigned int v12;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned int v13;  // [bp-0x218]
    unsigned int v15;  // [bp-0x20c]
    void* v16;  // [bp-0x208]
    unsigned long long v17;  // [bp-0x200]
    void* v18;  // [bp-0x1f8]
    void* v19;  // [bp-0x1f0]
    unsigned long long v20;  // [bp-0x1e8]
    void* v21;  // [bp-0x1e0]
    unsigned long long v22;  // [bp-0x1d8]
    void* v23;  // [bp-0x1c8]
    void* v24;  // [bp-0x1c0]
    unsigned long long v25;  // [bp-0x1b8]
    void* v26;  // [bp-0x1b0]
    unsigned long long v27;  // [bp-0x1a0]
    unsigned long long v28;  // [bp-0x198]
    unsigned long v29;  // [bp-0x190]
    unsigned long long v30;  // [bp-0x188]
    unsigned long long v31;  // [bp-0x180]
    unsigned long long v32;  // [bp-0x178]
    int v33;  // [bp-0x170]
    unsigned long long v34;  // [sp-0x168]
    unsigned long long v35;  // [sp-0x160]
    void* v36;  // [bp-0x158]
    uint128_t v37;  // [bp-0x150]
    unsigned int v38;  // [bp-0x140]
    unsigned short v39;  // [bp-0x13c]
    char v40;  // [bp-0x13a]
    unsigned long long v41;  // [bp-0x138]
    unsigned long long v42;  // [bp-0x130]
    unsigned int v43;  // [bp-0x128]
    char v44;  // [bp-0x124]
    unsigned long long v45;  // [bp-0x120]
    unsigned long long v46;  // [bp-0x118]
    unsigned int v47;  // [bp-0x110]
    char v48;  // [bp-0x10c]
    unsigned long long v49;  // [bp-0x108]
    unsigned long long v50;  // [bp-0x100]
    unsigned int v51;  // [bp-0xf8]
    char v52;  // [bp-0xf4]
    unsigned long long v53;  // [bp-0xf0]
    unsigned long long v54;  // [bp-0xe8]
    unsigned int v55;  // [bp-0xe0]
    char v56;  // [bp-0xdc]
    unsigned long long v57;  // [bp-0xd8]
    unsigned long long v58;  // [bp-0xd0]
    unsigned int v59;  // [bp-0xc8]
    char v60;  // [bp-0xc4]
    unsigned long long v61;  // [bp-0xc0]
    unsigned long long v62;  // [bp-0xb8]
    unsigned int v63;  // [bp-0xb0]
    char v64;  // [bp-0xac]
    unsigned long long v65;  // [bp-0xa8]
    unsigned long long v66;  // [bp-0xa0]
    unsigned int v67;  // [bp-0x98]
    char v68;  // [bp-0x94]
    unsigned long long v69;  // [bp-0x90]
    unsigned long long v70;  // [bp-0x88]
    unsigned int v71;  // [bp-0x80]
    char v72;  // [bp-0x7c]
    unsigned long long v73;  // [bp-0x78]
    unsigned long long v74;  // [bp-0x70]
    unsigned int v75;  // [bp-0x68]
    char v76;  // [bp-0x64]
    unsigned long long v82;  // rbx
    unsigned long long v83;  // rdx
    unsigned int v84;  // ecx
    char v85;  // bl
    unsigned long long v101;  // rdx
    unsigned int v106;  // eax
    unsigned long v108;  // rax
    unsigned long long v109;  // rax
    char *v110;  // rdi
    unsigned long long v111;  // rdx
    unsigned long long v113;  // r12
    unsigned long long v115;  // r12
    unsigned long long v116;  // rbp
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    unsigned long long v119;  // rax
    unsigned long long v120;  // rax
    void* v121;  // r13
    unsigned long long v122;  // r14
    unsigned long long v123;  // r12
    unsigned long long v124[2];  // rax
    unsigned long long v125;  // r13
    unsigned long v126;  // rbx
    unsigned long long v127;  // r12
    unsigned long long v128;  // rax
    unsigned long long v129;  // rax
    unsigned int v130;  // eax

    v82 = ((char)a3 ^ 1) * 2;
    v41 = "b";
    v42 = 10;
    v43 = 98;
    v44 = 1;
    v45 = "u";
    v46 = 15;
    v47 = 2;
    v48 = 1;
    v49 = "b";
    v50 = 4;
    v51 = 111;
    v52 = 0;
    v53 = "u";
    v54 = 9;
    v55 = 117;
    v56 = 2;
    v57 = "i";
    v58 = 7;
    v59 = 105;
    v60 = 0;
    v61 = "d";
    v62 = 3;
    v63 = 100;
    v64 = 0;
    v65 = "r";
    v66 = 7;
    v67 = 114;
    v68 = 0;
    v69 = "h";
    v70 = 4;
    v71 = 104;
    v72 = 0;
    v73 = "p";
    v74 = 12;
    v75 = 99;
    v76 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    v16 = 0;
    v17 = 1;
    v18 = 0;
    v28 = "b";
    v29 = v82 ^ 11;
    v30 = 9 - v82.index(&v41);
    v31 = v83;
    v32 = 4;
    *((uint128_t *)&v33) = 0;
    v36 = 0;
    v38 = 63;
    v40 = 1;
    v39 = 0;
    v24 = 0;
    v37 = 0;
    v25 = 8;
    v26 = 0;
    v15 = a3;
    if (a3)
    {
        v12 = &g_14e2cc8;
        v9 = 0;
        v7 = 0;
        v5 = 0;
        v84 = 0;
    }
    else
    {
        v9 = 0;
        v12 = &g_14e2cc8;
        v7 = 0;
        v5 = 0;
        v0 = 0;
    }
    while (true)
    {
        v106 = v24.next_opt();
        if (v106 != 0x110000)
        {
            switch (v106)
            {
            case 2:
                if (!v34)
                    goto LABEL_1417269;
                v109 = v34.from_wstr(v35);
                v110 = &v16;
                v111 = &g_14e2ce0;
                goto LABEL_1416dde;
            case 58: case 59: case 63:
                continue;
            case 98:
                if (v34)
                {
                    v109 = v34.from_wstr(v35);
                    v110 = &v19;
                    v111 = &g_14e2cb0;
LABEL_1416dde:
                    if ((char)v109 != 4)
                    {
                        v110.push(v109 & 4294967295, v111);
                        continue;
                    }
                }
                else
                {
                    v12 = &g_14e2c98;
LABEL_1417269:
                    core::option::unwrap_failed(v12); /* do not return */
                }
            case 99:
                v101 = &g_14e2d10;
                core::panicking::panic("assertion failed: is_builtins", 28, v101); /* do not return */
            case 100:
                v7 = (unsigned int)v108 & 0xffffff00 | 1;
                continue;
            case 105:
                v5 = (unsigned int)v108 & 0xffffff00 | 1;
                continue;
            case 111:
                v0 = (unsigned int)v108 & 0xffffff00 | 1;
                continue;
            case 114:
                v9 = (unsigned int)v108 & 0xffffff00 | 1;
                continue;
            case 117:
                if (!v34)
                    v113 = "s";
                else
                    v113 = v34;
                v115 = v113;
                if (!v34)
                    v35 = 6;
                v116 = v115 + v35 * 4;
                if (!v115.eq_by(v116, "singledoublecurlydotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "doublecurlydotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs"))
                {
                    v117 = v115.eq_by(v116, "doublecurlydotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "curlydotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs");
                    if (!(char)v117)
                    {
                        v118 = v115.eq_by(v116, "curlydotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "dotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs");
                        if (!(char)v118)
                        {
                            v119 = v115.eq_by(v116, "dotteddashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "dashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs");
                            if (!(char)v119)
                            {
                                v120 = v115.eq_by(v116, "dashedresetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "resetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs");
                                if ((char)v120)
                                {
                                    v2 = (unsigned int)v120 & 0xffffff00 | 4;
                                    continue;
                                }
                            }
                            else
                            {
                                v2 = (unsigned int)v119 & 0xffffff00 | 3;
                                continue;
                            }
                        }
                        else
                        {
                            v2 = (unsigned int)v118 & 0xffffff00 | 2;
                            continue;
                        }
                    }
                    else
                    {
                        v2 = (unsigned int)v117 & 0xffffff00 | 1;
                        continue;
                    }
                }
                else
                {
                    v2 = 0;
                    continue;
                }
            case 104:
                goto LABEL_0x141710c;
            }
        }
        else
        {
            v121 = v36;
            v122 = v27 - v121;
            if (v27 < v121)
                core::slice::index::slice_start_index_len_fail(v121, v27, &g_14e2da0); /* do not return */
            v12 = fish::text_face::parse_text_face_and_options::{{closure}}(&v19);
            v10 = fish::text_face::parse_text_face_and_options::{{closure}}(&v16);
            v124 = a1 + v121 * 16;
            if ((v85 & 1))
            {
                *((unsigned long long *[2])v3) = v124;
                *((unsigned long long *)&v3[8]) = v122;
                *((unsigned int *)&v3[16]) = v13;
                *((unsigned int *)&v3[20]) = v11;
                *((char *)&v3[24]) = v0;
                *((char *)&v3[25]) = v5;
                *((char *)&v3[26]) = v7;
                *((char *)&v3[27]) = v9;
                *((char *)&v3[28]) = v2;
            }
            else if ((v27 != v121 & (char)v15) && fish::text_face::parse_text_face_and_options::{{closure}}(v124[0], v124[1]))
            {
                a0->field_18 = 3;
            }
            else
            {
                v22 = v122.with_capacity_in(1, 4, &g_14e2d70);
                v23 = 0;
                if (v27 != v121)
                {
                    if ((char)v15)
                    {
                        v125 = v121 * 16;
                        do
                        {
                            if (*((long long *)(a1 + v125)).eq_by(*((long long *)(a1 + v125)) + *((long long *)(a1 + v125 + 8)) * 4, "resetpthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs", "pthread_atfork() failure: threads::init() must only be called once (at startup)!src/threads.rs"))
                                continue;
                            v126 = *((long long *)(a1 + v125));
                            v127 = *((long long *)(a1 + v125 + 8));
                            v128 = v126.from_wstr(v127);
                            if ((char)v128 != 4)
                            {
                                v22.push(v128 & 4294967295, &g_14e2d88);
                            }
                            else
                            {
                                *((unsigned long long *)v3) = 2;
                                *((unsigned int *)&v3[8]) = v126;
                                *((unsigned int *)&v3[12]) = v126 >> 32;
                                *((unsigned long long *)&v3[16]) = v127;
                                *((char *)&v3[24]) = 5;
                                core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v22, v83);
                                goto LABEL_1417027;
                            }
                            v125 += 16;
                        } while (v27 * 16 != v125);
                        goto LABEL_1417027;
                    }
                    else
                    {
                        do
                        {
                            v129 = *((long long *)(a1 + v123)).from_wstr(*((long long *)(a1 + v123 + 8)));
                            if ((char)v129 != 4)
                                v22.push(v129 & 4294967295, &g_14e2d88);
                            v123 += 16;
                        } while (v27 * 16 != v123);
                    }
                }
                v130 = fish::text_face::parse_text_face_and_options::{{closure}}(&v22);
                *((char *)v3) = v0;
                *((char *)&v3[1]) = v5;
                *((char *)&v3[2]) = v7;
                *((char *)&v3[3]) = v9;
                *((char *)&v3[4]) = v2;
                *((unsigned int *)&v3[5]) = v130;
                *((unsigned int *)&v3[9]) = v13;
                *((unsigned int *)&v3[13]) = v11;
                *((char *)&v3[24]) = 2;
            }
LABEL_1417027:
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v24);
            return;
        }
    }
}
