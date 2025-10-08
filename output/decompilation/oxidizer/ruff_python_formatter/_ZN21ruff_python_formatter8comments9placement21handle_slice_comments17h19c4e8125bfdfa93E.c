fn ruff_python_formatter::comments::placement::handle_slice_comments(a0: i64, a1: i64, a2: i64, a3: u64, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: struct12;  // [bp-0x84]
    let v1: struct41;  // [bp-0x78]
    let v2: u32;  // ebp
    let v3: u8;  // r13b
    let v4: u64;  // rax
    let v5: struct21;  // r14
    let v6: core::fmt::Arguments;  // edx
    let v7: u64;  // rcx
    let v8: u64;  // rax
    let v9: i64;  // r12
    let v10: u64;  // rdi
    let v11: u32;  // eax

    v2 = *((a1 + 64) as &i32);
    v1 = ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(v2, a5, a6, a3, a4);
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v1);
    v3 = *((a1 + 72) as &i8);
    if &v0 as u8 == "Z" || (v0.field_8 as i8 ^ 9) || *((a1 + 72) as &i8) {
        v6 = *((a1 + 68) as &i32);
        v8 = ruff_python_formatter::expression::expr_slice::assign_comment_in_slice(v2, a5, a6, a2);
        if !v8 {
            v9 = a2 + 8;
            v10 = *(v9 as &i64);
            if *(v9 as &i64) {
                goto LABEL_702daf;
            }
        } else if v8 == 1 {
            v9 = a2 + 16;
            v10 = *(v9 as &i64);
            if *(v9 as &i64) {
                goto LABEL_702daf;
            }
        } else {
            v9 = a2 + 24;
            v10 = *(v9 as &i64);
            if *(v9 as &i64) {
LABEL_702daf:
                v11 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v10);
                v4 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(v9 as &i64));
            }
        }
    }
    return struct40 {
        field_0: v7
        field_8: v4
        field_16: v5
        field_24: v2
        field_28: v6
        field_32: 0
        field_33: v3
    };
}
