fn ruff_python_formatter::expression::expr_bin_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBinOp>::needs_parentheses(a0: i64, a1: u64, a2: i64, a3: i64) -> long long {
    let v0: void*;  // [bp-0x38], Other Possible Types: u64
    let v1: struct16;  // [bp-0x38]
    let v2: i64;  // [bp-0x30]
    let v3: u64;  // [bp-0x30]
    let v4: struct16;  // [bp-0x28]
    let v5: core::option::Option<&str>;  // [bp-0x18]
    let v6: u64;  // [bp-0x10]
    let v7: struct16;  // [bp-0x8]
    let v9: struct16;  // r15
    let v10: u64;  // r14
    let v11: i64;  // rbx
    let v12: i64;  // rdx
    let v13: u64;  // r15
    let v14: struct9;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // r14
    let v17: u64;  // rax

    if a1 == 39 {
        return v17 & -0x100 | 1;
    }
    v7 = v9;
    v6 = v10;
    v5 = v11;
    v12 = *(a0 as &i64);
    match (*(v12 as &i32)) {
        17 => {
            v0 = 2;
            v2 = v12 + 8;
            v13 = 2;
            if *((v12 + 8) as &i64) != 9223372036854775809 {
                goto LABEL_70943b;
            }
            break;
        }
        18 => {
            v0 = 3;
            v2 = v12 + 8;
            v13 = 3;
            v14 = 0;
            if !((((0 ^ *((v12 + 8) as &i64)) & (0 ^ -(*((v12 + 8) as &i64)))) >> 63) as char) {
LABEL_70943b:
                vvar_222{stack -56} = struct16 OrderedDict([(0, 𝜙@64b [((7377913, None), vvar_203{stack -56}), ((7377948, None), vvar_205{stack -56}), ((7377877, None), vvar_200{stack -56}), ((7377830, None), vvar_198{stack -56})]), (8, 𝜙@64b [((7377913, None), vvar_204{stack -48}), ((7377948, None), vvar_206{stack -48}), ((7377877, None), vvar_201{stack -48}), ((7377830, None), vvar_199{stack -48})])])
                if <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(&v1, a3) && ruff_python_formatter::expression::has_parentheses(*((a0 + 8) as &i64), a3) != 2 {
                    ruff_python_formatter::comments::Comments::dangling(*((a3 + 16) as &i64), a0);
                    if !v15 {
                        v4 = struct16 {
                            field_0: (&g_489060.field_0)[v13]
                            field_8: v3
                        };
                        v16 = *((a3 + 16) as &i64) + 64;
                        if !hashbrown::map::HashMap<K,V,S,A>::get_inner(v16, &v4) {
                            v4 = struct16 {
                                field_0: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a0 + 8) as &i64))
                                field_8: v15
                            };
                            v14 = (!hashbrown::map::HashMap<K,V,S,A>::get_inner(v16, &v4)) * 3;
                            break;
                        }
                    }
                }
            }
            break;
        }
        19 => {
            v0 = 0;
            v2 = v12 + 8;
            v14 = 0;
            v13 = 0;
            if (((0 ^ *((v12 + 8) as &i64)) & (0 ^ -(*((v12 + 8) as &i64)))) >> 63) as char {
                goto LABEL_70943b;
            }
            break;
        }
        20 => {
            v0 = 1;
            v2 = v12 + 8;
            v13 = 1;
            if *((v12 + 8) as &i64) {
                goto LABEL_70943b;
            }
            break;
        }
    }
    return v14;
}
