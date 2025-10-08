fn ruff_python_formatter::comments::placement::handle_end_of_line_comment_around_body(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x80]
    let v1: struct12;  // [bp-0x6c]
    let v2: struct16;  // [bp-0x60], Other Possible Types: struct21
    let v4: void*;  // r12
    let v5: u32;  // ebp
    let v6: u32;  // eax
    let v7: u64;  // rax
    let v8: struct32;  // rax
    let v9: u64;  // rdx
    let v10: struct32;  // rax
    let v11: struct32;  // rax, Other Possible Types: u64
    let v12: core::option::Option<&str>;  // rdx
    let v14: u128;  // xmm0
    let v15: iNone;  // xmm1
    let v16: iNone;  // xmm2

    if a1[72] as i8 != 1 {
        if a1[32] as i64 != 94 {
            v0 = struct16 {
                field_0: a1[32] as i64
                field_8: a1[40] as i64
            };
            v4 = a1[8] as i64;
            if ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::is_first_statement_in_body(&v0, *(a1 as &i64), v4) {
                v5 = a1[68] as i32;
                v6 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0) as u32;
                if v5 > v6 {
                    core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                }
                v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, v5, v6);
                v1 = core::iter::traits::iterator::Iterator::try_fold(&v2);
                if &v1 as u8 == "Z" {
                    v7 = a1[64] as i32;
                    return struct40 {
                        field_0: 96
                        field_8: *(a1 as &i64)
                        field_16: v4
                        field_24: v7 as u32
                        field_28: v5
                        field_32: 0
                    };
                }
            }
        }
        v8 = a1[16] as i64;
        if v8 != 94 {
            v2 = struct16 {
                field_0: v8
                field_8: a1[24] as i64
            };
            v8 = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(&v2);
            if v8 != 94 {
                v10 = core::iter::traits::iterator::Iterator::fold(v8, v9);
                if v10 == 94 {
                    v11 = v8;
                } else {
                    v11 = v10;
                }
                return struct40 {
                    field_0: 95
                    field_8: v11
                    field_16: v12
                    field_24: a1[64] as i64
                    field_32: 0
                };
            }
        }
    }
    v14 = *(a1 as &i128);
    v15 = a1[16] as i128;
    v16 = a1[32] as i128;
    return struct80 {
        field_0: v14
        field_16: v15
        field_32: v16
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
