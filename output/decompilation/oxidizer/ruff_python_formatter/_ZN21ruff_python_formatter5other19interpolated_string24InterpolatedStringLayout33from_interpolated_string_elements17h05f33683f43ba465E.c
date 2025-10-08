fn ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(a0: i128, a1: i64, a2: i64, a3: i64) -> u8 {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 80 + a0
    };
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, a2, a3), 0x1);
}
