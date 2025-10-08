fn ruff_python_formatter::comments::placement::handle_lambda_comment(a0: i64, a1: i64, a2: i64, a3: u64, a4: u64) -> long long {
    let v0: u8;  // [bp-0x60]
    let v2: i64;  // r15
    let v3: struct80;  // ebp
    let v4: core::result::Result<usize, std::io::error::Error>;  // rax
    let v5: i32;  // ecx
    let v6: struct16;  // rdi

    v2 = *((a2 + 16) as &i64);
    v3 = *((a1 + 64) as &i32);
    if v2 {
        if v3 < *((v2 + 72) as &i32) {
            return struct40 {
                field_0: 96
                field_8: *(a1 as &i128)
                field_24: v3
                field_28: *((a1 + 68) as &i32)
                field_32: 0
                field_33: *((a1 + 72) as &i8)
            };
        }
        if *((v2 + 76) as &i32) < v3 {
            <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(a2 as &i64));
            if v3 < v4 as u32 {
                if *((v2 + 76) as &i32) > v3 {
                    core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                }
LABEL_703ec0:
                ruff_python_trivia::tokenizer::SimpleTokenizer::new(v6, a3, a4, v5, v3);
                <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32, 0x1);
                if !v4 as u8 {
                    return struct40 {
                        field_0: 96
                        field_8: *(a1 as &i128)
                        field_24: v3
                        field_28: *((a1 + 68) as &i32)
                        field_32: 0
                        field_33: *((a1 + 72) as &i8)
                    };
                }
            }
        }
    } else {
        <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(a2 as &i64));
        if v3 < v4 as u32 {
            if *((a2 + 8) as &i32) > v3 {
                core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
            }
            goto LABEL_703ec0;
        }
    }
    return struct80 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i128)
        field_32: *((a1 + 32) as &i128)
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i128)
    };
}
