fn uu_sort::chunks::read_to_buffer(a0: &Result<struct9, struct16>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88], Other Possible Types: struct24, struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i32;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i64;  // rbp
    let v12: i64;  // rbx
    let v13: i64;  // rbx
    let v14: i64;  // rbp
    let v15: i64;  // r14
    let v16: i64;  // rdx
    let v17: i64;  // r15
    let v18: i64;  // r13
    let v19: i64;  // r14
    let v20: i64;  // rbp
    let v22: i64;  // 4096
    let v24: i64;  // rbx
    let v25: i64;  // rax
    let v27: i64;  // rbp
    let v29: i64;  // rbx
    let v30: i64;  // rsi
    let v31: i64;  // rbp
    let v32: i64;  // rax
    let v33: i8;  // cl
    let v34: struct8;  // rax
    let v35: i64;  // rbx
    let v36: i64;  // rax
    let v37: i64;  // rcx
    let v39: i64;  // rcx

    v10 = v8;
    v12 = *((a3 + 16) as &i64);
    v13 = v12 - v10;
    if v12 < v10 {
        core::slice::index::slice_start_index_len_fail(v10, *((a3 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
    }
    v14 = v10 + *((a3 + 8) as &i64);
    v6 = a5 >> 1;
    loop {
        v0 = v13;
        loop {
            v15 = a1;
            v17 = v16;
            if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v15 as &i64), *((v15 + 8) as &i64), v14, v13) {
LABEL_55db2f:
                if std::io::error::Error::kind(v17) as i8 != 35 {
                    v1 = struct8 {
                        field_0: v17
                    };
                    v7 = <T as alloc::string::ToString>::to_string(&v1);
                    v5 = 2;
                    v2 = v7;
                    v39 = a0;
                    *((v39 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
                    *((v39 + 16) as &&i64) = &g_601a40;
                    *(v39 as &i64) = 1;
                }
            } else {
                v18 = *(v15 as &i64);
                v19 = *((v15 + 8) as &i64);
                if a4 != 1 {
                    if !(!v16) {
                        goto LABEL_55dbd1;
                    }
                    if !(!v16) {
                        goto LABEL_55dc80;
                    }
                    v20 = *((a3 + 16) as &i64);
                    goto LABEL_55dbf3;
                }
                if v17 {
LABEL_55dbd1:
                    v13 -= v17;
                    if v13 < v17 {
                        core::slice::index::slice_start_index_len_fail(v17, v13, "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v14 += v17;
                    continue;
                }
                if v13 {
LABEL_55dc80:
                    v13 = v0;
                    if v13 != v13 {
                        v30 = *((a3 + 16) as &i64);
                        v31 = v30 - v13;
                        v32 = *((a3 + 8) as &i64);
                        v33 = v9;
                        if *((v32 + v31 - 1) as &i8) != v33 {
                            *((v32 + v31) as &i8) = v33;
                            v13 -= 1;
                            v30 = *((a3 + 16) as &i64);
                            v31 = v30 - v13;
                        }
                        if v13 > v30 {
                            core::slice::index::slice_start_index_len_fail(v31, v30, "src/uu/sort/src/chunks.rs"); /* do not return */
                        }
                        v14 = v31 + *((a3 + 8) as &i64);
                        break;
                    }
                }
                v20 = *((a3 + 16) as &i64);
                if v20 >= a5 {
LABEL_55dbf3:
                    v25 = *((a3 + 8) as &i64);
                    v2 = v25;
                    v3 = v25;
                    v4 = v20 + v25;
                    v5 = v9;
                    memchr::arch::generic::memchr::Iter::next_back(&v5);
                    if memchr::arch::generic::memchr::Iter::next_back(&v5) == 1 {
                        return Ok(struct9 {
                            field_0: v16 + 1
                            field_8: 1
                        });
                        core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v27 = *((a3 + 16) as &i64);
                    alloc::vec::Vec<T,A>::resize(a3, v27 + 0x2800, 0);
                    v29 = *((a3 + 16) as &i64);
                    v13 = v29 - v27;
                    if v29 < v27 {
                        core::slice::index::slice_start_index_len_fail(v27, *((a3 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v14 = v27 + *((a3 + 8) as &i64);
                } else {
                    if v6 > v20 {
                        v22 = v20 * 2;
                    }
                    alloc::vec::Vec<T,A>::resize(a3, v22, 0);
                    v24 = *((a3 + 16) as &i64);
                    v13 = v24 - v20;
                    if v24 < v20 {
                        core::slice::index::slice_start_index_len_fail(v20, *((a3 + 16) as &i64), "src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v14 = v20 + *((a3 + 8) as &i64);
                    v17 = v16;
                    if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v18, v19, v14, v13) {
                        continue;
                    }
                    goto LABEL_55db2f;
                }
            }
        }
        v2 = <&mut I as core::iter::traits::iterator::Iterator>::next(a2);
        v34 = v2;
        if v34 == 2 {
            v37 = a0;
            *((v37 + 8) as &i64) = *((a3 + 16) as &i64) - v13;
            *((v37 + 16) as &i8) = 0;
            break;
        } else {
            v35 = v3;
            v0 = v4;
            if !v34 {
                v36 = a1;
                *(v36 as &i64) = v35;
                *((v36 + 8) as &i64) = v0;
            } else {
                v37 = a0;
                *((v37 + 8) as &i64) = v35;
                *((v37 + 16) as &i64) = v0;
                break;
            }
        }
    }
    return struct8 {
        field_0: v38
    };
}
