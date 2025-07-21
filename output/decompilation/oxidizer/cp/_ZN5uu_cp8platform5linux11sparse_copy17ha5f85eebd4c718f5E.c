fn uu_cp::platform::linux::sparse_copy(a1: i32, a2: i64, a3: i64) -> Result<struct4, struct8> {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0xf8]
    let v1: std::fs::File;  // [bp-0xf4]
    let v2: u64;  // [bp-0xf0]
    let v3: struct16;  // [bp-0xf0]
    let v4: struct16;  // [bp-0xf0]
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xe0], Other Possible Types: struct24, core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v7: std::fs::File;  // [bp-0xdc]
    let v8: std::path::Components;  // [bp-0xd8], Other Possible Types: u64
    let v9: struct40;  // [bp-0xd0]
    let v10: u64;  // [bp-0x90]
    let v12: u64;  // r14
    let v13: struct32;  // r15
    let v14: u64;  // rdx
    let v16: u64;  // rax
    let v17: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    std::fs::File::open(a0, a1, a3);
    if v5 {
        return v8;
    }
    v0 = v7;
    v5 = std::fs::File::create(a2, a3);
    if !(!v5 as i32 && (v1 = v7, v5 = std::fs::File::metadata(&v0), v5 as i32 != 2)) {
        return v12;
    }
    core::result::Result<T,E>::unwrap(v10 >> 63, "src/uu/cp/src/platform/linux.rs");
    if ftruncate(v1, v10) >= 0 {
        v6 = std::fs::File::metadata(&v1);
        if let Ok(_) = v6 {
            v5 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(*((&v6 as &char + 88) as &i64) as i8, a2);
            if !v10 {
                return 0;
            }
            loop {
                v17 = <std::fs::File as std::io::Read>::read(&v0, v8, v9.field_0);
                v12 = *((&v17 as &char + 8) as &i64);
                if let Err(_) = v17 {
                    break;
                }
                v3 = struct16 {
                    field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v17 as &char + 8) as &i64), v8, v9.field_0)
                    field_8: v2 + v14
                };
                v4 = struct16 {
                    field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v17 as &char + 8) as &i64), v8, v9.field_0)
                    field_8: v3.field_0 + v14
                };
                if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v4) && (v16 = std::os::unix::fs::FileExt::write_all_at(&v1, v4.field_0, v14, v13), v16) {
                    v12 = v16;
                    break;
                }
                v13 += *((&v17 as &char + 8) as &i64);
                if !(v13 < v10) {
                    break;
                }
            }
        }
    } else {
        v12 = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
    }
    return v12;
}
