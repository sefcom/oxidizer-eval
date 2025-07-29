long long uu_numfmt::parse_options(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x201]
    char v1;  // [bp-0x200]
    int v2;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v3;  // [bp-0x1f8]
    int v4;  // [bp-0x1f0]
    unsigned long long v5;  // [bp-0x1e8]
    unsigned long long v6;  // [bp-0x1e0]
    void* v7;  // [bp-0x1d8], Other Possible Types: char, unsigned long long
    int v8;  // [bp-0x1d8]
    unsigned long long v9[3];  // [bp-0x1d0], Other Possible Types: unsigned long
    unsigned long long v10[3];  // [bp-0x1d0], Other Possible Types: unsigned long long
    char v11;  // [bp-0x1d0]
    int v12;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    char *v13;  // [bp-0x1c8]
    int v14;  // [bp-0x1c0], Other Possible Types: char
    int v15;  // [bp-0x1b8]
    int v16;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long v17;  // [bp-0x1a0]
    unsigned short v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x188]
    char v20;  // [bp-0x180]
    unsigned long long v21;  // [bp-0x170]
    int v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x158]
    char v24;  // [bp-0x150]
    unsigned long long v25;  // [bp-0x140]
    char v26;  // [bp-0x138]
    void* v27;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x138]
    int v29;  // [bp-0x130]
    unsigned long long v30;  // [bp-0x128], Other Possible Types: unsigned long
    unsigned long long v31;  // [bp-0x120]
    int v32;  // [bp-0x118]
    void* v33;  // [bp-0x118]
    unsigned long long v34;  // [bp-0x110]
    uint128_t v35;  // [bp-0x108]
    int v36;  // [bp-0xf8]
    unsigned long long v37;  // [bp-0xf8]
    void* v38;  // [bp-0xf0]
    unsigned long long v39;  // [bp-0xe8]
    unsigned short v40;  // [bp-0xe8]
    int v41;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v42[2];  // [bp-0xd0]
    unsigned long long v43;  // [bp-0xc8]
    int v44;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v45;  // [bp-0xa8]
    unsigned long long v46[3];  // [bp-0x98]
    unsigned long long v47[3];  // [bp-0x90]
    int v48;  // [bp-0x88], Other Possible Types: char
    unsigned long long v49;  // [bp-0x78]
    int v50;  // [bp-0x68], Other Possible Types: char
    int v51;  // [bp-0x58], Other Possible Types: char
    char v52;  // [bp-0x40]
    unsigned long long v54[3];  // rax
    char v55;  // bpl
    unsigned long long v56[3];  // rax
    char v57;  // r13b
    unsigned long long v58[3];  // rax
    int v59;  // xmm0
    unsigned long long v60[3];  // rax
    unsigned long long v61[3];  // rax
    unsigned long long v62[3];  // r15
    unsigned long long v63[3];  // rdx
    unsigned long long v64[3];  // rdx
    unsigned long long v65[3];  // rdx
    unsigned long long v66[3];  // rax
    unsigned long long v67[3];  // rax
    unsigned long long v68[2];  // rax
    char v69;  // r15b
    unsigned long long v70[3];  // rax
    int v71;  // xmm1
    int v72;  // xmm0
    unsigned long long v73;  // rax
    unsigned long long v74[3];  // rax
    unsigned long long v75;  // r15
    unsigned long long v76;  // r12
    char v77;  // r13b
    unsigned long long v78;  // rax
    unsigned long long v79[3];  // rax
    char v80;  // al
    char v81;  // al
    int v82;  // xmm1
    int v83;  // xmm2
    unsigned long long v84;  // rcx
    unsigned long long v85;  // rcx

    v7.try_get_one(a1, "fromkindAuto/", 4);
    v54 = "fromkindAuto/".unwrap(4, &v7);
    if (!v54)
        core::option::unwrap_failed(&g_58e0d8); /* do not return */
    uu_numfmt::parse_unit(&v26, v54[1], v54[2]);
    v55 = v26;
    if ((char)(((0 ^ v28) & (0 ^ -(v28))) >> 63))
    {
        v7.try_get_one(a1, "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutil", 2);
        v56 = "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutil".unwrap(2, &v7);
        if (!v56)
            core::option::unwrap_failed(&g_58e0f0); /* do not return */
        uu_numfmt::parse_unit(&v26, v56[1], v56[2]);
        v57 = v26;
        if (v28 == 0x8000000000000000)
        {
            v7.try_get_one(a1, "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils)", 9);
            v58 = "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils)".unwrap(9, &v7);
            if (!v58)
                core::option::unwrap_failed(&g_58e108); /* do not return */
            uu_numfmt::parse_unit_size(&v7, v58[1], v58[2]);
            v59 = *((int128_t *)&v11);
            if (v7 == 0x8000000000000000)
            {
                memcpy(&v51, &v11, 16);
                v7.try_get_one(a1, "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0num", 7);
                v60 = "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0num".unwrap(7, &v7);
                if (!v60)
                    core::option::unwrap_failed(&g_58e120); /* do not return */
                uu_numfmt::parse_unit_size(&v7, v60[1], v60[2]);
                v59 = *((int128_t *)&v11);
                if (!(v7 == 0x8000000000000000))
                    goto LABEL_4a98ea;
                memcpy(&v50, &v11, 16);
                v7.try_get_one(a1, "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-abo", 7);
                v61 = "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-abo".unwrap(7, &v7);
                if (v61)
                {
                    v62 = v61;
                    ::0x4a73d0::core::num::<impl i64>::from_str_radix(&v7, v61[1], v61[2]);
                    v63 = v10;
                    if (!v7)
                        v64 = v63;
                    else
                        v64 = v62;
                    v9[0] = v10;
                    v65 = v63;
                    if ((!v64 | v7) == 1)
                    {
                        uu_numfmt::parse_options::{{closure}}(&v7, v62[1], v62[2]);
                        if (!(v7 == 0x8000000000000000))
                            goto LABEL_4a98e5;
                        v9[0] = v10;
                        v65[0] = v10;
                    }
                }
                else
                {
                    v65 = 0;
                }
                v47[0] = v65;
                if ((char)a1.value_source("headerfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfm", 6) == 2)
                {
                    v7.try_get_one(a1, "headerfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfm", 6);
                    v66 = "headerfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfm".unwrap(6, &v7);
                    if (!v66)
                        core::option::unwrap_failed(&g_58e138); /* do not return */
                    ::0x4a7580::core::num::<impl u64>::from_str_radix(&v7, v66[1], v66[2]);
                    if (!v9 || v7)
                    {
                        uu_numfmt::parse_options::{{closure}}(&v7, v66[1], v66[2]);
                        if (v7 != 0x8000000000000000)
                        {
LABEL_4a98e5:
                            v59 = *((int128_t *)&v9);
                            goto LABEL_4a98ea;
                        }
                    }
                }
                else
                {
                    v9 = 0;
                }
                v46[0] = v9;
                v0 = v57;
                v7.try_get_one(a1, "fieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-afte", 5);
                v67 = "fieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-afte".unwrap(5, &v7);
                if (!v67)
                    core::option::unwrap_failed(&g_58e150); /* do not return */
                v7.into_searcher(v67[1], v67[2]);
                v16 = 0;
                v17 = v67[2];
                v18 = 1;
                if (v7.try_fold().eq())
                {
                    v68 = 16.alloc_impl();
                    v69 = v0;
                    if (!v68)
                        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
                    v68[0] = 1;
                    v68[1] = 18446744073709551615;
                    v41 = 1;
                    v42[0] = v68;
                    v43 = 1;
                    goto LABEL_4a992e;
                }
                else
                {
                    v7.from_list(v67[1], v17);
                    memcpy(&v26, &(char)v9, 16);
                    v30 = *((long long *)&v14);
                    v69 = v0;
                    if ((v7 & 1))
                    {
                        a0->field_10[1] = v30;
                        *((int128_t *)&a0->field_8) = *((int128_t *)&v28);
                    }
                    else
                    {
                        v43 = v30;
                        *((int128_t *)&v41) = *((int128_t *)&v28);
LABEL_4a992e:
                        v7.try_get_one(a1, "formatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-hel", 6);
                        v70 = "formatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-hel".unwrap(6, &v7);
                        if (v70)
                        {
                            v7.from_str(v70[1], v70[2]);
                            memcpy(&v2, &(char)v9, 16);
                            v5 = *((long long *)&v14);
                            if (v7 == 2)
                            {
                                a0->field_10[1] = v5;
                                *((int128_t *)&a0->field_8) = *((int128_t *)&v2);
                                a0->field_0 = 2;
                            }
                            else
                            {
                                v39 = v19;
                                v71 = *((int128_t *)&v16);
                                *((int128_t *)&v36) = *((int128_t *)&v18);
                                *((void*)&v35) = v71;
                                v32 = v15;
                                *((int128_t *)&v29) = *((int128_t *)&v2);
                                v31 = v5;
                                v27 = v7;
                                if (v69 == 5 || !((char)v19 & 1))
                                    goto LABEL_4a9a13;
                                uucore::mods::locale::get_message(&v7, "numfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimiternumfmt-help-f", 48);
                                a0->field_10[1] = v12;
                                v72 = *((int128_t *)&v7);
LABEL_4a9b48:
                                *((void*)&a0->field_8) = v72;
                                a0->field_0 = 2;
                                ::0x4a7b70::core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v27);
                            }
                            core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::ranges::Range>>(&v41);
                            return a0;
                        }
                        v40 = 0;
                        v27 = 0;
                        v30 = 0;
                        v33 = 0;
                        v34 = 1;
                        v35 = 0;
                        v37 = 1;
                        v38 = 0;
LABEL_4a9a13:
                        v7.try_get_one(a1, "delimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfm", 9);
                        v73 = "delimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfm".unwrap(9, &v7);
                        v10 = 0x8000000000000000;
                        *((int128_t *)&v12) = *((int128_t *)&v52);
                        v7 = 0;
                        v2.map_or(v73, &v7);
                        memcpy(&v44, &v2, 16);
                        v45 = v6;
                        if ((v2 & 1))
                        {
                            a0->field_10[1] = v45;
                            v72 = v44;
                            goto LABEL_4a9b48;
                        }
                        else
                        {
                            v49 = v45;
                            memcpy(&v48, &v44, 16);
                            v7.try_get_one(a1, "roundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXn", 5);
                            v74 = "roundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXn".unwrap(5, &v7);
                            if (!v74)
                                core::option::unwrap_failed(&g_58e168); /* do not return */
                            v75 = v74[1];
                            v76 = v74[2];
                            if (!(char)v75.equal(v76, "upfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 2))
                            {
                                v77 = 1;
                                if (!(char)v75.equal(v76, "downhelpNoneshimname", 4))
                                {
                                    v77 = 2;
                                    if (!(char)v75.equal(v76, "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9))
                                    {
                                        v77 = 3;
                                        if (!(char)v75.equal(v76, "towards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 12))
                                        {
                                            v77 = 4;
                                            if (!(char)v75.equal(v76, "nearestinternal error: entered unreachable code: Should be restricted by clap", 7))
                                            {
                                                v7 = &g_58e0c8;
                                                v10 = 1;
                                                v13 = &v1;
                                                *((uint128_t *)&v14) = 0;
                                                core::panicking::panic_fmt(&v7, &g_58e180); /* do not return */
                                            }
                                        }
                                    }
                                }
                            }
                            v7.try_get_one(a1, "suffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt", 6);
                            v78 = "suffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt".unwrap(6, &v7);
                            if (v78)
                            {
                                v7.clone(v78);
                                v5 = v12;
                                *((int128_t *)&v2) = *((int128_t *)&v7);
                            }
                            else
                            {
                                v3 = 0x8000000000000000;
                                *((int128_t *)&v4) = *((int128_t *)&v52);
                            }
                            v7.try_get_one(a1, "invalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-", 7);
                            v79 = "invalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-".unwrap(7, &v7);
                            if (!v79)
                                core::option::unwrap_failed(&g_58e198); /* do not return */
                            v7.from_str(v79[1], v79[2]);
                            v80 = v7.unwrap();
                            v81 = a1.get_flag("zero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimit", 15);
                            v21 = v43;
                            memcpy(&v20, &v41, 16);
                            v22 = v48;
                            v23 = v49;
                            memcpy(&v24, &v2, 16);
                            v25 = v5;
                            v82 = *((int128_t *)&v30);
                            v83 = (int128_t)v32;
                            *((int128_t *)&v8) = *((int128_t *)&v27);
                            v12 = v82;
                            v15 = v83;
                            *((uint128_t *)&v16) = v35;
                            memcpy(&v18, &(char)v37, 16);
                            v19 = v39;
                            memcpy(a0, &v7, 160);
                            *((unsigned long long *)&a0->field_a0) = (unsigned long long)v50 CONCAT (unsigned long long)v51;
                            a0->field_b0 = v55;
                            a0->field_b1 = v0;
                            a0->field_b8 = &v47[0];
                            a0->field_c0 = &v46[0];
                            a0->field_c8 = v81;
                            a0->field_c9 = v80;
                            a0->field_ca = v77;
                            return a0;
                        }
                    }
                }
            }
            else
            {
LABEL_4a98ea:
                *((unsigned long long *)&a0->field_8) = v7;
                *((void*)&a0->field_10[0]) = v59;
            }
        }
        else
        {
            v84 = (long long)v29;
            a0->field_10[1] = v30;
            *((unsigned long long *)((char *)&a0->field_10[0] + 1)) = v84;
            *((unsigned long long *)&a0->field_8) = v28;
            *((char *)&a0->field_10[0]) = v57;
        }
    }
    else
    {
        v85 = (long long)v29;
        a0->field_10[1] = v30;
        *((unsigned long long *)((char *)&a0->field_10[0] + 1)) = v85;
        *((unsigned long long *)&a0->field_8) = v28;
        *((char *)&a0->field_10[0]) = v55;
    }
    a0->field_0 = 2;
    return a0;
}
