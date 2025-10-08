fn ruff_python_formatter::statement::suite::stub_file_empty_lines(a0: i64, a1: u32, a2: void*, a3: void*, a4: u64, a5: u64, a6: i384, a7: i256) -> long long {
    let v0: u32;  // [bp-0x6c]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: struct16;  // rax
    let v5: u8;  // bl
    let v6: struct21;  // rax
    let v7: struct12;  // rax
    let v8: &u64;  // rdx
    let v9: struct16;  // al
    let v10: struct12;  // rsi

    v0 = a1;
    v4 = *((a7 + 48) as &i64)(a6) as i64;
    v3 = *(v4 as &i64);
    v2 = *((v4 + 8) as &i64);
    v5 = 1;
    if !a4 && !a5 {
        v5 = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(a2, a3, a6, a7) ^ 1;
    }
    v6 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a2) as u64;
    v7 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a3) as u64;
    v9 = ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file(v6, v8, v7, v8, *((a7 + 48) as &i64)(a6) as i64);
    if v0 as i8 != 2 && v5 {
        <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(a2);
    }
    *((a7 + 24) as &i64)(a6, v10);
    return struct4 {
        field_0: 4
    };
}
