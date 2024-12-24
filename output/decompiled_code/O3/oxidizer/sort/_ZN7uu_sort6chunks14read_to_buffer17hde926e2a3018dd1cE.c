fn uu_sort::chunks::read_to_buffer(a0: void*, a1: &u32, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x90]
    let v1: &u8;  // [sp-0x88], Other Possible Types: struct8, u128
    let v2: &u8;  // [sp-0x80]
    let v3: u64;  // [sp-0x78]
    let v4: u8;  // [bp-0x70]
    let v5: u64;  // [sp-0x60]
    let v6: u64;  // [sp-0x50]
    let v7: struct24;  // [bp-0x48]
    let v8: i8;  // [bp-0x38]
    let v9: i64;  // [bp+0x8]
    let v10: u64;  // r12
    let v11: u64;  // r12
    let v12: u64;  // rbp
    let v13: u64;  // rbx
    let v14: u64;  // rdx
    let v15: u64;  // r12
    let v16: u64;  // rbp
    let v17: u64;  // rsi
    let v18: u64;  // 4096
    let v19: u64;  // rbx
    let v20: u64;  // rbx
    let v21: &u8;  // rax
    let v23: u64;  // rbp
    let v24: u64;  // rbx
    let v26: u64;  // rsi
    let v27: &u8;  // rbp
    let v28: &u8;  // rax
    let v29: u8;  // cl
    let v30: &u8;  // rax
    let v31: u64;  // rbx
    let v32: &struct_0;  // rcx
    let v33: &struct_0;  // rax
    let v34: &struct_0;  // rcx

    v10 = a2[2];
    v11 = v10 - a5;
    if v10 < a5 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v12 = a5 + a2[1];
    v6 = a4 >> 1;
    loop {
        v5 = v11;
        v5 = v5;
        loop {
            v13 = v5;
            v15 = v14;
            if <std::fs::File as std::io::Read>::read(a1, v12, v13) {
LABEL_56fe47:
                if std::io::error::Error::kind(v15) as i8 != 35 {
                    v0 = struct8 {
                        field_0: v15
                    };
                    <T as alloc::string::ToString>::to_string(&v7, &v0);
                    v4 = 2;
                    *(&v1 as &i64) = v7.field_0;
                    v3 = v8;
                    v34 = a0;
                    *(&v34->field_8 as &double) = alloc::boxed::Box<T>::new(&v1);
                    *(&v34->field_10 as &&u8) = &g_601a60;
                    v34->field_0 = 1;
                    return v33;
                }
            } else {
                if a3 != 1 {
                    if !(!v14) {
                        goto LABEL_56fee7;
                    }
                    if !(!v14) {
                        goto LABEL_56ff90;
                    }
                    v16 = a2[2];
                    goto LABEL_56ff08;
                }
                if v15 {
LABEL_56fee7:
                    v20 = v13 - v15;
                    if v13 < v15 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v12 += v15;
                    continue;
                }
                if v13 {
LABEL_56ff90:
                    v11 = v5;
                    if v11 != v11 {
                        v26 = a2[2];
                        v27 = v26 - v11;
                        v28 = a2[1];
                        v29 = v9;
                        if *((v28 + v27 + 1) as &i8) != v29 {
                            *((v28 + v27) as &u8) = v29;
                            v11 -= 1;
                            v26 = a2[2];
                            v27 = v26 - v11;
                        }
                        if v11 > v26 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v12 = &v27[a2[1]];
                        break;
                    }
                }
                v16 = a2[2];
                if v16 >= a4 {
LABEL_56ff08:
                    v21 = a2[1];
                    v1 = v21;
                    v2 = v21;
                    v3 = &v21[v16];
                    *(&v4 as &i64) = v9;
                    if memchr::arch::generic::memchr::Iter::next_back(&v4) != 1 {
                        v23 = a2[2];
                        alloc::vec::Vec<T,A>::resize(a2, v23 + 0x2800, 0);
                        v24 = a2[2];
                        if v24 < v23 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        v12 = v23 + a2[1];
                    } else if !memchr::arch::generic::memchr::Iter::next_back(&v4) {
                        core::option::unwrap_failed(); /* do not return */
                    } else {
                        v33 = a0;
                        v33->field_8 = v14 + 1;
                        v33->field_10 = 1;
                        v33->field_0 = 0;
                        return v33;
                    }
                } else {
                    v17 = v16 * 2;
                    alloc::vec::Vec<T,A>::resize(a2, v18, 0);
                    v19 = a2[2];
                    v13 = v19 - v16;
                    if v19 < v16 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v12 = v16 + a2[1];
                    v15 = v14;
                    if !<std::fs::File as std::io::Read>::read(a1, v12, v13) {
                        continue;
                    }
                    goto LABEL_56fe47;
                }
            }
        }
        v1 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if !v1 {
            v32 = a0;
            v32->field_8 = a2[2] - v11;
            v32->field_10 = 0;
            v33 = 0;
            break;
        } else {
            v30 = v2;
            v31 = v3;
            if !v30 {
                *(a1) = v31;
            } else {
                v32 = a0;
                v32->field_8 = v30;
                v32->field_10 = v31;
                v33 = 1;
                break;
            }
        }
    }
    v32->field_0 = v33;
    return v33;
}
