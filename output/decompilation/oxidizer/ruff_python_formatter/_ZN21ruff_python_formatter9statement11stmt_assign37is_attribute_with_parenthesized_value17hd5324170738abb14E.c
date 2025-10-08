fn ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(a0: i64, a1: i64) -> u64 {
    let v1: struct21;  // rbx
    let v2: u32;  // eax
    let v3: u64;  // rbp

    v1 = a0;
    v2 = *(a0 as &i32);
    v3 = vvar_35{reg 56} & -0x100 | 1;
    if *(a0 as &i32) == 25 {
        while (ruff_python_formatter::expression::has_parentheses(*((v1 + 48) as &i64), a1) == 2) {
            v1 = *((v1 + 48) as &i64);
            v2 = *(v1 as &i32);
            v3 = v3 & -0x100 | 1;
            if *(v1 as &i32) != 25 {
                break;
            }
        }
    }
    return v3 & 4294967295;
}
