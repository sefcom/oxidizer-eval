fn uu_sort::chunks::read_to_buffer(a0: &Result<struct9, struct16>, a1: &u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x90]
    let v1: i128;  // [sp-0x88], Other Possible Types: struct8
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i8;  // [bp-0x70]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48], Other Possible Types: i192
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r12
    let v10: i64;  // r12
    let v11: i64;  // rbp
    let v12: i64;  // rbx
    let v13: i64;  // rdx
    let v14: i64;  // r12
    let v15: i64;  // rbp
    let v17: i64;  // 4096
    let v18: i64;  // rbx
    let v20: i64;  // rax
    let v22: i64;  // rbp
    let v23: i64;  // rbx
    let v25: i64;  // rsi
    let v26: i64;  // rbp
    let v27: i64;  // rax
    let v28: i8;  // cl
    let v29: i64;  // rax
    let v30: i64;  // rbx
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v33: i64;  // rcx

    v9 = *((a2 + 16) as &i64);
    v10 = v9 - a5;
    if v9 < a5 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v11 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v5 = v10;
        v5 = v5;
        loop {
            v12 = v5;
            v14 = v13;
            if !<std::fs::File as std::io::Read>::read(a1, v11, v12) {
                if a3 != 1 {
                    if !(!v13) {
                        goto LABEL_55d437;
                    }
                    if !(!v13) {
                        goto LABEL_55d4e0;
                    }
                    v15 = *((a2 + 16) as &i64);
                    goto LABEL_55d458;
                } else {
                    if v14 {
LABEL_55d437:
                        if v12 < v14 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v11 += v14;
                        v5 = v12 - v14;
                        continue;
                    }
                    if v12 {
LABEL_55d4e0:
                        v10 = v5;
                        if v10 != v10 {
                            v25 = *((a2 + 16) as &i64);
                            v26 = v25 - v10;
                            v27 = *((a2 + 8) as &i64);
                            v28 = v8;
                            if *((v27 + v26 - 1) as &i8) != v28 {
                                *((v27 + v26) as &i8) = v28;
                                v10 -= 1;
                                v25 = *((a2 + 16) as &i64);
                                v26 = v25 - v10;
                            }
                            if v10 > v25 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            v11 = v26 + *((a2 + 8) as &i64);
                            break;
                        }
                    }
                    v15 = *((a2 + 16) as &i64);
                    if v15 < a4 {
                        if v6 > v15 {
                            v17 = v15 * 2;
                        }
                        alloc::vec::Vec<T,A>::resize(a2, v17, 0);
                        v18 = *((a2 + 16) as &i64);
                        v12 = v18 - v15;
                        if v18 < v15 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v11 = v15 + *((a2 + 8) as &i64);
                        v14 = v13;
                        if !<std::fs::File as std::io::Read>::read(a1, v11, v12) {
                            continue;
                        }
                    } else {
LABEL_55d458:
                        v20 = *((a2 + 8) as &i64);
                        v1 = v20;
                        v2 = v20;
                        v3 = v15 + v20;
                        v4 = v8;
                        if memchr::arch::generic::memchr::Iter::next_back(&v4) != 1 {
                            v22 = *((a2 + 16) as &i64);
                            alloc::vec::Vec<T,A>::resize(a2, v22 + 0x2800, 0);
                            v23 = *((a2 + 16) as &i64);
                            if v23 < v22 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            v11 = v22 + *((a2 + 8) as &i64);
                            v5 = v23 - v22;
                        } else if !memchr::arch::generic::memchr::Iter::next_back(&v4) {
                            core::option::unwrap_failed(); /* do not return */
                        } else {
                            v32 = a0;
                            *((v32 + 8) as &i64) = v13 + 1;
                            *((v32 + 16) as &i8) = 1;
                            *(v32 as &i64) = 0;
                            return v32;
                        }
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v14) as i8 != 35 {
                v0 = struct8 {
                    field_0: v14
                };
                v7 = <T as alloc::string::ToString>::to_string(&v0);
                v4 = 2;
                v1 = v7;
                v3 = *((&v7 as &char + 16) as &i64);
                v33 = a0;
                *((v33 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((v33 + 16) as &&i64) = &g_601a40;
                *(v33 as &i64) = 1;
                return v32;
            }
        }
        v1 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if !v1 {
            v31 = a0;
            *((v31 + 8) as &i64) = *((a2 + 16) as &i64) - v10;
            *((v31 + 16) as &i8) = 0;
            v32 = 0;
            break;
        } else {
            v29 = v2;
            v30 = v3;
            if !v29 {
                *(a1 as &i32) = v30;
            } else {
                v31 = a0;
                *((v31 + 8) as &i64) = v29;
                *((v31 + 16) as &i64) = v30;
                v32 = 1;
                break;
            }
        }
    }
    *(v31 as &i64) = v32;
    return v32;
}
