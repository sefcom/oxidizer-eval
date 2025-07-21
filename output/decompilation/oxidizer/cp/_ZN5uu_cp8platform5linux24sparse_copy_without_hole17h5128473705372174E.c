fn uu_cp::platform::linux::sparse_copy_without_hole(a1: i32, a2: i64, a3: i64) -> Result<struct4, struct8> {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0x13c]
    let v1: std::fs::File;  // [bp-0x138]
    let v2: struct8;  // [bp-0x134]
    let v3: struct16;  // [bp-0x130]
    let v4: struct32;  // [bp-0x128], Other Possible Types: struct8
    let v5: u64;  // [bp-0x118]
    let v6: u64;  // [bp-0x110]
    let v8: u64;  // [bp-0x108]
    let v9: u128;  // [bp-0xf8]
    let v10: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: char, u64
    let v11: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v12: std::fs::File;  // [bp-0xe4]
    let v13: struct56;  // [bp-0xe0], Other Possible Types: u64
    let v14: u128;  // [bp-0xd8]
    let v15: struct24;  // [bp-0xd0]
    let v16: struct24;  // [bp-0xd0]
    let v18: struct56;  // r13
    let v19: struct16;  // r14
    let v20: u32;  // ebp
    let v21: i64;  // r13
    let v22: struct8;  // ebp
    let v23: struct40;  // ebp
    let v24: struct24;  // rbx
    let v25: Option<struct32>;  // rax
    let v26: u64;  // r12
    let v27: u32;  // rdx
    let v28: u64;  // rax
    let v29: u64;  // rbp

    std::fs::File::open(a0, a1, a3);
    if *(&v10 as &i32) {
        return v13;
    }
    v0 = v12;
    v10 = std::fs::File::create(a2, a3);
    match v10 {
        Err(v18) => {
        },
        Ok(v1) => {
            v10 as u1536 = std::fs::File::metadata(&v0);
            match v10 as u1536 {
                Err(v18) => {
                },
                Ok(_) => {
                    v19 = *((&v11 as &char + 80) as &i64);
                    core::result::Result<T,E>::unwrap(v19 >> 63, "src/uu/cp/src/platform/linux.rs");
                    if ftruncate(v1, v19) >= 0 {
                        v20 = v0;
                        v4 = struct32 {
                            field_0: core::cmp::min_by(v19)
                            field_8: <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v4 as u8, a2)
                        };
                        v3 = 0;
                        v21 = &v8 as u8;
                        v2 = v20;
                        v22 = v20;
                        loop {
LABEL_51309b:
                            v23 = v22;
                            core::result::Result<T,E>::unwrap(0, "src/uu/cp/src/platform/linux.rs");
                            v24 = lseek(v23, v3, 3) as u64;
                            core::result::Result<T,E>::unwrap(0, "src/uu/cp/src/platform/linux.rs");
                            v25 = lseek(v23, v24, 4) as u64;
                            if v24 == -1 || v25 == -1 {
                                return 0;
                            }
                            if v24 >= -1 && v25 >= -1 {
                                v3 = v25;
                                v26 = v25 - v24;
                                core::iter::adapters::step_by::StepBy<I>::new(v21, v26, v4.field_0, a3);
                                v14 = v9;
                                v10 = v8;
                                do {
                                    v16 = v15;
                                    if !<core::ops::range::Range<T> as core::iter::range::RangeIteratorImpl>::spec_nth(&v10 as u1536, (!v16 ? v14 as i64 : 0)) {
                                        v21 = &v8 as u8;
                                        v22 = v2;
                                        goto LABEL_51309b;
                                    }
                                    v18 = std::os::unix::fs::FileExt::read_exact_at(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(core::cmp::min_by(v26 - v27, v4.field_0), v5, v6), a2, v27 + v24);
                                } while (!v18 && (v18 = std::os::unix::fs::FileExt::write_all_at(&v1, v28, v27, v29), !v18));
                            } else {
                                v18 = std::sys::pal::unix::os::errno() as u32 as u64 * 0x100000000 | 2;
                                break;
                            }
                        }
                    } else {
                        v18 = std::sys::pal::unix::os::errno() as u32 as u64 * 0x100000000 | 2;
                    }
                },
            }
        },
    }
    return v18;
}
