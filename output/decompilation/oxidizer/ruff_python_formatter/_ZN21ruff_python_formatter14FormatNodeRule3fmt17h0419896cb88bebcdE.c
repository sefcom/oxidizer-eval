fn ruff_python_formatter::FormatNodeRule::fmt(a0: i64, a1: i64, a2: i64, a3: void*) -> int {
    let v0: struct16;  // [bp-0xb8], Other Possible Types: struct24, struct32
    let v1: struct24;  // [bp-0xb8], Other Possible Types: struct4
    let v2: struct21;  // [bp-0xa8]
    let v3: u32;  // [bp-0x98]
    let v4: u32;  // [bp-0x98]
    let v5: u32;  // [bp-0x94]
    let v6: i64;  // [bp-0x88]
    let v7: Option<struct32>;  // [bp-0x80]
    let v8: struct12;  // [bp-0x78]
    let v9: core::option::Option<&str>;  // [bp-0x74]
    let v10: u64;  // [bp-0x70]
    let v11: struct80;  // [bp-0x68]
    let v12: struct48;  // [bp-0x60]
    let v13: u64;  // [bp-0x40]
    let v15: struct8;  // rax
    let v16: u64;  // rdx
    let v18: i64;  // rax
    let v19: struct16;  // rsi
    let v20: struct12;  // eax
    let v23: u128;  // xmm0

    v15 = *((a3[8] as i64 + 48) as &i64)(*(a3 as &i64)) as i64;
    alloc::rc::RcInnerPtr::inc_strong(*((v15 + 16) as &i64));
    v7 = *((v15 + 16) as &i64);
    <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::StmtImportFrom>>::from(a2);
    v12 = ruff_python_formatter::comments::Comments::leading_dangling_trailing(*((v15 + 16) as &i64), 19, v16);
    if <ruff_python_formatter::statement::stmt_type_alias::FormatStmtTypeAlias as ruff_python_formatter::FormatNodeRule<ruff_python_ast::generated::StmtTypeAlias>>::is_suppressed(a0, v13, v12.field_40, *((a3[8] as i64 + 48) as &i64)(*(a3 as &i64)) as i64) {
        v0 = struct16 {
            field_0: ruff_python_formatter::verbatim::suppressed_node(19, v16)
            field_8: v16
        };
        <ruff_python_formatter::verbatim::FormatSuppressedNode as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(a0, &v0, a3);
    }
    v1 = struct24 {
        field_0: 1
        field_8: v12.field_0
        field_16: v12.field_8
    };
    <ruff_python_formatter::comments::format::FormatLeadingComments as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(&v3, &v1, a3);
    if v3 != 4 {
        return struct24 {
            field_0: v23
            field_16: v6
        };
    }
    v18 = ruff_formatter::formatter::Formatter<Context>::options(*(a3 as &i64), a3[8] as i64);
    if *((v18 + 12) as &i8) == 1 {
        v5 = ruff_text_size::traits::Ranged::start(*((a2 + 64) as &i32), *((a2 + 68) as &i32));
        v4 = 1;
        v1 = <ruff_formatter::builders::SourcePosition as ruff_formatter::Format<Context>>::fmt(&v5, a3);
        if v1.field_0 != 4 {
            *((a0 + 16) as &struct21) = v2;
        }
    }
    <ruff_python_formatter::statement::stmt_import_from::FormatStmtImportFrom as ruff_python_formatter::FormatNodeRule<ruff_python_ast::generated::StmtImportFrom>>::fmt_fields(&v0, v19, a2, a3);
    if v0.field_0 as i32 != 4 {
        *((a0 + 16) as &struct21) = v2;
    }
    if *((v18 + 12) as &i8) {
        v9 = ruff_text_size::traits::Ranged::end(*((a2 + 64) as &i32), *((a2 + 68) as &i32));
    }
    v8 = v20;
    v10 = v13;
    v11 = v12.field_40;
    v0 = struct32 {
        field_0: &v8
        field_8: &g_97e810
        field_16: &v10
        field_24: &g_97d5a8
    };
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v3, a3, &v0, 2);
    return struct24 {
        field_0: v23
        field_16: v6
    };
}
