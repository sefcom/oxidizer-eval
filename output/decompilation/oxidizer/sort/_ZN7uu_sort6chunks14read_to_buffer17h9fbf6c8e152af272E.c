fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> : struct8 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: struct8;  // [bp-0x88], Other Possible Types: u192
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x78]
    let v9: u32;  // [bp-0x70]
    let v10: u32;  // [bp-0x70]
    let v11: u64;  // [bp-0x60]
    let v12: u64;  // [bp-0x50]
    let v13: struct24;  // [bp-0x48]
    let v14: u64;  // r12
    let v15: u64;  // rdx
    let v16: u64;  // r12
    let v18: u64;  // rbp
    let v19: u64;  // rsi
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v24: i64;  // rbp
    let v25: u64;  // rdi
    let v26: i64;  // rcx
    let v27: u64;  // rax
    let v28: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v29: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v14 = *((a2 + 16) as &i64) - a5;
    v12 = a4 >> 1;
    loop {
        v11 = v14;
        loop {
            v29 = <std::process::ChildStderr as std::io::Read>::read(a1, vvar_22{reg 56}, v14);
            v16 = *((&v29 as &char + 8) as &i64);
            if v29 as i64 {
LABEL_55df1f:
                if std::io::error::Error::kind(v16) != 35 {
                    v1 = v16;
                    v13 = <T as alloc::string::ToString>::to_string(&v1);
                    v9 = 2;
                    memcpy(&v4, &v13, 16);
                    v7 = v13.field_16;
                    *((v0 + 8) as &double) = alloc::boxed::Box<T>::new(&v4);
                    *((v0 + 16) as &&u8) = &g_601a40;
                    *(v0 as &i64) = 1;
                    return;
                }
            } else if a3 == 1 {
                do {
                    if !(!v16) {
                        continue;
                    }
                    if v14 {
LABEL_55e060:
                        v14 = v11;
                        if v11 != v14 {
                            v24 = *((a2 + 16) as &i64) - v14;
                            v25 = v24 - 1;
                            if *((*((a2 + 8) as &i64) + v25) as &i8) != a6 {
                                *((*((a2 + 8) as &i64) + v24) as &u8) = a6;
                                v14 -= 1;
                                v24 = *((a2 + 16) as &i64) - v14;
                            }
                            v14 = v14;
                        }
                        v3 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
                        goto LABEL_55e0c5;
                    }
                    v18 = *((a2 + 16) as &i64);
                    if !(v18 < a4) {
                        goto LABEL_55dfd8;
                    }
                    v19 = v18 * 2;
                    alloc::vec::Vec<T,A>::resize(a2, a4, 0);
                    v14 = *((a2 + 16) as &i64) - v18;
                    v28 = <std::process::ChildStderr as std::io::Read>::read(a1, v18 + *((a2 + 8) as &i64), v14);
                    v16 = *((&v28 as &char + 8) as &i64);
                } while (!v28 as i64);
                goto LABEL_55df1f;
            } else {
                if !(!*((&v29 as &char + 8) as &i64)) {
                    continue;
                }
                if !(!v14) {
                    goto LABEL_55e060;
                }
LABEL_55dfd8:
                v20 = *((a2 + 8) as &i64);
                v3 = struct24 {
                    field_0: v20
                    field_8: v20
                    field_16: v18 + v20
                };
                v9 = a6;
                v9 = v10 & -0x100 | v9;
                v21 = memchr::arch::generic::memchr::Iter::next_back(&v3, &v9);
                if memchr::arch::generic::memchr::Iter::next_back(&v3, &v9) != 1 {
                    alloc::vec::Vec<T,A>::resize(a2, *((a2 + 16) as &i64) + 0x2800, 0);
                    v4 = v2;
                    v6 = v5;
                    v8 = v7;
                } else if v21 {
                    *((v0 + 8) as &u64) = v15 + 1;
                    *((v0 + 16) as &i8) = 1;
                    *(v0 as &i64) = 0;
                    return;
                } else {
                    core::option::unwrap_failed(); /* do not return */
                }
            }
        }
LABEL_55e0c5:
        if !v3 {
            v26 = a0;
            *((v0 + 8) as &u64) = *((a2 + 16) as &i64) - v14;
            *((v0 + 16) as &i8) = 0;
            v27 = 0;
            break;
        } else if !v6 {
            *(a1 as &u32) = v8;
        } else {
            v26 = a0;
            *((v0 + 8) as &u64) = v6;
            *((v0 + 16) as &u64) = v8;
            v27 = 1;
            break;
        }
    }
    *(v26 as &u64) = v27;
    return;
}
