fn uu_base32::base_common::format_read_error(a0: i64, a1: i8) -> u64 {
    let v0: i8;  // [sp-0xd1]
    let v1: i64;  // [sp-0xd0], Other Possible Types: struct16, Enum
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i8;  // [bp-0xb8]
    let v5: i8;  // [sp-0xb7]
    let v6: i8;  // [sp-0xb6]
    let v7: i8;  // [sp-0xb5]
    let v8: i64;  // [sp-0xb0]
    let v9: i64;  // [sp-0xa8]
    let v10: i64;  // [sp-0xa0]
    let v11: i64;  // [sp-0x98]
    let v12: i96;  // [sp-0x90], Other Possible Types: struct12
    let v13: i64;  // [sp-0x80], Other Possible Types: Arguments, struct8
    let v14: i64;  // [sp-0x78]
    let v15: i64;  // [sp-0x70]
    let v16: i32;  // [bp-0x68]
    let v17: i64;  // [sp-0x60]
    let v18: i64;  // [sp-0x50]
    let v19: i8;  // [sp-0x48]
    let v20: i64;  // [sp-0x38]
    let v22: i64;  // r15
    let v23: i64;  // r14
    let v24: i64;  // r13
    let v25: i64;  // r14
    let v26: i64;  // rsi
    let v27: i32;  // eax
    let v28: i32;  // edx
    let v29: i32;  // ecx
    let v30: i32;  // eax
    let v31: i64;  // rcx
    let v32: i32;  // eax
    let v33: i64;  // r15
    let v34: i64;  // rbx
    let v35: i32;  // eax
    let v36: i64;  // r15
    let v37: i64;  // rsi
    let v38: i64;  // rsi
    let v39: i64;  // rax

    v0 = a1;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v18 = 32;
    v19 = 3;
    v13 = 0;
    v15 = 0;
    v17 = &v1;
    if <std::io::error::ErrorKind as core::fmt::Display>::fmt(&v0, &v13) as i8 {
        core::result::unwrap_failed(); /* do not return */
    }
    v11 = v1;
    v10 = v2;
    v22 = v3;
    if !v22 {
        v1 = 0;
        v2 = 1;
        v3 = 0;
    } else {
        v1 = v22;
        v2 = __rust_alloc(v22, 1);
        v3 = 0;
        v23 = v10;
        v20 = v22 + v23;
        v24 = 0;
        do {
            v25 = v23;
            v26 = *(v25 as &i8);
            if v26 >= 0 {
                v9 = v25 + 1;
                if !v24 {
                    goto LABEL_48d750;
                }
                goto LABEL_48d670;
            }
            v27 = v26 & 31;
            v28 = *((v25 + 1) as &i8) & 63;
            if (v26 & 255) <= 223 {
                v9 = v25 + 2;
                v26 = v27 * 64 | v28;
                if !v24 {
                    goto LABEL_48d750;
                }
LABEL_48d670:
                v1 = alloc::string::String::push(v26);
            } else {
                v29 = *((v25 + 2) as &i8) & 63 | v28 * 64;
                if (v26 & 255) >= 240 {
                    v9 = v25 + 4;
                    v26 = *((v25 + 3) as &i8) & 63 | v29 * 64 | (v27 & 7) * 0x40000;
                    if !v24 {
                        goto LABEL_48d750;
                    }
                    goto LABEL_48d670;
                }
                v9 = v25 + 3;
                v26 = v29 | v27 * 0x1000;
                if !(!v24) {
                    goto LABEL_48d670;
                }
LABEL_48d750:
                v12 = core::unicode::unicode_data::conversions::to_upper(v26);
                v30 = *((&v12 as &char + 8) as &i32);
                v31 = 2 - (*((&v12 as &char + 4) as &i32) < 1);
                if v30 {
                    v31 = 3;
                }
                v13 = struct8 {
                    field_0: 0
                };
                v14 = v31;
                v16 = v30;
                v15 = v12;
                loop {
                    v32 = <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::next(&v13) as i32;
                    v33 = v32;
                    if v32 == 0x110000 {
                        break;
                    }
                    if v33 < 128 {
                        v34 = v3;
                        if v34 == v1 {
                            v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        *((v2 + v34) as &i8) = v33;
                        v3 = v34 + 1;
                    } else {
                        v4 = 0;
                        v35 = v33;
                        if v33 < 0x800 {
                            v4 = v35 >> 6 | 192;
                            v5 = v33 & 63 | 128;
                            v36 = 2;
                        } else if v33 < 0x10000 {
                            v4 = v35 >> 12 | 224;
                            v5 = (v33 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                            v6 = v33 & 63 | 128;
                            v36 = 3;
                        } else {
                            v4 = v35 >> 18 | 240;
                            v5 = (v33 & 4294967295 & 4294967295) >> 12 & 4294967295 & 63 | 128;
                            v6 = (v33 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                            v7 = v33 & 63 | 128;
                            v36 = 4;
                        }
                        v37 = v3;
                        if v1 - v37 < v36 {
                            v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v37, v36);
                            v38 = v3;
                        }
                        memcpy(v38 + v2, &v4, v36);
                        v3 += v36;
                    }
                }
            }
        } while ((v39 = v9, v24 = v24 - v25 + v39, v39 != v20));
    }
    v4 = &v1;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = Arguments {
        pieces: ["read error: "]
        args: &[&Argument] {
            ptr: &v4
            len: <UNKNOWN>
        }
        fmt: None
    };
    v16 = 1;
    alloc::fmt::format::format_inner(a0, &v13);
    return a0;
}
