fn ruff_python_formatter::statement::stmt_with::WithItemsLayout::from_statement(a0: i64, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: Result<struct16, struct1>;  // [bp-0x58], Other Possible Types: u64
    let v1: core::fmt::Arguments;  // [bp-0x54]
    let v2: struct16;  // [bp-0x50]
    let v3: u32;  // [bp-0x44]
    let v4: struct16;  // [bp-0x40]
    let v7: struct24;  // rsi
    let v8: i64;  // rsi
    let v9: struct16;  // r15
    let v10: i64;  // rbp
    let v11: struct32;  // r12
    let v12: core::option::Option<&str>;  // rax
    let v13: u64;  // rdx
    let v14: u64;  // rax
    let v15: struct16;  // rax
    let v16: i64;  // rsi
    let v17: u32;  // ecx
    let v18: u64;  // rax
    let v19: i64;  // r15
    let v20: struct16;  // rax
    let v21: u64;  // r15

    if !a3 {
        if ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(a1, a2) {
            *((a0 + 8) as &i64) = 4;
        }
        v7 = a1;
        v8 = v7;
        if *((a1 + 16) as &i64) == 1 {
            v9 = *((v7 + 8) as &i64);
            v10 = *((a2 + 16) as &i64);
            v11 = v10 + 16;
            v4 = struct16 {
                field_0: 84
                field_8: v9
            };
            v12 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v11, &v4);
            if !v13 {
                v0 = 84;
                v2 = v9;
                v12 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v11, &v0);
                if !v13 {
                    v14 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v9);
                    v15 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v14, v13, *((*((v10 + 96) as &i64) + 8) as &i64), *((*((v10 + 96) as &i64) + 16) as &i64), *(a2 as &i64), *((a2 + 8) as &i64));
                    v8 = a1;
                    if v15 as u8 {
                        *((a0 + 8) as &i64) = 0;
                    }
                    goto LABEL_72088e;
                }
            }
        } else {
LABEL_72088e:
            v16 = v8;
            if !(*((a2 + 44) as &i8) == 3 ? 9 <= *((a2 + 45) as &i8) : 3 <= *((a2 + 44) as &i8)) {
                v0 = ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(v16, *(a2 as &i64), *((a2 + 8) as &i64));
                v17 = v0 as i32;
                v18 = v1 as u64;
                if v17 != 4 {
                    return struct32 {
                        field_0: v17
                        field_4: v18 as u8
                        field_5: <UNKNOWN>
                        field_20: <UNKNOWN>
                    };
                }
                v16 = a1;
                if !(v18 & 1) {
                    *((a0 + 8) as &i64) = 3;
                }
            }
            v19 = *((v16 + 8) as &i64);
            v20 = 4;
            if *((v16 + 16) as &i64) != 1 {
                return struct24 {
                    field_0: 4
                    padding_4: <UNKNOWN>
                    field_8: v20
                    field_16: v21
                };
            }
            v20 = (!*((v19 + 88) as &i64) ? 1 : (ruff_python_formatter::expression::can_omit_optional_parentheses(v19, a2) ^ 1) * 2 + 2);
            return struct24 {
                field_0: 4
                padding_4: <UNKNOWN>
                field_8: v20
                field_16: v21
            };
        }
    }
    *((a0 + 8) as &i64) = 5;
}
