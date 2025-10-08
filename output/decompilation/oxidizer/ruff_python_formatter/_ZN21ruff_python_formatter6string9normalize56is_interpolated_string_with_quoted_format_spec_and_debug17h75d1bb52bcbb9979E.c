fn ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(a0: i128, a1: i64, a2: i8, a3: i64) -> u8 {
    let v0: struct16;  // [bp-0x11]
    let v1: struct16;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]

    v0 = a2;
    v1 = a0;
    v2 = a1 * 80 + a0;
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v1, &v0, a3), 0x1);
}
