fn uu_dd::blocks::unblock(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u192;  // [bp-0x48]
    let v1: u192;  // [bp-0x18]

    if !a3 {
        panic!("chunk size must be non-zero");
    }
    v1 = struct24 {
        field_0: a1
        field_8: a2
        field_16: a3
    };
    v0 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    return core::iter::traits::iterator::Iterator::fold(a0, &v1, &v0) as u64;
}
