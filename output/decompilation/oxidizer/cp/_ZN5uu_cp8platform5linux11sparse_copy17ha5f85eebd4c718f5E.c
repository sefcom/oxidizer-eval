fn uu_cp::platform::linux::sparse_copy(a1: i32, a2: i64, a3: i64) -> Result<struct4, struct8> {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0xf8]
    let v1: std::fs::File;  // [bp-0xf4]
    let v2: u64;  // [bp-0xf0]
    let v3: u128;  // [bp-0xf0]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, u32
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v6: std::fs::File;  // [bp-0xdc]
    let v7: u64;  // [bp-0xd8]
    let v8: struct24;  // [bp-0xd0]
    let v9: u64;  // [bp-0x90]
    let v11: u64;  // r14
    let v12: struct32;  // r15
    let v13: u64;  // rdx
    let v15: u64;  // rax
    let v16: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    std::fs::File::open(a0, a1, a3);
    if v4 {
        return v7;
    }
    v0 = v6;
    v4 = std::fs::File::create(a2, a3);
    if !(!v4 as i32 && (v1 = v6, v4 = std::fs::File::metadata(&v0), v4 as i32 != 2)) {
        return v11;
    }
    core::result::Result<T,E>::unwrap(v9 >> 63, "src/uu/cp/src/platform/linux.rs");
    if ftruncate(v1, v9) >= 0 {
        v5 = std::fs::File::metadata(&v1);
        if let Ok(_) = v5 {
            v4 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(*((&v5 as &char + 88) as &i64) as i8, a2);
            if !v9 {
                return 0;
            }
            loop {
                v16 = <std::fs::File as std::io::Read>::read(&v0, v7, v8.field_0);
                v11 = *((&v16 as &char + 8) as &i64);
                if let Err(_) = v16 {
                    break;
                }
                v3 = struct16 {
                    field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v16 as &char + 8) as &i64), v7, v8.field_0)
                    field_8: v2 + v13
                };
                if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3) && (v15 = std::os::unix::fs::FileExt::write_all_at(&v1, v3 as i64, v13, v12), v15) {
                    v11 = v15;
                    break;
                }
                v12 += *((&v16 as &char + 8) as &i64);
                if (v12 >= v9)
                    break;
            }
        }
    } else {
        v11 = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
    }
    return v11;
}
