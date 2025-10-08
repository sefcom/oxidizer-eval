fn uu_expr::syntax_tree::AstNode::evaluated(a1: &struct40) -> : struct36 {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0x68]
    let v1: iNone;  // [bp-0x58]
    let v2: u8;  // [bp-0x40]
    let v3: iNone;  // [bp-0x38]
    let v4: i8;  // [bp-0x28]
    let v6: u32;  // eax

    v6 = uu_expr::syntax_tree::get_next_id();
    uu_expr::syntax_tree::AstNode::eval(&v2, a1);
    v0 = v3;
    v1 = *(&v4 as &i128);
    if *(&v2 as &i32) != 1 {
        return struct40 {
            field_0: v0
            field_16: v1
            field_32: v6
        };
    }
    return struct40 {
        field_0: 9223372036854775813
        field_8: v0
        field_24: v1
    };
}
