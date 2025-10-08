fn ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x28]
    let v1: u64;  // [bp-0x18]
    let v2: struct32;  // [bp-0x10]
    let v3: struct16;  // [bp-0x8]
    let v5: struct16;  // r15
    let v6: struct32;  // r14
    let v7: u64;  // rbx
    let v8: u64;  // rdx
    let v9: struct12;  // rax

    if a1 != 1 {
        return 0;
    } else if *(a0 as &i64) == 9223372036854775827 {
        v3 = v5;
        v2 = v6;
        v1 = v7;
        if *(*((a0 + 8) as &i64) as &i32) != 24 {
            return 0;
        }
        v0 = struct16 {
            field_0: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a0) as u64
            field_8: v8
        };
        ruff_python_formatter::comments::map::MultiMap<K,V>::leading(a2 + 16, &v0);
        if !v8 {
            v9 = ruff_python_formatter::comments::Comments::has_trailing_own_line(a2, a0);
            return v9 & -0x100 | v9 as u8 ^ 1;
        }
        return 0;
    } else {
        return 0;
    }
}
