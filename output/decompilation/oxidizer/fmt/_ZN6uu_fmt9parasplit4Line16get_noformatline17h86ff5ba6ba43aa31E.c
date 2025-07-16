fn uu_fmt::parasplit::Line::get_noformatline(a1: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    if *(a1 as &i64) != 0x8000000000000000 {
        panic!("Found FormatLine when expecting NoFormatLine");
    }
    v1 = *((a1 + 32) as &i8);
    return struct26 {
        field_0: *((a1 + 8) as &i128)
        field_16: *((a1 + 24) as &i64)
        field_24: v1 as u8
    };
}
