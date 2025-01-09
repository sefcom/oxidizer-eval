fn uu_unexpand::expand_shortcuts(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: i32;  // [sp-0xd0]
    let v1: i32;  // [sp-0xcc]
    let v2: i192;  // [sp-0xc8], Other Possible Types: Result<struct16, struct8>
    let v4: i128;  // [sp-0xb0]
    let v5: i64;  // [sp-0xa0]
    let v6: i64;  // [bp-0x98]
    let v7: i64;  // [sp-0x90]
    let v15: struct8;  // rax

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v4 = v2;
    v5 = 0;
    v6 = a1;
    v7 = a1 + a2 * 24;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    return struct24 {
        field_0: v16
        field_16: v5
    };
    v0 = 0;
    v1 = 0;
}
