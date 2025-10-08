fn starship::formatter::parser::parse_textgroup(a1: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: <anon>;  // [bp-0xe8]
    let v1: u320;  // [bp-0xe8]
    let v2: Option<struct40>;  // [bp-0xe8]
    let v3: <anon>;  // [bp-0xe8]
    let v4: u128;  // [bp-0xd8]
    let v5: u64;  // [bp-0xc8]
    let v6: u8;  // [bp-0xc0]
    let v7: i64;  // [bp-0xb0]
    let v8: u128;  // [bp-0xa8]
    let v9: iNone;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: struct40;  // [bp-0x78]
    let v12: struct56;  // [bp-0x48]

    v12 = pest::iterators::pair::Pair<R>::into_inner(a1);
    v2 = <pest::iterators::pairs::Pairs<R> as core::iter::traits::iterator::Iterator>::next(&v12);
    v3 = core::option::unwrap(v2);
    v10 = v5;
    v9 = v4;
    v8 = v3.field_0.field_0;
    v2 = <pest::iterators::pairs::Pairs<R> as core::iter::traits::iterator::Iterator>::next(&v12);
    v0 = core::option::unwrap(v2);
    v11 = v1;
    starship::formatter::parser::parse_format(&v6, &v8);
    starship::formatter::parser::parse_style(&v2, &v11);
    return struct48 {
        field_0: v6
        field_16: v7
        field_24: v0.field_0.field_0
        field_40: v0.field_0.field_16 as i64
    };
}
