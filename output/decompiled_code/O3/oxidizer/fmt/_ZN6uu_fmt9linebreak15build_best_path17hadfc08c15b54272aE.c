fn uu_fmt::linebreak::build_best_path(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct32;  // [bp-0x38]
    let v2: void*;  // rax

    v0 = struct32 {
        field_0: a3
        field_8: a3 + a4 * 8
        field_16: a1
        field_24: a2
    };
    v2 = core::iter::traits::iterator::Iterator::reduce(&v0, a1, a2);
    if v2 {
        return uu_fmt::linebreak::build_best_path::{{closure}}(a0, a1, a2, *(v2 as &i64));
    }
    return struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
}
