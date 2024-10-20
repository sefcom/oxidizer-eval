fn uu_expr::syntax_tree::AstNode::eval::{{closure}}(a0: &struct_0) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // r14
    let v4: u64;  // rax

    v0 = v2;
    v3 = a0->field_18;
    if !v3 {
        return v3;
    }
    if v3 == 1 {
        return 1;
    }
    v4 = a0->field_10;
    if v4 {
        v3 = (v4 == 1 ? 1 : 0);
        return v3;
    }
}
