fn just::analyzer::Analyzer::analyze_set(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x88]
    let v2: u64;  // rdx
    let v3: u64;  // rax

    v3 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(a1, a2, just::token::Token::lexeme(a3 + 80), v2);
    if !v3 {
        *((a0 + 72) as &i8) = 37;
        return v3;
    }
    v0 = struct24 {
        field_0: 9223372036854775837
        field_8: just::token::Token::lexeme(v3 + 80)
        field_16: v2
    };
    return just::token::Token::error(a0, a3 + 80, &v0);
}
