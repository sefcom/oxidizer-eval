fn uu_fmt::parasplit::Line::get_noformatline(a0: i64, a1: i64) -> long long {
    let v1: u64;  // rax

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        panic!("Found FormatLine when expecting NoFormatLine");
    }
    v1 = *((a1 + 32) as &i8);
    return struct32 {
        field_0: *((a1 + 8) as &i128)
        field_16: *((a1 + 24) as &i64)
        field_24: v1 as u8
    };
}
