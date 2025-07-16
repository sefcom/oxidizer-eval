fn uu_csplit::patterns::validate_line_numbers(a1: i64, a2: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x40]
    let v1: Result<struct40, struct16>;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: u128;  // [bp-0x20]
    let v5: i64;  // rdi

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 56 + a0
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    if let Ok(_) = v1 {
        *((v5 + 32) as &i64) = *((&v1 as &char + 32) as &i64);
        *((v5 + 16) as &u128) = v3;
        *((v5 + 8) as &u64) = v2;
    }
    *(v5 as &i64) = v1 as i64;
    return;
}
