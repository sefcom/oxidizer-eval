fn uu_test::parser::Parser::expr(a0: &struct_0, a1: u64, a2: i64) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v3: u64;  // rdx
    let v4: Option<struct32>;  // rax
    let v5: u128;  // xmm0

    if uu_test::parser::Parser::peek_is_boolop(a1) as i8 || (v4 = uu_test::parser::Parser::term(a1, v3), v0 == 7) {
        v4 = uu_test::parser::Parser::maybe_boolop(a1);
        if v0 == 7 {
            return struct8 {
                field_0: 7
            };
        }
    }
    v5 = v0;
    return struct32 {
        field_0: v5
        field_16: v1
    };
}
