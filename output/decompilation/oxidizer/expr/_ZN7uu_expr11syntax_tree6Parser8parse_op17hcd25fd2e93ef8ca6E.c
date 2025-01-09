fn uu_expr::syntax_tree::Parser::parse_op(a0: &struct8, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    v0 = a1;
    return uu_expr::syntax_tree::Parser::accept(a0, &v0);
}
