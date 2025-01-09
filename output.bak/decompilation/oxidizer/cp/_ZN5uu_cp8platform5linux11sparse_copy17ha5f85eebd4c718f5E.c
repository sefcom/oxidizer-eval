fn uu_cp::platform::linux::sparse_copy(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i32;  // [bp-0xf8]
    let v1: i32;  // [bp-0xf4]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i64;  // [sp-0xe0], Other Possible Types: struct16, Result<struct4, struct8>, struct24
    let v5: i8;  // [bp-0xd8]
    let v6: i8;  // [bp-0x90]
    let v7: i8;  // [bp-0x88]
    let v9: i64;  // r14
    let v10: i64;  // rbx
    let v11: i64;  // r15
    let v12: i64;  // rdx
    let v13: i64;  // rax

    v4 = std::fs::File::open(a0, a1) as u64;
    match v4 {
        Err(v9) => {
            return v9;
        },
        Ok(v0) => {
            v4 = std::fs::File::create(a2, a3) as u64;
            if v4 {
                return v9;
            }
            v1 = *((&v4 as &char + 4) as &i32);
            v4 = std::fs::File::metadata(&v0);
            if v4 == 2 {
                return v9;
            }
            v10 = v6;
            core::result::Result<T,E>::unwrap(v10 >> 63, "src/uu/cp/src/platform/linux.rs");
            if ftruncate(v1 as u32 as u64, v10) < 0 {
                v9 = std::sys::pal::unix::os::errno() as i32 as u32 as u64 * 0x100000000 | 2;
                return v9;
            }
            v4 = std::fs::File::metadata(&v1);
            if v4 != 2 {
                v4 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v7);
                if !v10 {
                    return 0;
                }
                v11 = 0;
                do {
                    if <std::fs::File as std::io::Read>::read(&v0, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64)) {
                        return v9;
                    }
                    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
                    v3 = v2 + v12;
                    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any() as u8 {
                        v13 = std::os::unix::fs::FileExt::write_all_at(&v1, v2, v12, v11);
                        if v13 {
                            return v9;
                        }
                    }
                    v11 += v12;
                } while (v11 < v10);
            }
        },
    }
}
