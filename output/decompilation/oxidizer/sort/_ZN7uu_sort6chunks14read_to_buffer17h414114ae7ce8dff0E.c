fn uu_sort::chunks::read_to_buffer(a0: &Result<struct24, struct9>, a1: &u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x90]
    let v1: struct24;  // [sp-0x88], Other Possible Types: struct8
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [bp-0x70], Other Possible Types: struct1
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r12
    let v10: i64;  // rbp
    let v11: i64;  // rdx
    let v12: i64;  // r12
    let v13: i64;  // rbp
    let v14: i64;  // rsi
    let v17: i64;  // rbp
    let v18: i64;  // rbp
    let v19: i64;  // rax
    let v20: i8;  // cl
    let v21: i64;  // rbx
    let v22: i64;  // rax
    let v23: i64;  // rbx
    let v24: i64;  // rcx

    v9 = *((a2 + 16) as &i64) - a5;
    v10 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v5 = v9;
        v21 = v9;
        loop {
            v12 = v11;
            if <std::fs::File as std::io::Read>::read(a1, v10, v21) {
LABEL_55d397:
                if std::io::error::Error::kind(v12) as i8 != 35 {
                    v0 = struct8 {
                        field_0: v12
                    };
                    v7 = <T as alloc::string::ToString>::to_string(&v0);
                    *(&v4 as &i32) = 2;
                    v1 = v7;
                }
            } else {
                if a3 != 1 {
                    if !(!v11) {
                        goto LABEL_55d437;
                    }
                    if !(!v21) {
                        goto LABEL_55d4e0;
                    }
                    goto LABEL_55d458;
                }
                if v12 {
LABEL_55d437:
                    v21 -= v12;
                    v10 += v12;
                    continue;
                }
                if v21 {
LABEL_55d4e0:
                    v9 = v5;
                    if v9 != v21 {
                        v18 = *((a2 + 16) as &i64) - v21;
                        v19 = *((a2 + 8) as &i64);
                        v20 = v8 as i8;
                        if *((v19 + v18 - 1) as &i8) != v20 {
                            *((v19 + v18) as &char) = v20;
                            v21 -= 1;
                            v18 = *((a2 + 16) as &i64) - v21;
                        }
                        v9 = v21;
                        v10 = v18 + *((a2 + 8) as &i64);
                        break;
                    }
                }
                v13 = *((a2 + 16) as &i64);
                if v13 >= a4 {
LABEL_55d458:
                    v1 = struct24 {
                        field_0: v15
                        field_8: v15
                        field_16: v13 + v15
                    };
                    v4 = struct1 {
                        field_0: v8 as i8
                    };
                    if memchr::arch::generic::memchr::Iter::next_back(&v1, &v4) != 1 {
                        v17 = *((a2 + 16) as &i64);
                        alloc::vec::Vec<T,A>::resize(a2, v17 + 0x2800, 0);
                        v21 = *((a2 + 16) as &i64) - v17;
                        v10 = v17 + *((a2 + 8) as &i64);
                    } else if memchr::arch::generic::memchr::Iter::next_back(&v1, &v4) {
                        return Err(struct9 {
                            field_0: v11 + 1
                            field_8: 1
                        });
                    } else {
                        core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                } else {
                    v14 = v13 * 2;
                    if v6 <= v13 {
                        v14 = a4;
                    }
                    alloc::vec::Vec<T,A>::resize(a2, v14, 0);
                    v21 = *((a2 + 16) as &i64) - v13;
                    v10 = v13 + *((a2 + 8) as &i64);
                    v12 = v11;
                    if !<std::fs::File as std::io::Read>::read(a1, v10, v21) {
                        continue;
                    }
                    goto LABEL_55d397;
                }
            }
        }
        v1 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if !v1 {
            v24 = a0;
            *((v24 + 8) as &unsigned long) = *((a2 + 16) as &i64) - v9;
            *((v24 + 16) as &i8) = 0;
            break;
        } else {
            v22 = v2;
            v23 = v3;
            if !v22 {
                *(a1 as &u32) = v23 as u32;
            } else {
                v24 = a0;
                *((v24 + 8) as &unsigned long) = v22;
                *((v24 + 16) as &unsigned long) = v23;
                break;
            }
        }
    }
    return struct8 {
        field_0: v25
    };
}
