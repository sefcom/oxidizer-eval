fn uu_sort::chunks::read_to_buffer(a0: &Result<struct24, struct9>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct8;  // [bp-0x90]
    let v2: struct24;  // [sp-0x88], Other Possible Types: struct8
    let v3: i64;  // [sp-0x80]
    let v4: i64;  // [sp-0x78]
    let v5: struct1;  // [bp-0x70], Other Possible Types: unsigned int
    let v6: i64;  // [sp-0x58]
    let v7: struct24;  // [sp-0x48]
    let v8: i8;  // [bp+0x10]
    let v9: i64;  // rbx
    let v10: i64;  // rbp
    let v11: i64;  // r14
    let v12: i64;  // rdx
    let v13: i64;  // r15
    let v14: i64;  // r13
    let v15: i64;  // r14
    let v16: i64;  // rbp
    let v17: i64;  // rsi
    let v20: i64;  // rbp
    let v21: i64;  // r15
    let v22: i64;  // rbp
    let v23: i64;  // rax
    let v24: i8;  // cl
    let v25: struct8;  // rax
    let v26: i64;  // rbx
    let v27: i64;  // rax
    let v28: i64;  // rcx

    v9 = *((a3 + 16) as &i64) - a6;
    v10 = a6 + *((a3 + 8) as &i64);
    v6 = a5 >> 1;
    loop {
        v0 = v9;
        loop {
            v11 = a1;
            v13 = v12;
            if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*(v11 as &i64), *((v11 + 8) as &i64), v10, v9) {
                v14 = *(v11 as &i64);
                v15 = *((v11 + 8) as &i64);
                if a4 != 1 {
                    if !(!v12) {
                        goto LABEL_55dbd1;
                    }
                    if !(!v9) {
                        goto LABEL_55dc80;
                    }
                    goto LABEL_55dbf3;
                } else {
                    if v13 {
LABEL_55dbd1:
                        v9 -= v13;
                        v10 += v13;
                        continue;
                    }
                    if v9 {
LABEL_55dc80:
                        v21 = v0;
                        if v21 != v9 {
                            v22 = *((a3 + 16) as &i64) - v9;
                            v23 = *((a3 + 8) as &i64);
                            v24 = v8;
                            if *((v23 + v22 - 1) as &i8) != v24 {
                                *((v23 + v22) as &char) = v24;
                                v9 -= 1;
                                v22 = *((a3 + 16) as &i64) - v9;
                            }
                            v21 = v9;
                            v10 = v22 + *((a3 + 8) as &i64);
                            break;
                        }
                    }
                    v16 = *((a3 + 16) as &i64);
                    if v16 < a5 {
                        v17 = v16 * 2;
                        if v6 <= v16 {
                            v17 = a5;
                        }
                        alloc::vec::Vec<T,A>::resize(a3, v17, 0);
                        v9 = *((a3 + 16) as &i64) - v16;
                        v10 = v16 + *((a3 + 8) as &i64);
                        v13 = v12;
                        if !std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v14, v15, v10, v9) {
                            continue;
                        }
                    } else {
LABEL_55dbf3:
                        v2 = struct24 {
                            field_0: v18
                            field_8: v18
                            field_16: v16 + v18
                        };
                        v5 = struct1 {
                            field_0: v8
                        };
                        if memchr::arch::generic::memchr::Iter::next_back(&v2, &v5) != 1 {
                            v20 = *((a3 + 16) as &i64);
                            alloc::vec::Vec<T,A>::resize(a3, v20 + 0x2800, 0);
                            v9 = *((a3 + 16) as &i64) - v20;
                            v10 = v20 + *((a3 + 8) as &i64);
                        } else if memchr::arch::generic::memchr::Iter::next_back(&v2, &v5) {
                            return Err(struct9 {
                                field_0: v12 + 1
                                field_8: 1
                            });
                        } else {
                            core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                        }
                        continue;
                    }
                }
            }
            if std::io::error::Error::kind(v13) as i8 != 35 {
                v1 = struct8 {
                    field_0: v13
                };
                v7 = <T as alloc::string::ToString>::to_string(&v1);
                *(&v5 as &i32) = 2;
                v2 = v7;
            }
        }
        v2 = <&mut I as core::iter::traits::iterator::Iterator>::next(a2);
        v25 = v2;
        if v25 == 2 {
            v28 = a0;
            *((v28 + 8) as &unsigned long) = *((a3 + 16) as &i64) - v21;
            *((v28 + 16) as &i8) = 0;
            break;
        } else {
            v26 = v3;
            v0 = v4;
            if !v25 {
                v27 = a1;
                *(v27 as &unsigned long) = v26;
                *((v27 + 8) as &unsigned long) = v0;
                v9 = v21;
            } else {
                v28 = a0;
                *((v28 + 8) as &unsigned long) = v26;
                *((v28 + 16) as &unsigned long) = v0;
                break;
            }
        }
    }
    return struct8 {
        field_0: v29
    };
}
