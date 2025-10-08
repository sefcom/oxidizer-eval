fn ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(a0: i64, a1: i64) -> u8 {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 16) as &i64) * 80 + *((a0 + 8) as &i64)
    };
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, a1, a0), 0x1);
}
