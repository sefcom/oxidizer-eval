fn uu_tr::operation::Sequence::parse_backslash(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct33;  // [bp-0x28]
    let v1: struct32;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v4: u8;  // dl
    let v5: iNone;  // xmm0

    v0 = <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process("\\", a1, a2);
    if v0.field_0 as i32 == 3 {
        return struct32 {
            field_0: 3
            field_8: v1
            field_16: v2
            field_24: v4
        };
    }
    v5 = *(&v0.field_0 as &i128);
    return struct32 {
        field_0: v5
        field_16: *(&v0.field_16 as &i128)
    };
}
