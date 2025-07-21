fn uu_fmt::parasplit::Line::get_noformatline(a1: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x40]
    let v2: u64;  // rax

    if *(a1 as &i64) != 0x8000000000000000 {
        v0 = struct40 {
            field_0: "Found FormatLine when expecting NoFormatLine"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("Found FormatLine when expecting NoFormatLine");
    }
    v2 = *((a1 + 32) as &i8);
    return struct32 {
        field_0: *((a1 + 8) as &i128)
        field_16: *((a1 + 24) as &i64)
        field_24: v2 as u8
    };
}
