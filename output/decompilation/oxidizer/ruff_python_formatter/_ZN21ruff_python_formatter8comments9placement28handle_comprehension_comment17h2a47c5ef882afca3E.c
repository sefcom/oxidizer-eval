fn ruff_python_formatter::comments::placement::handle_comprehension_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u64) -> long long {
    let v0: u8;  // [bp-0x69]
    let v1: u32;  // [bp-0x68]
    let v2: u32;  // [bp-0x64]
    let v3: struct12;  // [bp-0x48], Other Possible Types: u96
    let v4: struct12;  // [bp-0x3c]
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v10: u64;  // r15
    let v11: u32;  // eax
    let v12: u32;  // edx
    let v13: u64;  // rbp
    let v17: struct16;  // r13
    let v18: u32;  // r15d
    let v19: u32;  // eax
    let v22: u8;  // al
    let v25: u64;  // r13
    let v26: u32;  // r15d
    let v27: u32;  // eax

    v1 = a1[64] as i32;
    v7 = a2 + 24;
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v7);
    if a1[68] as i32 >= v8 {
        v0 = a1[72] as i8;
        <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v7);
        v10 = a2 + 104;
        v11 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v10);
        if v12 > v11 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v4 = ruff_python_trivia::tokenizer::find_only_token_in_range(v12, v11, 71, a3, a4);
        if v1 < v4.field_0 {
            if v0 {
                return struct40 {
                    field_0: 96
                    field_8: 77
                    field_16: a2
                    field_24: v1
                    field_28: v2
                    field_32: 0x100
                };
            }
        } else {
            if v1 < <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v10) {
                if !v0 {
                    *((a0 + 8) as &i64) = 77;
                    *((a0 + 16) as &struct_0 *) = a2;
                    *((a0 + 24) as &u32) = v1;
                    *((a0 + 28) as &u32) = v8;
                }
            } else {
                <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v10);
                if v8 {
                    if v0 {
                        loop {
                            v17 -= 80;
                            v18 = v12;
                            v19 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v13);
                            if v18 > v19 {
                                core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                            }
                            ruff_python_trivia::tokenizer::find_only_token_in_range(v18, v19, 69, a3, a4);
                            if v18 < v1 && v1 < v3 {
                                break;
                            }
                            <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v13);
                            if v17 == 80 {
                                return struct80 {
                                    field_0: *(a1 as &i128)
                                    field_16: a1[16] as i128
                                    field_32: a1[32] as i128
                                    field_48: a1[48] as i128
                                    field_64: a1[64] as i128
                                };
                            }
                        }
                    } else {
                        loop {
                            v25 -= 80;
                            v26 = v12;
                            v27 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v13);
                            if v26 > v27 {
                                core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                            }
                            v3 = ruff_python_trivia::tokenizer::find_only_token_in_range(v26, v27, 69, a3, a4);
                            if v3.field_0 < v1 && v1 < <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v13) {
                                break;
                            }
                            <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v13);
                            if v25 == 80 {
                                return struct80 {
                                    field_0: *(a1 as &i128)
                                    field_16: a1[16] as i128
                                    field_32: a1[32] as i128
                                    field_48: a1[48] as i128
                                    field_64: a1[64] as i128
                                };
                            }
                        }
                    }
                    return struct40 {
                        field_0: 96
                        field_8: 77
                        field_16: a2
                        field_24: v1
                        field_28: v2
                        field_32: 0
                        field_33: v22
                    };
                }
            }
        }
    } else if !a1[72] as i8 {
        return struct40 {
            field_0: 96
            field_8: 77
            field_16: a2
            field_24: v1
            field_28: a1[68] as i32
            field_32: 0
        };
    }
    return struct80 {
        field_0: *(a1 as &i128)
        field_16: a1[16] as i128
        field_32: a1[32] as i128
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
