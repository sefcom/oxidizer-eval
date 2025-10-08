fn uu_join::Line::new(a0: i64, a1: i64, a2: u32, a3: u64) -> long long {
    let v0: u8;  // [bp-0x30]
    let v1: i8;  // [bp-0x20]
    let v3: u64;  // rax

    <uu_join::WhitespaceSep as uu_join::Separator>::field_ranges(&v0, a2, *((a1 + 8) as &i64), *((a1 + 16) as &i64), a3);
    v3 = *((a1 + 16) as &i64);
    return struct48 {
        field_0: v0
        field_16: *(&v1 as &i64)
        field_24: *(a1 as &i128)
        field_40: v3
    };
}
