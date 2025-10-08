fn ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses(a0: i128, a1: u64, a2: i64, a3: i384) -> long long {
    let v0: void*;  // [bp-0x30], Other Possible Types: struct16, u64
    let v1: u64;  // [bp-0x28]
    let v2: struct16;  // [bp-0x20]
    let v3: u64;  // [bp-0x10]
    let v4: u64;  // [bp-0x8]
    let v6: u64;  // r14
    let v7: u64;  // rbx
    let v8: u64;  // rdx
    let v9: core::fmt::Arguments;  // rdi
    let v10: struct12;  // rax
    let v11: struct16;  // rax
    let v12: u64;  // rax

    if a1 == 39 {
        return v12 & -0x100 | 1;
    }
    v4 = v6;
    v3 = v7;
    v8 = *(a0 as &i64);
    match (*(v8 as &i32)) {
        17 => {
            v0 = 2;
            v1 = v8 + 8;
            if *((v8 + 8) as &i64) != 9223372036854775809 && <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3) {
                goto LABEL_709c07;
            }
            break;
        }
        18 => {
            v0 = 3;
            v1 = v8 + 8;
            v11 = 0;
            if !((((0 ^ *((v8 + 8) as &i64)) & (0 ^ -(*((v8 + 8) as &i64)))) >> 63) as char) && <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3) {
LABEL_709c07:
                v2 = struct16 {
                    field_0: v10
                    field_8: v1
                };
                if !hashbrown::map::HashMap<K,V,S,A>::get_inner(v9 + 64, &v2) && *((a0 + 32) as &i64) {
                    v11 = (ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses::{{closure}}(a3, *((a0 + 24) as &i64))) * 3;
                    break;
                }
            }
            break;
        }
        19 => {
            v0 = 0;
            v1 = v8 + 8;
            v11 = 0;
            if (((0 ^ *((v8 + 8) as &i64)) & (0 ^ -(*((v8 + 8) as &i64)))) >> 63) as char && <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3) {
                goto LABEL_709c07;
            }
            break;
        }
        20 => {
            v0 = 1;
            v1 = v8 + 8;
            if *((v8 + 8) as &i64) && <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v0, a3) {
                goto LABEL_709c07;
            }
            break;
        }
    }
    return v11;
}
