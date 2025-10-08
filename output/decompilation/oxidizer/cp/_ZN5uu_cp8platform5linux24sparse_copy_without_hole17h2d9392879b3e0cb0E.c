fn uu_cp::platform::linux::sparse_copy_without_hole(a0: u32, a1: u32, a2: u32, a3: u32) -> long long {
    let v0: u64;  // [bp-0x13c]
    let v1: struct4;  // [bp-0x138]
    let v2: struct4;  // [bp-0x134]
    let v3: void*;  // [bp-0x130]
    let v4: struct32;  // [bp-0x128], Other Possible Types: u64
    let v5: u64;  // [bp-0x118]
    let v6: u64;  // [bp-0x110]
    let v8: u128;  // [bp-0x108]
    let v9: u128;  // [bp-0xf8]
    let v10: Result<struct4, struct8>;  // [bp-0xe8], Other Possible Types: u64
    let v11: struct16;  // [bp-0xe8]
    let v12: struct4;  // [bp-0xe4]
    let v13: u64;  // [bp-0xe0]
    let v14: u128;  // [bp-0xd8]
    let v15: u8;  // [bp-0xd0]
    let v16: u8;  // [bp-0xd0]
    let v17: i8;  // [bp-0x98]
    let v19: u64;  // r13
    let v20: u64;  // r14
    let v21: struct4;  // ebp
    let v22: i64;  // r13
    let v23: struct4;  // ebp
    let v24: struct4;  // ebp
    let v25: u64;  // rbx
    let v26: Result<struct4, struct8>;  // rax
    let v27: u64;  // r12
    let v28: u32;  // rdx
    let v29: u64;  // rax
    let v30: u64;  // rbp

    v10 = std::fs::File::open(a0, a1);
    match v10 {
        Err(_) => {
            return v13;
        },
        Ok(v0) => {
            v10 = std::fs::File::create(a2, a3);
            match v10 {
                Err(v19) => {
                },
                Ok(v1) => {
                    v10 = std::fs::File::metadata(&v0);
                    if v11.field_0 as i32 == 2 {
                        v19 = v13;
                    } else {
                        v20 = *(&v17 as &i64);
                        core::result::Result<T,E>::unwrap((v20 >> 63) as u8, "src/uu/cp/src/platform/linux.rs");
                        if ftruncate(v1, v20) >= 0 {
                            v21 = v0;
                            v4 = struct32 {
                                field_0: core::cmp::Ord::min(v20)
                                field_8: <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v4 as u8, "src/uu/cp/src/platform/linux.rs")
                            };
                            v3 = 0;
                            v22 = &v8 as u8;
                            v2 = v21;
                            v23 = v21;
                            loop {
                                v24 = v23;
                                core::result::Result<T,E>::unwrap(0, "src/uu/cp/src/platform/linux.rs");
                                v25 = lseek(v24, v3, 3) as u64;
                                core::result::Result<T,E>::unwrap(0, "src/uu/cp/src/platform/linux.rs");
                                v26 = lseek(v24, v25, 4) as u64;
                                if v25 == -1 || v26 == -1 {
                                    return 0;
                                }
                                if v25 >= -1 && v26 >= -1 {
                                    v3 = v26;
                                    v27 = v26 - v25;
                                    core::iter::adapters::step_by::StepBy<I>::new(v22, v27, v4.field_0);
                                    v14 = v9;
                                    v10 = v8;
                                } else {
                                    v19 = *(__errno_location() as &i32) as u32 as u64 * 0x100000000 | 2;
                                    break;
                                }
                                loop {
                                    v16 = v15;
                                    if !(<core::ops::range::Range<T> as core::iter::range::RangeIteratorImpl>::spec_nth(&v10, (!v16 ? v14 as i64 : 0)) as u8 & 1) {
                                        break;
                                    }
                                    v29 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::Ord::min(v27 - v28, v4.field_0), v5, v6);
                                    v30 = v28 + v25;
                                    v19 = std::os::unix::fs::FileExt::read_exact_at(&v0, v29, a2, v30);
                                    if v19 {
                                        goto LABEL_0x49b560;
                                    }
                                    v19 = std::os::unix::fs::FileExt::write_all_at(&v1, v29, v28, v30);
                                }
                                v22 = &v8 as u8;
                                v23 = v2;
                            }
                        } else {
                            v19 = *(__errno_location() as &i32) as u32 as u64 * 0x100000000 | 2;
                        }
                    }
                },
            }
            return v19;
        },
    }
}
