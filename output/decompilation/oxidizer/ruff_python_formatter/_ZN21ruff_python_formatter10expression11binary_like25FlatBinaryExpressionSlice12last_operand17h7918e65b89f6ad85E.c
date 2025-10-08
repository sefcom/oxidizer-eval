fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::last_operand(a0: u64, a1: u64) -> long long {
    if a1 && *((a0 + a1 * 32 - 32) as &i32) != 3 {
        return a0 + a1 * 32 - 32;
    }
    panic!("internal error: entered unreachable code: Expected an operand");
}
