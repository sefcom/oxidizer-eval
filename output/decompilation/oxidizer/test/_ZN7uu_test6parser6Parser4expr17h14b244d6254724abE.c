fn uu_test::parser::Parser::expr(a0: &Option<struct32>, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v3: struct8;  // rax

    if uu_test::parser::Parser::peek_is_boolop(a1) as i8 || (v3 = uu_test::parser::Parser::term(a1), v0 == 7) {
        v3 = uu_test::parser::Parser::maybe_boolop(a1);
        if v0 == 7 {
            return struct8 {
                field_0: 7
            };
        }
    }
    return Some(struct32 {
        field_0: v4
        field_16: v1
    });
}
