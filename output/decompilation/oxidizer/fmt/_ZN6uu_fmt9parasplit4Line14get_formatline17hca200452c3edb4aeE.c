fn uu_fmt::parasplit::Line::get_formatline(a1: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x40]
    let v2: u64;  // rax
    let v3: u128;  // xmm0
    let v4: u128;  // xmm1

    if *(a1 as &i64) == 0x8000000000000000 {
        v0 = struct40 {
            field_0: "Found NoFormatLine when expecting FormatLine"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("Found NoFormatLine when expecting FormatLine");
    }
    v2 = *((a1 + 48) as &i64);
    v3 = *(a1 as &i128);
    v4 = *((a1 + 16) as &i128);
    return struct56 {
        field_0: v3
        field_16: v4
        field_32: *((a1 + 32) as &i128)
        field_48: v2
    };
}
