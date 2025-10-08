fn ruff_python_formatter::expression::has_own_parentheses(a0: i64, a1: i64) -> u64 {
    let v1: u64;  // rax
    let v2: struct24;  // rax
    let v3: u64;  // rdx

    v2 = v1 & -0x100 | 2;
    match (*(a0 as &i32)) {
        6 | 7 | 29 => {
LABEL_7104ad:
            if !*((a0 + 24) as &i64) {
                goto LABEL_7104d8;
            } else {
                goto LABEL_7104e8;
            }
        }
        8 | 9 | 10 | 26 => {
LABEL_7104e8:
            return v2 & -0x100 | 1;
        }
        11 => {
            return (v1 & -0x100 | 2) & -0x100 | 2 - *((a0 + 52) as &i8);
        }
        16 => {
            v2 = *((a0 + 24) as &i64) + *((a0 + 40) as &i64);
            if !*((a0 + 24) as &i64) + *((a0 + 40) as &i64) {
                goto LABEL_7104d8;
            } else {
                goto LABEL_7104e8;
            }
        }
        30 => {
            if !*((a0 + 44) as &i8) {
                goto LABEL_7104c3;
            } else {
                goto LABEL_7104ad;
            }
        }
        _ => {
LABEL_7104c3:
            return v1 & -0x100 | 2;
        }
    }
LABEL_7104d8:
    v2 = ruff_python_formatter::comments::Comments::dangling(a1, <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a0), v3);
    if !v3 {
        return 0;
    }
}
