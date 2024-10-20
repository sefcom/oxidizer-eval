fn uu_expr::syntax_tree::Parser::next(a0: &u64, a1: &struct_0) -> u64 {
    let v1: u64;  // rax
    let v2: &u64;  // rdi
    let v3: &u64;  // rax
    let v4: &u64;  // rdi
    let v5: &u64;  // rax
    let v6: &u64;  // rdi
    let v8: u64;  // r14
    let v10: u64;  // r12

    v1 = a1->field_8;
    v2 = a1->field_10;
    if v2 < v1 {
        v3 = a1->field_0;
        a1->field_10 = v2 as &char + 1;
        *(&a0[1] as &i128) = *((v3 + 0x10 * v2 as u64) as &i128);
        *(a0) = 7;
        return v3;
    }
    v4 = v2 as &char + 1;
    if v4 < v1 {
        v5 = a1->field_0;
        v6 = v4 * 16;
        v8 = *((v5 + v6 + 8) as &i64);
        v3 = memcpy(v10, *((v5 + v6) as &i64), v8);
        *(a0) = 1;
        a0[1] = v8;
        a0[2] = v10;
        a0[3] = v8;
        return v3;
    }
    core::panicking::panic_bounds_check(); /* do not return */
}
