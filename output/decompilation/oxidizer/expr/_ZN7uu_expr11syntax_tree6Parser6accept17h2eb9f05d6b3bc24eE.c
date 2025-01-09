fn uu_expr::syntax_tree::Parser::accept(a0: &struct8, a1: u32) -> u64 {
    let v1: u64;  // r15
    let v2: u64;  // rbx
    let v3: u32;  // ebx
    let v4: &u32;  // rcx
    let v5: u64;  // rax

    v1 = a0->field_10;
    v3 = v2 & -0x100 | 3;
    if v1 >= a0->field_8 {
        return v3;
    }
    v4 = a0->field_0;
    v5 = uu_expr::syntax_tree::Parser::parse_op::{{closure}}(a1, *(&v4[4 * v1] as &i64), *(&v4[2 + 4 * v1] as &i64));
    if v5 != 3 {
        a0->field_10 = v1 + 1;
        v3 = v5;
        return v3;
    }
    return v3;
}
