fn uu_join::Line::new(a1: i64, a2: i64, a3: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x28]
    let v2: u64;  // rax

    v0 = <uu_join::OneByteSep as uu_join::Separator>::field_ranges(a2, *((a1 + 8) as &i64), *((a1 + 16) as &i64), a3);
    v2 = v0.field_16;
    return struct48 {
        field_0: v0.field_0
        field_16: v2
        field_24: *(a1 as &i128)
        field_40: *((a1 + 16) as &i64)
    };
}
