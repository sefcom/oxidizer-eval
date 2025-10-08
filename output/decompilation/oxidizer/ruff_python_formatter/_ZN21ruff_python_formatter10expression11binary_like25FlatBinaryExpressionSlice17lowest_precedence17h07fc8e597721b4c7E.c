fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::lowest_precedence(a0: u64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0x18]
    let v2: u8;  // al

    v0 = struct24 {
        field_0: a0
        field_8: a1 * 32 + a0
        field_16: 0
    };
    v2 = core::iter::traits::iterator::Iterator::reduce(&v0);
    return (v2 == 13 ? 0 : v2);
}
