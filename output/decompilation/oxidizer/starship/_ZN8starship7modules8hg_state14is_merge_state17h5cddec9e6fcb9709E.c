fn starship::modules::hg_state::is_merge_state(a1: i64, a2: i64) -> Result<struct1, struct8> {
    let a0: i64;  // rdi
    let v0: struct4;  // [bp-0x5c]
    let v1: struct40;  // [bp-0x58], Other Possible Types: u8
    let v2: u32;  // [bp-0x54]
    let v3: u64;  // [bp-0x50]
    let v4: u8;  // [bp-0x48]
    let v5: struct16;  // [bp-0x30], Other Possible Types: u64
    let v6: u8;  // [bp-0x20]
    let v8: struct24;  // rax
    let v9: u64;  // rdx

    std::path::Path::join(&v1, a1, a2, ".hg");
    std::path::Path::join(&v6, v3, *(&v4 as &i64), "dirstate");
    v0 = std::fs::File::open(&v6)?;
    v1 = struct40 {
        field_0: 0
        field_16: 0
        field_32: 0
    };
    v8 = std::io::default_read_exact(&v0, &v1, 40);
    if !v8 {
        v5 = struct16 {
            field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(20, 40, &v1, 40, "src/modules/hg_state.rs")
            field_8: v9 + v5
        };
        return Ok(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v5));
    }
    return Err(v8);
}
