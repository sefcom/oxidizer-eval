fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> : struct8 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: struct8;  // [bp-0x88], Other Possible Types: struct24
    let v4: u128;  // [bp-0x88]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: u64;  // [bp-0x78]
    let v10: u32;  // [bp-0x70]
    let v11: u32;  // [bp-0x70]
    let v12: u64;  // [bp-0x60]
    let v13: u64;  // [bp-0x50]
    let v14: struct24;  // [bp-0x48]
    let v15: u64;  // r12
    let v16: u64;  // rdx
    let v17: u64;  // r12
    let v19: u64;  // rbp
    let v20: u64;  // rsi
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v25: i64;  // rbp
    let v26: u64;  // rdi
    let v27: i64;  // rcx
    let v28: u64;  // rax
    let v29: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v30: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v15 = *((a2 + 16) as &i64) - a5;
    v13 = a4 >> 1;
    loop {
        v12 = v15;
        loop {
            v29 = <std::fs::File as std::io::Read>::read(a1, vvar_22{reg 56}, v15);
            v17 = *((&v29 as &char + 8) as &i64);
            if v29 as i64 {
LABEL_55d39f:
                if std::io::error::Error::kind(v17) != 35 {
                    v1 = v17;
                    v14 = <T as alloc::string::ToString>::to_string(&v1);
                    v10 = 2;
                    v4 = *(&v14.field_0 as &i128);
                    v8 = v14.field_16;
                    *((v0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
                    *((v0 + 16) as &&u8) = &g_601a40;
                    *(v0 as &i64) = 1;
                    return;
                }
            } else if a3 == 1 {
                do {
                    if !(!v17) {
                        continue;
                    }
                    if v15 {
LABEL_55d4e0:
                        v15 = v12;
                        if v12 != v15 {
                            v25 = *((a2 + 16) as &i64) - v15;
                            v26 = v25 - 1;
                            if *((*((a2 + 8) as &i64) + v26) as &i8) != a6 {
                                *((*((a2 + 8) as &i64) + v25) as &u8) = a6;
                                v15 -= 1;
                                v25 = *((a2 + 16) as &i64) - v15;
                            }
                            v15 = v15;
                        }
                        v3 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
                        goto LABEL_55d545;
                    }
                    v19 = *((a2 + 16) as &i64);
                    if !(v19 < a4) {
                        goto LABEL_55d458;
                    }
                    v20 = v19 * 2;
                    alloc::vec::Vec<T,A>::resize(a2, a4, 0);
                    v15 = *((a2 + 16) as &i64) - v19;
                    v30 = <std::fs::File as std::io::Read>::read(a1, v19 + *((a2 + 8) as &i64), v15);
                    v17 = *((&v30 as &char + 8) as &i64);
                } while (!v30 as i64);
                goto LABEL_55d39f;
            } else {
                if !(!*((&v29 as &char + 8) as &i64)) {
                    continue;
                }
                if !(!v15) {
                    goto LABEL_55d4e0;
                }
LABEL_55d458:
                v21 = *((a2 + 8) as &i64);
                v3 = struct24 {
                    field_0: v21
                    field_8: v21
                    field_16: v19 + v21
                };
                v10 = a6;
                v10 = v11 & -0x100 | v10;
                v22 = memchr::arch::generic::memchr::Iter::next_back(&v3, &v10);
                if memchr::arch::generic::memchr::Iter::next_back(&v3, &v10) != 1 {
                    alloc::vec::Vec<T,A>::resize(a2, *((a2 + 16) as &i64) + 0x2800, 0);
                    v5 = v2;
                    v7 = v6;
                    v9 = v8;
                } else if v22 {
                    *((v0 + 8) as &u64) = v16 + 1;
                    *((v0 + 16) as &i8) = 1;
                    *(v0 as &i64) = 0;
                    return;
                } else {
                    core::option::unwrap_failed(); /* do not return */
                }
            }
        }
LABEL_55d545:
        if !v3 {
            v27 = a0;
            *((v0 + 8) as &u64) = *((a2 + 16) as &i64) - v15;
            *((v0 + 16) as &i8) = 0;
            v28 = 0;
            break;
        } else if !v7 {
            *(a1 as &u32) = v9;
        } else {
            v27 = a0;
            *((v0 + 8) as &u64) = v7;
            *((v0 + 16) as &u64) = v9;
            v28 = 1;
            break;
        }
    }
    *(v27 as &u64) = v28;
    return;
}
