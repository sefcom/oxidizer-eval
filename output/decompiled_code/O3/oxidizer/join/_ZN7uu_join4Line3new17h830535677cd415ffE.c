fn uu_join::Line::new(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: struct24;  // [sp-0x28], Other Possible Types: i192
    let v2: i128;  // xmm0
    let v3: i128;  // xmm0

    v0 = <uu_join::LineSep as uu_join::Separator>::field_ranges(a2, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v2 = *(a1 as &i128);
    v3 = v0;
    return struct48 {
        field_0: v3
        field_16: *((&v0 as &char + 16) as &i64)
        field_24: v2
        field_40: *((a1 + 16) as &i64)
    };
}
