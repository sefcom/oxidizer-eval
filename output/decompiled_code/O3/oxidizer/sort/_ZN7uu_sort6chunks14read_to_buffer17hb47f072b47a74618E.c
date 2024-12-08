fn uu_sort::chunks::read_to_buffer(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88], Other Possible Types: struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i8;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: i8;  // [bp-0x48]
    let v8: i8;  // [bp-0x38]
    let v9: i64;  // [bp+0x8]
    let v10: i64;  // rbx
    let v11: i64;  // rbx
    let v12: i64;  // rbp
    let v13: i64;  // r14
    let v14: i64;  // rdx
    let v15: i64;  // r15
    let v16: i64;  // r13
    let v17: i64;  // r14
    let v18: i64;  // rbp
    let v19: i64;  // rsi
    let v20: i64;  // 4096
    let v21: i64;  // rbx
    let v22: i64;  // rax
    let v24: i64;  // rbp
    let v25: i64;  // rbx
    let v26: i64;  // rsi
    let v27: i64;  // rbp
    let v28: i64;  // rax
    let v29: i8;  // cl
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v35: i64;  // rcx

    v10 = *((a2 + 16) as &i64);
    v11 = v10 - a5;
    if v10 < a5 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v12 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v0 = v11;
        loop {
            v13 = a1;
            v15 = v14;
            if std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v13 as &i64), *((v13 + 8) as &i64), v12, v11) {
LABEL_56fa6f:
                if std::io::error::Error::kind(v15) as i8 != 35 {
                    v1 = struct8 {
                        field_0: v15
                    };
                    <T as alloc::string::ToString>::to_string(&v7, &v1);
                    v5 = 2;
                    v2 = v7;
                    v4 = v8;
                    v35 = a0;
                    *((v35 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
                    *((v35 + 16) as &&i64) = &g_601a60;
                    *(v35 as &i64) = 1;
                    return v34;
                }
            } else {
                v16 = *(v13 as &i64);
                v17 = *((v13 + 8) as &i64);
                if a3 != 1 {
                    if !(!v14) {
                        goto LABEL_56fb11;
                    }
                    if !(!v14) {
                        goto LABEL_56fbc0;
                    }
                    v18 = *((a2 + 16) as &i64);
                    goto LABEL_56fb33;
                }
                if v15 {
LABEL_56fb11:
                    v11 -= v15;
                    if v11 < v15 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v12 += v15;
                    continue;
                }
                if v11 {
LABEL_56fbc0:
                    v11 = v0;
                    if v11 != v11 {
                        v26 = *((a2 + 16) as &i64);
                        v27 = v26 - v11;
                        v28 = *((a2 + 8) as &i64);
                        v29 = v9;
                        if *((v28 + v27 - 1) as &i8) != v29 {
                            *((v28 + v27) as &i8) = v29;
                            v11 -= 1;
                            v26 = *((a2 + 16) as &i64);
                            v27 = v26 - v11;
                        }
                        if v11 > v26 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v12 = v27 + *((a2 + 8) as &i64);
                        break;
                    }
                }
                v18 = *((a2 + 16) as &i64);
                if v18 >= a4 {
LABEL_56fb33:
                    v22 = *((a2 + 8) as &i64);
                    v2 = v22;
                    v3 = v22;
                    v4 = v18 + v22;
                    v5 = v9;
                    if memchr::arch::generic::memchr::Iter::next_back(&v5) != 1 {
                        v24 = *((a2 + 16) as &i64);
                        alloc::vec::Vec<T,A>::resize(a2, v24 + 0x2800, 0);
                        v25 = *((a2 + 16) as &i64);
                        v11 = v25 - v24;
                        if v25 < v24 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v12 = v24 + *((a2 + 8) as &i64);
                    } else if !memchr::arch::generic::memchr::Iter::next_back(&v5) {
                        core::option::unwrap_failed(); /* do not return */
                    } else {
                        v34 = a0;
                        *((v34 + 8) as &i64) = v14 + 1;
                        *((v34 + 16) as &i8) = 1;
                        *(v34 as &i64) = 0;
                        return v34;
                    }
                } else {
                    v19 = v18 * 2;
                    alloc::vec::Vec<T,A>::resize(a2, v20, 0);
                    v21 = *((a2 + 16) as &i64);
                    v11 = v21 - v18;
                    if v21 < v18 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v12 = v18 + *((a2 + 8) as &i64);
                    v15 = v14;
                    if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v16, v17, v12, v11) {
                        continue;
                    }
                    goto LABEL_56fa6f;
                }
            }
        }
        v2 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        v30 = v2;
        if v30 == 2 {
            v33 = a0;
            *((v33 + 8) as &i64) = *((a2 + 16) as &i64) - v11;
            *((v33 + 16) as &i8) = 0;
            v34 = 0;
            break;
        } else {
            v31 = v3;
            v0 = v4;
            if !v30 {
                v32 = a1;
                *(v32 as &i64) = v31;
                *((v32 + 8) as &i64) = v0;
            } else {
                v33 = a0;
                *((v33 + 8) as &i64) = v31;
                *((v33 + 16) as &i64) = v0;
                v34 = 1;
                break;
            }
        }
    }
    *(v33 as &i64) = v34;
    return v34;
}
