fn just::attribute::Attribute::new(a0: i64, a1: void*, a2: i64) -> int {
    let v0: struct80;  // [bp-0x178]
    let v1: u128;  // [bp-0x177]
    let v2: u128;  // [bp-0x167]
    let v3: u128;  // [bp-0x157]
    let v4: u64;  // [bp-0x138]
    let v5: u8;  // [bp-0x130]
    let v6: struct24;  // [bp-0x100]
    let v8: &mut [u8];  // rdi
    let v9: u32;  // rdx

    v8 = just::token::Token::lexeme(a1);
    <just::attribute::AttributeDiscriminant as core::str::traits::FromStr>::from_str(v8, v9);
    if <just::attribute::AttributeDiscriminant as core::str::traits::FromStr>::from_str(v8, v9) == 20 {
        v6 = struct24 {
            field_0: 9223372036854775872
            field_8: just::token::Token::lexeme(a1)
            field_16: v9
        };
        v0 = just::token::Token::error(a1, &v6);
        return struct96 {
            field_0: v0.field_0 as i8
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_49: <UNKNOWN>
            field_64: v5
            field_72: <UNKNOWN>
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    goto ((&g_46a348.field_0)[<just::attribute::AttributeDiscriminant as core::str::traits::FromStr>::from_str(v8, v9) & 4294967295] + &g_46a348.field_0) as i64;
}
