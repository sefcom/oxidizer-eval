fn uu_sort::chunks::read_to_buffer(a0: &Result<struct24, struct9>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: i64;  // [sp-0x88], Other Possible Types: struct8, struct24
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i32;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // rbx
    let v10: i64;  // rbp
    let v11: i64;  // r14
    let v12: i64;  // rdx
    let v13: i64;  // r15
    let v14: i64;  // r13
    let v15: i64;  // r14
    let v16: i64;  // rbp
    let v18: i64;  // 4096
    let v19: i64;  // rax
    let v21: i64;  // rbp
    let v22: i64;  // rbp
    let v23: i64;  // rax
    let v24: i8;  // cl
    let v25: struct8;  // rax
    let v26: i64;  // rbx
    let v27: i64;  // rax
    let v28: i64;  // rcx

    v9 = *((a2 + 16) as &i64) - a5;
    v10 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v0 = v9;
        loop {
            v11 = a1;
            v13 = v12;
            if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v11 as &i64), *((v11 + 8) as &i64), v10, v9) {
                v14 = *(v11 as &i64);
                v15 = *((v11 + 8) as &i64);
                if a3 != 1 {
                    if !(!v12) {
                        goto LABEL_55d7e1;
                    }
                    if !(!v12) {
                        goto LABEL_55d890;
                    }
                    v16 = *((a2 + 16) as &i64);
                    goto LABEL_55d803;
                } else {
                    if v13 {
LABEL_55d7e1:
                        v9 -= v13;
                        v10 += v13;
                        continue;
                    }
                    if v9 {
LABEL_55d890:
                        v9 = v0;
                        if v9 != v9 {
                            v22 = *((a2 + 16) as &i64) - v9;
                            v23 = *((a2 + 8) as &i64);
                            v24 = v8;
                            if *((v23 + v22 - 1) as &i8) != v24 {
                                *((v23 + v22) as &i8) = v24;
                                v9 -= 1;
                                v22 = *((a2 + 16) as &i64) - v9;
                            }
                            v10 = v22 + *((a2 + 8) as &i64);
                            break;
                        }
                    }
                    v16 = *((a2 + 16) as &i64);
                    if v16 < a4 {
                        if v6 > v16 {
                            v18 = v16 * 2;
                        }
                        alloc::vec::Vec<T,A>::resize(a2, v18, 0);
                        v9 = *((a2 + 16) as &i64) - v16;
                        v10 = v16 + *((a2 + 8) as &i64);
                        v13 = v12;
                        if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v14, v15, v10, v9) {
                            continue;
                        }
                    } else {
LABEL_55d803:
                        v19 = *((a2 + 8) as &i64);
                        v2 = v19;
                        v3 = v19;
                        v4 = v16 + v19;
                        v5 = v8;
                        if memchr::arch::generic::memchr::Iter::next_back(&v5) == 1 {
                            if !memchr::arch::generic::memchr::Iter::next_back(&v5) {
                                core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                            }
                            return Err(struct9 {
                                field_0: v12 + 1
                                field_8: 1
                            });
                        }
                        v21 = *((a2 + 16) as &i64);
                        alloc::vec::Vec<T,A>::resize(a2, v21 + 0x2800, 0);
                        v9 = *((a2 + 16) as &i64) - v21;
                        v10 = v21 + *((a2 + 8) as &i64);
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v13) as i8 != 35 {
                *(&v1.field_16 as &struct8) = struct8 {
                    field_0: v13
                };
                v7 = <T as alloc::string::ToString>::to_string(&v1);
                v5 = 2;
                v2 = v7;
            }
        }
        v2 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        v25 = v2;
        if v25 == 2 {
            v28 = a0;
            *((v28 + 8) as &i64) = *((a2 + 16) as &i64) - v9;
            *((v28 + 16) as &i8) = 0;
            break;
        } else {
            v26 = v3;
            v0 = v4;
            if !v25 {
                v27 = a1;
                *(v27 as &i64) = v26;
                *((v27 + 8) as &i64) = v0;
            } else {
                v28 = a0;
                *((v28 + 8) as &i64) = v26;
                *((v28 + 16) as &i64) = v0;
                break;
            }
        }
    }
    return struct8 {
        field_0: v29
    };
}
