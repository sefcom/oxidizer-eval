fn just::alias::Alias<just::namepath::Namepath>::resolve(a0: i64, a1: i64, a2: u64) -> int {
    let v0: u64;  // [bp-0x30]
    let v2: void*;  // rax
    let v3: u32;  // rdx
    let v4: u128;  // xmm1
    let v5: iNone;  // xmm2
    let v6: iNone;  // xmm3

    v0 = a2;
    v2 = just::token::Token::lexeme(just::namepath::Namepath::last(*((a1 + 8) as &i64), *((a1 + 16) as &i64)));
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, just::token::Token::lexeme(a2 + 160), v3) {
        core::panicking::panic("assertion failed: self.target.last().lexeme() == target.name()"); /* do not return */
    }
    v4 = *((a1 + 40) as &i128);
    v5 = *((a1 + 56) as &i128);
    v6 = *((a1 + 72) as &i128);
    return struct104 {
        field_0: *((a1 + 96) as &i128)
        field_16: *((a1 + 112) as &i64)
        field_24: a2
        field_32: *((a1 + 24) as &i128)
        field_48: v4
        field_64: v5
        field_80: v6
        field_96: *((a1 + 88) as &i64)
    };
}
