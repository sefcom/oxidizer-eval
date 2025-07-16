fn uu_join::Line::new(a1: i64, a2: i64, a3: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x28]
    let v1: i8;  // [bp-0x18]
    let v3: u64;  // rax

    <uu_join::WhitespaceSep as uu_join::Separator>::field_ranges(&v0, a2, *((a1 + 8) as &i64), *((a1 + 16) as &i64), a3);
    v3 = *(&v1 as &i64);
    return struct56 {
        field_0: v0
        field_16: v3
        field_24: <UNKNOWN>
        field_40: <UNKNOWN>
    };
}
