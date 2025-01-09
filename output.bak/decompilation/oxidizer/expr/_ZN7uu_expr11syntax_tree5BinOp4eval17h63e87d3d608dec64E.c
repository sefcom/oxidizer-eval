fn uu_expr::syntax_tree::BinOp::eval(a0: &struct40, a1: u32, a2: u32, a3: u64, a4: u64) -> u64 {
    if a1 {
        if a1 == 1 {
            goto LABEL_0x52ec30;
        }
        return uu_expr::syntax_tree::StringOp::eval(a0, a2, a3, a4);
    }
    return uu_expr::syntax_tree::RelationOp::eval(a0, a2, a3, a4);
}
