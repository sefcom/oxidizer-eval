fn uu_dd::blocks::unblock(a0: u32, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v1: struct24;  // [bp-0x18]

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
        field_8: ""
    };
    return core::iter::traits::iterator::Iterator::fold(a0, &v1, &v0);
}
