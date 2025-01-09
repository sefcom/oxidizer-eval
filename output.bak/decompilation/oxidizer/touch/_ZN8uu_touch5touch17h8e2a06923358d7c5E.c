fn uu_touch::touch(a0: &struct52) -> u64 {
    let v0: i8;  // [bp-0x170]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i104;  // [sp-0x150], Other Possible Types: Option<struct12>, struct16, struct48, struct40, struct8
    let v5: i128;  // [bp-0x130]
    let v7: i64;  // [sp-0x120]
    let v8: Option<struct16>;  // [sp-0x118], Other Possible Types: Result<struct24, struct8>, i200
    let v9: i128;  // [sp-0x108]
    let v10: i8;  // [bp-0xf8]
    let v11: i64;  // [sp-0xe8]
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc0], Other Possible Types: struct8
    let v16: i128;  // [sp-0xb8]
    let v17: i64;  // [sp-0xa8]
    let v18: i64;  // [sp-0xa0]
    let v19: i64;  // [sp-0x90]
    let v20: i64;  // [sp-0x88]
    let v21: i64;  // [sp-0x80]
    let v22: struct32;  // [bp-0x78]
    let v23: struct16;  // [bp-0x50]
    let v24: struct16;  // [bp-0x40]
    let v26: i64;  // rcx
    let v27: i64;  // rcx
    let v28: i64;  // rcx
    let v29: i64;  // rsi
    let v30: i64;  // r14
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v35: i64;  // rcx
    let v36: i64;  // rsi
    let v37: i64;  // r15
    let v38: i64;  // r14
    let v39: i32;  // edx
    let v43: i64;  // rsi
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm0
    let v57: i64;  // r15
    let v58: i64;  // r12
    let v59: i64;  // rdx
    let v60: i256;  // ymm1
    let v62: i64;  // r15
    let v63: i64;  // r13
    let v64: i64;  // rdx
    let v70: i64;  // rcx
    let v71: i64;  // rax
    let v72: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm1

    v27 = *((v26 + 24) as &i64);
    v28 = v27 - -9223372036854775809;
    if v27 >= 9223372036854775810 {
        v28 = 0;
    }
    v3 = v26;
    if v28 {
        v7 = v29;
        if v28 == 1 {
            v31 = *((v26 + 32) as &i64);
            v32 = *((v26 + 40) as &i32);
            v33 = v32 & 4294967295;
        } else {
            v4 = chrono::offset::local::Local::now();
            v31 = uu_touch::datetime_to_filetime(&v4);
            v32 = v39;
            v33 = v39;
            v35 = v3;
        }
        v1 = v33;
    } else {
        v30 = v26;
        v8 = uu_touch::stat(*((v26 + 32) as &i64), *((v26 + 40) as &i64), -0x100 | !*((v26 + 49) as &i8));
        match v8 {
            Ok(_) => {
                v7 = v36;
                v37 = *((&v8 as &char + 8) as &i64);
                v32 = *((&v8 as &char + 16) as &i32) as u32 as u64;
                v31 = v8;
                v1 = v10 as u8 as u64;
            },
            Err(_) => {
                v4 = uu_touch::touch::{{closure}}(v30 + 24, *((&v8 as &char + 8) as &i64));
                v37 = *((&v4 as &char + 8) as &i64);
                v32 = *((&v4 as &char + 16) as &i64);
                v31 = *((&v4 as &char + 24) as &i64);
                if v4 != 9223372036854775812 {
                    return struct48 {
                        field_0: v40
                        field_8: v37
                        field_16: (v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u64 as u256) as u64
                        field_24: v31
                        field_32: (v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1 as u64 as u256) as u64
                        field_40: v44
                    };
                }
                v7 = v43;
                v1 = *((&v4 as &char + 32) as &i64);
                v38 = v3;
            },
        }
    }
    if *(v38 as &i64) != 0x8000000000000000 {
        v8 = uu_touch::filetime_to_datetime(v37, v32 & 4294967295);
        match v8 {
            None => {
                *(a0 as &i64) = 9223372036854775809;
                *((a0 + 8) as &i64) = v37;
                *((a0 + 16) as &i32) = v32 as i32;
            },
            Some(_) => {
                *(&v23.field_0 as &struct16) = struct16 {
                    field_0: v48
                };
                v49 = v3;
                v2 = *((v49 + 8) as &i64);
                v14 = *((v49 + 16) as &i64);
                v4 = uu_touch::parse_date(&v23, *((v49 + 8) as &i64), v14);
                v50 = v4;
                v37 = *((&v4 as &char + 8) as &i64);
                v32 = *((&v4 as &char + 16) as &i32) as u32 as u64;
                match v4 {
                    None => {
                        v51 = *((&v4 as &char + 20) as &i128);
                        *((a0 + 32) as &i128) = v5;
                        *((a0 + 20) as &i128) = v51;
                        *(a0 as &i64) = v50;
                        *((a0 + 8) as &i64) = v37;
                        *((a0 + 16) as &i32) = v32 as i32;
                    },
                    Some(_) => {
                        v8 = uu_touch::filetime_to_datetime(v31, v1);
                        match v8 {
                            None => {
                                return struct20 {
                                    field_0: 9223372036854775809
                                    field_8: v31
                                    field_16: v1 as i32
                                };
                            },
                            Some(_) => {
                                v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u256;
                                *(&v24.field_0 as &struct16) = struct16 {
                                    field_0: v52 as u128
                                };
                                v4 = uu_touch::parse_date(&v24, v2, v14);
                                v31 = *((&v4 as &char + 8) as &i64);
                            },
                        }
                        match v4 {
                            None => {
                                return struct52 {
                                    field_0: v54
                                    field_8: v31
                                    field_16: v1 as i32
                                    field_20: v56
                                    field_32: <UNKNOWN>
                                };
                            },
                            Some(_) => {
                                v1 = *((&v4 as &char + 16) as &i32) as u32 as u64;
                            },
                        }
                    },
                }
            },
        }
    }
    v2 = a0;
    v19 = v7;
    v20 = v19 + v59 * 24;
    v21 = 0;
    loop {
        if !v59 {
            return struct8 {
                field_0: 9223372036854775812
            };
        }
        v31 = v31;
        v57 = v57;
        v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        v62 = *(v59 as &i64);
        v63 = 0x8000000000000000;
        if v62 == 0x8000000000000000 {
            v4 = uu_touch::pathbuf_from_stdout();
            v63 = *((&v4 as &char + 8) as &i64);
            v64 = *((&v4 as &char + 16) as &i64);
            if v4 != 9223372036854775812 {
                return struct48 {
                    field_0: v65
                    field_8: v66
                    field_16: v67
                    field_24: v68
                    field_32: *((&v4 as &char + 32) as &i128)
                };
            }
        }
        v11 = v63;
        v12 = v64;
        v13 = *((&v4 as &char + 24) as &i64);
        if v11 != 0x8000000000000000 {
            v70 = stack_base + -232;
        } else {
            v70 = v12;
        }
        v58 = v58;
        v71 = uu_touch::touch_file(*((v70 + 8) as &i64), *((v70 + 16) as &i64), (-0x100 | v62 == 0x8000000000000000) & 4294967295 & 4294967295, v3, v57, v58 & 4294967295, v31, v0);
        v17 = v13;
        v72 = v11;
        v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
        v16 = v72;
        v18 = &v15;
        if v71 {
            v22 = struct32 {
                field_0: v52 as u128
                field_16: v17
                field_24: v18
            };
            v4 = uu_touch::touch::{{closure}}(&v22, v71, v59);
            v74 = *((&v4 as &char + 8) as &i128);
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v75 = *((&v4 as &char + 24) as &i128);
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v8 = v74;
            v9 = v75;
            v10 = *((&v4 as &char + 40) as &i64);
            if v4 != 9223372036854775812 {
                return struct48 {
                    field_0: v73
                    field_8: v8
                    field_24: v9
                    field_40: v10
                };
            }
        }
    }
}
