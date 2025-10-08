fn ruff_python_formatter::expression::binary_like::Operand::has_unparenthesized_leading_comments(a0: i64, a1: i64, a2: u64, a3: u64) -> char {
    let v0: struct16;  // [bp-0x60], Other Possible Types: struct24
    let v1: u64;  // [bp-0x48]
    let v2: struct16;  // [bp-0x40]
    let v4: u64;  // rdx
    let v5: struct16;  // rax
    let v6: u8;  // al

    if !*(a0 as &i64) {
        return *((a0 + 24) as &i64);
    }
    v0 = struct16 {
        field_0: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a0 + 8) as &i64))
        field_8: v4
    };
    v1 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(a1 + 16, &v0);
    v5 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a0 + 8) as &i64));
    if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v5, v4, *((*((a1 + 96) as &i64) + 8) as &i64), *((*((a1 + 96) as &i64) + 16) as &i64), a2, a3) {
        return v4;
    }
    v2 = struct16 {
        field_0: v1
        field_8: v1 + v4 * 12
    };
    v0 = struct24 {
        field_0: a2
        field_8: a3
        field_16: a0 + 8
    };
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v0);
    return v6;
}
