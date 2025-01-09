fn uu_fmt::parasplit::Line::get_noformatline(a0: &struct25, a1: u64) -> int {
    let v1: u128;  // xmm0

    if a1->field_0 == 0x8000000000000000 {
        v1 = *(&(&a1->field_0)[1] as &i128);
        return struct25 {
            field_0: v1
            field_16: *((&a1->field_8 as &char + 8) as &i64)
            field_24: a1->field_18 as i8
        };
    }
    panic!("Found FormatLine when expecting NoFormatLine");
}
