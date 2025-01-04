fn uu_touch::touch(a0: &struct52, a1: u32, a2: u32, a3: &struct52, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x170]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i384;  // [sp-0x150], Other Possible Types: Option<struct12>, struct8, struct40, struct16, struct48
    let v6: i8;  // [bp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: Option<struct16>;  // [sp-0x118], Other Possible Types: Result<struct24, struct8>, i192
    let v9: i128;  // [sp-0x108]
    let v10: i8;  // [bp-0x100]
    let v11: i8;  // [bp-0xf8]
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
    let v30: i64;  // r14
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v34: i64;  // 4096
    let v36: i64;  // r15
    let v37: i64;  // r14
    let v38: i32;  // edx
    let v39: i64;  // rax
    let v42: i64;  // rcx
    let v47: i64;  // rax
    let v48: i64;  // r8
    let v49: i64;  // r9
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm0
    let v54: i64;  // rax
    let v55: i64;  // r14
    let v57: i128;  // xmm0
    let v58: i64;  // r15
    let v59: i64;  // r12
    let v60: i256;  // ymm1
    let v62: i64;  // r15
    let v63: i64;  // rdx
    let v64: i64;  // r13
    let v65: i64;  // rax
    let v66: i64;  // rcx
    let v67: i64;  // rdx
    let v68: i64;  // rsi
    let v70: i64;  // rcx
    let v71: i64;  // rax
    let v72: i128;  // xmm0
    let v73: i64;  // rax
    let v74: i128;  // xmm0
    let v75: i128;  // xmm1

    v27 = *((a3 + 24) as &i64);
    v28 = v27 - -9223372036854775809;
    if v27 >= 9223372036854775810 {
        v28 = 0;
    }
    v3 = a3;
    if v28 {
        v7 = a1;
        if v28 == 1 {
            v31 = *((a3 + 32) as &i64);
            v32 = *((a3 + 40) as &i32);
            v33 = v32 & 4294967295;
        } else {
            v4 = chrono::offset::local::Local::now(a1, 9223372036854775810);
            v31 = uu_touch::datetime_to_filetime(&v4);
            v32 = v38;
            v33 = v38;
            v34 = v3;
        }
        v1 = v33;
    } else {
        v29 = a1;
        v30 = a3;
        v8 = uu_touch::stat(*((a3 + 32) as &i64), *((a3 + 40) as &i64), -0x100 | !*((a3 + 49) as &i8));
        match v8 {
            Ok(_) => {
                v7 = v29;
                v36 = *((&v8 as &char + 8) as &i64);
                v32 = *((&v8 as &char + 16) as &i32) as u32 as u64;
                v31 = v10;
                v1 = v11 as u8 as u64;
            },
            Err(_) => {
                v4 = uu_touch::touch::{{closure}}(v30 + 24, *((&v8 as &char + 8) as &i64));
                v39 = v4;
                v36 = *((&v4 as &char + 8) as &i64);
                v32 = *((&v4 as &char + 16) as &i64);
                v31 = *((&v4 as &char + 24) as &i64);
                if v39 != 9223372036854775812 {
                    v42 = v6;
                    return struct48 {
                        field_0: v39
                        field_8: v36
                        field_16: (v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u64 as u256) as u64
                        field_24: v31
                        field_32: (v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1 as u64 as u256) as u64
                        field_40: v42
                    };
                }
                v7 = v29;
                v1 = *((&v4 as &char + 32) as &i64);
                v37 = v3;
            },
        }
    }
    if *(v37 as &i64) != 0x8000000000000000 {
        v8 = uu_touch::filetime_to_datetime(v36, v32 & 4294967295);
        match v8 {
            None => {
                return struct20 {
                    field_0: 9223372036854775809
                    field_8: v36
                    field_16: v32 as i32
                };
            },
            Some(_) => {
                *(&v24.field_0 as &struct16) = struct16 {
                    field_0: v46
                };
                v47 = v3;
                v2 = *((v47 + 8) as &i64);
                v15 = *((v47 + 16) as &i64);
                v4 = uu_touch::parse_date(&v24, *((v47 + 8) as &i64), v15, v48, v49);
                v50 = v4;
                v36 = *((&v4 as &char + 8) as &i64);
                v32 = *((&v4 as &char + 16) as &i32) as u32 as u64;
            },
        }
        match v4 {
            None => {
                v51 = *((&v4 as &char + 20) as &i128);
                return struct52 {
                    field_0: v50
                    field_8: v36
                    field_16: v32 as i32
                    field_20: v51
                    field_32: <UNKNOWN>
                };
            },
            Some(_) => {
                v8 = uu_touch::filetime_to_datetime(v31, v1);
            },
        }
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
                *(&v25.field_0 as &struct16) = struct16 {
                    field_0: v52 as u128
                };
                v4 = uu_touch::parse_date(&v25, v2, v15, v48, v49);
                v54 = v4;
                v55 = *((&v4 as &char + 8) as &i64);
            },
        }
        match v4 {
            None => {
                v57 = *((&v4 as &char + 20) as &i128);
                return struct52 {
                    field_0: v54
                    field_8: v55
                    field_16: v1 as i32
                    field_20: v57
                    field_32: <UNKNOWN>
                };
            },
            Some(_) => {
                v1 = *((&v4 as &char + 16) as &i32) as u32 as u64;
            },
        }
    }
    v2 = a0;
    v20 = v7;
    v21 = v20 + a2 * 24;
    v22 = 0;
    loop {
        if !v38 {
            a0 = v2;
            *(a0 as &i64) = 9223372036854775812;
            return a0;
        }
        v55 = v55;
        v58 = v58;
        v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        v62 = *(v38 as &i64);
        v64 = 0x8000000000000000;
        if v62 == 0x8000000000000000 {
            v4 = uu_touch::pathbuf_from_stdout();
            v65 = v4;
            v66 = *((&v4 as &char + 8) as &i64);
            v67 = *((&v4 as &char + 16) as &i64);
            v68 = *((&v4 as &char + 24) as &i64);
            if v65 != 9223372036854775812 {
                a0 = v2;
                *((a0 + 32) as &i128) = *((&v4 as &char + 32) as &i128);
                *(a0 as &i64) = v65;
                *((a0 + 8) as &i64) = v66;
                *((a0 + 16) as &i64) = v67;
                *((a0 + 24) as &i64) = v68;
                return a0;
            }
        }
        v12 = v64;
        v13 = v63;
        v14 = v68;
        if v12 != 0x8000000000000000 {
            v70 = stack_base + -232;
        } else {
            v70 = v13;
        }
        v59 = v59;
        v71 = uu_touch::touch_file(*((v70 + 8) as &i64), *((v70 + 16) as &i64), (-0x100 | v62 == 0x8000000000000000) & 4294967295 & 4294967295, v3, v58, v59 & 4294967295, v55, v0);
        v18 = v14;
        v72 = v12;
        v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
        v17 = v72;
        v19 = &v16;
        if v71 {
            v23 = struct32 {
                field_0: v52 as u128
                field_16: v18
                field_24: v19
            };
            v4 = uu_touch::touch::{{closure}}(&v23, v71, v38);
            v73 = v4;
            v74 = *((&v4 as &char + 8) as &i128);
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v75 = *((&v4 as &char + 24) as &i128);
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v8 = v74;
            v9 = v75;
            v11 = *((&v4 as &char + 40) as &i64);
            if v73 != 9223372036854775812 {
                a0 = v2;
                *((a0 + 40) as &i64) = v11;
                *((a0 + 24) as &i128) = v9;
                *((a0 + 8) as &Option<struct16>) = v8;
                *(a0 as &i64) = v73;
                return a0;
            }
        }
    }
}
