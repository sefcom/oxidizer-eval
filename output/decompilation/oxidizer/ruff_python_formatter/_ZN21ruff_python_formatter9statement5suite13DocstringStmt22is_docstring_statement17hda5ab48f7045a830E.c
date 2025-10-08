fn ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x18]
    let v4: u64;  // rdx
    let v5: u64;  // rax
    let v6: u64;  // rax

    if *(a0 as &i32) != 19 {
        return 0;
    } else if !((((0 ^ *((a0 + 8) as &i64)) & (0 ^ -(*((a0 + 8) as &i64)))) >> 63) as char) {
        v0 = struct16 {
            field_0: ruff_python_ast::nodes::StringLiteralValue::iter(a0 + 8)
            field_8: v4
        };
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, a1);
        return v5 & -0x100 | v5 ^ 1;
    } else {
        return v6 & -0x100 | 1;
    }
}
