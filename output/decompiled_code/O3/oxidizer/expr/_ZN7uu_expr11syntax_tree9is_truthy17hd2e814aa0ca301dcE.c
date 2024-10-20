fn uu_expr::syntax_tree::is_truthy(a0: &struct_0) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rcx
    let v3: &u64;  // rdx
    let v4: u64;  // rsi
    let v6: u64;  // rsi
    let v7: u64;  // rax

    v1 = 0x8000000000000000;
    if a0->field_0 != 0x8000000000000000 {
        return -0x100 | a0->field_18 != 1;
    }
    v2 = *(&a0->field_18 as &i64);
    if !v2 {
        return 0;
    }
    v3 = a0->field_10;
    if v2 != 1 {
        v4 = *(v3 as &i8);
    } else {
        v4 = *(v3 as &i8);
        v1 = -255;
        if v4 == 45 {
            return -255;
        }
    }
    if v4 != 48 {
        v1 = v1 | -0x100 | 1;
        if v4 != 45 {
            return v1;
        }
    }
    do {
        v6 = 1;
        v1 = v7 | -0x100 | v2 != v6;
    } while (v2 != v6 && *((v3 + v6) as &i8) == 48);
    return v1;
}
