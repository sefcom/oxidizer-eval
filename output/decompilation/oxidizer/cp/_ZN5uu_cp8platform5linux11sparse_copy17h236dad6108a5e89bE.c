fn uu_cp::platform::linux::sparse_copy(a0: u32, a1: u32, a2: u32, a3: u32) -> long long {
    let v0: u64;  // [bp-0x100]
    let v1: u64;  // [bp-0xfc]
    let v2: u64;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf0]
    let v4: struct16;  // [bp-0xf0]
    let v5: Result<struct4, struct8>;  // [bp-0xe0], Other Possible Types: struct16
    let v6: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xe0]
    let v7: struct4;  // [bp-0xdc]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0x90]
    let v10: u8;  // [bp-0x88]
    let v12: u64;  // r15
    let v13: void*;  // r13
    let v14: u64;  // rdx
    let v15: u64;  // rdx
    let v17: u64;  // rax
    let v18: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v5 = std::fs::File::open(a0, a1);
    match v5 {
        Err(_) => {
            return v8;
        },
        Ok(v0) => {
            v5 = std::fs::File::create(a2, a3);
            if let Err(_) = v5 {
                return v15;
            }
            v1 = v7;
            v5 = std::fs::File::metadata(&v0);
            if v5.field_0 as i32 != 2 {
                v2 = v9;
                core::result::Result<T,E>::unwrap((v9 >> 63) as u8, "src/uu/cp/src/platform/linux.rs");
                if ftruncate(v1, v2) >= 0 {
                    v5 = std::fs::File::metadata(&v1);
                    if v5.field_0 as i32 != 2 {
                        v6 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(*(&v10 as &i64) as i8, "src/uu/cp/src/platform/linux.rs");
                        v12 = v8;
                        if !v2 {
                            return 0;
                        }
                        do {
                            v18 = <std::fs::File as std::io::Read>::read(&v0, v12, v6.len);
                            v15 = *((&v18 as &char + 8) as &i64);
                            if ((v18 as i8 & 1))
                                break;
                            v4 = struct16 {
                                field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, *((&v18 as &char + 8) as &i64), v12, v6.len, "src/uu/cp/src/platform/linux.rs")
                                field_8: v3 + v14
                            };
                            if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v4) {
                                continue;
                            }
                            v17 = std::os::unix::fs::FileExt::write_all_at(&v1, v4.field_0, v14, v13);
                            if v17 {
                                v15 = v17;
                                break;
                            }
                            v13 += *((&v18 as &char + 8) as &i64);
                        } while (v13 < v2);
                    }
                } else {
                    v15 = *(__errno_location() as u64 as &i32) as u32 as u64 * 0x100000000 | 2;
                }
            }
            return v15;
        },
    }
}
