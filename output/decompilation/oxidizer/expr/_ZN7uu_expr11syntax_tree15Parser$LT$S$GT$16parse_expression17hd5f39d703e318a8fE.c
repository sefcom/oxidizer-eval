fn uu_expr::syntax_tree::Parser<S>::parse_expression() -> void {
    let v1: u64;  // rdi
    let v2: u64;  // rsi

    uu_expr::syntax_tree::Parser<S>::parse_precedence(v1, v2, 0);
    return;
}
