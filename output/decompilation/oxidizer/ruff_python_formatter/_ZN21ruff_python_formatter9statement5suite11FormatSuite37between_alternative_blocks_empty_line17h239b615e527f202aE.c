fn ruff_python_formatter::statement::suite::FormatSuite::between_alternative_blocks_empty_line(a0: i64, a1: u8, a2: u32, a3: u64, a4: i64, a5: u64, a6: i64) -> long long {
    let v0: u16;  // [bp-0x50]
    let v1: struct16;  // [bp-0x50]
    let v2: struct16;  // [bp-0x38]
    let v11: struct32;  // r14
    let v12: struct16;  // rax
    let v13: u64;  // rdx
    let v15: u64;  // rax
    let v16: struct16;  // rax
    let v17: struct21;  // ebp
    let v18: struct16;  // rax

    if a1 > 1 || (a1 & 1) {
        return struct4 {
            field_0: 4
        };
    }
    v12 = ruff_python_formatter::statement::suite::trailing_function_or_class_def(v11, a4, a2);
    if v12 == 94 {
        return struct4 {
            field_0: 4
        };
    }
    v2 = struct16 {
        field_0: v12
        field_8: v13
    };
    v1 = struct16 {
        field_0: (!v11 ? 94 : <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v11) as u64)
        field_8: v13
    };
    v15 = core::iter::traits::iterator::Iterator::try_fold(&v1, a4);
    if v15 != 94 {
        v1 = struct16 {
            field_0: v15
            field_8: v13
        };
        v16 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(*(a4 as &i64) + 16, &v1);
        if !v13 {
            goto LABEL_721865;
        }
        v17 = *((v16 + v13 * 12 - 8) as &i32);
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2);
    } else {
LABEL_721865:
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2);
    }
    v18 = *((a6 + 48) as &i64)(a5) as i64;
    v12 = ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia(v17 as u64, *(v18 as &i64), *((v18 + 8) as &i64));
    if v12 as u32 < 2 {
        v12 = *((a6 + 48) as &i64)(a5) as i64;
        if *((v12 + 58) as &i8) == 1 {
LABEL_72189c:
            v0 = 769;
            v12 = *((a6 + 24) as &i64)(a5, &v0) as u64;
        } else if v2.field_0 as i32 == 3 {
            v12 = ruff_formatter::formatter::Formatter<Context>::options(a5, a6);
            if *((v12 + 7) as &i8) == 1 {
                goto LABEL_72189c;
            }
        }
    }
    return struct4 {
        field_0: 4
    };
    return struct4 {
        field_0: 4
    };
}
