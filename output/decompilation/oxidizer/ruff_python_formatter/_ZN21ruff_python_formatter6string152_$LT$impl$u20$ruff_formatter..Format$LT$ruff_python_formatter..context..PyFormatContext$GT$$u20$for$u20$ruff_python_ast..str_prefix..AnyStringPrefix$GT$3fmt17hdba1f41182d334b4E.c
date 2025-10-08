fn ruff_python_formatter::string::<impl ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext> for ruff_python_ast::str_prefix::AnyStringPrefix>::fmt(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x28]
    let v2: u64;  // rdx

    if (*((a1 + 1) as &i8) < 2 | *(a1 as &i8) != 3) == 1 {
        v0 = struct24 {
            field_0: 4
            padding_1: <UNKNOWN>
            field_8: ruff_python_ast::str_prefix::AnyStringPrefix::as_str(*(a1 as &i8)) as u64
            field_16: v2
        };
        *((*((a2 + 8) as &i64) + 24) as &i64)(*(a2 as &i64), &v0);
    }
    return struct4 {
        field_0: 4
    };
}
