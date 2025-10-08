fn uu_expr::syntax_tree::BinOp::eval(a0: u64, a1: u8, a2: u8, a3: u64, a4: u64) -> long long {
    let v1: u64;  // rsi
    let v2: u64;  // rdx
    let v3: u64;  // rcx

    if !a1 {
        return uu_expr::syntax_tree::RelationOp::eval(a0, a2, a3, a4);
    }
    v1 = a2;
    v2 = a3;
    v3 = a4;
    if a1 != 1 {
        return uu_expr::syntax_tree::StringOp::eval(a0, v1, a3, a4) as u64;
    }
    return uu_expr::syntax_tree::NumericOp::eval(a0, v1, a3, a4);
}
