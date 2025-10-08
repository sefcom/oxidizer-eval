fn ruff_python_formatter::comments::placement::handle_attribute_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u64) -> long long {
    let v0: struct12;  // [bp-0x80]
    let v1: u8;  // [bp-0x74]
    let v2: u8;  // [bp-0x6c]
    let v3: struct12;  // [bp-0x68], Other Possible Types: struct21
    let v4: u8;  // [bp-0x38]
    let v6: u8;  // bpl
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: u32;  // edx
    let v10: u32;  // ebp
    let v11: u8;  // r15b
    let v12: struct16;  // r14d
    let v14: u64;  // rdx
    let v15: u8;  // bpl
    let v16: struct16;  // r12d
    let v17: u32;  // ebp
    let v19: u64;  // rdx
    let v20: u64;  // rax

    if a1[16] as i32 == 94 {
        v6 = a1[72] as i8;
        v7 = a1[64] as i64;
        return struct40 {
            field_0: 94
            field_8: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a2 + 40) as &i64))
            field_16: v8
            field_24: v7
            field_32: 0
            field_33: v6
        };
    }
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*((a2 + 40) as &i64));
    v3 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v9, a3, a4);
    v4 = 0;
    v2 = 90;
    v0 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v3, &v1);
    if &v0 as u8 != "Z" {
        v10 = a1[64] as i32;
        if v10 < v0.field_0 {
            v11 = a1[72] as i8;
            v12 = a1[68] as i32;
            return struct40 {
                field_0: 95
                field_8: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a2 + 40) as &i64))
                field_16: v14
                field_24: v10
                field_28: v12
                field_32: 0
                field_33: v11
            };
        }
    }
    v15 = a1[72] as i8;
    if !v15 {
        <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*((a2 + 40) as &i64));
        if v9 > *(a2 as &i32) {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v3 = ruff_python_trivia::tokenizer::find_only_token_in_range(v9, *(a2 as &i32), 16, a3, a4);
        v16 = a1[68] as i32;
        if v16 < v3.field_0 as i32 {
            v17 = a1[64] as i32;
            return struct40 {
                field_0: 95
                field_8: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((a2 + 40) as &i64))
                field_16: v19
                field_24: v17
                field_28: v16
                field_32: 0
            };
        }
    }
    v20 = a1[64] as i32;
    return struct40 {
        field_0: 96
        field_8: *(a1 as &i128)
        field_24: v20 as u32
        field_28: v16
        field_32: 0
        field_33: v15
    };
}
