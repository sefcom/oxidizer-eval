fn uu_csplit::patterns::validate_line_numbers(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0x40]
    let v1: Result<struct40, struct8>;  // [sp-0x30], Other Possible Types: i320
    let v3: i64;  // rax
    let v4: i64;  // rcx

    v0 = struct16 {
        field_0: a1
        field_8: a2 * 56 + a1
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    v3 = v1;
    v4 = *((&v1 as &char + 8) as &i64);
    return struct40 {
        field_0: v3
        field_8: v4
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i64)
    };
}
