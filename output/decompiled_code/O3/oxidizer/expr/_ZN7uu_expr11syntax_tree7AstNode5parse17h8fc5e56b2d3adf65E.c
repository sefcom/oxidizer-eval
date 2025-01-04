fn uu_expr::syntax_tree::AstNode::parse(a0: &Result<struct32, struct32>, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [bp-0x20]

    v0 = struct32 {
        field_0: a1
        field_8: a2
        field_16: 0
        field_24: <UNKNOWN>
    };
    uu_expr::syntax_tree::Parser::parse(a0, &v0);
    return a0;
}
