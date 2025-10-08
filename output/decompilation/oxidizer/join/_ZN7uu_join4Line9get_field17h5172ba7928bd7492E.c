fn uu_join::Line::get_field(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rsi

    if a1 >= *((a0 + 16) as &i64) {
        return 0;
    }
    v0 = v2;
    v3 = a1 * 16;
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((*((a0 + 8) as &i64) + v3) as &i64), *((*((a0 + 8) as &i64) + v3 + 8) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), "src/uu/join/src/join.rs");
}
