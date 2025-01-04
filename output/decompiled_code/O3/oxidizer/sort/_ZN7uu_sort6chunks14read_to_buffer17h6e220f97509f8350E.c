fn uu_sort::chunks::read_to_buffer(a0: &Result<struct9, struct16>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: i128;  // [sp-0x88], Other Possible Types: struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i8;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: i192;  // [sp-0x48], Other Possible Types: struct24
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // rbx
    let v10: i64;  // rbx
    let v11: i64;  // rbp
    let v12: i64;  // r14
    let v13: i64;  // rdx
    let v14: i64;  // r15
    let v15: i64;  // r13
    let v16: i64;  // r14
    let v17: i64;  // rbp
    let v19: i64;  // 4096
    let v20: i64;  // rbx
    let v21: i64;  // rax
    let v23: i64;  // rbp
    let v24: i64;  // rbx
    let v25: i64;  // rsi
    let v26: i64;  // rbp
    let v27: i64;  // rax
    let v28: i8;  // cl
    let v29: i64;  // rax
    let v30: i64;  // rbx
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // rcx

    v9 = *((a2 + 16) as &i64);
    v10 = v9 - a5;
    if v9 < a5 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v11 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v0 = v10;
        loop {
            v12 = a1;
            v14 = v13;
            if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v12 as &i64), *((v12 + 8) as &i64), v11, v10) {
                v15 = *(v12 as &i64);
                v16 = *((v12 + 8) as &i64);
                if a3 != 1 {
                    if !(!v13) {
                        goto LABEL_55d7e1;
                    }
                    if !(!v13) {
                        goto LABEL_55d890;
                    }
                    v17 = *((a2 + 16) as &i64);
                    goto LABEL_55d803;
                } else {
                    if v14 {
LABEL_55d7e1:
                        v10 -= v14;
                        if v10 < v14 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v11 += v14;
                        continue;
                    }
                    if v10 {
LABEL_55d890:
                        v10 = v0;
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
                    v17 = *((a2 + 16) as &i64);
                    if v17 < a4 {
                        if v6 > v17 {
                            v19 = v17 * 2;
                        }
                        alloc::vec::Vec<T,A>::resize(a2, v19, 0);
                        v20 = *((a2 + 16) as &i64);
                        v10 = v20 - v17;
                        if v20 < v17 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v11 = v17 + *((a2 + 8) as &i64);
                        v14 = v13;
                        if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v15, v16, v11, v10) {
                            continue;
                        }
                    } else {
LABEL_55d803:
                        v21 = *((a2 + 8) as &i64);
                        v2 = v21;
                        v3 = v21;
                        v4 = v17 + v21;
                        v5 = v8;
                        if memchr::arch::generic::memchr::Iter::next_back(&v5) != 1 {
                            v23 = *((a2 + 16) as &i64);
                            alloc::vec::Vec<T,A>::resize(a2, v23 + 0x2800, 0);
                            v24 = *((a2 + 16) as &i64);
                            v10 = v24 - v23;
                            if v24 < v23 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            v11 = v23 + *((a2 + 8) as &i64);
                        } else if !memchr::arch::generic::memchr::Iter::next_back(&v5) {
                            core::option::unwrap_failed(); /* do not return */
                        } else {
                            v33 = a0;
                            *((v33 + 8) as &i64) = v13 + 1;
                            *((v33 + 16) as &i8) = 1;
                            *(v33 as &i64) = 0;
                            return v33;
                        }
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v14) as i8 != 35 {
                v1 = struct8 {
                    field_0: v14
                };
                v7 = <T as alloc::string::ToString>::to_string(&v1);
                v5 = 2;
                v2 = v7;
                v4 = *((&v7 as &char + 16) as &i64);
                v34 = a0;
                *((v34 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
                *((v34 + 16) as &&i64) = &g_601a40;
                *(v34 as &i64) = 1;
                return v33;
            }
        }
        v2 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        v29 = v2;
        if v29 == 2 {
            v32 = a0;
            *((v32 + 8) as &i64) = *((a2 + 16) as &i64) - v10;
            *((v32 + 16) as &i8) = 0;
            v33 = 0;
            break;
        } else {
            v30 = v3;
            v0 = v4;
            if !v29 {
                v31 = a1;
                *(v31 as &i64) = v30;
                *((v31 + 8) as &i64) = v0;
            } else {
                v32 = a0;
                *((v32 + 8) as &i64) = v30;
                *((v32 + 16) as &i64) = v0;
                v33 = 1;
                break;
            }
        }
    }
    *(v32 as &i64) = v33;
    return v33;
}
