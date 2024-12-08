fn uu_cp::platform::linux::sparse_copy(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct4;  // [bp-0xf8]
    let v1: struct4;  // [bp-0xf4]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i64;  // [sp-0xe0], Other Possible Types: Result<struct4, struct8>, struct24
    let v5: i8;  // [bp-0xd8]
    let v6: i8;  // [bp-0x90]
    let v7: i8;  // [bp-0x88]
    let v9: i64;  // r14
    let v11: i32;  // ebp
    let v12: i64;  // rbx
    let v13: i64;  // r15
    let v14: i64;  // rdx

    v4 = std::fs::File::open(a0, a1);
    match v4 {
        Err(_) => {
            v9 = v5;
            return v9;
        },
        Ok(_) => {
            v0 = struct4 {
                field_0: v10
            };
            v4 = std::fs::File::create(a2, a3);
            if v4 {
                return v9;
            }
            v11 = *((&v4 as &char + 4) as &i32);
            v1 = struct4 {
                field_0: v11
            };
            std::fs::File::metadata(&v4, &v0);
            if v4 == 2 {
                return v9;
            }
            v12 = v6;
            core::result::Result<T,E>::unwrap(v12 >> 63, "src/uu/cp/src/platform/linux.rs");
            if ftruncate(v11 as u32 as u64, v12) < 0 {
                v9 = std::sys::pal::unix::os::errno() as i32 as u32 as u64 * 0x100000000 | 2;
                return v9;
            }
            std::fs::File::metadata(&v4, &v1);
            if v4 != 2 {
                v4 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v7);
                if !v12 {
                    return 0;
                }
                v13 = 0;
                do {
                    if <std::fs::File as std::io::Read>::read(&v0, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64)) {
                        return v9;
                    }
                    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v14, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
                    v3 = v2 + v14;
                    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any() as u8 && std::os::unix::fs::FileExt::write_all_at() as i64 {
                        return v9;
                    }
                    v13 += v14;
                } while (v13 < v12);
            }
        },
    }
}
