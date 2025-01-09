fn uu_csplit::patterns::get_patterns(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x68]
    let v1: i64;  // [sp-0x58]
    let v2: i128;  // [sp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: Result<struct40, struct24>;  // [sp-0x30], Other Possible Types: i328, struct40
    let v7: i64;  // rcx

    v4 = uu_csplit::patterns::extract_patterns(a1, a2);
    v2 = *((&v4 as &char + 8) as &i128);
    v3 = *((&v4 as &char + 24) as &i64);
    if v4 == 12 {
        v0 = v2;
        v1 = v3;
        v4 = uu_csplit::patterns::validate_line_numbers(*((&v0 as &char + 8) as &i64), v3);
        return struct40 {
            field_0: v8
            field_16: *((&v4 as &char + 16) as &i128)
            field_32: *((&v4 as &char + 32) as &i64)
        };
    }
    v7 = *((&v4 as &char + 32) as &i64);
    return struct40 {
        field_0: v6
        field_8: v2
        field_24: v3
        field_32: v7
    };
}
