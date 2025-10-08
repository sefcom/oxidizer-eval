fn just::analyzer::Analyzer::resolve_alias(a1: i64, a2: i64, a3: i64) -> : struct104 {
    let a0: u64;  // rdi
    let v0: struct80;  // [bp-0xd8]
    let v1: u128;  // [bp-0xc8]
    let v2: u128;  // [bp-0xb8]
    let v3: u128;  // [bp-0xa8]
    let v4: u128;  // [bp-0x98]
    let v5: struct24;  // [bp-0x88]
    let v6: u64;  // [bp-0x70]
    let v7: u64;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v10: &mut [u8];  // rax
    let v11: u64;  // r15
    let v12: u64;  // rdx

    v10 = just::analyzer::Analyzer::resolve_recipe(*((a3 + 8) as &i64), *((a3 + 16) as &i64), a1, a2);
    if !v10 {
        v11 = a3 + 24;
        v7 = just::token::Token::lexeme(v11);
        v8 = v12;
        v6 = *((a3 + 16) as &i64);
        v5 = struct24 {
            field_0: 9223372036854775871
            field_8: *(a3 as &i128)
            field_16: <UNKNOWN>
        };
        v0 = just::token::Token::error(v11, &v5);
        return struct88 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: v4
            padding_80: <UNKNOWN>
            field_96: <UNKNOWN>
        };
    }
    just::alias::Alias<just::namepath::Namepath>::resolve(a0, a3, v10);
    return;
}
