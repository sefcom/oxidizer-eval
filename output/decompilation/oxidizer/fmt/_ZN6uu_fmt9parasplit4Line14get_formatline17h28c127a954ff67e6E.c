fn uu_fmt::parasplit::Line::get_formatline(a0: i64, a1: void*) -> long long {
    let v1: u64;  // rax
    let v2: u128;  // xmm0
    let v3: iNone;  // xmm1

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        panic!("Found NoFormatLine when expecting FormatLine");
    }
    v1 = a1[48] as i64;
    v2 = *(a1 as &i128);
    v3 = a1[16] as i128;
    return struct56 {
        field_0: v2
        field_16: v3
        field_32: a1[32] as i128
        field_48: v1
    };
}
