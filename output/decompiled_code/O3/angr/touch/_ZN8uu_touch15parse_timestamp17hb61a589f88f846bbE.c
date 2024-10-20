long long uu_touch::parse_timestamp::hb61a589f88f846bb(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x1a4]
    char v1;  // [bp-0x1a0], Other Possible Types: unsigned int, unsigned long
    unsigned int v2;  // [sp-0x19c]
    unsigned int v3;  // [bp-0x198], Other Possible Types: unsigned long long
    char v4;  // [bp-0x194]
    unsigned long long v5;  // [sp-0x190]
    unsigned long long v6;  // [sp-0x188]
    void* v7;  // [sp-0x180]
    void* v8;  // [bp-0x170], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v9;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x160], Other Possible Types: unsigned long long
    char v11;  // [bp-0x158], Other Possible Types: unsigned int, unsigned long
    unsigned long long v12;  // [sp-0x150], Other Possible Types: unsigned int
    unsigned long v13;  // [bp-0x14c]
    unsigned int v14;  // [sp-0x148]
    unsigned int v15;  // [sp-0x144]
    void* v16;  // [bp-0x140], Other Possible Types: unsigned int, unsigned long
    unsigned long long v17;  // [sp-0x138]
    unsigned long long v18;  // [sp-0x130]
    char v19;  // [sp-0x128]
    unsigned int v20;  // [sp-0x11c]
    unsigned long v21;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x110]
    unsigned int v23;  // [sp-0x104]
    unsigned long long v24;  // [sp-0x100]
    unsigned long v25;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0xf0]
    unsigned long long v27;  // [sp-0xe8]
    unsigned long long v28;  // [sp-0xe0]
    char v29;  // [bp-0xd8]
    char v30;  // [bp-0xd4]
    unsigned int v31;  // [sp-0xcc]
    unsigned long long v32;  // [sp-0xc8]
    char v33;  // [bp-0xc0]
    char v34;  // [bp-0xb8]
    char v35;  // [bp-0xb0]
    char v36;  // [bp-0xa8]
    char v37;  // [bp-0xa0]
    char v38;  // [bp-0x98]
    char v39;  // [bp-0x90]
    char v40;  // [bp-0x88]
    char v41;  // [bp-0x80]
    char v42;  // [bp-0x78]
    char v43;  // [bp-0x70]
    char v44;  // [bp-0x68]
    char v45;  // [bp-0x60]
    char v46;  // [bp-0x58]
    char v47;  // [bp-0x50]
    unsigned long long v52;  // r14
    void* v53;  // r12
    unsigned long long v55;  // rsi
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rdx
    unsigned long long v59;  // r15
    uint128_t v60[2];  // rax
    unsigned long long v61;  // r14
    unsigned long long v62;  // r8
    unsigned long long v63;  // rcx
    int v64;  // xmm0
    unsigned long long v65;  // r14
    unsigned long long v66;  // cc_ndep
    unsigned long long v67;  // r9
    unsigned int v68;  // esi
    unsigned int v69;  // eax
    unsigned long long v70[3];  // rax
    int v72;  // xmm0
    unsigned long long v73;  // rbp
    unsigned long long v74;  // rdx
    unsigned long long v76;  // r13
    unsigned long long v77;  // rbp
    unsigned int v78;  // r12d
    unsigned int v79;  // ecx
    unsigned int v80;  // r12d
    unsigned int v81;  // ebp
    unsigned int v82;  // eax
    unsigned long long v83;  // rax
    unsigned int v84;  // r12d
    unsigned int v85;  // r13d
    unsigned int v86;  // ebp
    unsigned int v87;  // eax
    unsigned long long v88;  // rcx
    unsigned int v89;  // ebp
    unsigned int v90;  // eax
    unsigned int v91;  // ebp
    unsigned long long v92;  // rcx
    unsigned long long v93;  // r12
    unsigned int v94;  // r13d
    unsigned int v96;  // edi
    unsigned long v97;  // rdx
    unsigned long long v98;  // rcx
    void* v99;  // rax
    unsigned int v100;  // eax

    v52 = a2;
    v53 = a1;
    v21 = a1;
    v22 = a2;
    switch ((a2 < 32 ? core::str::count::char_count_general_case::h7993e6d554b46a47(a1, a2) : core::str::count::do_count_chars::h0101af2211204216(a1, a2)))
    {
    case 8:
        chrono::offset::local::Local::now::h9676919418f603da(&v1, v55, v56);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v8, &v1, *((int *)&v4));
        v16 = (int)v8 >> 13;
        v8 = &v16;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v10 = &v21;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96a4dadc93632c03;
        v1 = &g_462800;
        v3 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v42, &v1);
        v61 = *((long long *)&v42);
        v59 = *((long long *)&v43);
        v62 = 10;
        v63 = "%Y%m%d%H%M20";
        v52 = *((long long *)&v44);
        break;
    case 10:
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96a4dadc93632c03;
        v1 = &g_691d78;
        v3 = 1;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v36, &v1);
        v61 = *((long long *)&v36);
        v59 = *((long long *)&v37);
        v62 = 10;
        v63 = "%Y%m%d%H%M20";
        v52 = *((long long *)&v38);
        break;
    case 11:
        chrono::offset::local::Local::now::h9676919418f603da(&v1, v57, v58);
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v8, &v1, *((int *)&v4));
        v16 = (int)v8 >> 13;
        v8 = &v16;
        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
        v10 = &v21;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96a4dadc93632c03;
        v1 = &g_462800;
        v3 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v39, &v1);
        v61 = *((long long *)&v39);
        v59 = *((long long *)&v40);
        v62 = 13;
        v63 = "%Y%m%d%H%M.%S%Y%m%d%H%M20";
        v52 = *((long long *)&v41);
        break;
    case 12:
        if (!v52)
        {
            v59 = 1;
            goto LABEL_540461;
        }
        if (v52 >= 0)
        {
            v59 = __rust_alloc(v52, 1);
            if (!v59)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_540461:
            memcpy(v59, v53, v52);
            v62 = 10;
            v63 = "%Y%m%d%H%M20";
LABEL_54047d:
            v65 = v61;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v29, v59, v52, v63, v62, v67);
            v68 = *((int *)&v29);
            if (!v23)
            {
                v16 = 0;
                v17 = v59;
                v18 = v52;
                v19 = 1;
                v25 = &v16;
                v26 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v1 = &g_691dc8;
                v3 = 1;
                v7 = 0;
                v5 = &v25;
                v6 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v1);
                v11 = 1;
                v70 = __rust_alloc(32, 8);
                if (!v70)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v72 = *((int128_t *)&v8);
                *((int128_t *)&v70[2]) = *((int128_t *)&v10);
                *((void*)&v70[0]) = v72;
            }
            else
            {
                v23 = v68;
                v24 = *((long long *)&v30);
                _ZN6chrono6offset5local5inner6offset17hf1731723e825b01dE.llvm.18354925845250161339(&v8, v23, v24, 1);
                switch (v69)
                {
                case 0:
                    v0 = *((int *)((char *)&v8 + 4));
                    chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v1, &v23, *((int *)((char *)&v8 + 4)));
                    if (v12)
                    {
                        v73 = *((long long *)&v2);
                        v12 = v1;
                        v13 = v73;
                        v15 = v0;
                        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v1, &v12, v0);
                        v74 = v73 >> 32;
                        if (!(v52 >= 3) || !(v2 - (unsigned int)(v2 / 60) * 60 == 59) || !(!(unsigned short)(*((char *)(v52 + v59 - 1)) ^ 48)) || !(!(unsigned short)(*((short *)(v52 + v59 - 3)) ^ 13870)))
                        {
LABEL_54083a:
                            v83 = v73 & 4294967295;
                            v28 = v74;
                            v27 = v83;
                            if ((unsigned int)v74 > 999999999)
                            {
                                v84 = v74 - 0x3b9aca00;
                                if (v84 <= 999999999)
                                {
                                    v85 = v83 + 3600;
                                }
                                else
                                {
                                    v84 = v74 - 0x77359400;
                                    v85 = v83 + 3601;
                                }
                            }
                            else if ((unsigned int)v74 >= 0)
                            {
                                v85 = v83 + 3600;
                                v84 = v74;
                            }
                            else
                            {
                                v84 = v74 + 0x3b9aca00;
                                v85 = v83 + 3599;
                            }
                            v86 = v85 / 86400;
                            v20 = v12;
                            v87 = chrono::naive::date::NaiveDate::add_days::h51259171738a8d00(v12, v86);
                            if (!v87 || (v1 = v87, v2 = v85 - v86 * 86400, v3 = v84, _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::ha2255ab3e282bcce(&v8, &v1), !v1))
                            {
                                goto LABEL_540c06;
                            }
                            else
                            {
                                v88 = v2;
                                v89 = v3;
                                if (v89 > 999999999)
                                {
                                    v90 = v89 - 0x3b9aca00;
                                    if (v90 > 999999999)
                                    {
                                        v91 = v89 - 0x77359400;
                                        v92 = v88 - 3598;
                                        break;
                                    }
                                    else
                                    {
                                        v92 = v88 - 3599;
                                        break;
                                    }
                                }
                                else if (v89 < 0)
                                {
                                    v91 = v89 + 0x3b9aca00;
                                    v92 = v88 - 3601;
                                    break;
                                }
                                else
                                {
                                    v92 = v88 - 3600;
                                    break;
                                }
                                v93 = ((unsigned int)(v92 - ((v92 * 1749024623285053783 >> 77) + (v92 * 1749024623285053783 >> 127)) * 86400 >> 63) & 86400) + v92 - ((v92 * 1749024623285053783 >> 77) + (v92 * 1749024623285053783 >> 127)) * 86400;
                                v94 = chrono::naive::date::NaiveDate::add_days::h51259171738a8d00(v1, ((v92 - v93) * 1749024623285053783 >> 127) + ((v92 - v93) * 1749024623285053783 >> 77) & 4294967295);
                                if (!v1)
                                {
                                    goto LABEL_540c06;
                                }
                                else
                                {
                                    v1 = v94;
                                    v2 = v93;
                                    v3 = v91;
                                    v31 = v1;
                                    v32 = *((long long *)&v2);
                                    chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v1, &v12, v0);
                                    chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h11e4e1dedad62a8c(&v1, &v31, (unsigned int)_$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::ha2255ab3e282bcce(&v8, &v1));
                                    v96 = v20;
                                    v97 = v96 >> 13;
                                    v98 = v97 - 1 & 4294967295;
                                    v99 = 0;
                                    if ((unsigned int)v97 <= 0)
                                    {
                                        v100 = (unsigned int)((1 - v97 & 4294967295) / 400) + 1;
                                        v98 = v98 + v100 * 400 & 4294967295;
                                        v99 = v100 * -146097;
                                    }
                                    a0->field_8 = v27 + -62135683200 + (((((v96 >> 4 & 511) + v99 & 4294967295) - (((v98 & 4294967295) * 1374389535 >> 37) + ((v98 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v98 * 1461 >> 2) & 4294967295) + ((unsigned int)(((v98 & 4294967295) * 1374389535 >> 37) + ((v98 & 4294967295) * 1374389535 >> 63)) >> 2) & 4294967295 & 4294967295) * 86400;
                                    a0->field_10 = v28;
                                    a0->field_0 = 0;
                                    if (v65)
                                    {
                                        __rust_dealloc(v59);
                                        return a0;
                                    }
                                    return a0;
                                }
                            }
                        }
                        else
                        {
                            v78 = v73 & 4294967295;
                            if ((unsigned int)v74 <= 999999999)
                            {
                                v79 = ((char)amd64g_calculate_condition(9, 20, v73, 0, v66) ? (unsigned int)(v74 + 0x3b9aca00) : (unsigned int)v74);
                                v0 = v79;
                                v80 = v78 + (-0x100 | amd64g_calculate_condition(9, 20, v73, 0, v66) & 255);
                            }
                            else if (v0 >= 0x3b9aca00)
                            {
                                v80 = v78 + 2;
                                v0 = (unsigned int)v74 - 0x77359400;
                            }
                            else
                            {
                                v0 = v74 - 0x3b9aca00;
                                v80 = v78 + 1;
                            }
                            v81 = v80 / 86400;
                            v82 = chrono::naive::date::NaiveDate::add_days::h51259171738a8d00(v12, v81);
                            if (v82)
                            {
                                v1 = v82;
                                v2 = v80 - v81 * 86400;
                                v3 = v0;
                                v0 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::ha2255ab3e282bcce(&v8, &v1);
                                v74 = v3;
                                v14 = v74;
                                v12 = *((long long *)&v1);
                                v15 = v0;
                                v73 = *((int *)((char *)&v12 + 4));
                                goto LABEL_54083a;
                            }
                            else
                            {
LABEL_540c06:
                            }
                        }
                        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
                    }
                case 1:
                    chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v1, &v23, *((int *)((char *)&v8 + 4)));
                    chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v1, &v23, (unsigned int)v9);
                    goto LABEL_5406ac;
                default:
