fn uu_csplit::patterns::get_patterns(a1: i64, a2: i64) -> Result<struct40, struct32> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: u64;  // [bp-0x38]
    let v5: struct40;  // [bp-0x30], Other Possible Types: u8
    let v6: i8;  // [bp-0x28]
    let v7: u64;  // [bp-0x18]
    let v8: i8;  // [bp-0x10]
    let v10: iNone;  // xmm0

    uu_csplit::patterns::extract_patterns(&v5, a1, a2);
    v3 = *(&v6 as &i128);
    v4 = v7;
    if v5 != 13 {
        return Ok(struct40 {
            field_0: v5
            field_8: v3
            field_24: v4
            field_32: *(&v8 as &i64)
        });
    }
    v0 = v3;
    v2 = v4;
    v5 = uu_csplit::patterns::validate_line_numbers(v1, v4);
    if v5.field_0 as i32 != 13 {
        v10 = *(&v5.field_0 as &i128);
        return Ok(struct40 {
            field_0: v10
            field_16: v5.field_16
            field_32: v5.field_32
        });
    }
    return struct32 {
        field_0: 13
        field_8: v0
        field_24: v2
    };
}
