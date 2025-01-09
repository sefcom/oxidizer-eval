fn uu_sort::chunks::read_to_buffer(a0: &Result<struct24, struct9>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: struct24;  // [sp-0x88], Other Possible Types: i64, struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: i32;  // [bp-0x70]
    let v6: i64;  // [sp-0x58]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i64;  // rbp
    let v11: i64;  // rbx
    let v12: i64;  // rbp
    let v13: i64;  // r14
    let v14: i64;  // rdx
    let v15: i64;  // r15
    let v16: i64;  // r13
    let v17: i64;  // r14
    let v18: i64;  // rbp
    let v20: i64;  // 4096
    let v21: i64;  // rax
    let v23: i64;  // rbp
    let v24: i64;  // rbp
    let v25: i64;  // rax
    let v26: i8;  // cl
    let v27: struct8;  // rax
    let v28: i64;  // rbx
    let v29: i64;  // rax
    let v30: i64;  // rcx

    v10 = v8;
    v11 = *((a3 + 16) as &i64) - v10;
    v12 = v10 + *((a3 + 8) as &i64);
    v6 = a5 >> 1;
    loop {
        v0 = v11;
        loop {
            v13 = a1;
            v15 = v14;
            if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v13 as &i64), *((v13 + 8) as &i64), v12, v11) {
                v16 = *(v13 as &i64);
                v17 = *((v13 + 8) as &i64);
                if a4 != 1 {
                    if !(!v14) {
                        goto LABEL_55dbd1;
                    }
                    if !(!v14) {
                        goto LABEL_55dc80;
                    }
                    v18 = *((a3 + 16) as &i64);
                    goto LABEL_55dbf3;
                } else {
                    if v15 {
LABEL_55dbd1:
                        v11 -= v15;
                        v12 += v15;
                        continue;
                    }
                    if v11 {
LABEL_55dc80:
                        v11 = v0;
                        if v11 != v11 {
                            v24 = *((a3 + 16) as &i64) - v11;
                            v25 = *((a3 + 8) as &i64);
                            v26 = v9;
                            if *((v25 + v24 - 1) as &i8) != v26 {
                                *((v25 + v24) as &i8) = v26;
                                v11 -= 1;
                                v24 = *((a3 + 16) as &i64) - v11;
                            }
                            v12 = v24 + *((a3 + 8) as &i64);
                            break;
                        }
                    }
                    v18 = *((a3 + 16) as &i64);
                    if v18 < a5 {
                        if v6 > v18 {
                            v20 = v18 * 2;
                        }
                        alloc::vec::Vec<T,A>::resize(a3, v20, 0);
                        v11 = *((a3 + 16) as &i64) - v18;
                        v12 = v18 + *((a3 + 8) as &i64);
                        v15 = v14;
                        if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v16, v17, v12, v11) {
                            continue;
                        }
                    } else {
LABEL_55dbf3:
                        v21 = *((a3 + 8) as &i64);
                        v2 = v21;
                        v3 = v21;
                        v4 = v18 + v21;
                        v5 = v9;
                        if memchr::arch::generic::memchr::Iter::next_back(&v5) != 1 {
                            v23 = *((a3 + 16) as &i64);
                            alloc::vec::Vec<T,A>::resize(a3, v23 + 0x2800, 0);
                            v11 = *((a3 + 16) as &i64) - v23;
                            v12 = v23 + *((a3 + 8) as &i64);
                        } else if !memchr::arch::generic::memchr::Iter::next_back(&v5) {
                            core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                        } else {
                            return Err(struct9 {
                                field_0: v14 + 1
                                field_8: 1
                            });
                        }
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v15) as i8 != 35 {
                *(&v1.field_16 as &struct8) = struct8 {
                    field_0: v15
                };
                v7 = <T as alloc::string::ToString>::to_string(&v1);
                v5 = 2;
                v2 = v7;
            }
        }
        v2 = <&mut I as core::iter::traits::iterator::Iterator>::next(a2);
        v27 = v2;
        if v27 == 2 {
            v30 = a0;
            *((v30 + 8) as &i64) = *((a3 + 16) as &i64) - v11;
            *((v30 + 16) as &i8) = 0;
            break;
        } else {
            v28 = v3;
            v0 = v4;
            if !v27 {
                v29 = a1;
                *(v29 as &i64) = v28;
                *((v29 + 8) as &i64) = v0;
            } else {
                v30 = a0;
                *((v30 + 8) as &i64) = v28;
                *((v30 + 16) as &i64) = v0;
                break;
            }
        }
    }
    return struct8 {
        field_0: v31
    };
}
