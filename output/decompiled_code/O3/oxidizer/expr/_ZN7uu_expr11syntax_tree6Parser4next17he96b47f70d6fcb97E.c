fn uu_expr::syntax_tree::Parser::next(a0: &struct_2, a1: &struct_0) -> u64 {
    let v1: u64;  // rdi
    let v2: &u64;  // rax
    let v3: u64;  // rax
    let v4: void*;  // rax

    v1 = a1->field_10;
    if v1 < a1->field_8 {
        v2 = a1->field_0;
        a1->field_10 = v1 + 1;
        *(&(&a0->field_0)[1] as &i128) = *(&v2[2 * v1] as &i128);
        v3 = 7;
    } else {
        v4 = a1->field_0;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&(&a0->field_0)[1], *((-16 + v4 as &u8 + 16 * v1) as &i64), *((-8 + v4 as &u8 + 16 * v1) as &i64));
        v3 = 1;
    }
    return struct8 {
        field_0: v3
    };
}
