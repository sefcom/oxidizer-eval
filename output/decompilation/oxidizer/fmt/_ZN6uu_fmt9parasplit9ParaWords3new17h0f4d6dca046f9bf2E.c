fn uu_fmt::parasplit::ParaWords::new(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x30]
    let v2: u128;  // xmm0

    v0 = struct32 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: a1
    };
    uu_fmt::parasplit::ParaWords::create_words(&v0);
    v2 = *(&v0.field_0 as &i128);
    return struct40 {
        field_0: v2
        field_16: *(&v0.field_16 as &i128)
        field_32: a2
    };
}
