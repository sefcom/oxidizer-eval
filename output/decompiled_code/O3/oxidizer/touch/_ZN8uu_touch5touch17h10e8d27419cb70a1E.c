fn uu_touch::touch(a0: void*, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x180]
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168], Other Possible Types: Option<struct12>, struct16, struct40, struct48, struct8
    let v3: i128;  // [bp-0x148]
    let v4: i8;  // [bp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: Option<struct16>;  // [sp-0x128], Other Possible Types: Result<struct24, struct8>, i192
    let v8: i128;  // [sp-0x118]
    let v9: i8;  // [bp-0x110]
    let v10: i64;  // [bp-0x108]
    let v11: i64;  // [sp-0xf8]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: struct8;  // [sp-0xc0], Other Possible Types: i64
    let v17: i128;  // [sp-0xb8]
    let v18: i64;  // [sp-0xa8]
    let v19: i64;  // [sp-0xa0]
    let v20: i64;  // [sp-0x90]
    let v21: i64;  // [sp-0x88]
    let v22: i64;  // [sp-0x80]
    let v23: struct32;  // [bp-0x78]
    let v24: struct16;  // [bp-0x50]
    let v25: struct16;  // [bp-0x40]
    let v27: i64;  // rcx
    let v28: i64;  // rcx
    let v29: i64;  // r13
    let v30: i64;  // r15
    let v31: i64;  // rbp
    let v32: i64;  // rdx
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v39: i64;  // 4100
    let v40: i64;  // r14
    let v42: i64;  // rbp
    let v43: i64;  // r8
    let v44: i64;  // r9
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i32;  // r14d
    let v48: i128;  // xmm0
    let v49: i256;  // ymm0
    let v50: i256;  // ymm0
    let v51: i64;  // rax
    let v52: i128;  // xmm0
    let v53: struct8;  // rax
    let v54: i64;  // rdx
    let v55: i64;  // rdx
    let v56: i64;  // rsi
    let v57: i64;  // rdx
    let v58: i256;  // ymm1
    let v59: i64;  // r12
    let v60: i64;  // r13
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v64: i64;  // rcx
    let v65: i64;  // rax
    let v66: i128;  // xmm0
    let v67: i64;  // rax
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1

    v27 = *((a3 + 24) as &i64);
    v28 = v27 - -9223372036854775809;
    if v27 >= 9223372036854775810 {
        v28 = 0;
    }
    if v28 {
        v5 = a1;
        if v28 == 1 {
            v30 = *((a3 + 32) as &i64);
            v31 = *((a3 + 40) as &i32);
        } else {
            v2 = chrono::offset::local::Local::now(a1, 9223372036854775810);
            v31 = *((&v2 as &char + 8) as &i32);
            v30 = -62135683200 + *((&v2 as &char + 4) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(v2) as i32 * 86400;
        }
        v33 = v31 & 4294967295;
    } else {
        v29 = a1;
        v7 = uu_touch::stat(*((a3 + 32) as &i64), *((a3 + 40) as &i64), -0x100 | !*((a3 + 49) as &i8));
        match v7 {
            Ok(_) => {
                v5 = v29;
                v30 = *((&v7 as &char + 8) as &i64);
                v31 = *((&v7 as &char + 16) as &i32) as u32 as u64;
                v32 = v9;
                v33 = v10 as u8 as u64;
            },
            Err(_) => {
                v2 = uu_touch::touch::{{closure}}(a3 + 24, *((&v7 as &char + 8) as &i64));
                v34 = v2;
                v30 = *((&v2 as &char + 8) as &i64);
                v31 = *((&v2 as &char + 16) as &i64);
                v32 = *((&v2 as &char + 24) as &i64);
                v33 = *((&v2 as &char + 32) as &i64);
                if v34 != 9223372036854775812 {
                    v35 = v4;
                    return struct48 {
                        field_0: v34
                        field_8: v30
                        field_16: (v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u64 as u256) as u64
                        field_24: v32
                        field_32: (v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u64 as u256) as u64
                        field_40: v35
                    };
                }
                v5 = v29;
            },
        }
    }
    v39 = *(a3 as &i64);
    v6 = v33;
    v40 = v32;
    if v39 == 0x8000000000000000 {
        v11 = v31;
        goto LABEL_5c1cc2;
    } else {
        v7 = uu_touch::filetime_to_datetime(v30, v11 & 4294967295);
        match v7 {
            None => {
                return struct20 {
                    field_0: 9223372036854775809
                    field_8: v30
                    field_16: v11 as i32
                };
            },
            Some(_) => {
                *(&v24.field_0 as &struct16) = struct16 {
                    field_0: v41
                };
                v42 = *((a3 + 8) as &i64);
                v1 = *((a3 + 16) as &i64);
                v2 = uu_touch::parse_date(&v24, v42, *((a3 + 16) as &i64), v43, v44);
                v45 = v2;
                v30 = *((&v2 as &char + 8) as &i64);
                v46 = *((&v2 as &char + 16) as &i32) as u32 as u64;
            },
        }
        match v2 {
            None => {
                v48 = *((&v2 as &char + 20) as &i128);
                *((a0 + 32) as &i128) = v3;
                *((a0 + 20) as &i128) = v48;
                *(a0 as &i64) = v45;
                *((a0 + 8) as &i64) = v30;
            },
            Some(_) => {
                v15 = v42;
                v11 = v46;
                v47 = v6 as i32;
                v7 = uu_touch::filetime_to_datetime(v40, v47 as u32 as u64);
                match v7 {
                    None => {
                        return struct20 {
                            field_0: 9223372036854775809
                            field_8: v40
                            field_16: v47
                        };
                    },
                    Some(_) => {
                        v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256;
                        *(&v25.field_0 as &struct16) = struct16 {
                            field_0: v49 as u128
                        };
                        v2 = uu_touch::parse_date(&v25, v15, v1, v43, v44);
                        v51 = v2;
                        v40 = *((&v2 as &char + 8) as &i64);
                        v46 = *((&v2 as &char + 16) as &i32) as u32 as u64;
                    },
                }
                match v2 {
                    None => {
                        v52 = *((&v2 as &char + 20) as &i128);
                        *((a0 + 32) as &i128) = v3;
                        *((a0 + 20) as &i128) = v52;
                        *(a0 as &i64) = v51;
                        *((a0 + 8) as &i64) = v40;
                    },
                    Some(_) => {
                        v6 = v46;
LABEL_5c1cc2:
                        v1 = a0;
                        v20 = v5;
                        v21 = v20 + a2 * 24;
                        v22 = 0;
                        v53 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                        if v54 {
                            do {
                                v55 = v57;
                                v16 = v53;
                                v59 = *(v55 as &i64);
                                if v59 == 0x8000000000000000 {
                                    v2 = uu_touch::pathbuf_from_stdout();
                                    v61 = v2;
                                    v62 = *((&v2 as &char + 8) as &i64);
                                    v55 = *((&v2 as &char + 16) as &i64);
                                    v56 = *((&v2 as &char + 24) as &i64);
                                    if v61 != 9223372036854775812 {
                                        a0 = v1;
                                        *((a0 + 32) as &i128) = *((&v2 as &char + 32) as &i128);
                                        *(a0 as &i64) = v61;
                                        *((a0 + 8) as &i64) = v62;
                                        *((a0 + 16) as &i64) = v55;
                                        *((a0 + 24) as &i64) = v56;
                                        return a0;
                                    }
                                }
                                v12 = v60;
                                v13 = v55;
                                v14 = v56;
                                if v12 == 0x8000000000000000 {
                                    v64 = v13;
                                }
                                v65 = uu_touch::touch_file(*((v64 + 8) as &i64), *((v64 + 16) as &i64), (-0x100 | (v59 == 0x8000000000000000) as u8 as u64) & 4294967295 & 4294967295, a3, v30, v11, v40, v0);
                                v18 = v14;
                                v66 = v12;
                                v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u128 as u256;
                                v17 = v66;
                                v19 = &v16;
                                if v65 {
                                    v23 = struct32 {
                                        field_0: v49 as u128
                                        field_16: v18
                                        field_24: v19
                                    };
                                    v2 = uu_touch::touch::{{closure}}(&v23, v65, v54);
                                    v67 = v2;
                                    v68 = *((&v2 as &char + 8) as &i128);
                                    v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u128 as u256;
                                    v69 = *((&v2 as &char + 24) as &i128);
                                    v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u128 as u256;
                                    v7 = v68;
                                    v8 = v69;
                                    v10 = *((&v2 as &char + 40) as &i64);
                                    if v67 != 9223372036854775812 {
                                        a0 = v1;
                                        *((a0 + 40) as &i64) = v10;
                                        *((a0 + 24) as &i128) = v8;
                                        *((a0 + 8) as &Option<struct16>) = v7;
                                        *(a0 as &i64) = v67;
                                        return a0;
                                    }
                                }
                                v53 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                            } while (v54);
                        }
                        a0 = v1;
                        *(a0 as &i64) = 9223372036854775812;
                        return a0;
                    },
                }
            },
        }
        *((a0 + 16) as &i32) = v46;
        return a0;
    }
}
