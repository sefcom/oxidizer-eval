fn uu_od::parse_formats::parse_format_flags(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v2: struct16;  // [sp-0x98], Other Possible Types: i64
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: struct16;  // [sp-0x80], Other Possible Types: i64, struct24
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i8;  // [bp-0x68]
    let v9: i8;  // [sp-0x67]
    let v10: i8;  // [sp-0x66]
    let v11: i8;  // [sp-0x65]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x58]
    let v14: i8;  // [bp-0x50]
    let v15: i64;  // [bp-0x40]
    let v16: i64;  // [sp-0x38]
    let v18: i64;  // rcx
    let v19: i64;  // rax
    let v21: i64;  // r15
    let v22: i64;  // rbp
    let v23: i64;  // r13
    let v24: i64;  // r12
    let v25: i64;  // rbp
    let v26: i64;  // rbx
    let v27: i64;  // r13
    let v28: i64;  // r13
    let v29: i64;  // r13
    let v30: i64;  // rbx
    let v31: i64;  // r12
    let v32: i32;  // eax
    let v33: i32;  // ecx
    let v34: i32;  // edx
    let v35: i64;  // rcx
    let v36: i32;  // esi
    let v37: i64;  // r12
    let v38: i64;  // rbx
    let v39: i32;  // eax
    let v40: i64;  // rbx
    let v46: i64;  // rsi
    let v47: i64;  // rsi
    let v51: i64;  // rax
    let v55: i64;  // rbx
    let v56: i64;  // r13
    let v59: i64;  // rbp
    let v60: i64;  // rbp
    let v63: i64;  // r14
    let v64: i64;  // rax
    let v65: i64;  // rax

    v2 = 0;
    v3 = &g_8;
    v4 = 0;
    v16 = a1 + a2 * &g_18;
    v18 = 1;
    v19 = 0;
LABEL_498f5a:
    v21 = 0;
    loop {
        if (v19 & 1) {
            if !(a1 == v16) {
                goto LABEL_49876d;
            }
            goto LABEL_498f62;
        }
        if (v16 - a1) / &g_18 <= v18 {
            goto LABEL_498f62;
        }
        a1 += v18 * &g_18;
LABEL_49876d:
        a1 += &g_18 as &u8;
        if (v21 & 1) {
            uu_od::parse_formats::parse_type_string(&v8, *((a1 + &g_8 as &u8) as &i64), *((a1 + &g_8 as &u8) as &i64));
            v24 = v12;
            v25 = v13;
            v26 = v14;
            if v8 {
                v63 = a0;
                *((v63 + &g_8 as &u8) as &i64) = v24;
                *((v63 + &g_8 as &u8) as &i64) = v25;
                *((v63 + &g_18 as &u8) as &i64) = v26;
                goto LABEL_499043;
            } else {
                v27 = v4;
                if v2 - v27 < v26 {
                    v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v27, v26);
                    v28 = v4;
                }
                v4 = v28 + v26;
                v19 = memcpy(5 * v28 * &g_8 + v3, v25, v26 * &g_28) | -0x100 | 1;
                v18 = 0;
                v21 = 0;
                a1 = a1;
                if !v24 {
                    continue;
                }
                v19 = __rust_dealloc(v25) | -0x100 | 1;
                v18 = 0;
                goto LABEL_498f5a;
            }
        }
        v22 = *((a1 + &g_8 as &u8) as &i64);
        v23 = *((a1 + &g_8 as &u8) as &i64);
        if v23 < 2 {
            break;
        }
        v19 = *(v22 as &i16);
        if !(v19 == 11565) {
            goto LABEL_49885f;
        }
        if v23 == 2 {
LABEL_498f62:
            if !(v21 & 1) {
                v63 = a0;
                if !v4 {
                    if !v2 {
                        v2 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    v65 = v3;
                    *((v65 + &g_8 as &u8) as &i128) = g_503688;
                    *(v65 as &i128) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617hd77813577f7e9f92E;
                    *((v65 + &g_18 as &u8) as &i8) = 0;
                    v4 = 1;
                }
                *((v63 + &g_18 as &u8) as &i64) = v4;
                *((v63 + &g_8 as &u8) as &i128) = v2;
                *(v63 as &i64) = 0;
                return v63;
            }
            v64 = __rust_alloc(52, 1);
            v63 = a0;
            *((v64 + &g_18 as &u8) as &i128) = 42779985980492143533906748970725569125;
            *((v64 + &g_8 as &u8) as &i128) = 154722031753831588185087419289004369264;
            *(v64 as &i128) = 153029733493256437026005842866600110445;
            *((v64 + 48) as &i32) = 661925159;
            *((v63 + &g_8 as &u8) as &i64) = 52;
            *((v63 + &g_8 as &u8) as &i64) = v64;
            *((v63 + &g_18 as &u8) as &i64) = 52;
LABEL_499043:
            *(v63 as &i64) = 1;
        }
        if v23 < 9 {
            v19 = v19 | -0x100 | 1;
            v18 = 0;
            if v23 == 8 {
                v21 = (!*(v22 as &i64) != 8386104319403240749 ? v21 & 4294967295 & 4294967295 : 1);
                v19 = -255;
                v18 = 0;
            }
            continue;
        }
        v51 = *(v22 as &i64) ^ 8386104319403240749;
        v19 = v51 | -0x100 | 1;
        v18 = 0;
        if !(!(*((v22 + &g_8 as &u8) as &i8) ^ 61)) || !(!v51) {
            continue;
        }
        v12 = v22;
        v13 = v23 + v22;
        v14 = 0;
        v8 = 1;
        v5 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v8);
        v15 = v6;
        uu_od::parse_formats::parse_type_string(&v8, v6, v7);
        v55 = v13;
        v56 = v14;
        if !v8 {
            v59 = v4;
            if v2 - v59 < v56 {
                v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v59, v56);
                v60 = v4;
            }
            v4 = v60 + v56;
            v18 = 0;
            v19 = memcpy(5 * v60 * &g_8 + v3, v55, v56 * &g_28) | -0x100 | 1;
        } else {
            v63 = a0;
            *((v63 + &g_8 as &u8) as &i64) = v12;
            *((v63 + &g_8 as &u8) as &i64) = v55;
            *((v63 + &g_18 as &u8) as &i64) = v56;
            *(v63 as &i64) = 1;
        }
    }
    v19 = a1 | -0x100 | 1;
    v18 = 0;
    if !v23 {
        continue;
    }
