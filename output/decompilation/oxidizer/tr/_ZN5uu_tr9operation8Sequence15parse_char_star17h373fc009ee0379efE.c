fn uu_tr::operation::Sequence::parse_char_star(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct33;  // [bp-0x48]
    let v1: struct32;  // [bp-0x28]
    let v3: iNone;  // xmm0
    let v5: iNone;  // xmm0

    v1 = struct32 {
        field_0: "["
        field_16: "*]"
    };
    v0 = <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v1, a1, a2);
    if v0.field_0 as i32 != 3 {
        v5 = *(&v0.field_0 as &i128);
        return struct40 {
            field_0: 1
            field_8: v5
            field_24: *(&v0.field_16 as &i128)
        };
    }
    v3 = *(&v0.field_8 as &i128);
    return struct32 {
        field_0: 0
        field_8: v3
        field_24: 12
        field_32: <UNKNOWN>
        field_33: <UNKNOWN>
    };
}
