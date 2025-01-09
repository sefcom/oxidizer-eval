fn uu_fmt::parasplit::Line::get_formatline(a0: &struct56, a1: u64) -> int {
    let v1: u128;  // xmm0
    let v2: u128;  // xmm1

    if a1->field_0 != 0x8000000000000000 {
        v1 = *(&a1->field_0 as &i128);
        v2 = a1->field_10;
        return struct56 {
            field_0: v1
            field_16: v2
            field_32: a1->field_20
            field_48: a1->field_30
        };
    }
    panic!("Found NoFormatLine when expecting FormatLine");
}
