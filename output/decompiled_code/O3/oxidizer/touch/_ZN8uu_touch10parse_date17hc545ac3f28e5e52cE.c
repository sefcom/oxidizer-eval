fn uu_touch::parse_date(a0: void*, a1: u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xb8], Other Possible Types: Enum, struct40
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [bp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: i32;  // [sp-0x84]
    let v6: i64;  // [sp-0x80]
    let v7: i8;  // [bp-0x78]
    let v8: i8;  // [bp-0x74]
    let v9: i64;  // [bp-0x70]
    let v10: i64;  // [sp-0x68]
    let v11: i64;  // [sp-0x60]
    let v12: i64;  // [sp-0x58]
    let v13: i32;  // [sp-0x50]
    let v14: i64;  // [sp-0x4c]
    let v15: i32;  // [sp-0x44]
    let v16: i32;  // [sp-0x40]
    let v17: i64;  // [sp-0x3c]
    let v18: i32;  // [sp-0x34]
    let v20: i32;  // edx
    let v22: i32;  // eax
    let v23: i64;  // r8
    let v24: i64;  // rdi
    let v25: i64;  // rsi
    let v26: i64;  // r9
    let v27: i32;  // esi
    let v28: i32;  // eax
    let v30: i32;  // ecx
    let v31: i64;  // r8
    let v32: i64;  // rdi
    let v33: i64;  // rsi
    let v34: i64;  // rax
    let v35: i32;  // esi
    let v36: i32;  // eax
    let v37: i32;  // ecx
    let v38: i32;  // ebp
    let v39: i32;  // ebx
    let v40: i64;  // rdx
    let v41: i64;  // r8
    let v42: i64;  // rdi
    let v43: i64;  // rsi
    let v44: i32;  // r12d
    let v45: i32;  // esi
    let v46: i32;  // eax
    let v47: i64;  // r8
    let v49: i64;  // rax
    let v50: i32;  // edx
    let v52: i32;  // ecx
    let v53: i64;  // r8
    let v54: i64;  // rdi
    let v55: i64;  // rsi
    let v56: i32;  // esi
    let v58: i64;  // r12

    v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, &g_46b1bd, 20, a5);
    v20 = v0;
    if v20 {
        v22 = *((&v0 as &char + 8) as &i32);
        v23 = v20 >> 13;
        v24 = v23 - 1 & 4294967295;
        v25 = 0;
        if v23 <= 0 {
            v27 = (1 - v23 & 4294967295) / 400 + 1;
            v24 = v24 + v27 * 400 & 4294967295;
            v25 = v27 * -146097;
        }
        *((a0 + 8) as &u64) = *((&v0 as &char + 4) as &i32) + -62135683200 + (((((v20 >> 4 & 511) + v25 & 4294967295) - (((v24 & 4294967295) * 1374389535 >> 37) + ((v24 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + (v24 * 1461 >> 2) & 4294967295) + ((((v24 & 4294967295) * 1374389535 >> 37) + ((v24 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        *((a0 + 16) as &i32) = v22;
        *(a0 as &i64) = 9223372036854775812;
        return 9223372036854775812;
    } else {
        v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, &g_46b1d1, 17, v26);
        v28 = v0;
        if !v28 {
            v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, &g_46b1e2, 20, v26);
            v28 = v0;
            if !v28 {
                v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, &g_46b1f6, 14, v26);
                v28 = v0;
                if !v28 {
                    v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, &g_46b204, 17, v26);
                    v28 = v0;
                    if !v28 {
                        v34 = chrono::naive::date::NaiveDate::parse_from_str(a2, a3, &g_459ed8, 8);
                        if !(v34 & 1) {
                            v5 = v34 >> 32;
                            v6 = 0;
                            chrono::offset::local::inner::offset(&v7, v5, 0, 1);
                            v36 = v7;
                            if !v36 {
                                v0 = chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v5, v8);
                                v37 = v0;
                                if v37 {
                                    v40 = *((&v0 as &char + 4) as &i64);
                                    v41 = v37 >> 13;
                                    v42 = v41 - 1 & 4294967295;
                                    v43 = 0;
                                    if v41 <= 0 {
                                        v45 = (1 - v41 & 4294967295) / 400 + 1;
                                        v42 = v42 + v45 * 400 & 4294967295;
                                        v43 = v45 * -146097;
                                    }
                                    *((a0 + 8) as &u64) = -62135683200 + (v40 & 4294967295) + (((((v37 >> 4 & 511) + v43 & 4294967295) - (((v42 & 4294967295) * 1374389535 >> 37) + ((v42 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + (v42 * 1461 >> 2) & 4294967295) + ((((v42 & 4294967295) * 1374389535 >> 37) + ((v42 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
                                    *((a0 + 16) as &i32) = v40 >> 32;
                                    *(a0 as &i64) = 9223372036854775812;
                                    return 9223372036854775812;
                                }
                            } else if v36 == 1 {
                                v38 = v8;
                                v39 = v9;
                                v0 = chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v5, v38);
                                v44 = v0;
                                v12 = *((&v0 as &char + 4) as &i64);
                                v0 = chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v5, v39);
                                v46 = v0;
                                if v46 && v44 {
                                    v13 = v44;
                                    v14 = v12;
                                    v15 = v38;
                                    v16 = v46;
                                    v17 = *((&v0 as &char + 4) as &i64);
                                    v18 = v39;
                                    v7 = &v13;
                                    v9 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
                                    v10 = &v16;
                                    v11 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
                                    v0 = "Ambiguous local time, ranging from ";
                                    v1 = 2;
                                    v4 = 0;
                                    v2 = &v7;
                                    v3 = 2;
                                    v0 = core::panicking::panic_fmt();
                                }
                            }
                            v0 = "No such local time";
                            v1 = 1;
                            v2 = 8;
                            v3 = 0;
                            vvar_678{stack -184} = core::panicking::panic_fmt();
                        } else {
                            if a3 && *(a2 as &i8) == 64 {
                                if a3 != 1 && *((a2 + 1) as &i8) <= 191 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                v0 = core::num::<impl core::str::traits::FromStr for i64>::from_str(a2 + 1, a3 - 1);
                                if !v0 {
                                    *((a0 + 8) as &i64) = v1;
                                    *((a0 + 16) as &i32) = 0;
                                    *(a0 as &i64) = 9223372036854775812;
                                    return 9223372036854775812;
                                }
                            }
                            v0 = parse_datetime::parse_datetime_at_date(a1, a2, a3, v47, v26);
                            if v0 != 9223372036854775810 {
                                v49 = memcpy(v58, a2, a3);
                                *(a0 as &i64) = 0x8000000000000000;
                                *((a0 + 8) as &i64) = a3;
                                *((a0 + 16) as &i64) = v58;
                                *((a0 + 24) as &i64) = a3;
                                return v49;
                            }
                            v50 = *((&v0 as &char + 8) as &i32);
                            v52 = *((&v0 as &char + 16) as &i32);
                            v53 = v50 >> 13;
                            v54 = v53 - 1 & 4294967295;
                            v55 = 0;
                            if v53 <= 0 {
                                v56 = (1 - v53 & 4294967295) / 400 + 1;
                                v54 = v54 + v56 * 400 & 4294967295;
                                v55 = v56 * -146097;
                            }
                            *((a0 + 8) as &u64) = *((&v0 as &char + 12) as &i32) + -62135683200 + (((((v50 >> 4 & 511) + v55 & 4294967295) - (((v54 & 4294967295) * 1374389535 >> 37) + ((v54 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + (v54 * 1461 >> 2) & 4294967295) + ((((v54 & 4294967295) * 1374389535 >> 37) + ((v54 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
                            *((a0 + 16) as &i32) = v52;
                            *(a0 as &i64) = 9223372036854775812;
                            return v49;
                        }
                    }
                }
            }
        }
        v30 = *((&v0 as &char + 8) as &i32);
        v31 = v28 >> 13;
        v32 = v31 - 1 & 4294967295;
        v33 = 0;
        if v31 <= 0 {
            v35 = (1 - v31 & 4294967295) / 400 + 1;
            v32 = v32 + v35 * 400 & 4294967295;
            v33 = v35 * -146097;
        }
        *((a0 + 8) as &u64) = *((&v0 as &char + 4) as &i32) + -62135683200 + (((((v28 >> 4 & 511) + v33 & 4294967295) - (((v32 & 4294967295) * 1374389535 >> 37) + ((v32 & 4294967295) * 1374389535 >> 63) & 4294967295) & 4294967295) + (v32 * 1461 >> 2) & 4294967295) + ((((v32 & 4294967295) * 1374389535 >> 37) + ((v32 & 4294967295) * 1374389535 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) & 4294967295 & 4294967295) * 86400;
        *((a0 + 16) as &i32) = v30;
        *(a0 as &i64) = 9223372036854775812;
        return 9223372036854775812;
    }
}
