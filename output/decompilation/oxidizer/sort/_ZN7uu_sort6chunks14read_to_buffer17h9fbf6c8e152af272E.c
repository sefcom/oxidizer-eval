fn uu_sort::chunks::read_to_buffer(a0: &Result<struct24, struct9>, a1: &u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct8;  // [bp-0x90]
    let v1: struct24;  // [sp-0x88], Other Possible Types: struct8, i64
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [bp-0x70]
    let v5: i64;  // [sp-0x60]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48]
    let v8: i64;  // [bp+0x8]
    let v9: i64;  // r12
    let v10: i64;  // rbp
    let v11: i64;  // rdx
    let v12: i64;  // r12
    let v13: i64;  // rbp
    let v15: i64;  // 4096
    let v18: i64;  // rax
    let v20: i64;  // rbp
    let v21: i64;  // rbx
    let v22: i64;  // rbp
    let v23: i64;  // rax
    let v24: i8;  // cl
    let v25: i64;  // rax
    let v26: i64;  // rbx
    let v27: i64;  // rcx

    v9 = *((a2 + 16) as &i64) - a5;
    v10 = a5 + *((a2 + 8) as &i64);
    v6 = a4 >> 1;
    loop {
        v5 = v9;
        v5 = v5;
        loop {
            v9 = v5;
            v12 = v11;
            if <std::process::ChildStderr as std::io::Read>::read(a1, v10, v9) {
LABEL_55df17:
                if std::io::error::Error::kind(v12) as i8 != 35 {
                    *(&v0.field_16 as &struct8) = struct8 {
                        field_0: v12
                    };
                    v7 = <T as alloc::string::ToString>::to_string(&v0);
                    v4 = 2;
                    v1 = v7;
                }
            } else {
                if a3 != 1 {
                    if !(!v11) {
                        goto LABEL_55dfb7;
                    }
                    if !(!v11) {
                        goto LABEL_55e060;
                    }
                    v13 = *((a2 + 16) as &i64);
                    goto LABEL_55dfd8;
                }
                if v12 {
LABEL_55dfb7:
                    v10 += v12;
                    v5 = v9 - v12;
                    continue;
                }
                if v9 {
LABEL_55e060:
                    v9 = v5;
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
                v13 = *((a2 + 16) as &i64);
                if v13 >= a4 {
LABEL_55dfd8:
                    v18 = *((a2 + 8) as &i64);
                    v1 = v18;
                    v2 = v18;
                    v3 = v13 + v18;
                    v4 = v8;
                    if memchr::arch::generic::memchr::Iter::next_back(&v4) == 1 {
                        if memchr::arch::generic::memchr::Iter::next_back(&v4) {
                            return Err(struct9 {
                                field_0: v11 + 1
                                field_8: 1
                            });
                        }
                        core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
                    }
                    v20 = *((a2 + 16) as &i64);
                    alloc::vec::Vec<T,A>::resize(a2, v20 + 0x2800, 0);
                    v21 = *((a2 + 16) as &i64) - v20;
                    v10 = v20 + *((a2 + 8) as &i64);
                } else {
                    if v6 > v13 {
                        v15 = v13 * 2;
                    }
                    alloc::vec::Vec<T,A>::resize(a2, v15, 0);
                    v9 = *((a2 + 16) as &i64) - v13;
                    v10 = v13 + *((a2 + 8) as &i64);
                    v12 = v11;
                    if !<std::process::ChildStderr as std::io::Read>::read(a1, v10, v9) {
                        continue;
                    }
                    goto LABEL_55df17;
                }
            }
        }
        v1 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
        if !v1 {
            v27 = a0;
            *((v27 + 8) as &i64) = *((a2 + 16) as &i64) - v9;
            *((v27 + 16) as &i8) = 0;
            break;
        } else {
            v25 = v2;
            v26 = v3;
            if !v25 {
                *(a1 as &i32) = v26;
            } else {
                v27 = a0;
                *((v27 + 8) as &i64) = v25;
                *((v27 + 16) as &i64) = v26;
                break;
            }
        }
    }
    return struct8 {
        field_0: v28
    };
}
