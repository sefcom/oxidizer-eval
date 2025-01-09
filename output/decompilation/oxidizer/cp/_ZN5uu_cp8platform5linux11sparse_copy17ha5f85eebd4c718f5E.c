fn uu_cp::platform::linux::sparse_copy(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct4;  // [bp-0xf8]
    let v1: struct4;  // [bp-0xf4], Other Possible Types: i32
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i192;  // [sp-0xe0], Other Possible Types: struct16, struct24
    let v5: i8;  // [bp-0x90]
    let v6: i8;  // [bp-0x88]
    let v8: i64;  // r14
    let v9: i64;  // rbx
    let v10: i64;  // r14
    let v11: i64;  // r15
    let v12: i64;  // rdx

    vvar_336{stack -248} = std::fs::File::open(a0, a1)?;
    v0 = struct4 {
        field_0: *((&v4 as &char + 4) as &i32)
    };
    vvar_337{stack -244} = std::fs::File::create(a2, a3)?;
    v1 = struct4 {
        field_0: *((&v4 as &char + 4) as &i32)
    };
    v4 = std::fs::File::metadata(&v0);
    if v4 == 2 {
        return v8;
    }
    v9 = v5;
    core::result::Result<T,E>::unwrap(v9 >> 63, "src/uu/cp/src/platform/linux.rs");
    if ftruncate(v1, v9) < 0 {
        v10 = std::sys::pal::unix::os::errno() as i32 * 0x100000000 | 2;
        return v8;
    }
    v4 = std::fs::File::metadata(&v1);
    if v4 != 2 {
        v4 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v6);
        if !v9 {
            return 0;
        }
        v11 = 0;
        do {
            if <std::fs::File as std::io::Read>::read(&v0, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64)) {
                return v8;
            }
            v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, *((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
            v3 = v2 + v12;
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any() as u8 && std::os::unix::fs::FileExt::write_all_at(&v1, v2, v12, v11) {
                return v8;
            }
            v11 += v12;
        } while (v11 < v9);
    }
}
