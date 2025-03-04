fn uu_cp::platform::linux::sparse_copy_without_hole(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i32;  // [bp-0x13c], Other Possible Types: struct4
    let v1: i32;  // [sp-0x138]
    let v2: i32;  // [sp-0x134]
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: struct24;  // [sp-0x120]
    let v7: struct16;  // [sp-0xe8], Other Possible Types: Result<struct4, struct8>
    let v10: i8;  // [bp-0x98]
    let v12: i64;  // r13
    let v13: i64;  // r14

    vvar_430{stack -316} = std::fs::File::open(a0, a1)?;
    v0 = struct4 {
        field_0: *((&v7 as &char + 4) as &i32)
    };
    v1 = std::fs::File::create(a2, a3)?;
    v7 = std::fs::File::metadata(&v0);
    if v7.field_0 as i32 == 2 {
        v12 = v7.field_8;
        return v12;
    }
    v13 = *(&v10 as &i64);
    core::result::Result<T,E>::unwrap(v13 >> 63, "src/uu/cp/src/platform/linux.rs");
    if ftruncate(v1 as u64, v13) < 0 {
        v12 = std::sys::pal::unix::os::errno() as i32 * 0x100000000 | 2;
        return v12;
    }
    v4 = core::cmp::min_by(v13);
    v5 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v4);
    v3 = 0;
    v2 = v0;
}
