fn uu_sort::chunks::read_to_buffer(a1: i64, a2: i64, a3: i64, a4: i128, a5: i64) -> : struct8 {
    let a0: i64;  // rsi
    let v0: i64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: struct24;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: struct24;  // [bp-0x88], Other Possible Types: struct8
    let v5: u128;  // [bp-0x88]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u64;  // [bp-0x80]
    let v9: u64;  // [bp-0x78]
    let v10: u64;  // [bp-0x78]
    let v11: u32;  // [bp-0x70]
    let v12: u32;  // [bp-0x70]
    let v13: struct48;  // [bp-0x60]
    let v14: u64;  // [bp-0x50]
    let v15: u128;  // [bp-0x48]
    let v16: i8;  // [bp-0x38]
    let v17: i64;  // [bp+0x8]
    let v18: struct48;  // r12
    let v19: u64;  // rdx
    let v20: u64;  // r12
    let v22: u64;  // rbp
    let v23: struct16;  // rsi
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v28: struct16;  // rbp
    let v29: struct120;  // rdi
    let v30: struct8;  // rdi
    let v31: struct8;  // rcx
    let v32: u64;  // rax
    let v33: struct8;  // rdi
    let v35: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v36: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v18 = *((a1 + 16) as &i64) - a4;
    v14 = a3 >> 1;
    loop {
        v13 = v18;
        loop {
            v36 = <std::process::ChildStderr as std::io::Read>::read(a0, vvar_21{reg 56}, v18);
            v20 = *((&v36 as &char + 8) as &i64);
            if v36 as i64 {
LABEL_55df1f:
                if std::io::error::Error::kind(v20) != 35 {
                    v1 = v20;
                    v2 = <T as alloc::string::ToString>::to_string(a1);
                    v11 = 2;
                    v5 = v15;
                    v9 = *(&v16 as &i64);
                    *((v0 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
                    *((v0 + 16) as &&u8) = &g_601a40;
                    *(v0 as &i64) = 1;
                    return;
                }
            } else if a2 == 1 {
                do {
                    if !(!v20) {
                        continue;
                    }
                    if v18 {
LABEL_55e060:
                        v18 = v13;
                        if v13 != v18 {
                            v28 = *((a1 + 16) as &i64) - v18;
                            v29 = v28 - 1;
                            if *((*((a1 + 8) as &i64) + v29) as &i8) != v17 as i8 {
                                *((*((a1 + 8) as &i64) + v28) as &i8) = v17 as i8;
                                v18 -= 1;
                                v28 = *((a1 + 16) as &i64) - v18;
                            }
                            v18 = v18;
                        }
                        v4 = <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next();
                        goto LABEL_55e0c5;
                    }
                    v22 = *((a1 + 16) as &i64);
                    if !(v22 < a3) {
                        goto LABEL_55dfd8;
                    }
                    v23 = v22 * 2;
                    alloc::vec::Vec<T,A>::resize(a1, a3, 0);
                    v18 = *((a1 + 16) as &i64) - v22;
                    v35 = <std::process::ChildStderr as std::io::Read>::read(a0, v22 + *((a1 + 8) as &i64), v18);
                    v20 = *((&v35 as &char + 8) as &i64);
                } while (!v35 as i64);
                goto LABEL_55df1f;
            } else {
                if !(!*((&v36 as &char + 8) as &i64)) {
                    continue;
                }
                if !(!v18) {
                    goto LABEL_55e060;
                }
LABEL_55dfd8:
                v24 = *((a1 + 8) as &i64);
                v4 = struct24 {
                    field_0: v24
                    field_8: v24
                    field_16: v22 + v24
                };
                v11 = v17 as i8;
                v11 = v12 & -0x100 | v11;
                v25 = memchr::arch::generic::memchr::Iter::next_back(&v4, &v11);
                if memchr::arch::generic::memchr::Iter::next_back(&v4, &v11) != 1 {
                    alloc::vec::Vec<T,A>::resize(a1, *((a1 + 16) as &i64) + 0x2800, 0);
                    v6 = v3;
                    v8 = v7;
                    v10 = v9;
                } else if v25 {
                    *((v0 + 8) as &u64) = v19 + 1;
                    *((v0 + 16) as &i8) = 1;
                    *(v0 as &i64) = 0;
                    return;
                } else {
                    core::option::unwrap_failed(); /* do not return */
                }
            }
        }
LABEL_55e0c5:
        if !v4 {
            v31 = v30;
            *((v0 + 8) as &struct48) = *((a1 + 16) as &i64) - v18;
            *((v0 + 16) as &i8) = 0;
            v32 = 0;
            break;
        } else if !v8 {
            *(a0 as &u32) = v10;
        } else {
            v31 = v33;
            *((v0 + 8) as &u64) = v8;
            *((v0 + 16) as &u64) = v10;
            v32 = 1;
            break;
        }
    }
    *(v31 as &u64) = v32;
    return;
}
