fn uu_join::Line::get_field(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u32;  // rsi
    let v4: &u32;  // rcx

    if a0->field_10 > a1 {
        v0 = v2;
        v3 = a1 * 16;
        v4 = a0->field_8;
        return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((v4 + v3) as &i64), *((v4 + v3 + 8) as &i64), *(&a0->field_20 as &i64), *(&a0->field_28 as &i64));
    }
    return 0;
}
