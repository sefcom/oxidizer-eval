fn uu_csplit::patterns::validate_line_numbers(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x40]
    let v1: Result<struct40, struct16>;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: u128;  // [bp-0x20]

    v0 = struct16 {
        field_0: a1
        field_8: a2 * 56 + a1
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    return struct40 {
        field_0: v1 as i64
        field_8: v2
        field_16: v3
        field_32: *((&v1 as &char + 32) as &i64)
    };
}
