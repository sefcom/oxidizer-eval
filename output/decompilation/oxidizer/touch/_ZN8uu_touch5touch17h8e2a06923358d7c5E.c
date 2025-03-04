fn uu_touch::touch(a0: &struct52) -> u64 {
    let v0: i8;  // [bp-0x170]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: Option<struct12>;  // [sp-0x150]
    let v5: iNone;  // [sp-0x150], Other Possible Types: Option<struct12>, struct16, struct48, struct40, struct8
    let v6: iNone;  // [bp-0x130]
    let v8: i64;  // [sp-0x120]
    let v9: Option<struct16>;  // [sp-0x118], Other Possible Types: Result<struct24, struct8>
    let v10: iNone;  // [sp-0x108]
    let v11: i64;  // [sp-0xf8], Other Possible Types: char
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: struct8;  // [sp-0xc0]
    let v17: iNone;  // [sp-0xb8]
    let v18: i64;  // [sp-0xa8]
    let v19: i64;  // [sp-0xa0]
    let v20: i64;  // [sp-0x90]
    let v21: i64;  // [sp-0x88]
    let v22: i64;  // [sp-0x80]
    let v23: struct32;  // [bp-0x78]
    let v24: struct16;  // [bp-0x50]
    let v25: struct16;  // [bp-0x40]
    let v27: i64;  // rcx
    let v28: i64;  // r8
    let v29: i64;  // rcx
    let v30: i64;  // rax
    let v31: i64;  // rsi
    let v32: i64;  // r14
    let v33: i64;  // r14
    let v34: i64;  // rax
    let v35: i64;  // rsi
    let v36: i32;  // edx
    let v39: i64;  // rsi
    let v43: iNone;  // xmm0
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: iNone;  // xmm0
    let v47: iNone;  // xmm0
    let v48: iNone;  // ymm0
    let v49: iNone;  // ymm0
    let v53: i64;  // r15
    let v54: i64;  // r12
    let v55: i64;  // rdx
    let v56: iNone;  // ymm1
    let v58: i64;  // r15
    let v59: i64;  // rcx
    let v60: i64;  // rdx
    let v64: i64;  // rdx
    let v65: i64;  // rax
    let v66: iNone;  // xmm0
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm1

    v28 = v27;
    v29 = *((v27 + 24) as &i64);
    v30 = (v29 < 9223372036854775810 ? v29 - -9223372036854775809 : 0);
    v3 = v27;
    if v30 {
        v8 = v31;
        if v30 == 1 {
            v53 = *((v27 + 32) as &i64);
            v54 = *((v27 + 40) as &i32);
            v33 = v53;
            v34 = v54 & 4294967295;
        } else {
            v5 = chrono::offset::local::Local::now();
            v28 = v3;
            v53 = uu_touch::datetime_to_filetime(&v5);
            v54 = v36 as u64;
            v33 = v53;
            v34 = v36 as u64;
        }
        v1 = v34;
    } else {
        v32 = v27;
        v9 = uu_touch::stat(*((v27 + 32) as &i64), *((v27 + 40) as &i64), !*((v27 + 49) as &i8));
        match v9 {
            Ok(_) => {
                v8 = v35;
                v53 = *((&v9 as &char + 8) as &i64);
                v54 = *((&v9 as &char + 16) as &i32) as u32 as u64;
                v1 = *(&v11 as &i32) as u32 as u64;
                v28 = v32;
                v33 = *((&v9 as &char + 24) as &i64);
            },
            Err(_) => {
                v5 = uu_touch::touch::{{closure}}(v32 + 24, *((&v9 as &char + 8) as &i64));
                v53 = v5.field_8 as i64;
                v54 = *((&v5.field_8 as &char + 8) as &i64);
                v33 = v5.field_24;
                if v5.field_0 != 9223372036854775812 {
                    return struct48 {
                        field_0: v37
                        field_8: v53
                        field_16: (v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) as u64
                        field_24: v33
                        field_32: (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1 as u256) as u64
                        field_40: v40
                    };
                }
                v8 = v39;
                v1 = v5.field_32;
                v28 = v3;
            },
        }
    }
    if *(v28 as &i64) != 0x8000000000000000 {
        v9 = uu_touch::filetime_to_datetime(v53, v54 & 4294967295);
        match v9 {
            None => {
                *(a0 as &i64) = 9223372036854775809;
                *((a0 + 8) as &unsigned long) = v53;
                *((a0 + 16) as &u32) = v54 as u32;
            },
            Some(v43) => {
                *(&v24.field_0 as &struct16) = struct16 {
                    field_0: v43
                };
                v44 = v3;
                v2 = *((v44 + 8) as &i64);
                v15 = *((v44 + 16) as &i64);
                v4 = uu_touch::parse_date(&v24, *((v44 + 8) as &i64), v15);
                v45 = v4 as i64;
                v53 = *((&v4 as &char + 8) as &i64);
                v54 = *((&v4 as &char + 16) as &i32) as u32 as u64;
                match v4 {
                    None => {
                        v46 = *((&v5.field_8 as &char + 12) as &i128);
                        *((a0 + 32) as &i128) = v6 as i128;
                        *((a0 + 20) as void*) = v46;
                        *(a0 as &unsigned long) = v45;
                        *((a0 + 8) as &unsigned long) = v53;
                        *((a0 + 16) as &u32) = v54 as u32;
                    },
                    Some(_) => {
                        v9 = uu_touch::filetime_to_datetime(v33, v1);
                        match v9 {
                            None => {
                                return struct20 {
                                    field_0: 9223372036854775809
                                    field_8: v33
                                    field_16: v1 as u32
                                };
                            },
                            Some(v47) => {
                                v49 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256;
                                *(&v25.field_0 as &struct16) = struct16 {
                                    field_0: v47
                                };
                                v5 = uu_touch::parse_date(&v25, v2, v15);
                                v33 = *((&v5 as &char + 8) as &i64);
                            },
                        }
                        match v5 {
                            None => {
                                return struct52 {
                                    field_0: v50
                                    field_8: v33
                                    field_16: v1 as u32
                                    field_20: v52
                                    field_32: <UNKNOWN>
                                };
                            },
                            Some(_) => {
                                v1 = *((&v5 as &char + 16) as &i32) as u32 as u64;
                            },
                        }
                    },
                }
            },
        }
    }
    v2 = a0;
    v20 = v8;
    v21 = v20 + v55 * 24;
    v22 = 0;
    do {
        do {
            if !v55 {
                return struct8 {
                    field_0: 9223372036854775812
                };
            }
            v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            v58 = *(v55 as &i64);
            v59 = 0x8000000000000000;
            if v58 == 0x8000000000000000 {
                v5 = uu_touch::pathbuf_from_stdout();
                v59 = (&v5)[8] as i64;
                v60 = (&v5)[16] as i64;
                if v5.field_0 != 9223372036854775812 {
                    return struct48 {
                        field_0: v61
                        field_8: v59
                        field_16: v62
                        field_24: v63
                        field_32: (&v5)[32] as i128
                    };
                }
            }
            v64 = v60;
            v12 = v59;
            v13 = v64;
            v14 = v5.field_24;
            if v59 != 0x8000000000000000 {
                v64 = &v12;
            }
            v65 = uu_touch::touch_file(*((v64 + 8) as &i64), *((v64 + 16) as &i64), v58 == 0x8000000000000000, v3, v53, v54 & 4294967295, v33, *(&v0 as &i32));
            v18 = v14;
            v66 = *(&v12 as &i128);
            v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256;
            v17 = v66;
            v19 = &v16;
        } while (!v65);
    } while ((v23 = struct32 {
    field_0: v67
    field_16: v18
    field_24: v19
}, v5 = uu_touch::touch::{{closure}}(&v23, v65, v55), v69 = *(&v5.field_8 as &i128), v49 = (v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256, v70 = *(&v5.field_24 as &i128), v56 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256, v9 = v69, v10 = v70, v11 = v5.field_40, v5.field_0 == 9223372036854775812));
    return struct48 {
        field_0: v68
        field_8: v9
        field_24: v10
        field_40: v11
    };
}
