long long uu_numfmt::parse_options(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x185]
    unsigned int v1;  // [bp-0x184]
    char v2;  // [bp-0x180]
    void* v3;  // [bp-0x178], Other Possible Types: char, unsigned long long
    void* v4;  // [bp-0x170], Other Possible Types: unsigned long
    void* v5;  // [bp-0x170], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x168], Other Possible Types: unsigned long long [2]
    int v7;  // [bp-0x168]
    int v8;  // [bp-0x160], Other Possible Types: char
    int v9;  // [bp-0x158]
    void* v10;  // [bp-0x148]
    unsigned long v11;  // [bp-0x140]
    unsigned short v12;  // [bp-0x138]
    unsigned long long v13;  // [bp-0x128]
    unsigned long long v14;  // [bp-0x120]
    int v15;  // [bp-0x118], Other Possible Types: char
    unsigned long long v16;  // [bp-0x118]
    int v17;  // [bp-0x110]
    unsigned long long v18[2];  // [bp-0x108]
    unsigned long long v19[2];  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    void* v21;  // [bp-0xf0], Other Possible Types: char
    int v22;  // [bp-0xe8], Other Possible Types: char
    char v23;  // [bp-0xe7]
    void* v24;  // [bp-0xe0], Other Possible Types: unsigned long long [2]
    unsigned long long v25[2];  // [bp-0xd8]
    int v26;  // [bp-0xd0]
    void* v27;  // [bp-0xd0]
    unsigned long long v28;  // [bp-0xc8]
    uint128_t v29;  // [bp-0xc0]
    int v30;  // [bp-0xb0]
    unsigned long long v31;  // [bp-0xb0]
    void* v32;  // [bp-0xa8]
    unsigned long long v33;  // [bp-0xa0]
    unsigned short v34;  // [bp-0xa0]
    int v35;  // [bp-0x98], Other Possible Types: char
    unsigned long long v36[2];  // [bp-0x88]
    void* v37;  // [bp-0x78]
    void* v38;  // [bp-0x70]
    void* v39;  // [bp-0x68]
    void* v40;  // [bp-0x60]
    int v41;  // [bp-0x58], Other Possible Types: char
    unsigned long long v42[2];  // [bp-0x48]
    char v43;  // [bp-0x40]
    unsigned long long v45[3];  // rax
    char v46;  // bpl
    unsigned long long v47[3];  // rax
    char v48;  // r13b
    unsigned long long v49[3];  // rax
    unsigned long long v50[3];  // rax
    unsigned long long v51[3];  // rax
    unsigned long long v53[3];  // rax
    unsigned long long v55[3];  // rax
    unsigned long long v56[2];  // rax
    char v57;  // r12b
    unsigned long long v58[2];  // r15
    unsigned long long v59;  // r13
    unsigned long long v60[3];  // rax
    int v61;  // xmm1
    int v62;  // xmm0
    unsigned long long v63;  // rax
    unsigned long long v64[3];  // rax
    unsigned long long v65;  // r13
    unsigned long long v66;  // r12
    unsigned int v67;  // ecx
    unsigned long long v68;  // rax
    unsigned long long v69[3];  // rax
    char v70;  // al
    char v71;  // al
    int v72;  // xmm0
    int v73;  // xmm2
    int v74;  // xmm0
    unsigned long long v75;  // rcx
    unsigned long long v76;  // rcx

    v3.try_get_one(a1, "fromkindAuto/", 4);
    v45 = "fromkindAuto/".unwrap(4, &v3);
    if (!v45)
        core::option::unwrap_failed(&g_502880); /* do not return */
    uu_numfmt::parse_unit(&v21, v45[1], v45[2]);
    v46 = v22;
    if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
    {
        v3.try_get_one(a1, "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 2);
        v47 = "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(2, &v3);
        if (!v47)
            core::option::unwrap_failed(&g_502898); /* do not return */
        uu_numfmt::parse_unit(&v21, v47[1], v47[2]);
        v48 = v22;
        if (v21 == 0x8000000000000000)
        {
            v3.try_get_one(a1, "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
            v49 = "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(9, &v3);
            if (!v49)
                core::option::unwrap_failed(&g_5028b0); /* do not return */
            uu_numfmt::parse_unit_size(&v3, v49[1], v49[2]);
            if (v3 == 0x8000000000000000)
            {
                v40 = v4;
                v3.try_get_one(a1, "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
                v50 = "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(7, &v3);
                if (!v50)
                    core::option::unwrap_failed(&g_5028c8); /* do not return */
                uu_numfmt::parse_unit_size(&v3, v50[1], v50[2]);
                if (v3 != 0x8000000000000000)
                    goto LABEL_46cbdb;
                v39 = v5;
                v3.try_get_one(a1, "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
                v51 = "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(7, &v3);
                if (!v51)
                {
                    v4 = 0;
                    goto LABEL_46cb2a;
                }
                core::num::<impl isize>::from_ascii_radix(&v3, v51[1], v51[2]);
                v4 = v5;
                if ((!v4 | v3) != 1)
                    goto LABEL_46cb2a;
                uu_numfmt::parse_options::{{closure}}(&v3, v51[1], v51[2]);
                if (v3 != 0x8000000000000000)
                    goto LABEL_46cbdb;
                v4 = v5;
LABEL_46cb2a:
                v38 = v4;
                if ((char)a1.value_source("headerfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6) == 2)
                {
                    v3.try_get_one(a1, "headerfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
                    v53 = "headerfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(6, &v3);
                    if (!v53)
                        core::option::unwrap_failed(&g_5028e0); /* do not return */
                    ::0x4655f0::core::num::<impl usize>::from_ascii_radix(&v3, v53[1], v53[2]);
                    v4 = v5;
                    if (!!v4 && !v3)
                        goto LABEL_46cc06;
                    uu_numfmt::parse_options::{{closure}}(&v3, v53[1], v53[2]);
                    if (v3 == 0x8000000000000000)
                    {
                        v4 = v5;
                        goto LABEL_46cc06;
                    }
                }
                else
                {
                    v4 = 0;
LABEL_46cc06:
                    v37 = v4;
                    v0 = v48;
                    v3.try_get_one(a1, "fieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
                    v55 = "fieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(5, &v3);
                    if (!v55)
                        core::option::unwrap_failed(&g_5028f8); /* do not return */
                    v3.into_searcher(v55[1], v55[2]);
                    v10 = 0;
                    v11 = v55[2];
                    v12 = 1;
                    if (v3.try_fold().eq())
                    {
                        v56 = 8.alloc_impl(16);
                        v57 = v0;
                        if (!v56)
                            alloc::alloc::handle_alloc_error(8, 16); /* do not return */
                        v58 = v56;
                        v56[0] = 1;
                        v56[1] = 18446744073709551615;
                        v20 = 1;
                        v59 = 1;
                        goto LABEL_46cd1a;
                    }
                    else
                    {
                        v3.from_list(v55[1], v11);
                        v59 = v5;
                        v58 = v6;
                        v57 = v0;
                        if ((v3 & 1))
                        {
                            *((void* *)&a0[8]) = v5;
                            *((unsigned long long *[2])&a0[16]) = v6;
                            *((unsigned long long *)&a0[24]) = v20;
                        }
                        else
                        {
                            v20 = *((long long *)&v8);
LABEL_46cd1a:
                            v3.try_get_one(a1, "formatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
                            v60 = "formatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(6, &v3);
                            if (v60)
                            {
                                v3.from_str(v60[1], v60[2]);
                                memcpy(&v15, &v4, 16);
                                v18[0] = *((long long *)&v8);
                                if (v3 == 2)
                                {
                                    *((unsigned long long *[2])&a0[24]) = v18;
                                    *((int128_t *)&a0[8]) = *((int128_t *)&v15);
                                    *((unsigned long long *)a0) = 2;
                                }
                                else
                                {
                                    v33 = v13;
                                    v61 = *((int128_t *)&v10);
                                    *((int128_t *)&v30) = *((int128_t *)&v12);
                                    *((void*)&v29) = v61;
                                    v26 = v9;
                                    *((int128_t *)&v22) = *((int128_t *)&v15);
                                    v25[0] = v18;
                                    v21 = v3;
                                    if (!((char)v13 & 1) || v57 == 5)
                                        goto LABEL_46ce6f;
                                    v3.to_vec("grouping cannot be combined with --toupfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 37);
                                    *((unsigned long long *[2])&a0[24]) = v6;
                                    v62 = *((int128_t *)&v3);
LABEL_46d233:
                                    a0[8] = v62;
                                    *((unsigned long long *)a0) = 2;
                                    core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v21);
                                }
                                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v59, v58);
                                return a0;
                            }
                            v34 = 0;
                            v21 = 0;
                            v24 = 0;
                            v27 = 0;
                            v28 = 1;
                            v29 = 0;
                            v31 = 1;
                            v32 = 0;
LABEL_46ce6f:
                            v3.try_get_one(a1, "delimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
                            v63 = "delimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(9, &v3);
                            v5 = 0x8000000000000000;
                            *((int128_t *)&v7) = *((int128_t *)&v43);
                            v3 = 0;
                            v15.map_or(v63, &v3);
                            memcpy(&v35, &v15, 16);
                            v36[0] = v19;
                            if (*((int *)&v15) == 1)
                            {
                                *((unsigned long long *[2])&a0[24]) = v36;
                                v62 = v35;
                                goto LABEL_46d233;
                            }
                            else
                            {
                                v14 = v59;
                                v42[0] = v36;
                                memcpy(&v41, &v35, 16);
                                v3.try_get_one(a1, "roundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
                                v64 = "roundsuffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(5, &v3);
                                if (!v64)
                                    core::option::unwrap_failed(&g_502910); /* do not return */
                                v65 = v64[1];
                                v66 = v64[2];
                                if ((char)v65.equal(v66, "upfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 2))
                                {
                                    v1 = 0;
                                }
                                else
                                {
                                    v1 = v67 & 0xffffff00 | 1;
                                    if (!(char)v65.equal(v66, "downhelpNoneshim", 4))
                                    {
                                        v1 = v67 & 0xffffff00 | 2;
                                        if (!(char)v65.equal(v66, "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9))
                                        {
                                            v1 = v67 & 0xffffff00 | 3;
                                            if (!(char)v65.equal(v66, "towards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 12))
                                            {
                                                v1 = v67 & 0xffffff00 | 4;
                                                if (!(char)v65.equal(v66, "nearestinternal error: entered unreachable code: Should be restricted by clap", 7))
                                                {
                                                    v3 = &g_502870;
                                                    v5 = 1;
                                                    v6 = &v2;
                                                    *((uint128_t *)&v8) = 0;
                                                    core::panicking::panic_fmt(&v3, &g_502928); /* do not return */
                                                }
                                            }
                                        }
                                    }
                                }
                                v3.try_get_one(a1, "suffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
                                v68 = "suffixinvalidzero-terminatedinvalid padding value invalid header value ".unwrap(6, &v3);
                                if (v68)
                                {
                                    v3.clone(v68);
                                    v18[0] = v6;
                                    *((int128_t *)&v15) = *((int128_t *)&v3);
                                }
                                else
                                {
                                    v16 = 0x8000000000000000;
                                    *((int128_t *)&v17) = *((int128_t *)&v43);
                                }
                                v3.try_get_one(a1, "invalidzero-terminatedinvalid padding value invalid header value ", 7);
                                v69 = "invalidzero-terminatedinvalid padding value invalid header value ".unwrap(7, &v3);
                                if (!v69)
                                    core::option::unwrap_failed(&g_502940); /* do not return */
                                v3.from_str(v69[1], v69[2]);
                                v70 = v3.unwrap();
                                v71 = a1.get_flag("zero-terminatedinvalid padding value invalid header value ", 15);
                                *((unsigned long long *[2])&a0[128]) = v42;
                                a0[112] = v41;
                                *((int128_t *)&a0[136]) = (int128_t)v15;
                                *((unsigned long long *[2])&a0[152]) = v18;
                                v72 = *((int128_t *)&v21);
                                v73 = (int128_t)v26;
                                *((int128_t *)&a0[16]) = *((int128_t *)&v24);
                                a0[32] = v73;
                                *((uint128_t *)&a0[48]) = v29;
                                *((int128_t *)&a0[64]) = (int128_t)v30;
                                *((unsigned long long *)&a0[80]) = v33;
                                *(a0) = v72;
                                *((unsigned long long *)&a0[88]) = v14;
                                *((unsigned long long *[2])&a0[96]) = v58;
                                *((unsigned long long *)&a0[104]) = v20;
                                *((void* *)&a0[160]) = v40;
                                *((void* *)&a0[168]) = v39;
                                *((char *)&a0[176]) = v46;
                                *((char *)&a0[177]) = v0;
                                *((void* *)&a0[184]) = v38;
                                *((void* *)&a0[192]) = v37;
                                *((char *)&a0[200]) = v71;
                                *((char *)&a0[201]) = v70;
                                *((char *)&a0[202]) = v1;
                                return a0;
                            }
                        }
                    }
                }
            }
            else
            {
LABEL_46cbdb:
                v74 = *((int128_t *)&v4);
                *((void* *)&a0[8]) = v3;
                a0[16] = v74;
            }
        }
        else
        {
            v75 = *((long long *)&v23);
            *((unsigned long long *[2])&a0[24]) = v24;
            *((unsigned long long *)&a0[17]) = v75;
            *((void* *)&a0[8]) = v21;
            *((char *)&a0[16]) = v48;
        }
    }
    else
    {
        v76 = *((long long *)&v23);
        *((unsigned long long *[2])&a0[24]) = v24;
        *((unsigned long long *)&a0[17]) = v76;
        *((void* *)&a0[8]) = v21;
        *((char *)&a0[16]) = v46;
    }
    *((unsigned long long *)a0) = 2;
    return a0;
}
