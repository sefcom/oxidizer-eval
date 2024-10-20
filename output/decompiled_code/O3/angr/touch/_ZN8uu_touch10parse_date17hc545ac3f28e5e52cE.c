long long uu_touch::parse_date::hc545ac3f28e5e52c(struct_0 *a0, unsigned long long a1, char a2[2], unsigned long a3, unsigned long a4, unsigned long long a5)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0xb4]
    unsigned long v2;  // [bp-0xb0], Other Possible Types: char, unsigned long long
    char v3;  // [bp-0xac]
    unsigned long v4;  // [sp-0xa8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x98]
    unsigned int v7;  // [sp-0x84]
    void* v8;  // [sp-0x80]
    char v9;  // [bp-0x78], Other Possible Types: unsigned long long
    char v10;  // [bp-0x74]
    char v11;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    unsigned long long v14;  // [sp-0x58]
    unsigned int v15;  // [sp-0x50]
    unsigned long long v16;  // [sp-0x4c]
    unsigned int v17;  // [sp-0x44]
    unsigned int v18;  // [sp-0x40]
    unsigned long long v19;  // [sp-0x3c]
    unsigned int v20;  // [sp-0x34]
    unsigned int v22;  // edx
    unsigned int v24;  // eax
    unsigned long v25;  // r8
    unsigned long long v26;  // rdi
    void* v27;  // rsi
    unsigned long long v28;  // r9
    unsigned int v29;  // esi
    unsigned int v30;  // eax
    unsigned int v32;  // ecx
    unsigned long v33;  // r8
    unsigned long long v34;  // rdi
    void* v35;  // rsi
    unsigned long long v36;  // rax
    unsigned int v37;  // esi
    unsigned int v38;  // eax
    unsigned int v39;  // ecx
    unsigned int v40;  // ebp
    unsigned int v41;  // ebx
    unsigned long long v42;  // rdx
    unsigned long v43;  // r8
    unsigned long long v44;  // rdi
    void* v45;  // rsi
    unsigned int v46;  // r12d
    unsigned int v47;  // esi
    unsigned int v48;  // eax
    unsigned long long v49;  // r8
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    unsigned int v52;  // edx
    unsigned int v54;  // ecx
    unsigned long v55;  // r8
    unsigned long long v56;  // rdi
    void* v57;  // rsi
    unsigned int v58;  // esi
    unsigned long long v59;  // r12

    chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 20, a5);
    v22 = *((int *)&v0);
    if (v22)
    {
        v24 = *((int *)&v2);
        v25 = v22 >> 13;
        v26 = v25 - 1 & 4294967295;
        v27 = 0;
        if ((unsigned int)v25 <= 0)
        {
            v29 = (unsigned int)((1 - v25 & 4294967295) / 400) + 1;
            v26 = v26 + v29 * 400 & 4294967295;
            v27 = v29 * -146097;
        }
        a0->field_8 = *((int *)&v1) + -62135683200 + (((((v22 >> 4 & 511) + v27 & 4294967295) - (((v26 & 4294967295) * 1374389535 >> 37) + ((v26 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v26 * 1461 >> 2) & 4294967295) + ((((v26 & 4294967295) * 1374389535 >> 37) + ((v26 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        a0->field_10 = v24;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
    else
    {
        chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 17, v28);
        v30 = *((int *)&v0);
        if (!v30)
        {
            chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 20, v28);
            v30 = *((int *)&v0);
            if (!v30)
            {
                chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 14, v28);
                v30 = *((int *)&v0);
                if (!v30)
                {
                    chrono::naive::datetime::NaiveDateTime::parse_from_str::h636f254382363103(&v0, a2, a3, "%Y-%m-%d %H:%M %zsrc/uu/touch/src/touch.rs", 17, v28);
                    v30 = *((int *)&v0);
                    if (!v30)
                    {
                        v36 = chrono::naive::date::NaiveDate::parse_from_str::hdaf17c30bc3d0d4e(a2, a3, "%Y-%m-%d", 8);
                        if (!((char)v36 & 1))
                        {
                            v7 = v36 >> 32;
                            v8 = 0;
                            _ZN6chrono6offset5local5inner6offset17hf1731723e825b01dE.llvm.18354925845250161339(&v9, v7, 0, 1);
                            v38 = *((int *)&v9);
                            if (!v38)
                            {
                                chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v0, &v7, *((int *)&v10));
                                v39 = *((int *)&v0);
                                if (v39)
                                {
                                    v42 = *((long long *)&v1);
                                    v43 = v39 >> 13;
                                    v44 = v43 - 1 & 4294967295;
                                    v45 = 0;
                                    if ((unsigned int)v43 <= 0)
                                    {
                                        v47 = (unsigned int)((1 - v43 & 4294967295) / 400) + 1;
                                        v44 = v44 + v47 * 400 & 4294967295;
                                        v45 = v47 * -146097;
                                    }
                                    a0->field_8 = -62135683200 + (v42 & 4294967295) + ((((((unsigned int)(v39 >> 4) & 511) + v45 & 4294967295) - (((v44 & 4294967295) * 1374389535 >> 37) + ((v44 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v44 * 1461 >> 2) & 4294967295) + ((((v44 & 4294967295) * 1374389535 >> 37) + ((v44 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
                                    a0->field_10 = v42 >> 32;
                                    a0->field_0 = 9223372036854775812;
                                    return 9223372036854775812;
                                }
                            }
                            else if (v38 == 1)
                            {
                                v40 = *((int *)&v10);
                                v41 = *((int *)&v11);
                                chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v0, &v7, v40);
                                v46 = *((int *)&v0);
                                v14 = *((long long *)&v1);
                                chrono::naive::datetime::NaiveDateTime::checked_sub_offset::haaf3f24cd48c11e1(&v0, &v7, v41);
                                v48 = *((int *)&v0);
                                if (v48 && v46)
                                {
                                    v15 = v46;
                                    v16 = v14;
                                    v17 = v40;
                                    v18 = v48;
                                    v19 = *((long long *)&v1);
                                    v20 = v41;
                                    v9 = &v15;
                                    v11 = _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h1fb3c3f144d3f268;
                                    v12 = &v18;
                                    v13 = _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h1fb3c3f144d3f268;
                                    v0 = &anon.baab62fa9d6ba0389a8386834aaa7826.12.llvm.3656620608646900075;
                                    v2 = 2;
                                    v6 = 0;
                                    v4 = &v9;
                                    v5 = 2;
                                    core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                                }
                            }
                            v0 = &anon.baab62fa9d6ba0389a8386834aaa7826.14.llvm.3656620608646900075;
                            v2 = 1;
                            v4 = 8;
                            *((int128_t *)&v5) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                        }
                        else
                        {
                            if (a3 && a2[0] == 64)
                            {
                                if (a3 != 1 && a2[1] <= 191)
                                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v0, &a2[1], a3 - 1);
                                if (!v0)
                                {
                                    a0->field_8 = v2;
                                    a0->field_10 = 0;
                                    a0->field_0 = 9223372036854775812;
                                    return 9223372036854775812;
                                }
                            }
                            parse_datetime::parse_datetime_at_date::hacf0d25acaadafee(&v0, a1, a2, a3, v49, v28);
                            v50 = v0;
                            if (v50 != 9223372036854775810)
                            {
                                if (v50 >= 9223372036854775811 && v50)
                                    __rust_dealloc(v2);
                                if (!a3)
                                {
                                    memcpy(v59, a2, a3);
                                    a0->field_0 = 0x8000000000000000;
                                    a0->field_8 = a3;
                                    *((long long *)&a0->field_10) = 1;
                                    a0->field_18 = a3;
                                    return v51;
                                }
                                if (a3 < 0)
                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                v59 = __rust_alloc(a3, 1);
                                if (v59)
                                {
                                    v51 = memcpy(v59, a2, a3);
                                    a0->field_0 = 0x8000000000000000;
                                    a0->field_8 = a3;
                                    *((unsigned long long *)&a0->field_10) = v59;
                                    a0->field_18 = a3;
                                    return v51;
                                }
                            }
                            else
                            {
                                v52 = v2;
                                v54 = v4;
                                v55 = v52 >> 13;
                                v56 = v55 - 1 & 4294967295;
                                v57 = 0;
                                if ((unsigned int)v55 <= 0)
                                {
                                    v58 = (unsigned int)((1 - v55 & 4294967295) / 400) + 1;
                                    v56 = v56 + v58 * 400 & 4294967295;
                                    v57 = v58 * -146097;
                                }
                                v51 = *((int *)&v3) + -62135683200 + (((((v52 >> 4 & 511) + v57 & 4294967295) - (((v56 & 4294967295) * 1374389535 >> 37) + ((v56 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v56 * 1461 >> 2) & 4294967295) + ((((v56 & 4294967295) * 1374389535 >> 37) + ((v56 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
                                a0->field_8 = v51;
                                a0->field_10 = v54;
                                a0->field_0 = 9223372036854775812;
                                return v51;
                            }
                        }
                    }
                }
            }
        }
        v32 = *((int *)&v2);
        v33 = v30 >> 13;
        v34 = v33 - 1 & 4294967295;
        v35 = 0;
        if ((unsigned int)v33 <= 0)
        {
            v37 = (unsigned int)((1 - v33 & 4294967295) / 400) + 1;
            v34 = v34 + v37 * 400 & 4294967295;
            v35 = v37 * -146097;
        }
        a0->field_8 = *((int *)&v1) + -62135683200 + (((((v30 >> 4 & 511) + v35 & 4294967295) - (((v34 & 4294967295) * 1374389535 >> 37) + ((v34 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v34 * 1461 >> 2) & 4294967295) + ((((v34 & 4294967295) * 1374389535 >> 37) + ((v34 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        a0->field_10 = v32;
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
}
