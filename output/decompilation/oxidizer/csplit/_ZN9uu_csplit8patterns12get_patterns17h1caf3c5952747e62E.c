fn uu_csplit::patterns::get_patterns(a0: &Result<struct40, struct24>, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x68]
    let v1: i64;  // [sp-0x58]
    let v2: i128;  // [sp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: struct40;  // [bp-0x30], Other Possible Types: i8
    let v5: i8;  // [bp-0x28]
    let v6: i8;  // [bp-0x18]
    let v7: i8;  // [bp-0x10]
    let v10: i64;  // rcx

    uu_csplit::patterns::extract_patterns(&v4, a1, a2);
    v2 = v5;
    v3 = v6;
    if v4 == 12 {
        v0 = v2;
        v1 = v3;
        v4 = uu_csplit::patterns::validate_line_numbers(*((&v0 as &char + 8) as &i64), v3);
        return Err(struct24 {
            field_0: v0
            field_16: v1
        });
    }
    v10 = v7;
    return Ok(struct40 {
        field_0: v9
        field_8: v2
        field_24: v3
        field_32: v10
    });
}