LABEL_49885f:
    v19 = v19 | -0x100 | 1;
    v18 = 0;
    if !(*(v22 as &i8) == 45) {
        continue;
    }
    a1 = a1;
    v29 = v23 + v22;
    v5 = 0;
    v6 = 1;
    v7 = 0;
    v30 = 0;
LABEL_4988cd:
    if (v30 & 1) {
        v31 = *(v22 as &i8);
        if v31 >= 0 {
            v22 += 1;
            if !(v21 & 1) {
                goto LABEL_498b4d;
            }
            goto LABEL_4988f6;
        }
        v32 = v31 & &g_18;
        v33 = *((v22 + 1) as &i8) & 63;
        if (v31 & 255) <= 223 {
            v22 += 2;
            v19 = v32 * 64 | v33;
            v31 = v19 & 4294967295;
            if !(v21 & 1) {
                goto LABEL_498b4d;
            }
            goto LABEL_4988f6;
        }
        v34 = *((v22 + 2) as &i8) & 63 | v33 * 64;
        if (v31 & 255) > 239 {
            goto LABEL_498a07;
        } else {
            v22 += 3;
            v19 = v32 * 0x1000;
            v31 = v34 | v19;
            if !(v21 & 1) {
                goto LABEL_498b4d;
            }
            goto LABEL_4988f6;
        }
    }
    v31 = *(v22 as &i8);
    if v31 >= 0 {
        v35 = v22 + 1;
        goto LABEL_498b40;
    }
    v32 = v31 & &g_18;
    v36 = *((v22 + 1) as &i8) & 63;
    if (v31 & 255) <= 223 {
        v35 = v22 + 2;
        v19 = v32 * 64 | v36;
        v31 = v19 & 4294967295;
        goto LABEL_498b40;
    }
    v34 = *((v22 + 2) as &i8) & 63 | v36 * 64;
    if (v31 & 255) > 239 {
LABEL_498a07:
        v19 = (v32 & 7) * 0x40000;
        v31 = *((v22 + 3) as &i8) & 63 | v34 * 64 | v19;
        v35 = v22 + 4;
        goto LABEL_498b40;
    }
    v35 = v22 + 3;
    v19 = v32 * 0x1000;
    v31 = v34 | v19;
LABEL_498b40:
    v22 = v35;
    if (v21 & 1) {
LABEL_4988f6:
        if v31 >= 128 {
            v8 = 0;
            v39 = v31;
            if v31 < 0x800 {
                v8 = v39 >> 6 | 192;
                v9 = v31 & 63 | 128;
                v40 = 2;
            } else if v31 >= 0x10000 {
                v8 = (v39 >> &g_8) as u8 | 240;
                v9 = ((v31 & 4294967295 & 4294967295) >> &g_8 & 4294967295) as u8 & 63 | 128;
                v10 = (v31 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                v11 = v31 & 63 | 128;
                v40 = 4;
            } else {
                v8 = (v39 >> &g_8) as u8 | 224;
                v9 = (v31 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                v10 = v31 & 63 | 128;
                v40 = 3;
            }
            v46 = v7;
            if v5 - v46 < v40 {
                v5 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, v40);
                v47 = v7;
            }
            v19 = memcpy(v47 + v6, &v8, v40);
            v7 += v40;
            v30 = v40 | -0x100 | 1;
            goto LABEL_4988cd;
        } else {
            v38 = v7;
            if v38 == v5 {
                v5 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v19 = v6;
            *((v19 + v38) as &i8) = v31;
            v7 = v38 + 1;
            v30 = v7 | -0x100 | 1;
        }
        continue;
    } else {
LABEL_498b4d:
        v30 = v30 | -0x100 | 1;
        v37 = v31 - 65;
        if !(v37 <= 55) {
            continue;
        }
    }
}
