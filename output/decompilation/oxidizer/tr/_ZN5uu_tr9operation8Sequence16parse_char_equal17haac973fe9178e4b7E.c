fn uu_tr::operation::Sequence::parse_char_equal(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct17;  // [bp-0x80]
    let v1: &str;  // [bp-0x68]
    let v2: &str;  // [bp-0x58]
    let v3: &str;  // [bp-0x48]
    let v4: struct40;  // [bp-0x38]
    let v5: u128;  // [bp-0x30]
    let v7: u64;  // rdi
    let v8: u8;  // cl

    v3 = "[=";
    v0 = struct17 {
        field_0: "=]"
        field_16: 1
    };
    v1 = "=]";
    v2 = "=]";
    v4 = <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v0, a1, a2);
    v7 = a0 + 8;
    if v4.field_0 as i32 != 1 {
        uu_tr::operation::Sequence::parse_char_equal::{{closure}}(v7, &v4 as u8, a2, v8);
        return struct8 {
            field_0: 0
        };
    }
    *((v7 + 16) as &i128) = *(&v4.field_24 as &i128);
    *(v7 as &u128) = v5;
    return struct8 {
        field_0: 1
    };
}
