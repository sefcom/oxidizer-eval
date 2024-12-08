fn uu_sort::chunks::read_to_buffer(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88], Other Possible Types: struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i32;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: i192;  // [sp-0x48], Other Possible Types: struct24
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i64;  // rbp
    let v11: i64;  // rbx
    let v12: i64;  // rbx
    let v13: i64;  // rbp
    let v14: i64;  // r14
    let v15: i64;  // rdx
    let v16: i64;  // r15
    let v17: i64;  // r13
    let v18: i64;  // r14
    let v19: i64;  // rbp
    let v20: i64;  // rsi
    let v21: i64;  // 4096
    let v22: i64;  // rbx
    let v23: i64;  // rax
    let v25: i64;  // rbp
    let v26: i64;  // rbx
    let v27: i64;  // rsi
    let v28: i64;  // rbp
    let v29: i64;  // rax
    let v30: i8;  // cl
    let v31: i64;  // rax
    let v32: i64;  // rbx
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // rax
    let v36: i64;  // rcx

    v10 = v8;
    v11 = *((a3 + 16) as &i64);
    v12 = v11 - v10;
    if v11 < v10 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v13 = v10 + *((a3 + 8) as &i64);
    v6 = a5 >> 1;
    loop {
        v0 = v12;
        loop {
            v14 = a1;
            v16 = v15;
            if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v14 as &i64), *((v14 + 8) as &i64), v13, v12) {
                v17 = *(v14 as &i64);
                v18 = *((v14 + 8) as &i64);
                if a4 != 1 {
                    if !(!v15) {
                        goto LABEL_56f721;
                    }
                    if !(!v15) {
                        goto LABEL_56f7d0;
                    }
                    v19 = *((a3 + 16) as &i64);
                    goto LABEL_56f743;
                } else {
                    if v16 {
LABEL_56f721:
                        v12 -= v16;
                        if v12 < v16 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v13 += v16;
                        continue;
                    }
                    if v12 {
LABEL_56f7d0:
                        v12 = v0;
                        if v12 != v12 {
                            v27 = *((a3 + 16) as &i64);
                            v28 = v27 - v12;
                            v29 = *((a3 + 8) as &i64);
                            v30 = v9;
                            if *((v29 + v28 - 1) as &i8) != v30 {
                                *((v29 + v28) as &i8) = v30;
                                v12 -= 1;
                                v27 = *((a3 + 16) as &i64);
                                v28 = v27 - v12;
                            }
                            if v12 > v27 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            v13 = v28 + *((a3 + 8) as &i64);
                            break;
                        }
                    }
                    v19 = *((a3 + 16) as &i64);
                    if v19 < a5 {
                        v20 = v19 * 2;
                        alloc::vec::Vec<T,A>::resize(a3, v21, 0);
                        v22 = *((a3 + 16) as &i64);
                        v12 = v22 - v19;
                        if v22 < v19 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v13 = v19 + *((a3 + 8) as &i64);
                        v16 = v15;
                        if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v17, v18, v13, v12) {
                            continue;
                        }
                    } else {
LABEL_56f743:
                        v23 = *((a3 + 8) as &i64);
                        v2 = v23;
                        v3 = v23;
                        v4 = v19 + v23;
                        v5 = v9;
                        if memchr::arch::generic::memchr::Iter::next_back(&v5) != 1 {
                            v25 = *((a3 + 16) as &i64);
                            alloc::vec::Vec<T,A>::resize(a3, v25 + 0x2800, 0);
                            v26 = *((a3 + 16) as &i64);
                            v12 = v26 - v25;
                            if v26 < v25 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            v13 = v25 + *((a3 + 8) as &i64);
                        } else if !memchr::arch::generic::memchr::Iter::next_back(&v5) {
                            core::option::unwrap_failed(); /* do not return */
                        } else {
                            v35 = a0;
                            *((v35 + 8) as &i64) = v15 + 1;
                            *((v35 + 16) as &i8) = 1;
                            *(v35 as &i64) = 0;
                            return v35;
                        }
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v16) as i8 != 35 {
                v1 = struct8 {
                    field_0: v16
                };
                v7 = <T as alloc::string::ToString>::to_string(&v1);
                v5 = 2;
                v2 = v7;
                v4 = *((&v7 as &char + 16) as &i64);
                v36 = a0;
                *((v36 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
                *((v36 + 16) as &&i64) = &g_601a60;
                *(v36 as &i64) = 1;
                return v35;
            }
        }
        v2 = <&mut I as core::iter::traits::iterator::Iterator>::next(a2);
        v31 = v2;
        if v31 == 2 {
            v34 = a0;
            *((v34 + 8) as &i64) = *((a3 + 16) as &i64) - v12;
            *((v34 + 16) as &i8) = 0;
            v35 = 0;
            break;
        } else {
            v32 = v3;
            v0 = v4;
            if !v31 {
                v33 = a1;
                *(v33 as &i64) = v32;
                *((v33 + 8) as &i64) = v0;
            } else {
                v34 = a0;
                *((v34 + 8) as &i64) = v32;
                *((v34 + 16) as &i64) = v0;
                v35 = 1;
                break;
            }
        }
    }
    *(v34 as &i64) = v35;
    return v35;
}
