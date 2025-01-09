fn uu_sort::chunks::read_to_buffer(a0: &Result<struct9, struct16>, a1: &u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x90]
    let v1: i192;  // [sp-0x88], Other Possible Types: struct8, struct24
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i8;  // [bp-0x70]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v10: i64;  // r12
    let v11: i64;  // r12
    let v12: i64;  // rbp
    let v13: i64;  // rbx
    let v14: i64;  // rdx
    let v15: i64;  // r12
    let v16: i64;  // rbp
    let v18: i64;  // 4096
    let v20: i64;  // rbx
    let v22: i64;  // rax
    let v24: i64;  // rbp
    let v26: i64;  // rbx
    let v28: i64;  // rsi
    let v29: i64;  // rbp
    let v30: i64;  // rax
    let v31: i8;  // cl
    let v32: i64;  // rax
    let v33: i64;  // rbx
    let v34: i64;  // rcx
    let v36: i64;  // rcx

    v10 = *((a2 + 16) as &i64);
    v11 = v10 - a5;
    if v10 < a5 {
        core::slice::index::slice_start_index_len_fail(a5, *((a2 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
    }
    v12 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v5 = v11;
        v5 = v5;
        loop {
            v13 = v5;
            v15 = v14;
            if <std::fs::File as std::io::Read>::read(a1, v12, v13) {
LABEL_55d397:
                if std::io::error::Error::kind(v15) as i8 != 35 {
                    v0 = struct8 {
                        field_0: v15
                    };
                    v7 = <T as alloc::string::ToString>::to_string(&v0);
                    v4 = 2;
                    v1 = v7;
                    v36 = a0;
                    *((v36 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                    *((v36 + 16) as &&i64) = &g_601a40;
                    *(v36 as &i64) = 1;
                }
            } else {
                if a3 != 1 {
                    if !(!v14) {
                        goto LABEL_55d437;
                    }
                    if !(!v14) {
                        goto LABEL_55d4e0;
                    }
                    v16 = *((a2 + 16) as &i64);
                    goto LABEL_55d458;
                }
                if v15 {
LABEL_55d437:
                    if v13 < v15 {
                        core::slice::index::slice_start_index_len_fail(v15, v13, "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v12 += v15;
                    v5 = v13 - v15;
                    continue;
                }
                if v13 {
LABEL_55d4e0:
                    v11 = v5;
                    if v11 != v11 {
                        v28 = *((a2 + 16) as &i64);
                        v29 = v28 - v11;
                        v30 = *((a2 + 8) as &i64);
                        v31 = v8;
                        if *((v30 + v29 - 1) as &i8) != v31 {
                            *((v30 + v29) as &i8) = v31;
                            v11 -= 1;
                            v28 = *((a2 + 16) as &i64);
                            v29 = v28 - v11;
                        }
                        if v11 > v28 {
                            core::slice::index::slice_start_index_len_fail(v29, v28, "src/uu/sort/src/chunks.rs"); /* do not return */
                        }
                        v12 = v29 + *((a2 + 8) as &i64);
                        break;
                    }
                }
                v16 = *((a2 + 16) as &i64);
                if v16 >= a4 {
LABEL_55d458:
                    v22 = *((a2 + 8) as &i64);
                    v1 = v22;
                    v2 = v22;
                    v3 = v16 + v22;
                    v4 = v8;
                    memchr::arch::generic::memchr::Iter::next_back(&v4);
                    if memchr::arch::generic::memchr::Iter::next_back(&v4) == 1 {
                        return Ok(struct9 {
                            field_0: v14 + 1
                            field_8: 1
                        });
                        core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v24 = *((a2 + 16) as &i64);
                    alloc::vec::Vec<T,A>::resize(a2, v24 + 0x2800, 0);
                    v26 = *((a2 + 16) as &i64);
                    if v26 < v24 {
                        core::slice::index::slice_start_index_len_fail(v24, *((a2 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v12 = v24 + *((a2 + 8) as &i64);
                    v5 = v26 - v24;
                } else {
                    if v6 > v16 {
                        v18 = v16 * 2;
                    }
                    alloc::vec::Vec<T,A>::resize(a2, v18, 0);
                    v20 = *((a2 + 16) as &i64);
                    v13 = v20 - v16;
                    if v20 < v16 {
                        core::slice::index::slice_start_index_len_fail(v16, *((a2 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v12 = v16 + *((a2 + 8) as &i64);
                    v15 = v14;
                    if !<std::fs::File as std::io::Read>::read(a1, v12, v13) {
                        continue;
                    }
                    goto LABEL_55d397;
                }
            }
        }
        v1 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if !v1 {
            v34 = a0;
            *((v34 + 8) as &i64) = *((a2 + 16) as &i64) - v11;
            *((v34 + 16) as &i8) = 0;
            break;
        } else {
            v32 = v2;
            v33 = v3;
            if !v32 {
                *(a1 as &i32) = v33;
            } else {
                v34 = a0;
                *((v34 + 8) as &i64) = v32;
                *((v34 + 16) as &i64) = v33;
                break;
            }
        }
    }
    return struct8 {
        field_0: v35
    };
}
