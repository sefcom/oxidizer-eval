fn uu_test::parser::Parser::expr(a0: &Option<struct32>, a1: u32) -> u64 {
    let v2: Option<struct32>;  // rax

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        v2 = uu_test::parser::Parser::term(a1);
        return Some(struct32 {
            field_0: v3
            field_16: v0
        });
    }
    v2 = uu_test::parser::Parser::maybe_boolop(a1);
    return Some(struct32 {
        field_0: v3
        field_16: v0
    });
}
