fn ruff_python_formatter::comments::placement::handle_unary_op_comment(a0: i64, a1: i64, a2: i64, a3: u64, a4: u32) -> long long {
    let v0: struct12;  // [bp-0x7c]
    let v1: struct12;  // [bp-0x7c]
    let v4: struct16;  // [bp-0x70]
    let v6: struct21;  // [bp-0x60]
    let v8: u32;  // eax
    let v9: u64;  // rax
    let v10: u32;  // ecx
    let v11: struct24;  // rax
    let v13: u128;  // xmm0
    let v14: iNone;  // xmm1
    let v15: iNone;  // xmm2

    v8 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(a2 as &i64));
    if *((a2 + 8) as &i32) > v8 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v6 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a3, a4, *((a2 + 8) as &i32), v8);
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v6);
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v6);
    v9 = core::option::Option<T>::map_or(&v4, <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(a2 as &i64)));
    v10 = *((a1 + 68) as &i32);
    if v10 >= v9 {
        v13 = *(a1 as &i128);
        v14 = *((a1 + 16) as &i128);
        v15 = *((a1 + 32) as &i128);
        return struct80 {
            field_0: v13
            field_16: v14
            field_32: v15
            field_48: *((a1 + 48) as &i128)
            field_64: *((a1 + 64) as &i128)
        };
    }
    v11 = *((a1 + 72) as &i8);
    return struct40 {
        field_0: 94
        field_8: 30
        field_16: a2
        field_24: *((a1 + 64) as &i32)
        field_28: v10
        field_32: 0
        field_33: v11 as u8
    };
}
