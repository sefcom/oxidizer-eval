fn ruff_python_formatter::expression::CallChainLayout::apply_in_node(a0: i384, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v2: struct16;  // rax
    let v3: i64;  // r15
    let v4: struct104;  // rax
    let v5: struct16;  // ecx
    let v6: u64;  // rdi
    let v7: void*;  // rax
    let v8: i64;  // rax
    let v9: struct12;  // rax

    v0 = v2;
    if a0 as u8 {
        return a0 & 4294967295;
    }
    v3 = *((a3 + 48) as &i64);
    v4 = v3(a2) as i64;
    v5 = *((v4 + 32) as &i8);
    if v5 != 3 {
        a0 = v6 & -0x100 | 2;
        if v5 != 2 {
            return a0 & 4294967295;
        } else if !*((v4 + 36) as &i32) {
            return a0 & 4294967295;
        }
    }
    v7 = <T as core::convert::Into<U>>::into(a1);
    v8 = v3(a2) as i64;
    v9 = v3(a2) as i64;
    return ruff_python_formatter::expression::CallChainLayout::from_expression(16, v7, *((*((*((v8 + 16) as &i64) + 96) as &i64) + 8) as &i64), *((*((*((v8 + 16) as &i64) + 96) as &i64) + 16) as &i64), *(v9 as &i64), *((v9 + 8) as &i64));
}