LABEL_5406ac:
                    v8 = 0;
                    v9 = v59;
                    v10 = v52;
                    v11 = 1;
                    v16 = &v8;
                    v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v1 = &g_691dc8;
                    v3 = 1;
                    v7 = 0;
                    v5 = &v16;
                    v6 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v45, &v1);
                    v76 = *((long long *)&v46);
                    v77 = *((long long *)&v47);
                    v70 = __rust_alloc(32, 8);
                    if (!v70)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v70[0] = *((long long *)&v45);
                    v70[1] = v76;
                    v70[2] = v77;
                    *((int *)&v70[1]) = 1;
                    goto LABEL_540766;
                }
            }
LABEL_540766:
            a0->field_8 = v70;
            *((char **)&a0->field_10) = &g_691cd8;
            a0->field_0 = 1;
            if (v65)
            {
                __rust_dealloc(v59);
                return a0;
            }
            return a0;
        }
    case 13:
        v8 = &v21;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96a4dadc93632c03;
        v1 = &g_691d78;
        v3 = 1;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v33, &v1);
        v61 = *((long long *)&v33);
        v59 = *((long long *)&v34);
        v62 = 13;
        v63 = "%Y%m%d%H%M.%S%Y%m%d%H%M20";
        v52 = *((long long *)&v35);
        break;
    case 15:
        if (!v52)
        {
            v59 = 1;
            goto LABEL_54043d;
        }
        if (v52 >= 0)
        {
            v59 = __rust_alloc(v52, 1);
            if (!v59)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_54043d:
            memcpy(v59, v53, v52);
            v62 = 13;
            v63 = "%Y%m%d%H%M.%S%Y%m%d%H%M20";
            goto LABEL_54047d;
        }
    default:
        v16 = 0;
        v17 = v53;
        v18 = v52;
        v19 = 1;
        v25 = &v16;
        v26 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_691db8;
        v3 = 1;
        v7 = 0;
        v5 = &v25;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v1);
        v11 = 1;
        v60 = __rust_alloc(32, 8);
        if (v60)
        {
            v64 = *((int128_t *)&v8);
            v60[1] = *((int128_t *)&v10);
            *((void*)&v60[0]) = v64;
            a0->field_8 = v60;
            *((char **)&a0->field_10) = &g_691cd8;
            a0->field_0 = 1;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
