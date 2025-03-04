fn uu_csplit::patterns::get_patterns(a0: &Result<struct40, struct24>, a1: u32, a2: u32) -> u64 {
    let v0: iNone;  // [sp-0x68]
    let v1: i64;  // [sp-0x58]
    let v2: iNone;  // [sp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: struct40;  // [sp-0x30], Other Possible Types: struct32
    let v5: i8;  // [bp-0x10]
    let v8: i64;  // rcx

    v4 = uu_csplit::patterns::extract_patterns(a1, a2);
    v2 = v4.field_8;
    v3 = v4.field_24;
    if v4.field_0 == 12 {
        v0 = v2;
        v1 = v3;
        v4 = uu_csplit::patterns::validate_line_numbers((&v0)[8] as i64, v3);
        return Err(struct8 {
            field_8: <UNKNOWN>
        });
    }
    v8 = *(&v5 as &i64);
    return Ok(struct40 {
        field_0: v7
        field_8: v2
        field_24: v3
        field_32: v8
    });
}
