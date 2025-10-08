fn ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(a0: i64, a1: void*, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: void*;  // [bp-0x98]
    let v1: struct80;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: struct21;  // [bp-0x60]
    let v6: struct80;  // rax
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v10: u32;  // ebp
    let v11: struct12;  // rax
    let v12: u128;  // xmm0
    let v13: iNone;  // xmm1
    let v14: iNone;  // xmm2
    let v15: u128;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2

    if !a1[72] as i8 {
        v6 = a1[16] as i64;
        if v6 != 94 {
            v6 = ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::{{closure}}(v6, a1[24] as i64);
            if v6 != 4 {
                v1 = v6;
                ruff_python_ast::expression::StringLike::parts(&v3, &v1);
                v7 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v3) as u64;
                v8 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v3) as u64;
                if (v8 == 4 | v7 == 4) != 1 {
                    if *((v9 + (2 <= v8) * 8 + 20) as &i32) > *((v2 + (2 <= v7) * 8 + 16) as &i32) {
                        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                    } else if <str as ruff_source_file::line_ranges::LineRanges>::contains_line_break(a4, a5, *((v9 + (2 <= v8) * 8 + 20) as &i32), *((v2 + (2 <= v7) * 8 + 16) as &i32)) && ruff_python_formatter::expression::parentheses::is_expression_parenthesized((&g_488bc0.field_0)[v1], v9, a2, a3, a4, a5) {
                        v10 = a1[64] as i32;
                        if *((v2 + (2 <= v7) * 8 + 20) as &i32) > v10 {
                            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                        }
                        v4 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a4, a5, *((v2 + (2 <= v7) * 8 + 20) as &i32), v10);
                        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v4) as i32, 0x1) {
                            v11 = a1[68] as i32;
                            *(&v0[8] as &u64) = (&g_488e60.field_0)[v7];
                            *(&v0[16] as &u64) = v2;
                            *(&v0[24] as &u32) = v10;
                            *(&v0[28] as &u32) = v11 as u32;
                            *(&v0[32] as &i16) = 0;
                            *(v0 as &i64) = 95;
                            return v11;
                        }
                    }
                }
                *(&v0[64] as &i128) = a1[64] as i128;
                v12 = *(a1 as &i128);
                v13 = a1[16] as i128;
                v14 = a1[32] as i128;
                *(&v0[48] as &i128) = a1[48] as i128;
                v0[32] = v14;
                v0[16] = v13;
                *(v0 as &u128) = v12;
                return a1;
            }
        }
    }
    *((a0 + 64) as &i128) = a1[64] as i128;
    v15 = *(a1 as &i128);
    v16 = a1[16] as i128;
    v17 = a1[32] as i128;
    *((a0 + 48) as &i128) = a1[48] as i128;
    *((a0 + 32) as void*) = v17;
    *((a0 + 16) as void*) = v16;
    *(a0 as &u128) = v15;
    return v6;
}
