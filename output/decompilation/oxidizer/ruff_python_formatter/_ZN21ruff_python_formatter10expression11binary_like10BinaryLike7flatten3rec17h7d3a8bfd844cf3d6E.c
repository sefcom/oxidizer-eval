fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(a0: &struct16, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: struct16;  // [bp-0x50], Other Possible Types: u64
    let v1: void*;  // [bp-0x48], Other Possible Types: &u64
    let v3: u64;  // rbx
    let v4: &u32;  // r13
    let v6: u64;  // rax
    let v7: i64;  // r15
    let v8: u64;  // rdx
    let v9: struct24;  // rax
    let v10: struct24;  // rcx
    let v11: struct48;  // r8
    let v12: struct48;  // rbp
    let v13: core::option::Option<&str>;  // rax
    let v14: i64;  // r15
    let v15: u64;  // rdx
    let v16: core::fmt::Arguments;  // rax
    let v17: struct24;  // rcx
    let v18: struct48;  // r8
    let v19: struct48;  // rbp
    let v20: u64;  // rax
    let v21: i64;  // r15
    let v22: u64;  // rdx
    let v24: struct104;  // rax
    let v25: struct24;  // rcx
    let v26: struct48;  // r8
    let v27: struct48;  // rbp

    v3 = *(a0 as &i64);
    v4 = *((a0 + 8) as &i64);
    match (*(v4)) {
        0 => {
            v20 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v4);
            v21 = *(a1 as &i64);
            if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v20, v22, *((*((v21 + 96) as &i64) + 8) as &i64), *((*((v21 + 96) as &i64) + 16) as &i64), a2, a3) {
                if v3 {
                    v0 = struct16 {
                        field_0: 27
                        field_8: v4 + 8
                    };
                    v24 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v21 + 16, &v0);
                    if v3 != 1 {
                        break;
                    }
                }
                v0 = 27;
                v25 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v21 + 16, &v0);
                return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(v1, v24, v27, v25, v26, a1, a2, a3, a4);
            }
            break;
        }
        2 => {
            v13 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v4);
            v14 = *(a1 as &i64);
            if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v13, v15, *((*((v14 + 96) as &i64) + 8) as &i64), *((*((v14 + 96) as &i64) + 16) as &i64), a2, a3) {
                if v3 {
                    v0 = struct16 {
                        field_0: 29
                        field_8: v4 + 8
                    };
                    v16 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v14 + 16, &v0);
                    if v3 != 1 {
                        break;
                    }
                }
                v0 = 29;
                v17 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v14 + 16, &v0);
                return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(v1, v16, v19, v17, v18, a1, a2, a3, a4);
            }
            break;
        }
        15 => {
            v6 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v4);
            v7 = *(a1 as &i64);
            if !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v6, v8, *((*((v7 + 96) as &i64) + 8) as &i64), *((*((v7 + 96) as &i64) + 16) as &i64), a2, a3) {
                if v3 {
                    v0 = struct16 {
                        field_0: 42
                        field_8: v4 + 8
                    };
                    v9 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v7 + 16, &v0);
                    if v3 != 1 {
                        break;
                    }
                }
                v0 = 42;
                v10 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v7 + 16, &v0);
                return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(v1, v9, v12, v10, v11, a1, a2, a3, a4);
            }
            break;
        }
        _ => {
            return smallvec::SmallVec<A>::push(a4, a0);
        }
    }
}
